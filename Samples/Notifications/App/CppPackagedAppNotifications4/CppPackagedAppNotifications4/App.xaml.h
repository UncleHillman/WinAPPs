﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once
#include "App.xaml.g.h"
#include "pch.h"

namespace winrt::CppPackagedAppNotifications4::implementation
{
    struct App : AppT<App>
    {
        App();

        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);
        
    private:
        Microsoft::UI::Xaml::Window window{ nullptr };
    };
}

void OutputMessage(const WCHAR* message);
void OutputFormattedMessage(const WCHAR* fmt, ...);
std::vector<std::wstring> split_strings(winrt::hstring argString);
void GetActivationInfo();

extern winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::IInspectable> messages;

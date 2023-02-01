/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/windows/WinHttpConnectionPoolMgr.h>

#include <aws/core/utils/StringUtils.h>

#include <Windows.h>
#include <winhttp.h>

using namespace Aws::Http;
using namespace Aws::Utils;

WinHttpConnectionPoolMgr::WinHttpConnectionPoolMgr(void* iOpenHandle, unsigned maxConnectionsPerHost, long requestTimeout, long connectTimeout) :
WinConnectionPoolMgr(iOpenHandle, maxConnectionsPerHost, requestTimeout, connectTimeout)
{

}

WinHttpConnectionPoolMgr::WinHttpConnectionPoolMgr(void* iOpenHandle, unsigned maxConnectionsPerHost, long requestTimeout, long connectTimeout,
                                                   bool enableTcpKeepAlive, unsigned long tcpKeepAliveIntervalMs) :
WinConnectionPoolMgr(iOpenHandle, maxConnectionsPerHost, requestTimeout, connectTimeout, enableTcpKeepAlive, tcpKeepAliveIntervalMs)
{

}

WinHttpConnectionPoolMgr::~WinHttpConnectionPoolMgr()
{
    DoCleanup();
}

void WinHttpConnectionPoolMgr::DoCloseHandle(void* handle) const
{
    WinHttpCloseHandle(handle);
}

void* WinHttpConnectionPoolMgr::CreateNewConnection(const Aws::String& host, HostConnectionContainer& connectionContainer) const
{
    // WinHttpConnect uses a session handle (here we name it as open handle) to create a connection handle
    HINTERNET newConnection = WinHttpConnect(GetOpenHandle(), StringUtils::ToWString(host.c_str()).c_str(), connectionContainer.port, 0);

    DWORD timeoutMs = GetConnectTimeout();
    DWORD requestMs = GetRequestTimeout();

    // timeout options are inheritable from connection handle to request handle
    // https://docs.microsoft.com/en-us/windows/win32/winhttp/hinternet-handles-in-winhttp
    WinHttpSetOption(newConnection, WINHTTP_OPTION_CONNECT_TIMEOUT, &timeoutMs, sizeof(timeoutMs));
    WinHttpSetOption(newConnection, WINHTTP_OPTION_RECEIVE_TIMEOUT, &requestMs, sizeof(requestMs));

    return newConnection;
}


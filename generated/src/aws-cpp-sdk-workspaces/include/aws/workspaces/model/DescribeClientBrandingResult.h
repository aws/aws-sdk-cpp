/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DefaultClientBrandingAttributes.h>
#include <aws/workspaces/model/IosClientBrandingAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class DescribeClientBrandingResult
  {
  public:
    AWS_WORKSPACES_API DescribeClientBrandingResult();
    AWS_WORKSPACES_API DescribeClientBrandingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeClientBrandingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The branding information for Windows devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeWindows() const{ return m_deviceTypeWindows; }
    inline void SetDeviceTypeWindows(const DefaultClientBrandingAttributes& value) { m_deviceTypeWindows = value; }
    inline void SetDeviceTypeWindows(DefaultClientBrandingAttributes&& value) { m_deviceTypeWindows = std::move(value); }
    inline DescribeClientBrandingResult& WithDeviceTypeWindows(const DefaultClientBrandingAttributes& value) { SetDeviceTypeWindows(value); return *this;}
    inline DescribeClientBrandingResult& WithDeviceTypeWindows(DefaultClientBrandingAttributes&& value) { SetDeviceTypeWindows(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information for macOS devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeOsx() const{ return m_deviceTypeOsx; }
    inline void SetDeviceTypeOsx(const DefaultClientBrandingAttributes& value) { m_deviceTypeOsx = value; }
    inline void SetDeviceTypeOsx(DefaultClientBrandingAttributes&& value) { m_deviceTypeOsx = std::move(value); }
    inline DescribeClientBrandingResult& WithDeviceTypeOsx(const DefaultClientBrandingAttributes& value) { SetDeviceTypeOsx(value); return *this;}
    inline DescribeClientBrandingResult& WithDeviceTypeOsx(DefaultClientBrandingAttributes&& value) { SetDeviceTypeOsx(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information for Android devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeAndroid() const{ return m_deviceTypeAndroid; }
    inline void SetDeviceTypeAndroid(const DefaultClientBrandingAttributes& value) { m_deviceTypeAndroid = value; }
    inline void SetDeviceTypeAndroid(DefaultClientBrandingAttributes&& value) { m_deviceTypeAndroid = std::move(value); }
    inline DescribeClientBrandingResult& WithDeviceTypeAndroid(const DefaultClientBrandingAttributes& value) { SetDeviceTypeAndroid(value); return *this;}
    inline DescribeClientBrandingResult& WithDeviceTypeAndroid(DefaultClientBrandingAttributes&& value) { SetDeviceTypeAndroid(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information for iOS devices.</p>
     */
    inline const IosClientBrandingAttributes& GetDeviceTypeIos() const{ return m_deviceTypeIos; }
    inline void SetDeviceTypeIos(const IosClientBrandingAttributes& value) { m_deviceTypeIos = value; }
    inline void SetDeviceTypeIos(IosClientBrandingAttributes&& value) { m_deviceTypeIos = std::move(value); }
    inline DescribeClientBrandingResult& WithDeviceTypeIos(const IosClientBrandingAttributes& value) { SetDeviceTypeIos(value); return *this;}
    inline DescribeClientBrandingResult& WithDeviceTypeIos(IosClientBrandingAttributes&& value) { SetDeviceTypeIos(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information for Linux devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeLinux() const{ return m_deviceTypeLinux; }
    inline void SetDeviceTypeLinux(const DefaultClientBrandingAttributes& value) { m_deviceTypeLinux = value; }
    inline void SetDeviceTypeLinux(DefaultClientBrandingAttributes&& value) { m_deviceTypeLinux = std::move(value); }
    inline DescribeClientBrandingResult& WithDeviceTypeLinux(const DefaultClientBrandingAttributes& value) { SetDeviceTypeLinux(value); return *this;}
    inline DescribeClientBrandingResult& WithDeviceTypeLinux(DefaultClientBrandingAttributes&& value) { SetDeviceTypeLinux(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branding information for Web access.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeWeb() const{ return m_deviceTypeWeb; }
    inline void SetDeviceTypeWeb(const DefaultClientBrandingAttributes& value) { m_deviceTypeWeb = value; }
    inline void SetDeviceTypeWeb(DefaultClientBrandingAttributes&& value) { m_deviceTypeWeb = std::move(value); }
    inline DescribeClientBrandingResult& WithDeviceTypeWeb(const DefaultClientBrandingAttributes& value) { SetDeviceTypeWeb(value); return *this;}
    inline DescribeClientBrandingResult& WithDeviceTypeWeb(DefaultClientBrandingAttributes&& value) { SetDeviceTypeWeb(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeClientBrandingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeClientBrandingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeClientBrandingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DefaultClientBrandingAttributes m_deviceTypeWindows;

    DefaultClientBrandingAttributes m_deviceTypeOsx;

    DefaultClientBrandingAttributes m_deviceTypeAndroid;

    IosClientBrandingAttributes m_deviceTypeIos;

    DefaultClientBrandingAttributes m_deviceTypeLinux;

    DefaultClientBrandingAttributes m_deviceTypeWeb;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws

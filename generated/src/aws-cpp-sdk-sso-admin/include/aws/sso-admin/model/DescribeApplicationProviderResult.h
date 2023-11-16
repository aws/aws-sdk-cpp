/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/DisplayData.h>
#include <aws/sso-admin/model/FederationProtocol.h>
#include <aws/sso-admin/model/ResourceServerConfig.h>
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
namespace SSOAdmin
{
namespace Model
{
  class DescribeApplicationProviderResult
  {
  public:
    AWS_SSOADMIN_API DescribeApplicationProviderResult();
    AWS_SSOADMIN_API DescribeApplicationProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeApplicationProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the application provider.</p>
     */
    inline const Aws::String& GetApplicationProviderArn() const{ return m_applicationProviderArn; }

    /**
     * <p>The ARN of the application provider.</p>
     */
    inline void SetApplicationProviderArn(const Aws::String& value) { m_applicationProviderArn = value; }

    /**
     * <p>The ARN of the application provider.</p>
     */
    inline void SetApplicationProviderArn(Aws::String&& value) { m_applicationProviderArn = std::move(value); }

    /**
     * <p>The ARN of the application provider.</p>
     */
    inline void SetApplicationProviderArn(const char* value) { m_applicationProviderArn.assign(value); }

    /**
     * <p>The ARN of the application provider.</p>
     */
    inline DescribeApplicationProviderResult& WithApplicationProviderArn(const Aws::String& value) { SetApplicationProviderArn(value); return *this;}

    /**
     * <p>The ARN of the application provider.</p>
     */
    inline DescribeApplicationProviderResult& WithApplicationProviderArn(Aws::String&& value) { SetApplicationProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application provider.</p>
     */
    inline DescribeApplicationProviderResult& WithApplicationProviderArn(const char* value) { SetApplicationProviderArn(value); return *this;}


    /**
     * <p>A structure with details about the display data for the application
     * provider.</p>
     */
    inline const DisplayData& GetDisplayData() const{ return m_displayData; }

    /**
     * <p>A structure with details about the display data for the application
     * provider.</p>
     */
    inline void SetDisplayData(const DisplayData& value) { m_displayData = value; }

    /**
     * <p>A structure with details about the display data for the application
     * provider.</p>
     */
    inline void SetDisplayData(DisplayData&& value) { m_displayData = std::move(value); }

    /**
     * <p>A structure with details about the display data for the application
     * provider.</p>
     */
    inline DescribeApplicationProviderResult& WithDisplayData(const DisplayData& value) { SetDisplayData(value); return *this;}

    /**
     * <p>A structure with details about the display data for the application
     * provider.</p>
     */
    inline DescribeApplicationProviderResult& WithDisplayData(DisplayData&& value) { SetDisplayData(std::move(value)); return *this;}


    /**
     * <p>The protocol used to federate to the application provider.</p>
     */
    inline const FederationProtocol& GetFederationProtocol() const{ return m_federationProtocol; }

    /**
     * <p>The protocol used to federate to the application provider.</p>
     */
    inline void SetFederationProtocol(const FederationProtocol& value) { m_federationProtocol = value; }

    /**
     * <p>The protocol used to federate to the application provider.</p>
     */
    inline void SetFederationProtocol(FederationProtocol&& value) { m_federationProtocol = std::move(value); }

    /**
     * <p>The protocol used to federate to the application provider.</p>
     */
    inline DescribeApplicationProviderResult& WithFederationProtocol(const FederationProtocol& value) { SetFederationProtocol(value); return *this;}

    /**
     * <p>The protocol used to federate to the application provider.</p>
     */
    inline DescribeApplicationProviderResult& WithFederationProtocol(FederationProtocol&& value) { SetFederationProtocol(std::move(value)); return *this;}


    /**
     * <p>A structure with details about the receiving application.</p>
     */
    inline const ResourceServerConfig& GetResourceServerConfig() const{ return m_resourceServerConfig; }

    /**
     * <p>A structure with details about the receiving application.</p>
     */
    inline void SetResourceServerConfig(const ResourceServerConfig& value) { m_resourceServerConfig = value; }

    /**
     * <p>A structure with details about the receiving application.</p>
     */
    inline void SetResourceServerConfig(ResourceServerConfig&& value) { m_resourceServerConfig = std::move(value); }

    /**
     * <p>A structure with details about the receiving application.</p>
     */
    inline DescribeApplicationProviderResult& WithResourceServerConfig(const ResourceServerConfig& value) { SetResourceServerConfig(value); return *this;}

    /**
     * <p>A structure with details about the receiving application.</p>
     */
    inline DescribeApplicationProviderResult& WithResourceServerConfig(ResourceServerConfig&& value) { SetResourceServerConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeApplicationProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeApplicationProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeApplicationProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_applicationProviderArn;

    DisplayData m_displayData;

    FederationProtocol m_federationProtocol;

    ResourceServerConfig m_resourceServerConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

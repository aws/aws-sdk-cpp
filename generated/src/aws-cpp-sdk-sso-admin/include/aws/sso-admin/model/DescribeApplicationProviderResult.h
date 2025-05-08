/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/FederationProtocol.h>
#include <aws/sso-admin/model/DisplayData.h>
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
    AWS_SSOADMIN_API DescribeApplicationProviderResult() = default;
    AWS_SSOADMIN_API DescribeApplicationProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeApplicationProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the application provider.</p>
     */
    inline const Aws::String& GetApplicationProviderArn() const { return m_applicationProviderArn; }
    template<typename ApplicationProviderArnT = Aws::String>
    void SetApplicationProviderArn(ApplicationProviderArnT&& value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn = std::forward<ApplicationProviderArnT>(value); }
    template<typename ApplicationProviderArnT = Aws::String>
    DescribeApplicationProviderResult& WithApplicationProviderArn(ApplicationProviderArnT&& value) { SetApplicationProviderArn(std::forward<ApplicationProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used to federate to the application provider.</p>
     */
    inline FederationProtocol GetFederationProtocol() const { return m_federationProtocol; }
    inline void SetFederationProtocol(FederationProtocol value) { m_federationProtocolHasBeenSet = true; m_federationProtocol = value; }
    inline DescribeApplicationProviderResult& WithFederationProtocol(FederationProtocol value) { SetFederationProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure with details about the display data for the application
     * provider.</p>
     */
    inline const DisplayData& GetDisplayData() const { return m_displayData; }
    template<typename DisplayDataT = DisplayData>
    void SetDisplayData(DisplayDataT&& value) { m_displayDataHasBeenSet = true; m_displayData = std::forward<DisplayDataT>(value); }
    template<typename DisplayDataT = DisplayData>
    DescribeApplicationProviderResult& WithDisplayData(DisplayDataT&& value) { SetDisplayData(std::forward<DisplayDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure with details about the receiving application.</p>
     */
    inline const ResourceServerConfig& GetResourceServerConfig() const { return m_resourceServerConfig; }
    template<typename ResourceServerConfigT = ResourceServerConfig>
    void SetResourceServerConfig(ResourceServerConfigT&& value) { m_resourceServerConfigHasBeenSet = true; m_resourceServerConfig = std::forward<ResourceServerConfigT>(value); }
    template<typename ResourceServerConfigT = ResourceServerConfig>
    DescribeApplicationProviderResult& WithResourceServerConfig(ResourceServerConfigT&& value) { SetResourceServerConfig(std::forward<ResourceServerConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationProviderArn;
    bool m_applicationProviderArnHasBeenSet = false;

    FederationProtocol m_federationProtocol{FederationProtocol::NOT_SET};
    bool m_federationProtocolHasBeenSet = false;

    DisplayData m_displayData;
    bool m_displayDataHasBeenSet = false;

    ResourceServerConfig m_resourceServerConfig;
    bool m_resourceServerConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

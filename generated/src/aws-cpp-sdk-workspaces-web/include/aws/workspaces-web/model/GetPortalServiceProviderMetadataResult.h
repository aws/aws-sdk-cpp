/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class GetPortalServiceProviderMetadataResult
  {
  public:
    AWS_WORKSPACESWEB_API GetPortalServiceProviderMetadataResult() = default;
    AWS_WORKSPACESWEB_API GetPortalServiceProviderMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetPortalServiceProviderMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const { return m_portalArn; }
    template<typename PortalArnT = Aws::String>
    void SetPortalArn(PortalArnT&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::forward<PortalArnT>(value); }
    template<typename PortalArnT = Aws::String>
    GetPortalServiceProviderMetadataResult& WithPortalArn(PortalArnT&& value) { SetPortalArn(std::forward<PortalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service provider SAML metadata.</p>
     */
    inline const Aws::String& GetServiceProviderSamlMetadata() const { return m_serviceProviderSamlMetadata; }
    template<typename ServiceProviderSamlMetadataT = Aws::String>
    void SetServiceProviderSamlMetadata(ServiceProviderSamlMetadataT&& value) { m_serviceProviderSamlMetadataHasBeenSet = true; m_serviceProviderSamlMetadata = std::forward<ServiceProviderSamlMetadataT>(value); }
    template<typename ServiceProviderSamlMetadataT = Aws::String>
    GetPortalServiceProviderMetadataResult& WithServiceProviderSamlMetadata(ServiceProviderSamlMetadataT&& value) { SetServiceProviderSamlMetadata(std::forward<ServiceProviderSamlMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPortalServiceProviderMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;

    Aws::String m_serviceProviderSamlMetadata;
    bool m_serviceProviderSamlMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws

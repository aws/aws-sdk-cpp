/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/ServicePrincipalName.h>
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
namespace PcaConnectorAd
{
namespace Model
{
  class GetServicePrincipalNameResult
  {
  public:
    AWS_PCACONNECTORAD_API GetServicePrincipalNameResult() = default;
    AWS_PCACONNECTORAD_API GetServicePrincipalNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API GetServicePrincipalNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The service principal name that the connector uses to authenticate with
     * Active Directory.</p>
     */
    inline const ServicePrincipalName& GetServicePrincipalName() const { return m_servicePrincipalName; }
    template<typename ServicePrincipalNameT = ServicePrincipalName>
    void SetServicePrincipalName(ServicePrincipalNameT&& value) { m_servicePrincipalNameHasBeenSet = true; m_servicePrincipalName = std::forward<ServicePrincipalNameT>(value); }
    template<typename ServicePrincipalNameT = ServicePrincipalName>
    GetServicePrincipalNameResult& WithServicePrincipalName(ServicePrincipalNameT&& value) { SetServicePrincipalName(std::forward<ServicePrincipalNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServicePrincipalNameResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServicePrincipalName m_servicePrincipalName;
    bool m_servicePrincipalNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws

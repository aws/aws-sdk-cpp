/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pca-connector-ad/model/ServicePrincipalNameSummary.h>
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
  class ListServicePrincipalNamesResult
  {
  public:
    AWS_PCACONNECTORAD_API ListServicePrincipalNamesResult() = default;
    AWS_PCACONNECTORAD_API ListServicePrincipalNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API ListServicePrincipalNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServicePrincipalNamesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service principal name, if any, that the connector uses to authenticate
     * with Active Directory.</p>
     */
    inline const Aws::Vector<ServicePrincipalNameSummary>& GetServicePrincipalNames() const { return m_servicePrincipalNames; }
    template<typename ServicePrincipalNamesT = Aws::Vector<ServicePrincipalNameSummary>>
    void SetServicePrincipalNames(ServicePrincipalNamesT&& value) { m_servicePrincipalNamesHasBeenSet = true; m_servicePrincipalNames = std::forward<ServicePrincipalNamesT>(value); }
    template<typename ServicePrincipalNamesT = Aws::Vector<ServicePrincipalNameSummary>>
    ListServicePrincipalNamesResult& WithServicePrincipalNames(ServicePrincipalNamesT&& value) { SetServicePrincipalNames(std::forward<ServicePrincipalNamesT>(value)); return *this;}
    template<typename ServicePrincipalNamesT = ServicePrincipalNameSummary>
    ListServicePrincipalNamesResult& AddServicePrincipalNames(ServicePrincipalNamesT&& value) { m_servicePrincipalNamesHasBeenSet = true; m_servicePrincipalNames.emplace_back(std::forward<ServicePrincipalNamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServicePrincipalNamesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ServicePrincipalNameSummary> m_servicePrincipalNames;
    bool m_servicePrincipalNamesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws

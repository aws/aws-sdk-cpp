/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/model/ServiceQuotaIncreaseRequestInTemplate.h>
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
namespace ServiceQuotas
{
namespace Model
{
  class ListServiceQuotaIncreaseRequestsInTemplateResult
  {
  public:
    AWS_SERVICEQUOTAS_API ListServiceQuotaIncreaseRequestsInTemplateResult() = default;
    AWS_SERVICEQUOTAS_API ListServiceQuotaIncreaseRequestsInTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API ListServiceQuotaIncreaseRequestsInTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline const Aws::Vector<ServiceQuotaIncreaseRequestInTemplate>& GetServiceQuotaIncreaseRequestInTemplateList() const { return m_serviceQuotaIncreaseRequestInTemplateList; }
    template<typename ServiceQuotaIncreaseRequestInTemplateListT = Aws::Vector<ServiceQuotaIncreaseRequestInTemplate>>
    void SetServiceQuotaIncreaseRequestInTemplateList(ServiceQuotaIncreaseRequestInTemplateListT&& value) { m_serviceQuotaIncreaseRequestInTemplateListHasBeenSet = true; m_serviceQuotaIncreaseRequestInTemplateList = std::forward<ServiceQuotaIncreaseRequestInTemplateListT>(value); }
    template<typename ServiceQuotaIncreaseRequestInTemplateListT = Aws::Vector<ServiceQuotaIncreaseRequestInTemplate>>
    ListServiceQuotaIncreaseRequestsInTemplateResult& WithServiceQuotaIncreaseRequestInTemplateList(ServiceQuotaIncreaseRequestInTemplateListT&& value) { SetServiceQuotaIncreaseRequestInTemplateList(std::forward<ServiceQuotaIncreaseRequestInTemplateListT>(value)); return *this;}
    template<typename ServiceQuotaIncreaseRequestInTemplateListT = ServiceQuotaIncreaseRequestInTemplate>
    ListServiceQuotaIncreaseRequestsInTemplateResult& AddServiceQuotaIncreaseRequestInTemplateList(ServiceQuotaIncreaseRequestInTemplateListT&& value) { m_serviceQuotaIncreaseRequestInTemplateListHasBeenSet = true; m_serviceQuotaIncreaseRequestInTemplateList.emplace_back(std::forward<ServiceQuotaIncreaseRequestInTemplateListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceQuotaIncreaseRequestsInTemplateResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceQuotaIncreaseRequestsInTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceQuotaIncreaseRequestInTemplate> m_serviceQuotaIncreaseRequestInTemplateList;
    bool m_serviceQuotaIncreaseRequestInTemplateListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

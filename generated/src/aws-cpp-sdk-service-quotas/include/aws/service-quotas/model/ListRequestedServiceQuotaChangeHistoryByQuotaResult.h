/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/service-quotas/model/RequestedServiceQuotaChange.h>
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
  class ListRequestedServiceQuotaChangeHistoryByQuotaResult
  {
  public:
    AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryByQuotaResult() = default;
    AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryByQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryByQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline const Aws::Vector<RequestedServiceQuotaChange>& GetRequestedQuotas() const { return m_requestedQuotas; }
    template<typename RequestedQuotasT = Aws::Vector<RequestedServiceQuotaChange>>
    void SetRequestedQuotas(RequestedQuotasT&& value) { m_requestedQuotasHasBeenSet = true; m_requestedQuotas = std::forward<RequestedQuotasT>(value); }
    template<typename RequestedQuotasT = Aws::Vector<RequestedServiceQuotaChange>>
    ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithRequestedQuotas(RequestedQuotasT&& value) { SetRequestedQuotas(std::forward<RequestedQuotasT>(value)); return *this;}
    template<typename RequestedQuotasT = RequestedServiceQuotaChange>
    ListRequestedServiceQuotaChangeHistoryByQuotaResult& AddRequestedQuotas(RequestedQuotasT&& value) { m_requestedQuotasHasBeenSet = true; m_requestedQuotas.emplace_back(std::forward<RequestedQuotasT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RequestedServiceQuotaChange> m_requestedQuotas;
    bool m_requestedQuotasHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

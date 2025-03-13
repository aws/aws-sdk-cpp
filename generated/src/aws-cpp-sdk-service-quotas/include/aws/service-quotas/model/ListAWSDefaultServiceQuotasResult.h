/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/service-quotas/model/ServiceQuota.h>
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
  class ListAWSDefaultServiceQuotasResult
  {
  public:
    AWS_SERVICEQUOTAS_API ListAWSDefaultServiceQuotasResult() = default;
    AWS_SERVICEQUOTAS_API ListAWSDefaultServiceQuotasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API ListAWSDefaultServiceQuotasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListAWSDefaultServiceQuotasResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the quotas.</p>
     */
    inline const Aws::Vector<ServiceQuota>& GetQuotas() const { return m_quotas; }
    template<typename QuotasT = Aws::Vector<ServiceQuota>>
    void SetQuotas(QuotasT&& value) { m_quotasHasBeenSet = true; m_quotas = std::forward<QuotasT>(value); }
    template<typename QuotasT = Aws::Vector<ServiceQuota>>
    ListAWSDefaultServiceQuotasResult& WithQuotas(QuotasT&& value) { SetQuotas(std::forward<QuotasT>(value)); return *this;}
    template<typename QuotasT = ServiceQuota>
    ListAWSDefaultServiceQuotasResult& AddQuotas(QuotasT&& value) { m_quotasHasBeenSet = true; m_quotas.emplace_back(std::forward<QuotasT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAWSDefaultServiceQuotasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ServiceQuota> m_quotas;
    bool m_quotasHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

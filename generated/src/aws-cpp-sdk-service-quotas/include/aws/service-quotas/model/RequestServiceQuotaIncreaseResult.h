/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/RequestedServiceQuotaChange.h>
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
namespace ServiceQuotas
{
namespace Model
{
  class RequestServiceQuotaIncreaseResult
  {
  public:
    AWS_SERVICEQUOTAS_API RequestServiceQuotaIncreaseResult() = default;
    AWS_SERVICEQUOTAS_API RequestServiceQuotaIncreaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API RequestServiceQuotaIncreaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the quota increase request.</p>
     */
    inline const RequestedServiceQuotaChange& GetRequestedQuota() const { return m_requestedQuota; }
    template<typename RequestedQuotaT = RequestedServiceQuotaChange>
    void SetRequestedQuota(RequestedQuotaT&& value) { m_requestedQuotaHasBeenSet = true; m_requestedQuota = std::forward<RequestedQuotaT>(value); }
    template<typename RequestedQuotaT = RequestedServiceQuotaChange>
    RequestServiceQuotaIncreaseResult& WithRequestedQuota(RequestedQuotaT&& value) { SetRequestedQuota(std::forward<RequestedQuotaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RequestServiceQuotaIncreaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RequestedServiceQuotaChange m_requestedQuota;
    bool m_requestedQuotaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

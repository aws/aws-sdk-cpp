/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/ServiceQuota.h>
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
  class GetAWSDefaultServiceQuotaResult
  {
  public:
    AWS_SERVICEQUOTAS_API GetAWSDefaultServiceQuotaResult() = default;
    AWS_SERVICEQUOTAS_API GetAWSDefaultServiceQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API GetAWSDefaultServiceQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the quota.</p>
     */
    inline const ServiceQuota& GetQuota() const { return m_quota; }
    template<typename QuotaT = ServiceQuota>
    void SetQuota(QuotaT&& value) { m_quotaHasBeenSet = true; m_quota = std::forward<QuotaT>(value); }
    template<typename QuotaT = ServiceQuota>
    GetAWSDefaultServiceQuotaResult& WithQuota(QuotaT&& value) { SetQuota(std::forward<QuotaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAWSDefaultServiceQuotaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceQuota m_quota;
    bool m_quotaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

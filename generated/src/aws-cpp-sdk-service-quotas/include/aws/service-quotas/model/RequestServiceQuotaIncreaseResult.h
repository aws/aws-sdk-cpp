/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
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
  class RequestServiceQuotaIncreaseResult
  {
  public:
    AWS_SERVICEQUOTAS_API RequestServiceQuotaIncreaseResult();
    AWS_SERVICEQUOTAS_API RequestServiceQuotaIncreaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API RequestServiceQuotaIncreaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the quota increase request.</p>
     */
    inline const RequestedServiceQuotaChange& GetRequestedQuota() const{ return m_requestedQuota; }

    /**
     * <p>Information about the quota increase request.</p>
     */
    inline void SetRequestedQuota(const RequestedServiceQuotaChange& value) { m_requestedQuota = value; }

    /**
     * <p>Information about the quota increase request.</p>
     */
    inline void SetRequestedQuota(RequestedServiceQuotaChange&& value) { m_requestedQuota = std::move(value); }

    /**
     * <p>Information about the quota increase request.</p>
     */
    inline RequestServiceQuotaIncreaseResult& WithRequestedQuota(const RequestedServiceQuotaChange& value) { SetRequestedQuota(value); return *this;}

    /**
     * <p>Information about the quota increase request.</p>
     */
    inline RequestServiceQuotaIncreaseResult& WithRequestedQuota(RequestedServiceQuotaChange&& value) { SetRequestedQuota(std::move(value)); return *this;}

  private:

    RequestedServiceQuotaChange m_requestedQuota;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

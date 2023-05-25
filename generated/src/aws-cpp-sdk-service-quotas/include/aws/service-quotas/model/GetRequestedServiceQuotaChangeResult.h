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
  class GetRequestedServiceQuotaChangeResult
  {
  public:
    AWS_SERVICEQUOTAS_API GetRequestedServiceQuotaChangeResult();
    AWS_SERVICEQUOTAS_API GetRequestedServiceQuotaChangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API GetRequestedServiceQuotaChangeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetRequestedServiceQuotaChangeResult& WithRequestedQuota(const RequestedServiceQuotaChange& value) { SetRequestedQuota(value); return *this;}

    /**
     * <p>Information about the quota increase request.</p>
     */
    inline GetRequestedServiceQuotaChangeResult& WithRequestedQuota(RequestedServiceQuotaChange&& value) { SetRequestedQuota(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRequestedServiceQuotaChangeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRequestedServiceQuotaChangeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRequestedServiceQuotaChangeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RequestedServiceQuotaChange m_requestedQuota;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

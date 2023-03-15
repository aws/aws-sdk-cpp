﻿/**
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
  class GetServiceQuotaResult
  {
  public:
    AWS_SERVICEQUOTAS_API GetServiceQuotaResult();
    AWS_SERVICEQUOTAS_API GetServiceQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API GetServiceQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the quota.</p>
     */
    inline const ServiceQuota& GetQuota() const{ return m_quota; }

    /**
     * <p>Information about the quota.</p>
     */
    inline void SetQuota(const ServiceQuota& value) { m_quota = value; }

    /**
     * <p>Information about the quota.</p>
     */
    inline void SetQuota(ServiceQuota&& value) { m_quota = std::move(value); }

    /**
     * <p>Information about the quota.</p>
     */
    inline GetServiceQuotaResult& WithQuota(const ServiceQuota& value) { SetQuota(value); return *this;}

    /**
     * <p>Information about the quota.</p>
     */
    inline GetServiceQuotaResult& WithQuota(ServiceQuota&& value) { SetQuota(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetServiceQuotaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetServiceQuotaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetServiceQuotaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceQuota m_quota;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

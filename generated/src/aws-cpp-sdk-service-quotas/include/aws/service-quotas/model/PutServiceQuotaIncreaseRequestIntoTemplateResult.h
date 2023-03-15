﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/ServiceQuotaIncreaseRequestInTemplate.h>
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
  class PutServiceQuotaIncreaseRequestIntoTemplateResult
  {
  public:
    AWS_SERVICEQUOTAS_API PutServiceQuotaIncreaseRequestIntoTemplateResult();
    AWS_SERVICEQUOTAS_API PutServiceQuotaIncreaseRequestIntoTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API PutServiceQuotaIncreaseRequestIntoTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the quota increase request.</p>
     */
    inline const ServiceQuotaIncreaseRequestInTemplate& GetServiceQuotaIncreaseRequestInTemplate() const{ return m_serviceQuotaIncreaseRequestInTemplate; }

    /**
     * <p>Information about the quota increase request.</p>
     */
    inline void SetServiceQuotaIncreaseRequestInTemplate(const ServiceQuotaIncreaseRequestInTemplate& value) { m_serviceQuotaIncreaseRequestInTemplate = value; }

    /**
     * <p>Information about the quota increase request.</p>
     */
    inline void SetServiceQuotaIncreaseRequestInTemplate(ServiceQuotaIncreaseRequestInTemplate&& value) { m_serviceQuotaIncreaseRequestInTemplate = std::move(value); }

    /**
     * <p>Information about the quota increase request.</p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateResult& WithServiceQuotaIncreaseRequestInTemplate(const ServiceQuotaIncreaseRequestInTemplate& value) { SetServiceQuotaIncreaseRequestInTemplate(value); return *this;}

    /**
     * <p>Information about the quota increase request.</p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateResult& WithServiceQuotaIncreaseRequestInTemplate(ServiceQuotaIncreaseRequestInTemplate&& value) { SetServiceQuotaIncreaseRequestInTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutServiceQuotaIncreaseRequestIntoTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutServiceQuotaIncreaseRequestIntoTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutServiceQuotaIncreaseRequestIntoTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceQuotaIncreaseRequestInTemplate m_serviceQuotaIncreaseRequestInTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

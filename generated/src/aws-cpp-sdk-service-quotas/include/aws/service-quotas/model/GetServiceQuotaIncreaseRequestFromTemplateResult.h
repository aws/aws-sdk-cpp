/**
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
  class GetServiceQuotaIncreaseRequestFromTemplateResult
  {
  public:
    AWS_SERVICEQUOTAS_API GetServiceQuotaIncreaseRequestFromTemplateResult();
    AWS_SERVICEQUOTAS_API GetServiceQuotaIncreaseRequestFromTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API GetServiceQuotaIncreaseRequestFromTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetServiceQuotaIncreaseRequestFromTemplateResult& WithServiceQuotaIncreaseRequestInTemplate(const ServiceQuotaIncreaseRequestInTemplate& value) { SetServiceQuotaIncreaseRequestInTemplate(value); return *this;}

    /**
     * <p>Information about the quota increase request.</p>
     */
    inline GetServiceQuotaIncreaseRequestFromTemplateResult& WithServiceQuotaIncreaseRequestInTemplate(ServiceQuotaIncreaseRequestInTemplate&& value) { SetServiceQuotaIncreaseRequestInTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetServiceQuotaIncreaseRequestFromTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetServiceQuotaIncreaseRequestFromTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetServiceQuotaIncreaseRequestFromTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceQuotaIncreaseRequestInTemplate m_serviceQuotaIncreaseRequestInTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

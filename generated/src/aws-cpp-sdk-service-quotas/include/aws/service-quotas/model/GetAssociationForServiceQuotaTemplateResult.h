/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/ServiceQuotaTemplateAssociationStatus.h>
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
  class GetAssociationForServiceQuotaTemplateResult
  {
  public:
    AWS_SERVICEQUOTAS_API GetAssociationForServiceQuotaTemplateResult();
    AWS_SERVICEQUOTAS_API GetAssociationForServiceQuotaTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API GetAssociationForServiceQuotaTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The association status. If the status is <code>ASSOCIATED</code>, the quota
     * increase requests in the template are automatically applied to new Amazon Web
     * Services accounts in your organization.</p>
     */
    inline const ServiceQuotaTemplateAssociationStatus& GetServiceQuotaTemplateAssociationStatus() const{ return m_serviceQuotaTemplateAssociationStatus; }

    /**
     * <p>The association status. If the status is <code>ASSOCIATED</code>, the quota
     * increase requests in the template are automatically applied to new Amazon Web
     * Services accounts in your organization.</p>
     */
    inline void SetServiceQuotaTemplateAssociationStatus(const ServiceQuotaTemplateAssociationStatus& value) { m_serviceQuotaTemplateAssociationStatus = value; }

    /**
     * <p>The association status. If the status is <code>ASSOCIATED</code>, the quota
     * increase requests in the template are automatically applied to new Amazon Web
     * Services accounts in your organization.</p>
     */
    inline void SetServiceQuotaTemplateAssociationStatus(ServiceQuotaTemplateAssociationStatus&& value) { m_serviceQuotaTemplateAssociationStatus = std::move(value); }

    /**
     * <p>The association status. If the status is <code>ASSOCIATED</code>, the quota
     * increase requests in the template are automatically applied to new Amazon Web
     * Services accounts in your organization.</p>
     */
    inline GetAssociationForServiceQuotaTemplateResult& WithServiceQuotaTemplateAssociationStatus(const ServiceQuotaTemplateAssociationStatus& value) { SetServiceQuotaTemplateAssociationStatus(value); return *this;}

    /**
     * <p>The association status. If the status is <code>ASSOCIATED</code>, the quota
     * increase requests in the template are automatically applied to new Amazon Web
     * Services accounts in your organization.</p>
     */
    inline GetAssociationForServiceQuotaTemplateResult& WithServiceQuotaTemplateAssociationStatus(ServiceQuotaTemplateAssociationStatus&& value) { SetServiceQuotaTemplateAssociationStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAssociationForServiceQuotaTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAssociationForServiceQuotaTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAssociationForServiceQuotaTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceQuotaTemplateAssociationStatus m_serviceQuotaTemplateAssociationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

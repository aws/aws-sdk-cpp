/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/ServiceQuotaTemplateAssociationStatus.h>
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
     * increase requests in the template are automatically applied to new accounts in
     * your organization.</p>
     */
    inline const ServiceQuotaTemplateAssociationStatus& GetServiceQuotaTemplateAssociationStatus() const{ return m_serviceQuotaTemplateAssociationStatus; }

    /**
     * <p>The association status. If the status is <code>ASSOCIATED</code>, the quota
     * increase requests in the template are automatically applied to new accounts in
     * your organization.</p>
     */
    inline void SetServiceQuotaTemplateAssociationStatus(const ServiceQuotaTemplateAssociationStatus& value) { m_serviceQuotaTemplateAssociationStatus = value; }

    /**
     * <p>The association status. If the status is <code>ASSOCIATED</code>, the quota
     * increase requests in the template are automatically applied to new accounts in
     * your organization.</p>
     */
    inline void SetServiceQuotaTemplateAssociationStatus(ServiceQuotaTemplateAssociationStatus&& value) { m_serviceQuotaTemplateAssociationStatus = std::move(value); }

    /**
     * <p>The association status. If the status is <code>ASSOCIATED</code>, the quota
     * increase requests in the template are automatically applied to new accounts in
     * your organization.</p>
     */
    inline GetAssociationForServiceQuotaTemplateResult& WithServiceQuotaTemplateAssociationStatus(const ServiceQuotaTemplateAssociationStatus& value) { SetServiceQuotaTemplateAssociationStatus(value); return *this;}

    /**
     * <p>The association status. If the status is <code>ASSOCIATED</code>, the quota
     * increase requests in the template are automatically applied to new accounts in
     * your organization.</p>
     */
    inline GetAssociationForServiceQuotaTemplateResult& WithServiceQuotaTemplateAssociationStatus(ServiceQuotaTemplateAssociationStatus&& value) { SetServiceQuotaTemplateAssociationStatus(std::move(value)); return *this;}

  private:

    ServiceQuotaTemplateAssociationStatus m_serviceQuotaTemplateAssociationStatus;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

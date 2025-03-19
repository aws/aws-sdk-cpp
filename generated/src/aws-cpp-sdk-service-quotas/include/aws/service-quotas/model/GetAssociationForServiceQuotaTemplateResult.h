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
    AWS_SERVICEQUOTAS_API GetAssociationForServiceQuotaTemplateResult() = default;
    AWS_SERVICEQUOTAS_API GetAssociationForServiceQuotaTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API GetAssociationForServiceQuotaTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The association status. If the status is <code>ASSOCIATED</code>, the quota
     * increase requests in the template are automatically applied to new Amazon Web
     * Services accounts in your organization.</p>
     */
    inline ServiceQuotaTemplateAssociationStatus GetServiceQuotaTemplateAssociationStatus() const { return m_serviceQuotaTemplateAssociationStatus; }
    inline void SetServiceQuotaTemplateAssociationStatus(ServiceQuotaTemplateAssociationStatus value) { m_serviceQuotaTemplateAssociationStatusHasBeenSet = true; m_serviceQuotaTemplateAssociationStatus = value; }
    inline GetAssociationForServiceQuotaTemplateResult& WithServiceQuotaTemplateAssociationStatus(ServiceQuotaTemplateAssociationStatus value) { SetServiceQuotaTemplateAssociationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAssociationForServiceQuotaTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceQuotaTemplateAssociationStatus m_serviceQuotaTemplateAssociationStatus{ServiceQuotaTemplateAssociationStatus::NOT_SET};
    bool m_serviceQuotaTemplateAssociationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

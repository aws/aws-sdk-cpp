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
  class PutServiceQuotaIncreaseRequestIntoTemplateResult
  {
  public:
    AWS_SERVICEQUOTAS_API PutServiceQuotaIncreaseRequestIntoTemplateResult() = default;
    AWS_SERVICEQUOTAS_API PutServiceQuotaIncreaseRequestIntoTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API PutServiceQuotaIncreaseRequestIntoTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the quota increase request.</p>
     */
    inline const ServiceQuotaIncreaseRequestInTemplate& GetServiceQuotaIncreaseRequestInTemplate() const { return m_serviceQuotaIncreaseRequestInTemplate; }
    template<typename ServiceQuotaIncreaseRequestInTemplateT = ServiceQuotaIncreaseRequestInTemplate>
    void SetServiceQuotaIncreaseRequestInTemplate(ServiceQuotaIncreaseRequestInTemplateT&& value) { m_serviceQuotaIncreaseRequestInTemplateHasBeenSet = true; m_serviceQuotaIncreaseRequestInTemplate = std::forward<ServiceQuotaIncreaseRequestInTemplateT>(value); }
    template<typename ServiceQuotaIncreaseRequestInTemplateT = ServiceQuotaIncreaseRequestInTemplate>
    PutServiceQuotaIncreaseRequestIntoTemplateResult& WithServiceQuotaIncreaseRequestInTemplate(ServiceQuotaIncreaseRequestInTemplateT&& value) { SetServiceQuotaIncreaseRequestInTemplate(std::forward<ServiceQuotaIncreaseRequestInTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutServiceQuotaIncreaseRequestIntoTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceQuotaIncreaseRequestInTemplate m_serviceQuotaIncreaseRequestInTemplate;
    bool m_serviceQuotaIncreaseRequestInTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

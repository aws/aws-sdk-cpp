/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/model/RequestStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/service-quotas/model/AppliedLevelEnum.h>
#include <aws/service-quotas/model/QuotaContextInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>Information about a quota increase request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/RequestedServiceQuotaChange">AWS
   * API Reference</a></p>
   */
  class RequestedServiceQuotaChange
  {
  public:
    AWS_SERVICEQUOTAS_API RequestedServiceQuotaChange() = default;
    AWS_SERVICEQUOTAS_API RequestedServiceQuotaChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API RequestedServiceQuotaChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RequestedServiceQuotaChange& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The case ID.</p>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    RequestedServiceQuotaChange& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    RequestedServiceQuotaChange& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the service name.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    RequestedServiceQuotaChange& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline const Aws::String& GetQuotaCode() const { return m_quotaCode; }
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
    template<typename QuotaCodeT = Aws::String>
    void SetQuotaCode(QuotaCodeT&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::forward<QuotaCodeT>(value); }
    template<typename QuotaCodeT = Aws::String>
    RequestedServiceQuotaChange& WithQuotaCode(QuotaCodeT&& value) { SetQuotaCode(std::forward<QuotaCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the quota name.</p>
     */
    inline const Aws::String& GetQuotaName() const { return m_quotaName; }
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }
    template<typename QuotaNameT = Aws::String>
    void SetQuotaName(QuotaNameT&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::forward<QuotaNameT>(value); }
    template<typename QuotaNameT = Aws::String>
    RequestedServiceQuotaChange& WithQuotaName(QuotaNameT&& value) { SetQuotaName(std::forward<QuotaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new, increased value for the quota.</p>
     */
    inline double GetDesiredValue() const { return m_desiredValue; }
    inline bool DesiredValueHasBeenSet() const { return m_desiredValueHasBeenSet; }
    inline void SetDesiredValue(double value) { m_desiredValueHasBeenSet = true; m_desiredValue = value; }
    inline RequestedServiceQuotaChange& WithDesiredValue(double value) { SetDesiredValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the quota increase request.</p> <ul> <li> <p>
     * <code>PENDING</code>: The quota increase request is under review by Amazon Web
     * Services. </p> </li> <li> <p> <code>CASE_OPENED</code>: Service Quotas opened a
     * support case to process the quota increase request. Follow-up on the support
     * case for more information.</p> </li> <li> <p> <code>APPROVED</code>: The quota
     * increase request is approved. </p> </li> <li> <p> <code>DENIED</code>: The quota
     * increase request can't be approved by Service Quotas. Contact Amazon Web
     * Services Support for more details.</p> </li> <li> <p> <code>NOT APPROVED</code>:
     * The quota increase request can't be approved by Service Quotas. Contact Amazon
     * Web Services Support for more details.</p> </li> <li> <p>
     * <code>CASE_CLOSED</code>: The support case associated with this quota increase
     * request was closed. Check the support case correspondence for the outcome of
     * your quota request.</p> </li> <li> <p> <code>INVALID_REQUEST</code>: Service
     * Quotas couldn't process your resource-level quota increase request because the
     * Amazon Resource Name (ARN) specified as part of the <code>ContextId</code> is
     * invalid.</p> </li> </ul>
     */
    inline RequestStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RequestStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RequestedServiceQuotaChange& WithStatus(RequestStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the quota increase request was received and the case
     * ID was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    RequestedServiceQuotaChange& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the most recent change.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    RequestedServiceQuotaChange& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM identity of the requester.</p>
     */
    inline const Aws::String& GetRequester() const { return m_requester; }
    inline bool RequesterHasBeenSet() const { return m_requesterHasBeenSet; }
    template<typename RequesterT = Aws::String>
    void SetRequester(RequesterT&& value) { m_requesterHasBeenSet = true; m_requester = std::forward<RequesterT>(value); }
    template<typename RequesterT = Aws::String>
    RequestedServiceQuotaChange& WithRequester(RequesterT&& value) { SetRequester(std::forward<RequesterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline const Aws::String& GetQuotaArn() const { return m_quotaArn; }
    inline bool QuotaArnHasBeenSet() const { return m_quotaArnHasBeenSet; }
    template<typename QuotaArnT = Aws::String>
    void SetQuotaArn(QuotaArnT&& value) { m_quotaArnHasBeenSet = true; m_quotaArn = std::forward<QuotaArnT>(value); }
    template<typename QuotaArnT = Aws::String>
    RequestedServiceQuotaChange& WithQuotaArn(QuotaArnT&& value) { SetQuotaArn(std::forward<QuotaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the quota is global.</p>
     */
    inline bool GetGlobalQuota() const { return m_globalQuota; }
    inline bool GlobalQuotaHasBeenSet() const { return m_globalQuotaHasBeenSet; }
    inline void SetGlobalQuota(bool value) { m_globalQuotaHasBeenSet = true; m_globalQuota = value; }
    inline RequestedServiceQuotaChange& WithGlobalQuota(bool value) { SetGlobalQuota(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measurement.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    RequestedServiceQuotaChange& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response to return quota requests for the <code>ACCOUNT</code>,
     * <code>RESOURCE</code>, or <code>ALL</code> levels. <code>ACCOUNT</code> is the
     * default.</p>
     */
    inline AppliedLevelEnum GetQuotaRequestedAtLevel() const { return m_quotaRequestedAtLevel; }
    inline bool QuotaRequestedAtLevelHasBeenSet() const { return m_quotaRequestedAtLevelHasBeenSet; }
    inline void SetQuotaRequestedAtLevel(AppliedLevelEnum value) { m_quotaRequestedAtLevelHasBeenSet = true; m_quotaRequestedAtLevel = value; }
    inline RequestedServiceQuotaChange& WithQuotaRequestedAtLevel(AppliedLevelEnum value) { SetQuotaRequestedAtLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The context for this service quota.</p>
     */
    inline const QuotaContextInfo& GetQuotaContext() const { return m_quotaContext; }
    inline bool QuotaContextHasBeenSet() const { return m_quotaContextHasBeenSet; }
    template<typename QuotaContextT = QuotaContextInfo>
    void SetQuotaContext(QuotaContextT&& value) { m_quotaContextHasBeenSet = true; m_quotaContext = std::forward<QuotaContextT>(value); }
    template<typename QuotaContextT = QuotaContextInfo>
    RequestedServiceQuotaChange& WithQuotaContext(QuotaContextT&& value) { SetQuotaContext(std::forward<QuotaContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    Aws::String m_quotaName;
    bool m_quotaNameHasBeenSet = false;

    double m_desiredValue{0.0};
    bool m_desiredValueHasBeenSet = false;

    RequestStatus m_status{RequestStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_requester;
    bool m_requesterHasBeenSet = false;

    Aws::String m_quotaArn;
    bool m_quotaArnHasBeenSet = false;

    bool m_globalQuota{false};
    bool m_globalQuotaHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    AppliedLevelEnum m_quotaRequestedAtLevel{AppliedLevelEnum::NOT_SET};
    bool m_quotaRequestedAtLevelHasBeenSet = false;

    QuotaContextInfo m_quotaContext;
    bool m_quotaContextHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

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
    AWS_SERVICEQUOTAS_API RequestedServiceQuotaChange();
    AWS_SERVICEQUOTAS_API RequestedServiceQuotaChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API RequestedServiceQuotaChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RequestedServiceQuotaChange& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RequestedServiceQuotaChange& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RequestedServiceQuotaChange& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The case ID.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline RequestedServiceQuotaChange& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline RequestedServiceQuotaChange& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline RequestedServiceQuotaChange& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline RequestedServiceQuotaChange& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline RequestedServiceQuotaChange& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline RequestedServiceQuotaChange& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the service name.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline RequestedServiceQuotaChange& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline RequestedServiceQuotaChange& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline RequestedServiceQuotaChange& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }
    inline RequestedServiceQuotaChange& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}
    inline RequestedServiceQuotaChange& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}
    inline RequestedServiceQuotaChange& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the quota name.</p>
     */
    inline const Aws::String& GetQuotaName() const{ return m_quotaName; }
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }
    inline void SetQuotaName(const Aws::String& value) { m_quotaNameHasBeenSet = true; m_quotaName = value; }
    inline void SetQuotaName(Aws::String&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::move(value); }
    inline void SetQuotaName(const char* value) { m_quotaNameHasBeenSet = true; m_quotaName.assign(value); }
    inline RequestedServiceQuotaChange& WithQuotaName(const Aws::String& value) { SetQuotaName(value); return *this;}
    inline RequestedServiceQuotaChange& WithQuotaName(Aws::String&& value) { SetQuotaName(std::move(value)); return *this;}
    inline RequestedServiceQuotaChange& WithQuotaName(const char* value) { SetQuotaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new, increased value for the quota.</p>
     */
    inline double GetDesiredValue() const{ return m_desiredValue; }
    inline bool DesiredValueHasBeenSet() const { return m_desiredValueHasBeenSet; }
    inline void SetDesiredValue(double value) { m_desiredValueHasBeenSet = true; m_desiredValue = value; }
    inline RequestedServiceQuotaChange& WithDesiredValue(double value) { SetDesiredValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the quota increase request.</p>
     */
    inline const RequestStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RequestStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RequestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RequestedServiceQuotaChange& WithStatus(const RequestStatus& value) { SetStatus(value); return *this;}
    inline RequestedServiceQuotaChange& WithStatus(RequestStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the quota increase request was received and the case
     * ID was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline RequestedServiceQuotaChange& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline RequestedServiceQuotaChange& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the most recent change.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }
    inline RequestedServiceQuotaChange& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline RequestedServiceQuotaChange& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM identity of the requester.</p>
     */
    inline const Aws::String& GetRequester() const{ return m_requester; }
    inline bool RequesterHasBeenSet() const { return m_requesterHasBeenSet; }
    inline void SetRequester(const Aws::String& value) { m_requesterHasBeenSet = true; m_requester = value; }
    inline void SetRequester(Aws::String&& value) { m_requesterHasBeenSet = true; m_requester = std::move(value); }
    inline void SetRequester(const char* value) { m_requesterHasBeenSet = true; m_requester.assign(value); }
    inline RequestedServiceQuotaChange& WithRequester(const Aws::String& value) { SetRequester(value); return *this;}
    inline RequestedServiceQuotaChange& WithRequester(Aws::String&& value) { SetRequester(std::move(value)); return *this;}
    inline RequestedServiceQuotaChange& WithRequester(const char* value) { SetRequester(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline const Aws::String& GetQuotaArn() const{ return m_quotaArn; }
    inline bool QuotaArnHasBeenSet() const { return m_quotaArnHasBeenSet; }
    inline void SetQuotaArn(const Aws::String& value) { m_quotaArnHasBeenSet = true; m_quotaArn = value; }
    inline void SetQuotaArn(Aws::String&& value) { m_quotaArnHasBeenSet = true; m_quotaArn = std::move(value); }
    inline void SetQuotaArn(const char* value) { m_quotaArnHasBeenSet = true; m_quotaArn.assign(value); }
    inline RequestedServiceQuotaChange& WithQuotaArn(const Aws::String& value) { SetQuotaArn(value); return *this;}
    inline RequestedServiceQuotaChange& WithQuotaArn(Aws::String&& value) { SetQuotaArn(std::move(value)); return *this;}
    inline RequestedServiceQuotaChange& WithQuotaArn(const char* value) { SetQuotaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the quota is global.</p>
     */
    inline bool GetGlobalQuota() const{ return m_globalQuota; }
    inline bool GlobalQuotaHasBeenSet() const { return m_globalQuotaHasBeenSet; }
    inline void SetGlobalQuota(bool value) { m_globalQuotaHasBeenSet = true; m_globalQuota = value; }
    inline RequestedServiceQuotaChange& WithGlobalQuota(bool value) { SetGlobalQuota(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measurement.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline RequestedServiceQuotaChange& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline RequestedServiceQuotaChange& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline RequestedServiceQuotaChange& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies at which level within the Amazon Web Services account the quota
     * request applies to.</p>
     */
    inline const AppliedLevelEnum& GetQuotaRequestedAtLevel() const{ return m_quotaRequestedAtLevel; }
    inline bool QuotaRequestedAtLevelHasBeenSet() const { return m_quotaRequestedAtLevelHasBeenSet; }
    inline void SetQuotaRequestedAtLevel(const AppliedLevelEnum& value) { m_quotaRequestedAtLevelHasBeenSet = true; m_quotaRequestedAtLevel = value; }
    inline void SetQuotaRequestedAtLevel(AppliedLevelEnum&& value) { m_quotaRequestedAtLevelHasBeenSet = true; m_quotaRequestedAtLevel = std::move(value); }
    inline RequestedServiceQuotaChange& WithQuotaRequestedAtLevel(const AppliedLevelEnum& value) { SetQuotaRequestedAtLevel(value); return *this;}
    inline RequestedServiceQuotaChange& WithQuotaRequestedAtLevel(AppliedLevelEnum&& value) { SetQuotaRequestedAtLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The context for this service quota.</p>
     */
    inline const QuotaContextInfo& GetQuotaContext() const{ return m_quotaContext; }
    inline bool QuotaContextHasBeenSet() const { return m_quotaContextHasBeenSet; }
    inline void SetQuotaContext(const QuotaContextInfo& value) { m_quotaContextHasBeenSet = true; m_quotaContext = value; }
    inline void SetQuotaContext(QuotaContextInfo&& value) { m_quotaContextHasBeenSet = true; m_quotaContext = std::move(value); }
    inline RequestedServiceQuotaChange& WithQuotaContext(const QuotaContextInfo& value) { SetQuotaContext(value); return *this;}
    inline RequestedServiceQuotaChange& WithQuotaContext(QuotaContextInfo&& value) { SetQuotaContext(std::move(value)); return *this;}
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

    double m_desiredValue;
    bool m_desiredValueHasBeenSet = false;

    RequestStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_requester;
    bool m_requesterHasBeenSet = false;

    Aws::String m_quotaArn;
    bool m_quotaArnHasBeenSet = false;

    bool m_globalQuota;
    bool m_globalQuotaHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    AppliedLevelEnum m_quotaRequestedAtLevel;
    bool m_quotaRequestedAtLevelHasBeenSet = false;

    QuotaContextInfo m_quotaContext;
    bool m_quotaContextHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

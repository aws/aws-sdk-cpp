/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/model/RequestStatus.h>
#include <aws/core/utils/DateTime.h>
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


    /**
     * <p>The unique identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier.</p>
     */
    inline RequestedServiceQuotaChange& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier.</p>
     */
    inline RequestedServiceQuotaChange& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier.</p>
     */
    inline RequestedServiceQuotaChange& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The case ID.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>The case ID.</p>
     */
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }

    /**
     * <p>The case ID.</p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }

    /**
     * <p>The case ID.</p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }

    /**
     * <p>The case ID.</p>
     */
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }

    /**
     * <p>The case ID.</p>
     */
    inline RequestedServiceQuotaChange& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>The case ID.</p>
     */
    inline RequestedServiceQuotaChange& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>The case ID.</p>
     */
    inline RequestedServiceQuotaChange& WithCaseId(const char* value) { SetCaseId(value); return *this;}


    /**
     * <p>The service identifier.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The service identifier.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The service identifier.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The service identifier.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The service identifier.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The service identifier.</p>
     */
    inline RequestedServiceQuotaChange& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The service identifier.</p>
     */
    inline RequestedServiceQuotaChange& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The service identifier.</p>
     */
    inline RequestedServiceQuotaChange& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The service name.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The service name.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The service name.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The service name.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The service name.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The service name.</p>
     */
    inline RequestedServiceQuotaChange& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The service name.</p>
     */
    inline RequestedServiceQuotaChange& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The service name.</p>
     */
    inline RequestedServiceQuotaChange& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The quota identifier.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>The quota identifier.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>The quota identifier.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>The quota identifier.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>The quota identifier.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>The quota identifier.</p>
     */
    inline RequestedServiceQuotaChange& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>The quota identifier.</p>
     */
    inline RequestedServiceQuotaChange& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>The quota identifier.</p>
     */
    inline RequestedServiceQuotaChange& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>The quota name.</p>
     */
    inline const Aws::String& GetQuotaName() const{ return m_quotaName; }

    /**
     * <p>The quota name.</p>
     */
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }

    /**
     * <p>The quota name.</p>
     */
    inline void SetQuotaName(const Aws::String& value) { m_quotaNameHasBeenSet = true; m_quotaName = value; }

    /**
     * <p>The quota name.</p>
     */
    inline void SetQuotaName(Aws::String&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::move(value); }

    /**
     * <p>The quota name.</p>
     */
    inline void SetQuotaName(const char* value) { m_quotaNameHasBeenSet = true; m_quotaName.assign(value); }

    /**
     * <p>The quota name.</p>
     */
    inline RequestedServiceQuotaChange& WithQuotaName(const Aws::String& value) { SetQuotaName(value); return *this;}

    /**
     * <p>The quota name.</p>
     */
    inline RequestedServiceQuotaChange& WithQuotaName(Aws::String&& value) { SetQuotaName(std::move(value)); return *this;}

    /**
     * <p>The quota name.</p>
     */
    inline RequestedServiceQuotaChange& WithQuotaName(const char* value) { SetQuotaName(value); return *this;}


    /**
     * <p>The new, increased value for the quota.</p>
     */
    inline double GetDesiredValue() const{ return m_desiredValue; }

    /**
     * <p>The new, increased value for the quota.</p>
     */
    inline bool DesiredValueHasBeenSet() const { return m_desiredValueHasBeenSet; }

    /**
     * <p>The new, increased value for the quota.</p>
     */
    inline void SetDesiredValue(double value) { m_desiredValueHasBeenSet = true; m_desiredValue = value; }

    /**
     * <p>The new, increased value for the quota.</p>
     */
    inline RequestedServiceQuotaChange& WithDesiredValue(double value) { SetDesiredValue(value); return *this;}


    /**
     * <p>The state of the quota increase request.</p>
     */
    inline const RequestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of the quota increase request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The state of the quota increase request.</p>
     */
    inline void SetStatus(const RequestStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The state of the quota increase request.</p>
     */
    inline void SetStatus(RequestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The state of the quota increase request.</p>
     */
    inline RequestedServiceQuotaChange& WithStatus(const RequestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the quota increase request.</p>
     */
    inline RequestedServiceQuotaChange& WithStatus(RequestStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when the quota increase request was received and the case
     * ID was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date and time when the quota increase request was received and the case
     * ID was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date and time when the quota increase request was received and the case
     * ID was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time when the quota increase request was received and the case
     * ID was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date and time when the quota increase request was received and the case
     * ID was created.</p>
     */
    inline RequestedServiceQuotaChange& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time when the quota increase request was received and the case
     * ID was created.</p>
     */
    inline RequestedServiceQuotaChange& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The date and time of the most recent change.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The date and time of the most recent change.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The date and time of the most recent change.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The date and time of the most recent change.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The date and time of the most recent change.</p>
     */
    inline RequestedServiceQuotaChange& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The date and time of the most recent change.</p>
     */
    inline RequestedServiceQuotaChange& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The IAM identity of the requester.</p>
     */
    inline const Aws::String& GetRequester() const{ return m_requester; }

    /**
     * <p>The IAM identity of the requester.</p>
     */
    inline bool RequesterHasBeenSet() const { return m_requesterHasBeenSet; }

    /**
     * <p>The IAM identity of the requester.</p>
     */
    inline void SetRequester(const Aws::String& value) { m_requesterHasBeenSet = true; m_requester = value; }

    /**
     * <p>The IAM identity of the requester.</p>
     */
    inline void SetRequester(Aws::String&& value) { m_requesterHasBeenSet = true; m_requester = std::move(value); }

    /**
     * <p>The IAM identity of the requester.</p>
     */
    inline void SetRequester(const char* value) { m_requesterHasBeenSet = true; m_requester.assign(value); }

    /**
     * <p>The IAM identity of the requester.</p>
     */
    inline RequestedServiceQuotaChange& WithRequester(const Aws::String& value) { SetRequester(value); return *this;}

    /**
     * <p>The IAM identity of the requester.</p>
     */
    inline RequestedServiceQuotaChange& WithRequester(Aws::String&& value) { SetRequester(std::move(value)); return *this;}

    /**
     * <p>The IAM identity of the requester.</p>
     */
    inline RequestedServiceQuotaChange& WithRequester(const char* value) { SetRequester(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline const Aws::String& GetQuotaArn() const{ return m_quotaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline bool QuotaArnHasBeenSet() const { return m_quotaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline void SetQuotaArn(const Aws::String& value) { m_quotaArnHasBeenSet = true; m_quotaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline void SetQuotaArn(Aws::String&& value) { m_quotaArnHasBeenSet = true; m_quotaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline void SetQuotaArn(const char* value) { m_quotaArnHasBeenSet = true; m_quotaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline RequestedServiceQuotaChange& WithQuotaArn(const Aws::String& value) { SetQuotaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline RequestedServiceQuotaChange& WithQuotaArn(Aws::String&& value) { SetQuotaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline RequestedServiceQuotaChange& WithQuotaArn(const char* value) { SetQuotaArn(value); return *this;}


    /**
     * <p>Indicates whether the quota is global.</p>
     */
    inline bool GetGlobalQuota() const{ return m_globalQuota; }

    /**
     * <p>Indicates whether the quota is global.</p>
     */
    inline bool GlobalQuotaHasBeenSet() const { return m_globalQuotaHasBeenSet; }

    /**
     * <p>Indicates whether the quota is global.</p>
     */
    inline void SetGlobalQuota(bool value) { m_globalQuotaHasBeenSet = true; m_globalQuota = value; }

    /**
     * <p>Indicates whether the quota is global.</p>
     */
    inline RequestedServiceQuotaChange& WithGlobalQuota(bool value) { SetGlobalQuota(value); return *this;}


    /**
     * <p>The unit of measurement.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of measurement.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of measurement.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of measurement.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of measurement.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of measurement.</p>
     */
    inline RequestedServiceQuotaChange& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measurement.</p>
     */
    inline RequestedServiceQuotaChange& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of measurement.</p>
     */
    inline RequestedServiceQuotaChange& WithUnit(const char* value) { SetUnit(value); return *this;}

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
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

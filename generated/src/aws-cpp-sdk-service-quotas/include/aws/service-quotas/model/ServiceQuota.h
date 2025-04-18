/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/model/MetricInfo.h>
#include <aws/service-quotas/model/QuotaPeriod.h>
#include <aws/service-quotas/model/ErrorReason.h>
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
   * <p>Information about a quota.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ServiceQuota">AWS
   * API Reference</a></p>
   */
  class ServiceQuota
  {
  public:
    AWS_SERVICEQUOTAS_API ServiceQuota() = default;
    AWS_SERVICEQUOTAS_API ServiceQuota(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API ServiceQuota& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    ServiceQuota& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
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
    ServiceQuota& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
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
    ServiceQuota& WithQuotaArn(QuotaArnT&& value) { SetQuotaArn(std::forward<QuotaArnT>(value)); return *this;}
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
    ServiceQuota& WithQuotaCode(QuotaCodeT&& value) { SetQuotaCode(std::forward<QuotaCodeT>(value)); return *this;}
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
    ServiceQuota& WithQuotaName(QuotaNameT&& value) { SetQuotaName(std::forward<QuotaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota value.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline ServiceQuota& WithValue(double value) { SetValue(value); return *this;}
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
    ServiceQuota& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the quota value can be increased.</p>
     */
    inline bool GetAdjustable() const { return m_adjustable; }
    inline bool AdjustableHasBeenSet() const { return m_adjustableHasBeenSet; }
    inline void SetAdjustable(bool value) { m_adjustableHasBeenSet = true; m_adjustable = value; }
    inline ServiceQuota& WithAdjustable(bool value) { SetAdjustable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the quota is global.</p>
     */
    inline bool GetGlobalQuota() const { return m_globalQuota; }
    inline bool GlobalQuotaHasBeenSet() const { return m_globalQuotaHasBeenSet; }
    inline void SetGlobalQuota(bool value) { m_globalQuotaHasBeenSet = true; m_globalQuota = value; }
    inline ServiceQuota& WithGlobalQuota(bool value) { SetGlobalQuota(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the measurement.</p>
     */
    inline const MetricInfo& GetUsageMetric() const { return m_usageMetric; }
    inline bool UsageMetricHasBeenSet() const { return m_usageMetricHasBeenSet; }
    template<typename UsageMetricT = MetricInfo>
    void SetUsageMetric(UsageMetricT&& value) { m_usageMetricHasBeenSet = true; m_usageMetric = std::forward<UsageMetricT>(value); }
    template<typename UsageMetricT = MetricInfo>
    ServiceQuota& WithUsageMetric(UsageMetricT&& value) { SetUsageMetric(std::forward<UsageMetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time.</p>
     */
    inline const QuotaPeriod& GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    template<typename PeriodT = QuotaPeriod>
    void SetPeriod(PeriodT&& value) { m_periodHasBeenSet = true; m_period = std::forward<PeriodT>(value); }
    template<typename PeriodT = QuotaPeriod>
    ServiceQuota& WithPeriod(PeriodT&& value) { SetPeriod(std::forward<PeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code and error reason.</p>
     */
    inline const ErrorReason& GetErrorReason() const { return m_errorReason; }
    inline bool ErrorReasonHasBeenSet() const { return m_errorReasonHasBeenSet; }
    template<typename ErrorReasonT = ErrorReason>
    void SetErrorReason(ErrorReasonT&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::forward<ErrorReasonT>(value); }
    template<typename ErrorReasonT = ErrorReason>
    ServiceQuota& WithErrorReason(ErrorReasonT&& value) { SetErrorReason(std::forward<ErrorReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response to return applied quota values for the
     * <code>ACCOUNT</code>, <code>RESOURCE</code>, or <code>ALL</code> levels.
     * <code>ACCOUNT</code> is the default.</p>
     */
    inline AppliedLevelEnum GetQuotaAppliedAtLevel() const { return m_quotaAppliedAtLevel; }
    inline bool QuotaAppliedAtLevelHasBeenSet() const { return m_quotaAppliedAtLevelHasBeenSet; }
    inline void SetQuotaAppliedAtLevel(AppliedLevelEnum value) { m_quotaAppliedAtLevelHasBeenSet = true; m_quotaAppliedAtLevel = value; }
    inline ServiceQuota& WithQuotaAppliedAtLevel(AppliedLevelEnum value) { SetQuotaAppliedAtLevel(value); return *this;}
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
    ServiceQuota& WithQuotaContext(QuotaContextT&& value) { SetQuotaContext(std::forward<QuotaContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota description. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ServiceQuota& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_quotaArn;
    bool m_quotaArnHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    Aws::String m_quotaName;
    bool m_quotaNameHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    bool m_adjustable{false};
    bool m_adjustableHasBeenSet = false;

    bool m_globalQuota{false};
    bool m_globalQuotaHasBeenSet = false;

    MetricInfo m_usageMetric;
    bool m_usageMetricHasBeenSet = false;

    QuotaPeriod m_period;
    bool m_periodHasBeenSet = false;

    ErrorReason m_errorReason;
    bool m_errorReasonHasBeenSet = false;

    AppliedLevelEnum m_quotaAppliedAtLevel{AppliedLevelEnum::NOT_SET};
    bool m_quotaAppliedAtLevelHasBeenSet = false;

    QuotaContextInfo m_quotaContext;
    bool m_quotaContextHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

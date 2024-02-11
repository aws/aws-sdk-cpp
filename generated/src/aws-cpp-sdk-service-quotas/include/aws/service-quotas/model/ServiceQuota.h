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
    AWS_SERVICEQUOTAS_API ServiceQuota();
    AWS_SERVICEQUOTAS_API ServiceQuota(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API ServiceQuota& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline ServiceQuota& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline ServiceQuota& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline ServiceQuota& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>Specifies the service name.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>Specifies the service name.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>Specifies the service name.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>Specifies the service name.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>Specifies the service name.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>Specifies the service name.</p>
     */
    inline ServiceQuota& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>Specifies the service name.</p>
     */
    inline ServiceQuota& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>Specifies the service name.</p>
     */
    inline ServiceQuota& WithServiceName(const char* value) { SetServiceName(value); return *this;}


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
    inline ServiceQuota& WithQuotaArn(const Aws::String& value) { SetQuotaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline ServiceQuota& WithQuotaArn(Aws::String&& value) { SetQuotaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the quota.</p>
     */
    inline ServiceQuota& WithQuotaArn(const char* value) { SetQuotaArn(value); return *this;}


    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline ServiceQuota& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline ServiceQuota& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>Specifies the quota identifier. To find the quota code for a specific quota,
     * use the <a>ListServiceQuotas</a> operation, and look for the
     * <code>QuotaCode</code> response in the output for the quota you want.</p>
     */
    inline ServiceQuota& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>Specifies the quota name.</p>
     */
    inline const Aws::String& GetQuotaName() const{ return m_quotaName; }

    /**
     * <p>Specifies the quota name.</p>
     */
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }

    /**
     * <p>Specifies the quota name.</p>
     */
    inline void SetQuotaName(const Aws::String& value) { m_quotaNameHasBeenSet = true; m_quotaName = value; }

    /**
     * <p>Specifies the quota name.</p>
     */
    inline void SetQuotaName(Aws::String&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::move(value); }

    /**
     * <p>Specifies the quota name.</p>
     */
    inline void SetQuotaName(const char* value) { m_quotaNameHasBeenSet = true; m_quotaName.assign(value); }

    /**
     * <p>Specifies the quota name.</p>
     */
    inline ServiceQuota& WithQuotaName(const Aws::String& value) { SetQuotaName(value); return *this;}

    /**
     * <p>Specifies the quota name.</p>
     */
    inline ServiceQuota& WithQuotaName(Aws::String&& value) { SetQuotaName(std::move(value)); return *this;}

    /**
     * <p>Specifies the quota name.</p>
     */
    inline ServiceQuota& WithQuotaName(const char* value) { SetQuotaName(value); return *this;}


    /**
     * <p>The quota value.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The quota value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The quota value.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The quota value.</p>
     */
    inline ServiceQuota& WithValue(double value) { SetValue(value); return *this;}


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
    inline ServiceQuota& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measurement.</p>
     */
    inline ServiceQuota& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of measurement.</p>
     */
    inline ServiceQuota& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>Indicates whether the quota value can be increased.</p>
     */
    inline bool GetAdjustable() const{ return m_adjustable; }

    /**
     * <p>Indicates whether the quota value can be increased.</p>
     */
    inline bool AdjustableHasBeenSet() const { return m_adjustableHasBeenSet; }

    /**
     * <p>Indicates whether the quota value can be increased.</p>
     */
    inline void SetAdjustable(bool value) { m_adjustableHasBeenSet = true; m_adjustable = value; }

    /**
     * <p>Indicates whether the quota value can be increased.</p>
     */
    inline ServiceQuota& WithAdjustable(bool value) { SetAdjustable(value); return *this;}


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
    inline ServiceQuota& WithGlobalQuota(bool value) { SetGlobalQuota(value); return *this;}


    /**
     * <p>Information about the measurement.</p>
     */
    inline const MetricInfo& GetUsageMetric() const{ return m_usageMetric; }

    /**
     * <p>Information about the measurement.</p>
     */
    inline bool UsageMetricHasBeenSet() const { return m_usageMetricHasBeenSet; }

    /**
     * <p>Information about the measurement.</p>
     */
    inline void SetUsageMetric(const MetricInfo& value) { m_usageMetricHasBeenSet = true; m_usageMetric = value; }

    /**
     * <p>Information about the measurement.</p>
     */
    inline void SetUsageMetric(MetricInfo&& value) { m_usageMetricHasBeenSet = true; m_usageMetric = std::move(value); }

    /**
     * <p>Information about the measurement.</p>
     */
    inline ServiceQuota& WithUsageMetric(const MetricInfo& value) { SetUsageMetric(value); return *this;}

    /**
     * <p>Information about the measurement.</p>
     */
    inline ServiceQuota& WithUsageMetric(MetricInfo&& value) { SetUsageMetric(std::move(value)); return *this;}


    /**
     * <p>The period of time.</p>
     */
    inline const QuotaPeriod& GetPeriod() const{ return m_period; }

    /**
     * <p>The period of time.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The period of time.</p>
     */
    inline void SetPeriod(const QuotaPeriod& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period of time.</p>
     */
    inline void SetPeriod(QuotaPeriod&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The period of time.</p>
     */
    inline ServiceQuota& WithPeriod(const QuotaPeriod& value) { SetPeriod(value); return *this;}

    /**
     * <p>The period of time.</p>
     */
    inline ServiceQuota& WithPeriod(QuotaPeriod&& value) { SetPeriod(std::move(value)); return *this;}


    /**
     * <p>The error code and error reason.</p>
     */
    inline const ErrorReason& GetErrorReason() const{ return m_errorReason; }

    /**
     * <p>The error code and error reason.</p>
     */
    inline bool ErrorReasonHasBeenSet() const { return m_errorReasonHasBeenSet; }

    /**
     * <p>The error code and error reason.</p>
     */
    inline void SetErrorReason(const ErrorReason& value) { m_errorReasonHasBeenSet = true; m_errorReason = value; }

    /**
     * <p>The error code and error reason.</p>
     */
    inline void SetErrorReason(ErrorReason&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::move(value); }

    /**
     * <p>The error code and error reason.</p>
     */
    inline ServiceQuota& WithErrorReason(const ErrorReason& value) { SetErrorReason(value); return *this;}

    /**
     * <p>The error code and error reason.</p>
     */
    inline ServiceQuota& WithErrorReason(ErrorReason&& value) { SetErrorReason(std::move(value)); return *this;}


    /**
     * <p>Specifies at which level of granularity that the quota value is applied.</p>
     */
    inline const AppliedLevelEnum& GetQuotaAppliedAtLevel() const{ return m_quotaAppliedAtLevel; }

    /**
     * <p>Specifies at which level of granularity that the quota value is applied.</p>
     */
    inline bool QuotaAppliedAtLevelHasBeenSet() const { return m_quotaAppliedAtLevelHasBeenSet; }

    /**
     * <p>Specifies at which level of granularity that the quota value is applied.</p>
     */
    inline void SetQuotaAppliedAtLevel(const AppliedLevelEnum& value) { m_quotaAppliedAtLevelHasBeenSet = true; m_quotaAppliedAtLevel = value; }

    /**
     * <p>Specifies at which level of granularity that the quota value is applied.</p>
     */
    inline void SetQuotaAppliedAtLevel(AppliedLevelEnum&& value) { m_quotaAppliedAtLevelHasBeenSet = true; m_quotaAppliedAtLevel = std::move(value); }

    /**
     * <p>Specifies at which level of granularity that the quota value is applied.</p>
     */
    inline ServiceQuota& WithQuotaAppliedAtLevel(const AppliedLevelEnum& value) { SetQuotaAppliedAtLevel(value); return *this;}

    /**
     * <p>Specifies at which level of granularity that the quota value is applied.</p>
     */
    inline ServiceQuota& WithQuotaAppliedAtLevel(AppliedLevelEnum&& value) { SetQuotaAppliedAtLevel(std::move(value)); return *this;}


    /**
     * <p>The context for this service quota.</p>
     */
    inline const QuotaContextInfo& GetQuotaContext() const{ return m_quotaContext; }

    /**
     * <p>The context for this service quota.</p>
     */
    inline bool QuotaContextHasBeenSet() const { return m_quotaContextHasBeenSet; }

    /**
     * <p>The context for this service quota.</p>
     */
    inline void SetQuotaContext(const QuotaContextInfo& value) { m_quotaContextHasBeenSet = true; m_quotaContext = value; }

    /**
     * <p>The context for this service quota.</p>
     */
    inline void SetQuotaContext(QuotaContextInfo&& value) { m_quotaContextHasBeenSet = true; m_quotaContext = std::move(value); }

    /**
     * <p>The context for this service quota.</p>
     */
    inline ServiceQuota& WithQuotaContext(const QuotaContextInfo& value) { SetQuotaContext(value); return *this;}

    /**
     * <p>The context for this service quota.</p>
     */
    inline ServiceQuota& WithQuotaContext(QuotaContextInfo&& value) { SetQuotaContext(std::move(value)); return *this;}

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

    double m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    bool m_adjustable;
    bool m_adjustableHasBeenSet = false;

    bool m_globalQuota;
    bool m_globalQuotaHasBeenSet = false;

    MetricInfo m_usageMetric;
    bool m_usageMetricHasBeenSet = false;

    QuotaPeriod m_period;
    bool m_periodHasBeenSet = false;

    ErrorReason m_errorReason;
    bool m_errorReasonHasBeenSet = false;

    AppliedLevelEnum m_quotaAppliedAtLevel;
    bool m_quotaAppliedAtLevelHasBeenSet = false;

    QuotaContextInfo m_quotaContext;
    bool m_quotaContextHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

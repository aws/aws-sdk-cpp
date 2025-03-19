/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ServiceQuotaIncreaseRequestInTemplate">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaIncreaseRequestInTemplate
  {
  public:
    AWS_SERVICEQUOTAS_API ServiceQuotaIncreaseRequestInTemplate() = default;
    AWS_SERVICEQUOTAS_API ServiceQuotaIncreaseRequestInTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API ServiceQuotaIncreaseRequestInTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ServiceQuotaIncreaseRequestInTemplate& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
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
    ServiceQuotaIncreaseRequestInTemplate& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
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
    ServiceQuotaIncreaseRequestInTemplate& WithQuotaCode(QuotaCodeT&& value) { SetQuotaCode(std::forward<QuotaCodeT>(value)); return *this;}
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
    ServiceQuotaIncreaseRequestInTemplate& WithQuotaName(QuotaNameT&& value) { SetQuotaName(std::forward<QuotaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new, increased value of the quota.</p>
     */
    inline double GetDesiredValue() const { return m_desiredValue; }
    inline bool DesiredValueHasBeenSet() const { return m_desiredValueHasBeenSet; }
    inline void SetDesiredValue(double value) { m_desiredValueHasBeenSet = true; m_desiredValue = value; }
    inline ServiceQuotaIncreaseRequestInTemplate& WithDesiredValue(double value) { SetDesiredValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    ServiceQuotaIncreaseRequestInTemplate& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
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
    ServiceQuotaIncreaseRequestInTemplate& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the quota is global.</p>
     */
    inline bool GetGlobalQuota() const { return m_globalQuota; }
    inline bool GlobalQuotaHasBeenSet() const { return m_globalQuotaHasBeenSet; }
    inline void SetGlobalQuota(bool value) { m_globalQuotaHasBeenSet = true; m_globalQuota = value; }
    inline ServiceQuotaIncreaseRequestInTemplate& WithGlobalQuota(bool value) { SetGlobalQuota(value); return *this;}
    ///@}
  private:

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

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    bool m_globalQuota{false};
    bool m_globalQuotaHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

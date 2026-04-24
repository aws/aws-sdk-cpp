/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ServiceQuotas {
namespace Model {

/**
 * <p>Information about a quota's utilization, including the quota code, service
 * information, current usage, and applied limits.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/QuotaUtilizationInfo">AWS
 * API Reference</a></p>
 */
class QuotaUtilizationInfo {
 public:
  AWS_SERVICEQUOTAS_API QuotaUtilizationInfo() = default;
  AWS_SERVICEQUOTAS_API QuotaUtilizationInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_SERVICEQUOTAS_API QuotaUtilizationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The quota identifier.</p>
   */
  inline const Aws::String& GetQuotaCode() const { return m_quotaCode; }
  inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
  template <typename QuotaCodeT = Aws::String>
  void SetQuotaCode(QuotaCodeT&& value) {
    m_quotaCodeHasBeenSet = true;
    m_quotaCode = std::forward<QuotaCodeT>(value);
  }
  template <typename QuotaCodeT = Aws::String>
  QuotaUtilizationInfo& WithQuotaCode(QuotaCodeT&& value) {
    SetQuotaCode(std::forward<QuotaCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service identifier.</p>
   */
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  QuotaUtilizationInfo& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The quota name.</p>
   */
  inline const Aws::String& GetQuotaName() const { return m_quotaName; }
  inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }
  template <typename QuotaNameT = Aws::String>
  void SetQuotaName(QuotaNameT&& value) {
    m_quotaNameHasBeenSet = true;
    m_quotaName = std::forward<QuotaNameT>(value);
  }
  template <typename QuotaNameT = Aws::String>
  QuotaUtilizationInfo& WithQuotaName(QuotaNameT&& value) {
    SetQuotaName(std::forward<QuotaNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace of the metric used to track quota usage.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  QuotaUtilizationInfo& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The utilization percentage of the quota, calculated as (current usage /
   * applied value) × 100. Values range from 0.0 to 100.0 or higher if usage exceeds
   * the quota limit.</p>
   */
  inline double GetUtilization() const { return m_utilization; }
  inline bool UtilizationHasBeenSet() const { return m_utilizationHasBeenSet; }
  inline void SetUtilization(double value) {
    m_utilizationHasBeenSet = true;
    m_utilization = value;
  }
  inline QuotaUtilizationInfo& WithUtilization(double value) {
    SetUtilization(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default value of the quota.</p>
   */
  inline double GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  inline void SetDefaultValue(double value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = value;
  }
  inline QuotaUtilizationInfo& WithDefaultValue(double value) {
    SetDefaultValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The applied value of the quota, which may be higher than the default value if
   * a quota increase has been requested and approved.</p>
   */
  inline double GetAppliedValue() const { return m_appliedValue; }
  inline bool AppliedValueHasBeenSet() const { return m_appliedValueHasBeenSet; }
  inline void SetAppliedValue(double value) {
    m_appliedValueHasBeenSet = true;
    m_appliedValue = value;
  }
  inline QuotaUtilizationInfo& WithAppliedValue(double value) {
    SetAppliedValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service name.</p>
   */
  inline const Aws::String& GetServiceName() const { return m_serviceName; }
  inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
  template <typename ServiceNameT = Aws::String>
  void SetServiceName(ServiceNameT&& value) {
    m_serviceNameHasBeenSet = true;
    m_serviceName = std::forward<ServiceNameT>(value);
  }
  template <typename ServiceNameT = Aws::String>
  QuotaUtilizationInfo& WithServiceName(ServiceNameT&& value) {
    SetServiceName(std::forward<ServiceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the quota value can be increased.</p>
   */
  inline bool GetAdjustable() const { return m_adjustable; }
  inline bool AdjustableHasBeenSet() const { return m_adjustableHasBeenSet; }
  inline void SetAdjustable(bool value) {
    m_adjustableHasBeenSet = true;
    m_adjustable = value;
  }
  inline QuotaUtilizationInfo& WithAdjustable(bool value) {
    SetAdjustable(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_quotaCode;

  Aws::String m_serviceCode;

  Aws::String m_quotaName;

  Aws::String m_namespace;

  double m_utilization{0.0};

  double m_defaultValue{0.0};

  double m_appliedValue{0.0};

  Aws::String m_serviceName;

  bool m_adjustable{false};
  bool m_quotaCodeHasBeenSet = false;
  bool m_serviceCodeHasBeenSet = false;
  bool m_quotaNameHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_utilizationHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
  bool m_appliedValueHasBeenSet = false;
  bool m_serviceNameHasBeenSet = false;
  bool m_adjustableHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureScope.h>
#include <aws/observabilityadmin/model/AzureTelemetryType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>The telemetry types to collect from a set of Azure resources.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureScopeItem">AWS
 * API Reference</a></p>
 */
class AzureScopeItem {
 public:
  AWS_OBSERVABILITYADMIN_API AzureScopeItem() = default;
  AWS_OBSERVABILITYADMIN_API AzureScopeItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureScopeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The telemetry types to collect.</p>
   */
  inline const Aws::Vector<AzureTelemetryType>& GetTelemetryTypes() const { return m_telemetryTypes; }
  inline bool TelemetryTypesHasBeenSet() const { return m_telemetryTypesHasBeenSet; }
  template <typename TelemetryTypesT = Aws::Vector<AzureTelemetryType>>
  void SetTelemetryTypes(TelemetryTypesT&& value) {
    m_telemetryTypesHasBeenSet = true;
    m_telemetryTypes = std::forward<TelemetryTypesT>(value);
  }
  template <typename TelemetryTypesT = Aws::Vector<AzureTelemetryType>>
  AzureScopeItem& WithTelemetryTypes(TelemetryTypesT&& value) {
    SetTelemetryTypes(std::forward<TelemetryTypesT>(value));
    return *this;
  }
  inline AzureScopeItem& AddTelemetryTypes(AzureTelemetryType value) {
    m_telemetryTypesHasBeenSet = true;
    m_telemetryTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure resources to collect telemetry from.</p>
   */
  inline const AzureScope& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = AzureScope>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = AzureScope>
  AzureScopeItem& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AzureTelemetryType> m_telemetryTypes;

  AzureScope m_scope;
  bool m_telemetryTypesHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorTargetType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {

/**
 * <p>A resource that a performance monitor tracks network performance
 * for.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/PerformanceMonitorTarget">AWS
 * API Reference</a></p>
 */
class PerformanceMonitorTarget {
 public:
  AWS_NETWORKFLOWMONITOR_API PerformanceMonitorTarget() = default;
  AWS_NETWORKFLOWMONITOR_API PerformanceMonitorTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API PerformanceMonitorTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the resource that you want Network Flow Monitor to track network
   * performance for. Specify <code>AWS::EC2::VPC</code>.</p>
   */
  inline PerformanceMonitorTargetType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PerformanceMonitorTargetType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PerformanceMonitorTarget& WithType(PerformanceMonitorTargetType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource that you want Network Flow
   * Monitor to track network performance for.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  PerformanceMonitorTarget& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  PerformanceMonitorTargetType m_type{PerformanceMonitorTargetType::NOT_SET};

  Aws::String m_identifier;
  bool m_typeHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws

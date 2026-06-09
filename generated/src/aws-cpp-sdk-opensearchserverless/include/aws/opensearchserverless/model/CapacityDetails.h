/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/AutoscalingStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchServerless {
namespace Model {

/**
 * <p>Capacity details for an OpenSearch Serverless collection group, including the
 * current capacity and autoscaling status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CapacityDetails">AWS
 * API Reference</a></p>
 */
class CapacityDetails {
 public:
  AWS_OPENSEARCHSERVERLESS_API CapacityDetails() = default;
  AWS_OPENSEARCHSERVERLESS_API CapacityDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API CapacityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current capacity in OpenSearch Compute Units (OCUs).</p>
   */
  inline double GetCapacityInOcu() const { return m_capacityInOcu; }
  inline bool CapacityInOcuHasBeenSet() const { return m_capacityInOcuHasBeenSet; }
  inline void SetCapacityInOcu(double value) {
    m_capacityInOcuHasBeenSet = true;
    m_capacityInOcu = value;
  }
  inline CapacityDetails& WithCapacityInOcu(double value) {
    SetCapacityInOcu(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current autoscaling status for the collection group.</p>
   */
  inline AutoscalingStatus GetAutoscalingStatus() const { return m_autoscalingStatus; }
  inline bool AutoscalingStatusHasBeenSet() const { return m_autoscalingStatusHasBeenSet; }
  inline void SetAutoscalingStatus(AutoscalingStatus value) {
    m_autoscalingStatusHasBeenSet = true;
    m_autoscalingStatus = value;
  }
  inline CapacityDetails& WithAutoscalingStatus(AutoscalingStatus value) {
    SetAutoscalingStatus(value);
    return *this;
  }
  ///@}
 private:
  double m_capacityInOcu{0.0};

  AutoscalingStatus m_autoscalingStatus{AutoscalingStatus::NOT_SET};
  bool m_capacityInOcuHasBeenSet = false;
  bool m_autoscalingStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws

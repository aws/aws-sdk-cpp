/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes the parameters of a no bid module.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/NoBidModuleParameters">AWS
 * API Reference</a></p>
 */
class NoBidModuleParameters {
 public:
  AWS_RTBFABRIC_API NoBidModuleParameters() = default;
  AWS_RTBFABRIC_API NoBidModuleParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API NoBidModuleParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason description.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  NoBidModuleParameters& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason code.</p>
   */
  inline int GetReasonCode() const { return m_reasonCode; }
  inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
  inline void SetReasonCode(int value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = value;
  }
  inline NoBidModuleParameters& WithReasonCode(int value) {
    SetReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pass through percentage.</p>
   */
  inline double GetPassThroughPercentage() const { return m_passThroughPercentage; }
  inline bool PassThroughPercentageHasBeenSet() const { return m_passThroughPercentageHasBeenSet; }
  inline void SetPassThroughPercentage(double value) {
    m_passThroughPercentageHasBeenSet = true;
    m_passThroughPercentage = value;
  }
  inline NoBidModuleParameters& WithPassThroughPercentage(double value) {
    SetPassThroughPercentage(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_reason;
  bool m_reasonHasBeenSet = false;

  int m_reasonCode{0};
  bool m_reasonCodeHasBeenSet = false;

  double m_passThroughPercentage{0.0};
  bool m_passThroughPercentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws

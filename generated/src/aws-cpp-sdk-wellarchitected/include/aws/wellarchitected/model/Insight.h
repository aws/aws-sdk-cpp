/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>An insight describing a usage pattern and the signals detected.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Insight">AWS
 * API Reference</a></p>
 */
class Insight {
 public:
  AWS_WELLARCHITECTED_API Insight() = default;
  AWS_WELLARCHITECTED_API Insight(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the usage pattern.</p>
   */
  inline const Aws::String& GetUsagePattern() const { return m_usagePattern; }
  inline bool UsagePatternHasBeenSet() const { return m_usagePatternHasBeenSet; }
  template <typename UsagePatternT = Aws::String>
  void SetUsagePattern(UsagePatternT&& value) {
    m_usagePatternHasBeenSet = true;
    m_usagePattern = std::forward<UsagePatternT>(value);
  }
  template <typename UsagePatternT = Aws::String>
  Insight& WithUsagePattern(UsagePatternT&& value) {
    SetUsagePattern(std::forward<UsagePatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the signals detected.</p>
   */
  inline const Aws::String& GetSignalsDetected() const { return m_signalsDetected; }
  inline bool SignalsDetectedHasBeenSet() const { return m_signalsDetectedHasBeenSet; }
  template <typename SignalsDetectedT = Aws::String>
  void SetSignalsDetected(SignalsDetectedT&& value) {
    m_signalsDetectedHasBeenSet = true;
    m_signalsDetected = std::forward<SignalsDetectedT>(value);
  }
  template <typename SignalsDetectedT = Aws::String>
  Insight& WithSignalsDetected(SignalsDetectedT&& value) {
    SetSignalsDetected(std::forward<SignalsDetectedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_usagePattern;

  Aws::String m_signalsDetected;
  bool m_usagePatternHasBeenSet = false;
  bool m_signalsDetectedHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws

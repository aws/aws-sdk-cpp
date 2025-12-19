/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/EmailAddressInsightsConfidenceVerdict.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {

/**
 * <p>Contains the overall validation verdict for an email address.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/EmailAddressInsightsVerdict">AWS
 * API Reference</a></p>
 */
class EmailAddressInsightsVerdict {
 public:
  AWS_SESV2_API EmailAddressInsightsVerdict() = default;
  AWS_SESV2_API EmailAddressInsightsVerdict(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API EmailAddressInsightsVerdict& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The confidence level of the validation verdict.</p>
   */
  inline EmailAddressInsightsConfidenceVerdict GetConfidenceVerdict() const { return m_confidenceVerdict; }
  inline bool ConfidenceVerdictHasBeenSet() const { return m_confidenceVerdictHasBeenSet; }
  inline void SetConfidenceVerdict(EmailAddressInsightsConfidenceVerdict value) {
    m_confidenceVerdictHasBeenSet = true;
    m_confidenceVerdict = value;
  }
  inline EmailAddressInsightsVerdict& WithConfidenceVerdict(EmailAddressInsightsConfidenceVerdict value) {
    SetConfidenceVerdict(value);
    return *this;
  }
  ///@}
 private:
  EmailAddressInsightsConfidenceVerdict m_confidenceVerdict{EmailAddressInsightsConfidenceVerdict::NOT_SET};
  bool m_confidenceVerdictHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws

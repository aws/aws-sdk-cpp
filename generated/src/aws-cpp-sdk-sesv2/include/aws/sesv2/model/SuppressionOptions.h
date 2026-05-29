/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SuppressionListReason.h>
#include <aws/sesv2/model/SuppressionListScope.h>
#include <aws/sesv2/model/SuppressionValidationOptions.h>

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
 * <p>An object that contains information about the suppression list preferences
 * for your account or for a specific tenant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressionOptions">AWS
 * API Reference</a></p>
 */
class SuppressionOptions {
 public:
  AWS_SESV2_API SuppressionOptions() = default;
  AWS_SESV2_API SuppressionOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API SuppressionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list that contains the reasons that email addresses are automatically added
   * to the suppression list for your account or for a specific tenant. This list can
   * contain any or all of the following:</p> <ul> <li> <p> <code>COMPLAINT</code> –
   * Amazon SES adds an email address to the suppression list for your account or for
   * a specific tenant when a message sent to that address results in a
   * complaint.</p> </li> <li> <p> <code>BOUNCE</code> – Amazon SES adds an email
   * address to the suppression list for your account or for a specific tenant when a
   * message sent to that address results in a hard bounce.</p> </li> </ul>
   */
  inline const Aws::Vector<SuppressionListReason>& GetSuppressedReasons() const { return m_suppressedReasons; }
  inline bool SuppressedReasonsHasBeenSet() const { return m_suppressedReasonsHasBeenSet; }
  template <typename SuppressedReasonsT = Aws::Vector<SuppressionListReason>>
  void SetSuppressedReasons(SuppressedReasonsT&& value) {
    m_suppressedReasonsHasBeenSet = true;
    m_suppressedReasons = std::forward<SuppressedReasonsT>(value);
  }
  template <typename SuppressedReasonsT = Aws::Vector<SuppressionListReason>>
  SuppressionOptions& WithSuppressedReasons(SuppressedReasonsT&& value) {
    SetSuppressedReasons(std::forward<SuppressedReasonsT>(value));
    return *this;
  }
  inline SuppressionOptions& AddSuppressedReasons(SuppressionListReason value) {
    m_suppressedReasonsHasBeenSet = true;
    m_suppressedReasons.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The suppression scope for the configuration set. This overrides the tenant or
   * account suppression scope for emails sent using this configuration set. Can be
   * one of the following:</p> <ul> <li> <p> <code>TENANT</code> – Use the tenant's
   * suppression list.</p> </li> <li> <p> <code>ACCOUNT</code> – Use the
   * account-level suppression list.</p> </li> </ul>
   */
  inline SuppressionListScope GetSuppressionScope() const { return m_suppressionScope; }
  inline bool SuppressionScopeHasBeenSet() const { return m_suppressionScopeHasBeenSet; }
  inline void SetSuppressionScope(SuppressionListScope value) {
    m_suppressionScopeHasBeenSet = true;
    m_suppressionScope = value;
  }
  inline SuppressionOptions& WithSuppressionScope(SuppressionListScope value) {
    SetSuppressionScope(value);
    return *this;
  }
  ///@}

  ///@{

  inline const SuppressionValidationOptions& GetValidationOptions() const { return m_validationOptions; }
  inline bool ValidationOptionsHasBeenSet() const { return m_validationOptionsHasBeenSet; }
  template <typename ValidationOptionsT = SuppressionValidationOptions>
  void SetValidationOptions(ValidationOptionsT&& value) {
    m_validationOptionsHasBeenSet = true;
    m_validationOptions = std::forward<ValidationOptionsT>(value);
  }
  template <typename ValidationOptionsT = SuppressionValidationOptions>
  SuppressionOptions& WithValidationOptions(ValidationOptionsT&& value) {
    SetValidationOptions(std::forward<ValidationOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SuppressionListReason> m_suppressedReasons;

  SuppressionListScope m_suppressionScope{SuppressionListScope::NOT_SET};

  SuppressionValidationOptions m_validationOptions;
  bool m_suppressedReasonsHasBeenSet = false;
  bool m_suppressionScopeHasBeenSet = false;
  bool m_validationOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws

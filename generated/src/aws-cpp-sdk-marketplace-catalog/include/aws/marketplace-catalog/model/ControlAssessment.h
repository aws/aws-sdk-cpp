/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ControlAssessmentResult.h>
#include <aws/marketplace-catalog/model/ControlError.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>The result of evaluating a single control as part of an
 * assessment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ControlAssessment">AWS
 * API Reference</a></p>
 */
class ControlAssessment {
 public:
  AWS_MARKETPLACECATALOG_API ControlAssessment() = default;
  AWS_MARKETPLACECATALOG_API ControlAssessment(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ControlAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID of the control that was evaluated.</p>
   */
  inline const Aws::String& GetControlId() const { return m_controlId; }
  inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }
  template <typename ControlIdT = Aws::String>
  void SetControlId(ControlIdT&& value) {
    m_controlIdHasBeenSet = true;
    m_controlId = std::forward<ControlIdT>(value);
  }
  template <typename ControlIdT = Aws::String>
  ControlAssessment& WithControlId(ControlIdT&& value) {
    SetControlId(std::forward<ControlIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of the control evaluation.</p>
   */
  inline ControlAssessmentResult GetControlAssessmentResult() const { return m_controlAssessmentResult; }
  inline bool ControlAssessmentResultHasBeenSet() const { return m_controlAssessmentResultHasBeenSet; }
  inline void SetControlAssessmentResult(ControlAssessmentResult value) {
    m_controlAssessmentResultHasBeenSet = true;
    m_controlAssessmentResult = value;
  }
  inline ControlAssessment& WithControlAssessmentResult(ControlAssessmentResult value) {
    SetControlAssessmentResult(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of <code>ControlError</code> objects associated with the control
   * evaluation.</p>
   */
  inline const Aws::Vector<ControlError>& GetErrors() const { return m_errors; }
  inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
  template <typename ErrorsT = Aws::Vector<ControlError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<ControlError>>
  ControlAssessment& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = ControlError>
  ControlAssessment& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_controlId;

  ControlAssessmentResult m_controlAssessmentResult{ControlAssessmentResult::NOT_SET};

  Aws::Vector<ControlError> m_errors;
  bool m_controlIdHasBeenSet = false;
  bool m_controlAssessmentResultHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws

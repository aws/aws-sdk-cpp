/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>A step in the remediation guidance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationStep">AWS
 * API Reference</a></p>
 */
class RemediationStep {
 public:
  AWS_SECURITYHUB_API RemediationStep() = default;
  AWS_SECURITYHUB_API RemediationStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The phase of the remediation plan that this step belongs to (for example,
   * <code>FIX</code>).</p>
   */
  inline const Aws::String& GetPhase() const { return m_phase; }
  inline bool PhaseHasBeenSet() const { return m_phaseHasBeenSet; }
  template <typename PhaseT = Aws::String>
  void SetPhase(PhaseT&& value) {
    m_phaseHasBeenSet = true;
    m_phase = std::forward<PhaseT>(value);
  }
  template <typename PhaseT = Aws::String>
  RemediationStep& WithPhase(PhaseT&& value) {
    SetPhase(std::forward<PhaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of what the step does.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RemediationStep& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Which service this step is performed in.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  RemediationStep& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to be taken for this step.</p>
   */
  inline const Aws::String& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Aws::String>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Aws::String>
  RemediationStep& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logic behind the existence of this step.</p>
   */
  inline const Aws::String& GetLogic() const { return m_logic; }
  inline bool LogicHasBeenSet() const { return m_logicHasBeenSet; }
  template <typename LogicT = Aws::String>
  void SetLogic(LogicT&& value) {
    m_logicHasBeenSet = true;
    m_logic = std::forward<LogicT>(value);
  }
  template <typename LogicT = Aws::String>
  RemediationStep& WithLogic(LogicT&& value) {
    SetLogic(std::forward<LogicT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inverse of the step, to be used if the step needs to be rolled back.</p>
   */
  inline const Aws::String& GetInverse() const { return m_inverse; }
  inline bool InverseHasBeenSet() const { return m_inverseHasBeenSet; }
  template <typename InverseT = Aws::String>
  void SetInverse(InverseT&& value) {
    m_inverseHasBeenSet = true;
    m_inverse = std::forward<InverseT>(value);
  }
  template <typename InverseT = Aws::String>
  RemediationStep& WithInverse(InverseT&& value) {
    SetInverse(std::forward<InverseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to take after the step to verify its success.</p>
   */
  inline const Aws::String& GetVerifyAfter() const { return m_verifyAfter; }
  inline bool VerifyAfterHasBeenSet() const { return m_verifyAfterHasBeenSet; }
  template <typename VerifyAfterT = Aws::String>
  void SetVerifyAfter(VerifyAfterT&& value) {
    m_verifyAfterHasBeenSet = true;
    m_verifyAfter = std::forward<VerifyAfterT>(value);
  }
  template <typename VerifyAfterT = Aws::String>
  RemediationStep& WithVerifyAfter(VerifyAfterT&& value) {
    SetVerifyAfter(std::forward<VerifyAfterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_phase;

  Aws::String m_description;

  Aws::String m_service;

  Aws::String m_action;

  Aws::String m_logic;

  Aws::String m_inverse;

  Aws::String m_verifyAfter;
  bool m_phaseHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_serviceHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_logicHasBeenSet = false;
  bool m_inverseHasBeenSet = false;
  bool m_verifyAfterHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RemediationParameter.h>
#include <aws/securityhub/model/RemediationStep.h>

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
 * <p>The specification of the remediation target guidance. This outlines required
 * resource parameters and permissions, remediation steps, and the end
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationGuidanceSpecification">AWS
 * API Reference</a></p>
 */
class RemediationGuidanceSpecification {
 public:
  AWS_SECURITYHUB_API RemediationGuidanceSpecification() = default;
  AWS_SECURITYHUB_API RemediationGuidanceSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationGuidanceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of the parameters used in running the steps provided.</p>
   */
  inline const Aws::Vector<RemediationParameter>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Vector<RemediationParameter>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Vector<RemediationParameter>>
  RemediationGuidanceSpecification& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersT = RemediationParameter>
  RemediationGuidanceSpecification& AddParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace_back(std::forward<ParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of ordered steps for resolving the remediation targets.</p>
   */
  inline const Aws::Vector<RemediationStep>& GetSteps() const { return m_steps; }
  inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
  template <typename StepsT = Aws::Vector<RemediationStep>>
  void SetSteps(StepsT&& value) {
    m_stepsHasBeenSet = true;
    m_steps = std::forward<StepsT>(value);
  }
  template <typename StepsT = Aws::Vector<RemediationStep>>
  RemediationGuidanceSpecification& WithSteps(StepsT&& value) {
    SetSteps(std::forward<StepsT>(value));
    return *this;
  }
  template <typename StepsT = RemediationStep>
  RemediationGuidanceSpecification& AddSteps(StepsT&& value) {
    m_stepsHasBeenSet = true;
    m_steps.emplace_back(std::forward<StepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected end state of the associated resources after completion of the
   * steps.</p>
   */
  inline const Aws::String& GetExpectedEndState() const { return m_expectedEndState; }
  inline bool ExpectedEndStateHasBeenSet() const { return m_expectedEndStateHasBeenSet; }
  template <typename ExpectedEndStateT = Aws::String>
  void SetExpectedEndState(ExpectedEndStateT&& value) {
    m_expectedEndStateHasBeenSet = true;
    m_expectedEndState = std::forward<ExpectedEndStateT>(value);
  }
  template <typename ExpectedEndStateT = Aws::String>
  RemediationGuidanceSpecification& WithExpectedEndState(ExpectedEndStateT&& value) {
    SetExpectedEndState(std::forward<ExpectedEndStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of required permissions to run the steps.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRequiredPermissions() const { return m_requiredPermissions; }
  inline bool RequiredPermissionsHasBeenSet() const { return m_requiredPermissionsHasBeenSet; }
  template <typename RequiredPermissionsT = Aws::Vector<Aws::String>>
  void SetRequiredPermissions(RequiredPermissionsT&& value) {
    m_requiredPermissionsHasBeenSet = true;
    m_requiredPermissions = std::forward<RequiredPermissionsT>(value);
  }
  template <typename RequiredPermissionsT = Aws::Vector<Aws::String>>
  RemediationGuidanceSpecification& WithRequiredPermissions(RequiredPermissionsT&& value) {
    SetRequiredPermissions(std::forward<RequiredPermissionsT>(value));
    return *this;
  }
  template <typename RequiredPermissionsT = Aws::String>
  RemediationGuidanceSpecification& AddRequiredPermissions(RequiredPermissionsT&& value) {
    m_requiredPermissionsHasBeenSet = true;
    m_requiredPermissions.emplace_back(std::forward<RequiredPermissionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RemediationParameter> m_parameters;

  Aws::Vector<RemediationStep> m_steps;

  Aws::String m_expectedEndState;

  Aws::Vector<Aws::String> m_requiredPermissions;
  bool m_parametersHasBeenSet = false;
  bool m_stepsHasBeenSet = false;
  bool m_expectedEndStateHasBeenSet = false;
  bool m_requiredPermissionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

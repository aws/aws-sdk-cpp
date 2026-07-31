/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/TestAction.h>
#include <aws/resiliencehubv2/model/TestTemplateParameter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>A pre-configured, AWS recommended test that defines which resilience
 * capability to validate, the fault actions it runs, and the parameters it
 * accepts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestTemplate">AWS
 * API Reference</a></p>
 */
class TestTemplate {
 public:
  AWS_RESILIENCEHUBV2_API TestTemplate() = default;
  AWS_RESILIENCEHUBV2_API TestTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the test template.</p>
   */
  inline const Aws::String& GetTestTemplateArn() const { return m_testTemplateArn; }
  inline bool TestTemplateArnHasBeenSet() const { return m_testTemplateArnHasBeenSet; }
  template <typename TestTemplateArnT = Aws::String>
  void SetTestTemplateArn(TestTemplateArnT&& value) {
    m_testTemplateArnHasBeenSet = true;
    m_testTemplateArn = std::forward<TestTemplateArnT>(value);
  }
  template <typename TestTemplateArnT = Aws::String>
  TestTemplate& WithTestTemplateArn(TestTemplateArnT&& value) {
    SetTestTemplateArn(std::forward<TestTemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the test template.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TestTemplate& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the test template.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TestTemplate& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters the test template accepts.</p>
   */
  inline const Aws::Vector<TestTemplateParameter>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Vector<TestTemplateParameter>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Vector<TestTemplateParameter>>
  TestTemplate& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersT = TestTemplateParameter>
  TestTemplate& AddParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace_back(std::forward<ParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fault actions the test template runs.</p>
   */
  inline const Aws::Vector<TestAction>& GetActions() const { return m_actions; }
  inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
  template <typename ActionsT = Aws::Vector<TestAction>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<TestAction>>
  TestTemplate& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  template <typename ActionsT = TestAction>
  TestTemplate& AddActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions.emplace_back(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_testTemplateArn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<TestTemplateParameter> m_parameters;

  Aws::Vector<TestAction> m_actions;
  bool m_testTemplateArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_actionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

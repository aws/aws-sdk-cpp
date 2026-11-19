/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ConfigurableAction.h>
#include <aws/rtbfabric/model/FailureMode.h>

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
 * <p>A version attached to a flow, with its settings.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/FlowModule">AWS
 * API Reference</a></p>
 */
class FlowModule {
 public:
  AWS_RTBFABRIC_API FlowModule() = default;
  AWS_RTBFABRIC_API FlowModule(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API FlowModule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The module's name, unique within the flow.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FlowModule& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version to attach. It must be ACTIVE and available to you (see
   * ListAvailableModuleVersions). You can keep a version that's already in the
   * link's flows after it's deprecated, but you can't give it a higher share of
   * traffic.</p>
   */
  inline const Aws::String& GetModuleVersionArn() const { return m_moduleVersionArn; }
  inline bool ModuleVersionArnHasBeenSet() const { return m_moduleVersionArnHasBeenSet; }
  template <typename ModuleVersionArnT = Aws::String>
  void SetModuleVersionArn(ModuleVersionArnT&& value) {
    m_moduleVersionArnHasBeenSet = true;
    m_moduleVersionArn = std::forward<ModuleVersionArnT>(value);
  }
  template <typename ModuleVersionArnT = Aws::String>
  FlowModule& WithModuleVersionArn(ModuleVersionArnT&& value) {
    SetModuleVersionArn(std::forward<ModuleVersionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capabilities to turn on, chosen from the version's
   * <code>configurableActions</code>. If the version exposes one, it's the default.
   * If the version exposes more than one, this field is required. If it exposes
   * none, omit this field.</p>
   */
  inline const Aws::Vector<ConfigurableAction>& GetSelectedActions() const { return m_selectedActions; }
  inline bool SelectedActionsHasBeenSet() const { return m_selectedActionsHasBeenSet; }
  template <typename SelectedActionsT = Aws::Vector<ConfigurableAction>>
  void SetSelectedActions(SelectedActionsT&& value) {
    m_selectedActionsHasBeenSet = true;
    m_selectedActions = std::forward<SelectedActionsT>(value);
  }
  template <typename SelectedActionsT = Aws::Vector<ConfigurableAction>>
  FlowModule& WithSelectedActions(SelectedActionsT&& value) {
    SetSelectedActions(std::forward<SelectedActionsT>(value));
    return *this;
  }
  inline FlowModule& AddSelectedActions(ConfigurableAction value) {
    m_selectedActionsHasBeenSet = true;
    m_selectedActions.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies what happens when the module fails – when its call fails or times
   * out, or when an express module's dataset is stale. The default is OPEN.</p>
   */
  inline FailureMode GetFailureMode() const { return m_failureMode; }
  inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
  inline void SetFailureMode(FailureMode value) {
    m_failureModeHasBeenSet = true;
    m_failureMode = value;
  }
  inline FlowModule& WithFailureMode(FailureMode value) {
    SetFailureMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the flow's requests that the module runs on. The flow skips
   * the module on the rest of the requests. The default is 100.</p>
   */
  inline double GetActivationPercentage() const { return m_activationPercentage; }
  inline bool ActivationPercentageHasBeenSet() const { return m_activationPercentageHasBeenSet; }
  inline void SetActivationPercentage(double value) {
    m_activationPercentageHasBeenSet = true;
    m_activationPercentage = value;
  }
  inline FlowModule& WithActivationPercentage(double value) {
    SetActivationPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>RTB Fabric validates the value against the version's
   * <code>configurationSchema</code> and rejects a value that fails with
   * ValidationException. Omit it when the schema is empty or fully defaulted.</p>
   */
  inline const Aws::String& GetConfigurationValues() const { return m_configurationValues; }
  inline bool ConfigurationValuesHasBeenSet() const { return m_configurationValuesHasBeenSet; }
  template <typename ConfigurationValuesT = Aws::String>
  void SetConfigurationValues(ConfigurationValuesT&& value) {
    m_configurationValuesHasBeenSet = true;
    m_configurationValues = std::forward<ConfigurationValuesT>(value);
  }
  template <typename ConfigurationValuesT = Aws::String>
  FlowModule& WithConfigurationValues(ConfigurationValuesT&& value) {
    SetConfigurationValues(std::forward<ConfigurationValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_moduleVersionArn;

  Aws::Vector<ConfigurableAction> m_selectedActions;

  FailureMode m_failureMode{FailureMode::NOT_SET};

  double m_activationPercentage{0.0};

  Aws::String m_configurationValues;
  bool m_nameHasBeenSet = false;
  bool m_moduleVersionArnHasBeenSet = false;
  bool m_selectedActionsHasBeenSet = false;
  bool m_failureModeHasBeenSet = false;
  bool m_activationPercentageHasBeenSet = false;
  bool m_configurationValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws

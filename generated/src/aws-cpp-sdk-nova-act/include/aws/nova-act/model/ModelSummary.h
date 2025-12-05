/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ModelLifecycle.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>Summary information about an available AI model.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ModelSummary">AWS
 * API Reference</a></p>
 */
class ModelSummary {
 public:
  AWS_NOVAACT_API ModelSummary() = default;
  AWS_NOVAACT_API ModelSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API ModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the model.</p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  ModelSummary& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle information for the model.</p>
   */
  inline const ModelLifecycle& GetModelLifecycle() const { return m_modelLifecycle; }
  inline bool ModelLifecycleHasBeenSet() const { return m_modelLifecycleHasBeenSet; }
  template <typename ModelLifecycleT = ModelLifecycle>
  void SetModelLifecycle(ModelLifecycleT&& value) {
    m_modelLifecycleHasBeenSet = true;
    m_modelLifecycle = std::forward<ModelLifecycleT>(value);
  }
  template <typename ModelLifecycleT = ModelLifecycle>
  ModelSummary& WithModelLifecycle(ModelLifecycleT&& value) {
    SetModelLifecycle(std::forward<ModelLifecycleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum client compatibility version required to use this model.</p>
   */
  inline int GetMinimumCompatibilityVersion() const { return m_minimumCompatibilityVersion; }
  inline bool MinimumCompatibilityVersionHasBeenSet() const { return m_minimumCompatibilityVersionHasBeenSet; }
  inline void SetMinimumCompatibilityVersion(int value) {
    m_minimumCompatibilityVersionHasBeenSet = true;
    m_minimumCompatibilityVersion = value;
  }
  inline ModelSummary& WithMinimumCompatibilityVersion(int value) {
    SetMinimumCompatibilityVersion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelId;

  ModelLifecycle m_modelLifecycle;

  int m_minimumCompatibilityVersion{0};
  bool m_modelIdHasBeenSet = false;
  bool m_modelLifecycleHasBeenSet = false;
  bool m_minimumCompatibilityVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/FlowModule.h>

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
 * <p>Modules that run one after another, each on the previous module's
 * output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/SequentialPipeline">AWS
 * API Reference</a></p>
 */
class SequentialPipeline {
 public:
  AWS_RTBFABRIC_API SequentialPipeline() = default;
  AWS_RTBFABRIC_API SequentialPipeline(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API SequentialPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>In execution order.</p>
   */
  inline const Aws::Vector<FlowModule>& GetModules() const { return m_modules; }
  inline bool ModulesHasBeenSet() const { return m_modulesHasBeenSet; }
  template <typename ModulesT = Aws::Vector<FlowModule>>
  void SetModules(ModulesT&& value) {
    m_modulesHasBeenSet = true;
    m_modules = std::forward<ModulesT>(value);
  }
  template <typename ModulesT = Aws::Vector<FlowModule>>
  SequentialPipeline& WithModules(ModulesT&& value) {
    SetModules(std::forward<ModulesT>(value));
    return *this;
  }
  template <typename ModulesT = FlowModule>
  SequentialPipeline& AddModules(ModulesT&& value) {
    m_modulesHasBeenSet = true;
    m_modules.emplace_back(std::forward<ModulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FlowModule> m_modules;
  bool m_modulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws

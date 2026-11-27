/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NeptuneGraph {
namespace Model {

/**
 * <p>The compute configuration for a provisioned graph.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ProvisionedGraphConfiguration">AWS
 * API Reference</a></p>
 */
class ProvisionedGraphConfiguration {
 public:
  AWS_NEPTUNEGRAPH_API ProvisionedGraphConfiguration() = default;
  AWS_NEPTUNEGRAPH_API ProvisionedGraphConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEGRAPH_API ProvisionedGraphConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
   * the graph.</p>
   */
  inline int GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  inline void SetMemory(int value) {
    m_memoryHasBeenSet = true;
    m_memory = value;
  }
  inline ProvisionedGraphConfiguration& WithMemory(int value) {
    SetMemory(value);
    return *this;
  }
  ///@}
 private:
  int m_memory{0};
  bool m_memoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace NeptuneGraph
}  // namespace Aws

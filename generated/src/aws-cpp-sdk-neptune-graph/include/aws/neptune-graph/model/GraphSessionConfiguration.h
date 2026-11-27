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
 * <p>The compute configuration for a graph session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/GraphSessionConfiguration">AWS
 * API Reference</a></p>
 */
class GraphSessionConfiguration {
 public:
  AWS_NEPTUNEGRAPH_API GraphSessionConfiguration() = default;
  AWS_NEPTUNEGRAPH_API GraphSessionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEGRAPH_API GraphSessionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum Session Neptune Capacity Units (s-NCUs) available to the graph
   * session.</p> <p>A graph session can burst up to 2x the configured min memory.
   * For example, a <code>minMemory</code> of 4 can burst up to 8 s-NCUs, and a
   * <code>minMemory</code> of 8 can burst up to 16 s-NCUs.</p>
   */
  inline int GetMinMemory() const { return m_minMemory; }
  inline bool MinMemoryHasBeenSet() const { return m_minMemoryHasBeenSet; }
  inline void SetMinMemory(int value) {
    m_minMemoryHasBeenSet = true;
    m_minMemory = value;
  }
  inline GraphSessionConfiguration& WithMinMemory(int value) {
    SetMinMemory(value);
    return *this;
  }
  ///@}
 private:
  int m_minMemory{0};
  bool m_minMemoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace NeptuneGraph
}  // namespace Aws

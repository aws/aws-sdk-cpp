/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/MemoryType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {

/**
 * <p>A memory type and, optionally, specific strategy names of that type. A space
 * can hold several strategies of the same type, so the type and its names are
 * given together.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/StrategySelector">AWS
 * API Reference</a></p>
 */
class StrategySelector {
 public:
  AWS_OPENSEARCHMEMORY_API StrategySelector() = default;
  AWS_OPENSEARCHMEMORY_API StrategySelector(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API StrategySelector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The memory type to search or list.</p>
   */
  inline MemoryType GetMemoryType() const { return m_memoryType; }
  inline bool MemoryTypeHasBeenSet() const { return m_memoryTypeHasBeenSet; }
  inline void SetMemoryType(MemoryType value) {
    m_memoryTypeHasBeenSet = true;
    m_memoryType = value;
  }
  inline StrategySelector& WithMemoryType(MemoryType value) {
    SetMemoryType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specific strategy names of <code>memoryType</code>. Omit it to include every
   * strategy of that type.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMemoryStrategyNames() const { return m_memoryStrategyNames; }
  inline bool MemoryStrategyNamesHasBeenSet() const { return m_memoryStrategyNamesHasBeenSet; }
  template <typename MemoryStrategyNamesT = Aws::Vector<Aws::String>>
  void SetMemoryStrategyNames(MemoryStrategyNamesT&& value) {
    m_memoryStrategyNamesHasBeenSet = true;
    m_memoryStrategyNames = std::forward<MemoryStrategyNamesT>(value);
  }
  template <typename MemoryStrategyNamesT = Aws::Vector<Aws::String>>
  StrategySelector& WithMemoryStrategyNames(MemoryStrategyNamesT&& value) {
    SetMemoryStrategyNames(std::forward<MemoryStrategyNamesT>(value));
    return *this;
  }
  template <typename MemoryStrategyNamesT = Aws::String>
  StrategySelector& AddMemoryStrategyNames(MemoryStrategyNamesT&& value) {
    m_memoryStrategyNamesHasBeenSet = true;
    m_memoryStrategyNames.emplace_back(std::forward<MemoryStrategyNamesT>(value));
    return *this;
  }
  ///@}
 private:
  MemoryType m_memoryType{MemoryType::NOT_SET};

  Aws::Vector<Aws::String> m_memoryStrategyNames;
  bool m_memoryTypeHasBeenSet = false;
  bool m_memoryStrategyNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws

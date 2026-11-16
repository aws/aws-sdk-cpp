/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/MemoryStrategyConfiguration.h>
#include <aws/opensearchmemory/model/MemoryStrategyType.h>

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
 * <p>A memory strategy: how a space extracts one kind of memory from its
 * events.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/MemoryStrategy">AWS
 * API Reference</a></p>
 */
class MemoryStrategy {
 public:
  AWS_OPENSEARCHMEMORY_API MemoryStrategy() = default;
  AWS_OPENSEARCHMEMORY_API MemoryStrategy(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API MemoryStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of memory the strategy extracts.</p>
   */
  inline MemoryStrategyType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MemoryStrategyType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MemoryStrategy& WithType(MemoryStrategyType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name for the strategy, unique within the space. Omit it to have the service
   * generate one from the type, for example <code>semantic_1</code>. The name must
   * be 1 to 64 characters: letters, digits, periods, hyphens, and underscores,
   * starting with a letter or digit. A strategy's name can't be changed, and the
   * strategy's memories are stored under it: a strategy added under a new name
   * starts with no memories.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MemoryStrategy& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the strategy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  MemoryStrategy& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings for the strategy. When you create a strategy, omit it to use the
   * defaults for the strategy's type.</p> <p>A <code>CUSTOM</code> strategy must set
   * <code>extractionPrompt</code>.</p>
   */
  inline const MemoryStrategyConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = MemoryStrategyConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = MemoryStrategyConfiguration>
  MemoryStrategy& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  MemoryStrategyType m_type{MemoryStrategyType::NOT_SET};

  Aws::String m_name;

  Aws::String m_description;

  MemoryStrategyConfiguration m_configuration;
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws

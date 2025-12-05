/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MemoryDB {
namespace Model {

/**
 * <p>Describes an individual setting that controls some aspect of MemoryDB
 * behavior across multiple regions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/MultiRegionParameter">AWS
 * API Reference</a></p>
 */
class MultiRegionParameter {
 public:
  AWS_MEMORYDB_API MultiRegionParameter() = default;
  AWS_MEMORYDB_API MultiRegionParameter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEMORYDB_API MultiRegionParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the parameter.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MultiRegionParameter& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the parameter.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  MultiRegionParameter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the parameter.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  MultiRegionParameter& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the source of the parameter value. Valid values: user | system |
   * engine-default</p>
   */
  inline const Aws::String& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Aws::String>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Aws::String>
  MultiRegionParameter& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The valid data type for the parameter.</p>
   */
  inline const Aws::String& GetDataType() const { return m_dataType; }
  inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
  template <typename DataTypeT = Aws::String>
  void SetDataType(DataTypeT&& value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = std::forward<DataTypeT>(value);
  }
  template <typename DataTypeT = Aws::String>
  MultiRegionParameter& WithDataType(DataTypeT&& value) {
    SetDataType(std::forward<DataTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The valid range of values for the parameter.</p>
   */
  inline const Aws::String& GetAllowedValues() const { return m_allowedValues; }
  inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
  template <typename AllowedValuesT = Aws::String>
  void SetAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues = std::forward<AllowedValuesT>(value);
  }
  template <typename AllowedValuesT = Aws::String>
  MultiRegionParameter& WithAllowedValues(AllowedValuesT&& value) {
    SetAllowedValues(std::forward<AllowedValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest engine version to which the parameter can apply.</p>
   */
  inline const Aws::String& GetMinimumEngineVersion() const { return m_minimumEngineVersion; }
  inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }
  template <typename MinimumEngineVersionT = Aws::String>
  void SetMinimumEngineVersion(MinimumEngineVersionT&& value) {
    m_minimumEngineVersionHasBeenSet = true;
    m_minimumEngineVersion = std::forward<MinimumEngineVersionT>(value);
  }
  template <typename MinimumEngineVersionT = Aws::String>
  MultiRegionParameter& WithMinimumEngineVersion(MinimumEngineVersionT&& value) {
    SetMinimumEngineVersion(std::forward<MinimumEngineVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_value;

  Aws::String m_description;

  Aws::String m_source;

  Aws::String m_dataType;

  Aws::String m_allowedValues;

  Aws::String m_minimumEngineVersion;
  bool m_nameHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_dataTypeHasBeenSet = false;
  bool m_allowedValuesHasBeenSet = false;
  bool m_minimumEngineVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MemoryDB
}  // namespace Aws

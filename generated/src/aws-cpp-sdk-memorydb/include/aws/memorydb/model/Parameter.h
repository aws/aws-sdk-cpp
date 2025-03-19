/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Describes an individual setting that controls some aspect of MemoryDB
   * behavior.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Parameter">AWS
   * API Reference</a></p>
   */
  class Parameter
  {
  public:
    AWS_MEMORYDB_API Parameter() = default;
    AWS_MEMORYDB_API Parameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Parameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Parameter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the parameter</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Parameter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the parameter</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Parameter& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter's data type</p>
     */
    inline const Aws::String& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = Aws::String>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = Aws::String>
    Parameter& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline const Aws::String& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::String>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::String>
    Parameter& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const { return m_minimumEngineVersion; }
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }
    template<typename MinimumEngineVersionT = Aws::String>
    void SetMinimumEngineVersion(MinimumEngineVersionT&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::forward<MinimumEngineVersionT>(value); }
    template<typename MinimumEngineVersionT = Aws::String>
    Parameter& WithMinimumEngineVersion(MinimumEngineVersionT&& value) { SetMinimumEngineVersion(std::forward<MinimumEngineVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws

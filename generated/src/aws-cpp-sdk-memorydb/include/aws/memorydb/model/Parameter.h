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
    AWS_MEMORYDB_API Parameter();
    AWS_MEMORYDB_API Parameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Parameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Parameter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Parameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Parameter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the parameter</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Parameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Parameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Parameter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the parameter</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Parameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Parameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Parameter& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter's data type</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }
    inline Parameter& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}
    inline Parameter& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}
    inline Parameter& WithDataType(const char* value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }
    inline Parameter& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}
    inline Parameter& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline Parameter& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::move(value); }
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion.assign(value); }
    inline Parameter& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}
    inline Parameter& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}
    inline Parameter& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}
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

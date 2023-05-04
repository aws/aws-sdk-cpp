/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DatasetParameterValueType.h>
#include <aws/quicksight/model/StringDatasetParameterDefaultValues.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A string parameter for a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StringDatasetParameter">AWS
   * API Reference</a></p>
   */
  class StringDatasetParameter
  {
  public:
    AWS_QUICKSIGHT_API StringDatasetParameter();
    AWS_QUICKSIGHT_API StringDatasetParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StringDatasetParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier for the string parameter that is created in the dataset.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An identifier for the string parameter that is created in the dataset.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>An identifier for the string parameter that is created in the dataset.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An identifier for the string parameter that is created in the dataset.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>An identifier for the string parameter that is created in the dataset.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>An identifier for the string parameter that is created in the dataset.</p>
     */
    inline StringDatasetParameter& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An identifier for the string parameter that is created in the dataset.</p>
     */
    inline StringDatasetParameter& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>An identifier for the string parameter that is created in the dataset.</p>
     */
    inline StringDatasetParameter& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the string parameter that is created in the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the string parameter that is created in the dataset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the string parameter that is created in the dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the string parameter that is created in the dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the string parameter that is created in the dataset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the string parameter that is created in the dataset.</p>
     */
    inline StringDatasetParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the string parameter that is created in the dataset.</p>
     */
    inline StringDatasetParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the string parameter that is created in the dataset.</p>
     */
    inline StringDatasetParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value type of the dataset parameter. Valid values are <code>single
     * value</code> or <code>multi value</code>.</p>
     */
    inline const DatasetParameterValueType& GetValueType() const{ return m_valueType; }

    /**
     * <p>The value type of the dataset parameter. Valid values are <code>single
     * value</code> or <code>multi value</code>.</p>
     */
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }

    /**
     * <p>The value type of the dataset parameter. Valid values are <code>single
     * value</code> or <code>multi value</code>.</p>
     */
    inline void SetValueType(const DatasetParameterValueType& value) { m_valueTypeHasBeenSet = true; m_valueType = value; }

    /**
     * <p>The value type of the dataset parameter. Valid values are <code>single
     * value</code> or <code>multi value</code>.</p>
     */
    inline void SetValueType(DatasetParameterValueType&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::move(value); }

    /**
     * <p>The value type of the dataset parameter. Valid values are <code>single
     * value</code> or <code>multi value</code>.</p>
     */
    inline StringDatasetParameter& WithValueType(const DatasetParameterValueType& value) { SetValueType(value); return *this;}

    /**
     * <p>The value type of the dataset parameter. Valid values are <code>single
     * value</code> or <code>multi value</code>.</p>
     */
    inline StringDatasetParameter& WithValueType(DatasetParameterValueType&& value) { SetValueType(std::move(value)); return *this;}


    /**
     * <p>A list of default values for a given string dataset parameter type. This
     * structure only accepts static values.</p>
     */
    inline const StringDatasetParameterDefaultValues& GetDefaultValues() const{ return m_defaultValues; }

    /**
     * <p>A list of default values for a given string dataset parameter type. This
     * structure only accepts static values.</p>
     */
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }

    /**
     * <p>A list of default values for a given string dataset parameter type. This
     * structure only accepts static values.</p>
     */
    inline void SetDefaultValues(const StringDatasetParameterDefaultValues& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = value; }

    /**
     * <p>A list of default values for a given string dataset parameter type. This
     * structure only accepts static values.</p>
     */
    inline void SetDefaultValues(StringDatasetParameterDefaultValues&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::move(value); }

    /**
     * <p>A list of default values for a given string dataset parameter type. This
     * structure only accepts static values.</p>
     */
    inline StringDatasetParameter& WithDefaultValues(const StringDatasetParameterDefaultValues& value) { SetDefaultValues(value); return *this;}

    /**
     * <p>A list of default values for a given string dataset parameter type. This
     * structure only accepts static values.</p>
     */
    inline StringDatasetParameter& WithDefaultValues(StringDatasetParameterDefaultValues&& value) { SetDefaultValues(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DatasetParameterValueType m_valueType;
    bool m_valueTypeHasBeenSet = false;

    StringDatasetParameterDefaultValues m_defaultValues;
    bool m_defaultValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

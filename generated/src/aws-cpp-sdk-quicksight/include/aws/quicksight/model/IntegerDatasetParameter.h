/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DatasetParameterValueType.h>
#include <aws/quicksight/model/IntegerDatasetParameterDefaultValues.h>
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
   * <p>An integer parameter for a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IntegerDatasetParameter">AWS
   * API Reference</a></p>
   */
  class IntegerDatasetParameter
  {
  public:
    AWS_QUICKSIGHT_API IntegerDatasetParameter();
    AWS_QUICKSIGHT_API IntegerDatasetParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IntegerDatasetParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for the integer parameter created in the dataset.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline IntegerDatasetParameter& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline IntegerDatasetParameter& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline IntegerDatasetParameter& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the integer parameter that is created in the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline IntegerDatasetParameter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline IntegerDatasetParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline IntegerDatasetParameter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value type of the dataset parameter. Valid values are <code>single
     * value</code> or <code>multi value</code>.</p>
     */
    inline const DatasetParameterValueType& GetValueType() const{ return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(const DatasetParameterValueType& value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline void SetValueType(DatasetParameterValueType&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::move(value); }
    inline IntegerDatasetParameter& WithValueType(const DatasetParameterValueType& value) { SetValueType(value); return *this;}
    inline IntegerDatasetParameter& WithValueType(DatasetParameterValueType&& value) { SetValueType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of default values for a given integer parameter. This structure only
     * accepts static values.</p>
     */
    inline const IntegerDatasetParameterDefaultValues& GetDefaultValues() const{ return m_defaultValues; }
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }
    inline void SetDefaultValues(const IntegerDatasetParameterDefaultValues& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = value; }
    inline void SetDefaultValues(IntegerDatasetParameterDefaultValues&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::move(value); }
    inline IntegerDatasetParameter& WithDefaultValues(const IntegerDatasetParameterDefaultValues& value) { SetDefaultValues(value); return *this;}
    inline IntegerDatasetParameter& WithDefaultValues(IntegerDatasetParameterDefaultValues&& value) { SetDefaultValues(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DatasetParameterValueType m_valueType;
    bool m_valueTypeHasBeenSet = false;

    IntegerDatasetParameterDefaultValues m_defaultValues;
    bool m_defaultValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

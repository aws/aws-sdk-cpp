/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ParameterValueType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IntegerDefaultValues.h>
#include <aws/quicksight/model/IntegerValueWhenUnsetConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/MappedDataSetParameter.h>
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
   * <p>A parameter declaration for the <code>Integer</code> data type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IntegerParameterDeclaration">AWS
   * API Reference</a></p>
   */
  class IntegerParameterDeclaration
  {
  public:
    AWS_QUICKSIGHT_API IntegerParameterDeclaration();
    AWS_QUICKSIGHT_API IntegerParameterDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IntegerParameterDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value type determines whether the parameter is a single-value or
     * multi-value parameter.</p>
     */
    inline const ParameterValueType& GetParameterValueType() const{ return m_parameterValueType; }
    inline bool ParameterValueTypeHasBeenSet() const { return m_parameterValueTypeHasBeenSet; }
    inline void SetParameterValueType(const ParameterValueType& value) { m_parameterValueTypeHasBeenSet = true; m_parameterValueType = value; }
    inline void SetParameterValueType(ParameterValueType&& value) { m_parameterValueTypeHasBeenSet = true; m_parameterValueType = std::move(value); }
    inline IntegerParameterDeclaration& WithParameterValueType(const ParameterValueType& value) { SetParameterValueType(value); return *this;}
    inline IntegerParameterDeclaration& WithParameterValueType(ParameterValueType&& value) { SetParameterValueType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline IntegerParameterDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline IntegerParameterDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline IntegerParameterDeclaration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline const IntegerDefaultValues& GetDefaultValues() const{ return m_defaultValues; }
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }
    inline void SetDefaultValues(const IntegerDefaultValues& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = value; }
    inline void SetDefaultValues(IntegerDefaultValues&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::move(value); }
    inline IntegerParameterDeclaration& WithDefaultValues(const IntegerDefaultValues& value) { SetDefaultValues(value); return *this;}
    inline IntegerParameterDeclaration& WithDefaultValues(IntegerDefaultValues&& value) { SetDefaultValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter declaration for the <code>Integer</code> data type.</p>
     */
    inline const IntegerValueWhenUnsetConfiguration& GetValueWhenUnset() const{ return m_valueWhenUnset; }
    inline bool ValueWhenUnsetHasBeenSet() const { return m_valueWhenUnsetHasBeenSet; }
    inline void SetValueWhenUnset(const IntegerValueWhenUnsetConfiguration& value) { m_valueWhenUnsetHasBeenSet = true; m_valueWhenUnset = value; }
    inline void SetValueWhenUnset(IntegerValueWhenUnsetConfiguration&& value) { m_valueWhenUnsetHasBeenSet = true; m_valueWhenUnset = std::move(value); }
    inline IntegerParameterDeclaration& WithValueWhenUnset(const IntegerValueWhenUnsetConfiguration& value) { SetValueWhenUnset(value); return *this;}
    inline IntegerParameterDeclaration& WithValueWhenUnset(IntegerValueWhenUnsetConfiguration&& value) { SetValueWhenUnset(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<MappedDataSetParameter>& GetMappedDataSetParameters() const{ return m_mappedDataSetParameters; }
    inline bool MappedDataSetParametersHasBeenSet() const { return m_mappedDataSetParametersHasBeenSet; }
    inline void SetMappedDataSetParameters(const Aws::Vector<MappedDataSetParameter>& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters = value; }
    inline void SetMappedDataSetParameters(Aws::Vector<MappedDataSetParameter>&& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters = std::move(value); }
    inline IntegerParameterDeclaration& WithMappedDataSetParameters(const Aws::Vector<MappedDataSetParameter>& value) { SetMappedDataSetParameters(value); return *this;}
    inline IntegerParameterDeclaration& WithMappedDataSetParameters(Aws::Vector<MappedDataSetParameter>&& value) { SetMappedDataSetParameters(std::move(value)); return *this;}
    inline IntegerParameterDeclaration& AddMappedDataSetParameters(const MappedDataSetParameter& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters.push_back(value); return *this; }
    inline IntegerParameterDeclaration& AddMappedDataSetParameters(MappedDataSetParameter&& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ParameterValueType m_parameterValueType;
    bool m_parameterValueTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IntegerDefaultValues m_defaultValues;
    bool m_defaultValuesHasBeenSet = false;

    IntegerValueWhenUnsetConfiguration m_valueWhenUnset;
    bool m_valueWhenUnsetHasBeenSet = false;

    Aws::Vector<MappedDataSetParameter> m_mappedDataSetParameters;
    bool m_mappedDataSetParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

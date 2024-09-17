/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DateTimeDefaultValues.h>
#include <aws/quicksight/model/TimeGranularity.h>
#include <aws/quicksight/model/DateTimeValueWhenUnsetConfiguration.h>
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
   * <p>A parameter declaration for the <code>DateTime</code> data
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateTimeParameterDeclaration">AWS
   * API Reference</a></p>
   */
  class DateTimeParameterDeclaration
  {
  public:
    AWS_QUICKSIGHT_API DateTimeParameterDeclaration();
    AWS_QUICKSIGHT_API DateTimeParameterDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeParameterDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DateTimeParameterDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DateTimeParameterDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DateTimeParameterDeclaration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline const DateTimeDefaultValues& GetDefaultValues() const{ return m_defaultValues; }
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }
    inline void SetDefaultValues(const DateTimeDefaultValues& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = value; }
    inline void SetDefaultValues(DateTimeDefaultValues&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::move(value); }
    inline DateTimeParameterDeclaration& WithDefaultValues(const DateTimeDefaultValues& value) { SetDefaultValues(value); return *this;}
    inline DateTimeParameterDeclaration& WithDefaultValues(DateTimeDefaultValues&& value) { SetDefaultValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline const TimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(const TimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline void SetTimeGranularity(TimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }
    inline DateTimeParameterDeclaration& WithTimeGranularity(const TimeGranularity& value) { SetTimeGranularity(value); return *this;}
    inline DateTimeParameterDeclaration& WithTimeGranularity(TimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that defines the default value of a <code>DateTime</code>
     * parameter when a value has not been set.</p>
     */
    inline const DateTimeValueWhenUnsetConfiguration& GetValueWhenUnset() const{ return m_valueWhenUnset; }
    inline bool ValueWhenUnsetHasBeenSet() const { return m_valueWhenUnsetHasBeenSet; }
    inline void SetValueWhenUnset(const DateTimeValueWhenUnsetConfiguration& value) { m_valueWhenUnsetHasBeenSet = true; m_valueWhenUnset = value; }
    inline void SetValueWhenUnset(DateTimeValueWhenUnsetConfiguration&& value) { m_valueWhenUnsetHasBeenSet = true; m_valueWhenUnset = std::move(value); }
    inline DateTimeParameterDeclaration& WithValueWhenUnset(const DateTimeValueWhenUnsetConfiguration& value) { SetValueWhenUnset(value); return *this;}
    inline DateTimeParameterDeclaration& WithValueWhenUnset(DateTimeValueWhenUnsetConfiguration&& value) { SetValueWhenUnset(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<MappedDataSetParameter>& GetMappedDataSetParameters() const{ return m_mappedDataSetParameters; }
    inline bool MappedDataSetParametersHasBeenSet() const { return m_mappedDataSetParametersHasBeenSet; }
    inline void SetMappedDataSetParameters(const Aws::Vector<MappedDataSetParameter>& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters = value; }
    inline void SetMappedDataSetParameters(Aws::Vector<MappedDataSetParameter>&& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters = std::move(value); }
    inline DateTimeParameterDeclaration& WithMappedDataSetParameters(const Aws::Vector<MappedDataSetParameter>& value) { SetMappedDataSetParameters(value); return *this;}
    inline DateTimeParameterDeclaration& WithMappedDataSetParameters(Aws::Vector<MappedDataSetParameter>&& value) { SetMappedDataSetParameters(std::move(value)); return *this;}
    inline DateTimeParameterDeclaration& AddMappedDataSetParameters(const MappedDataSetParameter& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters.push_back(value); return *this; }
    inline DateTimeParameterDeclaration& AddMappedDataSetParameters(MappedDataSetParameter&& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DateTimeDefaultValues m_defaultValues;
    bool m_defaultValuesHasBeenSet = false;

    TimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;

    DateTimeValueWhenUnsetConfiguration m_valueWhenUnset;
    bool m_valueWhenUnsetHasBeenSet = false;

    Aws::Vector<MappedDataSetParameter> m_mappedDataSetParameters;
    bool m_mappedDataSetParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

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
    AWS_QUICKSIGHT_API DateTimeParameterDeclaration() = default;
    AWS_QUICKSIGHT_API DateTimeParameterDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeParameterDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DateTimeParameterDeclaration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline const DateTimeDefaultValues& GetDefaultValues() const { return m_defaultValues; }
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }
    template<typename DefaultValuesT = DateTimeDefaultValues>
    void SetDefaultValues(DefaultValuesT&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::forward<DefaultValuesT>(value); }
    template<typename DefaultValuesT = DateTimeDefaultValues>
    DateTimeParameterDeclaration& WithDefaultValues(DefaultValuesT&& value) { SetDefaultValues(std::forward<DefaultValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline TimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline DateTimeParameterDeclaration& WithTimeGranularity(TimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that defines the default value of a <code>DateTime</code>
     * parameter when a value has not been set.</p>
     */
    inline const DateTimeValueWhenUnsetConfiguration& GetValueWhenUnset() const { return m_valueWhenUnset; }
    inline bool ValueWhenUnsetHasBeenSet() const { return m_valueWhenUnsetHasBeenSet; }
    template<typename ValueWhenUnsetT = DateTimeValueWhenUnsetConfiguration>
    void SetValueWhenUnset(ValueWhenUnsetT&& value) { m_valueWhenUnsetHasBeenSet = true; m_valueWhenUnset = std::forward<ValueWhenUnsetT>(value); }
    template<typename ValueWhenUnsetT = DateTimeValueWhenUnsetConfiguration>
    DateTimeParameterDeclaration& WithValueWhenUnset(ValueWhenUnsetT&& value) { SetValueWhenUnset(std::forward<ValueWhenUnsetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<MappedDataSetParameter>& GetMappedDataSetParameters() const { return m_mappedDataSetParameters; }
    inline bool MappedDataSetParametersHasBeenSet() const { return m_mappedDataSetParametersHasBeenSet; }
    template<typename MappedDataSetParametersT = Aws::Vector<MappedDataSetParameter>>
    void SetMappedDataSetParameters(MappedDataSetParametersT&& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters = std::forward<MappedDataSetParametersT>(value); }
    template<typename MappedDataSetParametersT = Aws::Vector<MappedDataSetParameter>>
    DateTimeParameterDeclaration& WithMappedDataSetParameters(MappedDataSetParametersT&& value) { SetMappedDataSetParameters(std::forward<MappedDataSetParametersT>(value)); return *this;}
    template<typename MappedDataSetParametersT = MappedDataSetParameter>
    DateTimeParameterDeclaration& AddMappedDataSetParameters(MappedDataSetParametersT&& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters.emplace_back(std::forward<MappedDataSetParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DateTimeDefaultValues m_defaultValues;
    bool m_defaultValuesHasBeenSet = false;

    TimeGranularity m_timeGranularity{TimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;

    DateTimeValueWhenUnsetConfiguration m_valueWhenUnset;
    bool m_valueWhenUnsetHasBeenSet = false;

    Aws::Vector<MappedDataSetParameter> m_mappedDataSetParameters;
    bool m_mappedDataSetParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

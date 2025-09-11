/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/StringParameter.h>
#include <aws/quicksight/model/IntegerParameter.h>
#include <aws/quicksight/model/DecimalParameter.h>
#include <aws/quicksight/model/DateTimeParameter.h>
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
   * <p>A list of QuickSight parameters and the list's override values.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Parameters">AWS
   * API Reference</a></p>
   */
  class Parameters
  {
  public:
    AWS_QUICKSIGHT_API Parameters() = default;
    AWS_QUICKSIGHT_API Parameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Parameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters that have a data type of string.</p>
     */
    inline const Aws::Vector<StringParameter>& GetStringParameters() const { return m_stringParameters; }
    inline bool StringParametersHasBeenSet() const { return m_stringParametersHasBeenSet; }
    template<typename StringParametersT = Aws::Vector<StringParameter>>
    void SetStringParameters(StringParametersT&& value) { m_stringParametersHasBeenSet = true; m_stringParameters = std::forward<StringParametersT>(value); }
    template<typename StringParametersT = Aws::Vector<StringParameter>>
    Parameters& WithStringParameters(StringParametersT&& value) { SetStringParameters(std::forward<StringParametersT>(value)); return *this;}
    template<typename StringParametersT = StringParameter>
    Parameters& AddStringParameters(StringParametersT&& value) { m_stringParametersHasBeenSet = true; m_stringParameters.emplace_back(std::forward<StringParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters that have a data type of integer.</p>
     */
    inline const Aws::Vector<IntegerParameter>& GetIntegerParameters() const { return m_integerParameters; }
    inline bool IntegerParametersHasBeenSet() const { return m_integerParametersHasBeenSet; }
    template<typename IntegerParametersT = Aws::Vector<IntegerParameter>>
    void SetIntegerParameters(IntegerParametersT&& value) { m_integerParametersHasBeenSet = true; m_integerParameters = std::forward<IntegerParametersT>(value); }
    template<typename IntegerParametersT = Aws::Vector<IntegerParameter>>
    Parameters& WithIntegerParameters(IntegerParametersT&& value) { SetIntegerParameters(std::forward<IntegerParametersT>(value)); return *this;}
    template<typename IntegerParametersT = IntegerParameter>
    Parameters& AddIntegerParameters(IntegerParametersT&& value) { m_integerParametersHasBeenSet = true; m_integerParameters.emplace_back(std::forward<IntegerParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters that have a data type of decimal.</p>
     */
    inline const Aws::Vector<DecimalParameter>& GetDecimalParameters() const { return m_decimalParameters; }
    inline bool DecimalParametersHasBeenSet() const { return m_decimalParametersHasBeenSet; }
    template<typename DecimalParametersT = Aws::Vector<DecimalParameter>>
    void SetDecimalParameters(DecimalParametersT&& value) { m_decimalParametersHasBeenSet = true; m_decimalParameters = std::forward<DecimalParametersT>(value); }
    template<typename DecimalParametersT = Aws::Vector<DecimalParameter>>
    Parameters& WithDecimalParameters(DecimalParametersT&& value) { SetDecimalParameters(std::forward<DecimalParametersT>(value)); return *this;}
    template<typename DecimalParametersT = DecimalParameter>
    Parameters& AddDecimalParameters(DecimalParametersT&& value) { m_decimalParametersHasBeenSet = true; m_decimalParameters.emplace_back(std::forward<DecimalParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters that have a data type of date-time.</p>
     */
    inline const Aws::Vector<DateTimeParameter>& GetDateTimeParameters() const { return m_dateTimeParameters; }
    inline bool DateTimeParametersHasBeenSet() const { return m_dateTimeParametersHasBeenSet; }
    template<typename DateTimeParametersT = Aws::Vector<DateTimeParameter>>
    void SetDateTimeParameters(DateTimeParametersT&& value) { m_dateTimeParametersHasBeenSet = true; m_dateTimeParameters = std::forward<DateTimeParametersT>(value); }
    template<typename DateTimeParametersT = Aws::Vector<DateTimeParameter>>
    Parameters& WithDateTimeParameters(DateTimeParametersT&& value) { SetDateTimeParameters(std::forward<DateTimeParametersT>(value)); return *this;}
    template<typename DateTimeParametersT = DateTimeParameter>
    Parameters& AddDateTimeParameters(DateTimeParametersT&& value) { m_dateTimeParametersHasBeenSet = true; m_dateTimeParameters.emplace_back(std::forward<DateTimeParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StringParameter> m_stringParameters;
    bool m_stringParametersHasBeenSet = false;

    Aws::Vector<IntegerParameter> m_integerParameters;
    bool m_integerParametersHasBeenSet = false;

    Aws::Vector<DecimalParameter> m_decimalParameters;
    bool m_decimalParametersHasBeenSet = false;

    Aws::Vector<DateTimeParameter> m_dateTimeParameters;
    bool m_dateTimeParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

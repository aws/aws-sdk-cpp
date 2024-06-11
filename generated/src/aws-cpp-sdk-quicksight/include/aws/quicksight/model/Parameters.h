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
   * <p>A list of Amazon QuickSight parameters and the list's override
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Parameters">AWS
   * API Reference</a></p>
   */
  class Parameters
  {
  public:
    AWS_QUICKSIGHT_API Parameters();
    AWS_QUICKSIGHT_API Parameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Parameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters that have a data type of string.</p>
     */
    inline const Aws::Vector<StringParameter>& GetStringParameters() const{ return m_stringParameters; }
    inline bool StringParametersHasBeenSet() const { return m_stringParametersHasBeenSet; }
    inline void SetStringParameters(const Aws::Vector<StringParameter>& value) { m_stringParametersHasBeenSet = true; m_stringParameters = value; }
    inline void SetStringParameters(Aws::Vector<StringParameter>&& value) { m_stringParametersHasBeenSet = true; m_stringParameters = std::move(value); }
    inline Parameters& WithStringParameters(const Aws::Vector<StringParameter>& value) { SetStringParameters(value); return *this;}
    inline Parameters& WithStringParameters(Aws::Vector<StringParameter>&& value) { SetStringParameters(std::move(value)); return *this;}
    inline Parameters& AddStringParameters(const StringParameter& value) { m_stringParametersHasBeenSet = true; m_stringParameters.push_back(value); return *this; }
    inline Parameters& AddStringParameters(StringParameter&& value) { m_stringParametersHasBeenSet = true; m_stringParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters that have a data type of integer.</p>
     */
    inline const Aws::Vector<IntegerParameter>& GetIntegerParameters() const{ return m_integerParameters; }
    inline bool IntegerParametersHasBeenSet() const { return m_integerParametersHasBeenSet; }
    inline void SetIntegerParameters(const Aws::Vector<IntegerParameter>& value) { m_integerParametersHasBeenSet = true; m_integerParameters = value; }
    inline void SetIntegerParameters(Aws::Vector<IntegerParameter>&& value) { m_integerParametersHasBeenSet = true; m_integerParameters = std::move(value); }
    inline Parameters& WithIntegerParameters(const Aws::Vector<IntegerParameter>& value) { SetIntegerParameters(value); return *this;}
    inline Parameters& WithIntegerParameters(Aws::Vector<IntegerParameter>&& value) { SetIntegerParameters(std::move(value)); return *this;}
    inline Parameters& AddIntegerParameters(const IntegerParameter& value) { m_integerParametersHasBeenSet = true; m_integerParameters.push_back(value); return *this; }
    inline Parameters& AddIntegerParameters(IntegerParameter&& value) { m_integerParametersHasBeenSet = true; m_integerParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters that have a data type of decimal.</p>
     */
    inline const Aws::Vector<DecimalParameter>& GetDecimalParameters() const{ return m_decimalParameters; }
    inline bool DecimalParametersHasBeenSet() const { return m_decimalParametersHasBeenSet; }
    inline void SetDecimalParameters(const Aws::Vector<DecimalParameter>& value) { m_decimalParametersHasBeenSet = true; m_decimalParameters = value; }
    inline void SetDecimalParameters(Aws::Vector<DecimalParameter>&& value) { m_decimalParametersHasBeenSet = true; m_decimalParameters = std::move(value); }
    inline Parameters& WithDecimalParameters(const Aws::Vector<DecimalParameter>& value) { SetDecimalParameters(value); return *this;}
    inline Parameters& WithDecimalParameters(Aws::Vector<DecimalParameter>&& value) { SetDecimalParameters(std::move(value)); return *this;}
    inline Parameters& AddDecimalParameters(const DecimalParameter& value) { m_decimalParametersHasBeenSet = true; m_decimalParameters.push_back(value); return *this; }
    inline Parameters& AddDecimalParameters(DecimalParameter&& value) { m_decimalParametersHasBeenSet = true; m_decimalParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters that have a data type of date-time.</p>
     */
    inline const Aws::Vector<DateTimeParameter>& GetDateTimeParameters() const{ return m_dateTimeParameters; }
    inline bool DateTimeParametersHasBeenSet() const { return m_dateTimeParametersHasBeenSet; }
    inline void SetDateTimeParameters(const Aws::Vector<DateTimeParameter>& value) { m_dateTimeParametersHasBeenSet = true; m_dateTimeParameters = value; }
    inline void SetDateTimeParameters(Aws::Vector<DateTimeParameter>&& value) { m_dateTimeParametersHasBeenSet = true; m_dateTimeParameters = std::move(value); }
    inline Parameters& WithDateTimeParameters(const Aws::Vector<DateTimeParameter>& value) { SetDateTimeParameters(value); return *this;}
    inline Parameters& WithDateTimeParameters(Aws::Vector<DateTimeParameter>&& value) { SetDateTimeParameters(std::move(value)); return *this;}
    inline Parameters& AddDateTimeParameters(const DateTimeParameter& value) { m_dateTimeParametersHasBeenSet = true; m_dateTimeParameters.push_back(value); return *this; }
    inline Parameters& AddDateTimeParameters(DateTimeParameter&& value) { m_dateTimeParametersHasBeenSet = true; m_dateTimeParameters.push_back(std::move(value)); return *this; }
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

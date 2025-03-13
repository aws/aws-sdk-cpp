/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The customized parameter values.</p> <p>This is a union type structure. For
   * this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomParameterValues">AWS
   * API Reference</a></p>
   */
  class CustomParameterValues
  {
  public:
    AWS_QUICKSIGHT_API CustomParameterValues() = default;
    AWS_QUICKSIGHT_API CustomParameterValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomParameterValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of string-type parameter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const { return m_stringValues; }
    inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }
    template<typename StringValuesT = Aws::Vector<Aws::String>>
    void SetStringValues(StringValuesT&& value) { m_stringValuesHasBeenSet = true; m_stringValues = std::forward<StringValuesT>(value); }
    template<typename StringValuesT = Aws::Vector<Aws::String>>
    CustomParameterValues& WithStringValues(StringValuesT&& value) { SetStringValues(std::forward<StringValuesT>(value)); return *this;}
    template<typename StringValuesT = Aws::String>
    CustomParameterValues& AddStringValues(StringValuesT&& value) { m_stringValuesHasBeenSet = true; m_stringValues.emplace_back(std::forward<StringValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of integer-type parameter values.</p>
     */
    inline const Aws::Vector<long long>& GetIntegerValues() const { return m_integerValues; }
    inline bool IntegerValuesHasBeenSet() const { return m_integerValuesHasBeenSet; }
    template<typename IntegerValuesT = Aws::Vector<long long>>
    void SetIntegerValues(IntegerValuesT&& value) { m_integerValuesHasBeenSet = true; m_integerValues = std::forward<IntegerValuesT>(value); }
    template<typename IntegerValuesT = Aws::Vector<long long>>
    CustomParameterValues& WithIntegerValues(IntegerValuesT&& value) { SetIntegerValues(std::forward<IntegerValuesT>(value)); return *this;}
    inline CustomParameterValues& AddIntegerValues(long long value) { m_integerValuesHasBeenSet = true; m_integerValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of decimal-type parameter values.</p>
     */
    inline const Aws::Vector<double>& GetDecimalValues() const { return m_decimalValues; }
    inline bool DecimalValuesHasBeenSet() const { return m_decimalValuesHasBeenSet; }
    template<typename DecimalValuesT = Aws::Vector<double>>
    void SetDecimalValues(DecimalValuesT&& value) { m_decimalValuesHasBeenSet = true; m_decimalValues = std::forward<DecimalValuesT>(value); }
    template<typename DecimalValuesT = Aws::Vector<double>>
    CustomParameterValues& WithDecimalValues(DecimalValuesT&& value) { SetDecimalValues(std::forward<DecimalValuesT>(value)); return *this;}
    inline CustomParameterValues& AddDecimalValues(double value) { m_decimalValuesHasBeenSet = true; m_decimalValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of datetime-type parameter values.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetDateTimeValues() const { return m_dateTimeValues; }
    inline bool DateTimeValuesHasBeenSet() const { return m_dateTimeValuesHasBeenSet; }
    template<typename DateTimeValuesT = Aws::Vector<Aws::Utils::DateTime>>
    void SetDateTimeValues(DateTimeValuesT&& value) { m_dateTimeValuesHasBeenSet = true; m_dateTimeValues = std::forward<DateTimeValuesT>(value); }
    template<typename DateTimeValuesT = Aws::Vector<Aws::Utils::DateTime>>
    CustomParameterValues& WithDateTimeValues(DateTimeValuesT&& value) { SetDateTimeValues(std::forward<DateTimeValuesT>(value)); return *this;}
    template<typename DateTimeValuesT = Aws::Utils::DateTime>
    CustomParameterValues& AddDateTimeValues(DateTimeValuesT&& value) { m_dateTimeValuesHasBeenSet = true; m_dateTimeValues.emplace_back(std::forward<DateTimeValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_stringValues;
    bool m_stringValuesHasBeenSet = false;

    Aws::Vector<long long> m_integerValues;
    bool m_integerValuesHasBeenSet = false;

    Aws::Vector<double> m_decimalValues;
    bool m_decimalValuesHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_dateTimeValues;
    bool m_dateTimeValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

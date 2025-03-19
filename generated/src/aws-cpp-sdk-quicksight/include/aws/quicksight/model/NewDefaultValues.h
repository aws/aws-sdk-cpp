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
   * <p>The configuration that overrides the existing default values for a dataset
   * parameter that is inherited from another dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NewDefaultValues">AWS
   * API Reference</a></p>
   */
  class NewDefaultValues
  {
  public:
    AWS_QUICKSIGHT_API NewDefaultValues() = default;
    AWS_QUICKSIGHT_API NewDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NewDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringStaticValues() const { return m_stringStaticValues; }
    inline bool StringStaticValuesHasBeenSet() const { return m_stringStaticValuesHasBeenSet; }
    template<typename StringStaticValuesT = Aws::Vector<Aws::String>>
    void SetStringStaticValues(StringStaticValuesT&& value) { m_stringStaticValuesHasBeenSet = true; m_stringStaticValues = std::forward<StringStaticValuesT>(value); }
    template<typename StringStaticValuesT = Aws::Vector<Aws::String>>
    NewDefaultValues& WithStringStaticValues(StringStaticValuesT&& value) { SetStringStaticValues(std::forward<StringStaticValuesT>(value)); return *this;}
    template<typename StringStaticValuesT = Aws::String>
    NewDefaultValues& AddStringStaticValues(StringStaticValuesT&& value) { m_stringStaticValuesHasBeenSet = true; m_stringStaticValues.emplace_back(std::forward<StringStaticValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of static default values for a given decimal parameter.</p>
     */
    inline const Aws::Vector<double>& GetDecimalStaticValues() const { return m_decimalStaticValues; }
    inline bool DecimalStaticValuesHasBeenSet() const { return m_decimalStaticValuesHasBeenSet; }
    template<typename DecimalStaticValuesT = Aws::Vector<double>>
    void SetDecimalStaticValues(DecimalStaticValuesT&& value) { m_decimalStaticValuesHasBeenSet = true; m_decimalStaticValues = std::forward<DecimalStaticValuesT>(value); }
    template<typename DecimalStaticValuesT = Aws::Vector<double>>
    NewDefaultValues& WithDecimalStaticValues(DecimalStaticValuesT&& value) { SetDecimalStaticValues(std::forward<DecimalStaticValuesT>(value)); return *this;}
    inline NewDefaultValues& AddDecimalStaticValues(double value) { m_decimalStaticValuesHasBeenSet = true; m_decimalStaticValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of static default values for a given date time parameter.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetDateTimeStaticValues() const { return m_dateTimeStaticValues; }
    inline bool DateTimeStaticValuesHasBeenSet() const { return m_dateTimeStaticValuesHasBeenSet; }
    template<typename DateTimeStaticValuesT = Aws::Vector<Aws::Utils::DateTime>>
    void SetDateTimeStaticValues(DateTimeStaticValuesT&& value) { m_dateTimeStaticValuesHasBeenSet = true; m_dateTimeStaticValues = std::forward<DateTimeStaticValuesT>(value); }
    template<typename DateTimeStaticValuesT = Aws::Vector<Aws::Utils::DateTime>>
    NewDefaultValues& WithDateTimeStaticValues(DateTimeStaticValuesT&& value) { SetDateTimeStaticValues(std::forward<DateTimeStaticValuesT>(value)); return *this;}
    template<typename DateTimeStaticValuesT = Aws::Utils::DateTime>
    NewDefaultValues& AddDateTimeStaticValues(DateTimeStaticValuesT&& value) { m_dateTimeStaticValuesHasBeenSet = true; m_dateTimeStaticValues.emplace_back(std::forward<DateTimeStaticValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of static default values for a given integer parameter.</p>
     */
    inline const Aws::Vector<long long>& GetIntegerStaticValues() const { return m_integerStaticValues; }
    inline bool IntegerStaticValuesHasBeenSet() const { return m_integerStaticValuesHasBeenSet; }
    template<typename IntegerStaticValuesT = Aws::Vector<long long>>
    void SetIntegerStaticValues(IntegerStaticValuesT&& value) { m_integerStaticValuesHasBeenSet = true; m_integerStaticValues = std::forward<IntegerStaticValuesT>(value); }
    template<typename IntegerStaticValuesT = Aws::Vector<long long>>
    NewDefaultValues& WithIntegerStaticValues(IntegerStaticValuesT&& value) { SetIntegerStaticValues(std::forward<IntegerStaticValuesT>(value)); return *this;}
    inline NewDefaultValues& AddIntegerStaticValues(long long value) { m_integerStaticValuesHasBeenSet = true; m_integerStaticValues.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_stringStaticValues;
    bool m_stringStaticValuesHasBeenSet = false;

    Aws::Vector<double> m_decimalStaticValues;
    bool m_decimalStaticValuesHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_dateTimeStaticValues;
    bool m_dateTimeStaticValuesHasBeenSet = false;

    Aws::Vector<long long> m_integerStaticValues;
    bool m_integerStaticValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

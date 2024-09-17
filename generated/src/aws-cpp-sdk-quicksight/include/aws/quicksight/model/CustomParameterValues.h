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
    AWS_QUICKSIGHT_API CustomParameterValues();
    AWS_QUICKSIGHT_API CustomParameterValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomParameterValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of string-type parameter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const{ return m_stringValues; }
    inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }
    inline void SetStringValues(const Aws::Vector<Aws::String>& value) { m_stringValuesHasBeenSet = true; m_stringValues = value; }
    inline void SetStringValues(Aws::Vector<Aws::String>&& value) { m_stringValuesHasBeenSet = true; m_stringValues = std::move(value); }
    inline CustomParameterValues& WithStringValues(const Aws::Vector<Aws::String>& value) { SetStringValues(value); return *this;}
    inline CustomParameterValues& WithStringValues(Aws::Vector<Aws::String>&& value) { SetStringValues(std::move(value)); return *this;}
    inline CustomParameterValues& AddStringValues(const Aws::String& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }
    inline CustomParameterValues& AddStringValues(Aws::String&& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(std::move(value)); return *this; }
    inline CustomParameterValues& AddStringValues(const char* value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of integer-type parameter values.</p>
     */
    inline const Aws::Vector<long long>& GetIntegerValues() const{ return m_integerValues; }
    inline bool IntegerValuesHasBeenSet() const { return m_integerValuesHasBeenSet; }
    inline void SetIntegerValues(const Aws::Vector<long long>& value) { m_integerValuesHasBeenSet = true; m_integerValues = value; }
    inline void SetIntegerValues(Aws::Vector<long long>&& value) { m_integerValuesHasBeenSet = true; m_integerValues = std::move(value); }
    inline CustomParameterValues& WithIntegerValues(const Aws::Vector<long long>& value) { SetIntegerValues(value); return *this;}
    inline CustomParameterValues& WithIntegerValues(Aws::Vector<long long>&& value) { SetIntegerValues(std::move(value)); return *this;}
    inline CustomParameterValues& AddIntegerValues(long long value) { m_integerValuesHasBeenSet = true; m_integerValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of decimal-type parameter values.</p>
     */
    inline const Aws::Vector<double>& GetDecimalValues() const{ return m_decimalValues; }
    inline bool DecimalValuesHasBeenSet() const { return m_decimalValuesHasBeenSet; }
    inline void SetDecimalValues(const Aws::Vector<double>& value) { m_decimalValuesHasBeenSet = true; m_decimalValues = value; }
    inline void SetDecimalValues(Aws::Vector<double>&& value) { m_decimalValuesHasBeenSet = true; m_decimalValues = std::move(value); }
    inline CustomParameterValues& WithDecimalValues(const Aws::Vector<double>& value) { SetDecimalValues(value); return *this;}
    inline CustomParameterValues& WithDecimalValues(Aws::Vector<double>&& value) { SetDecimalValues(std::move(value)); return *this;}
    inline CustomParameterValues& AddDecimalValues(double value) { m_decimalValuesHasBeenSet = true; m_decimalValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of datetime-type parameter values.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetDateTimeValues() const{ return m_dateTimeValues; }
    inline bool DateTimeValuesHasBeenSet() const { return m_dateTimeValuesHasBeenSet; }
    inline void SetDateTimeValues(const Aws::Vector<Aws::Utils::DateTime>& value) { m_dateTimeValuesHasBeenSet = true; m_dateTimeValues = value; }
    inline void SetDateTimeValues(Aws::Vector<Aws::Utils::DateTime>&& value) { m_dateTimeValuesHasBeenSet = true; m_dateTimeValues = std::move(value); }
    inline CustomParameterValues& WithDateTimeValues(const Aws::Vector<Aws::Utils::DateTime>& value) { SetDateTimeValues(value); return *this;}
    inline CustomParameterValues& WithDateTimeValues(Aws::Vector<Aws::Utils::DateTime>&& value) { SetDateTimeValues(std::move(value)); return *this;}
    inline CustomParameterValues& AddDateTimeValues(const Aws::Utils::DateTime& value) { m_dateTimeValuesHasBeenSet = true; m_dateTimeValues.push_back(value); return *this; }
    inline CustomParameterValues& AddDateTimeValues(Aws::Utils::DateTime&& value) { m_dateTimeValuesHasBeenSet = true; m_dateTimeValues.push_back(std::move(value)); return *this; }
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

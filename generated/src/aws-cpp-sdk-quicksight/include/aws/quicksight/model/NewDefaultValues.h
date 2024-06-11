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
    AWS_QUICKSIGHT_API NewDefaultValues();
    AWS_QUICKSIGHT_API NewDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NewDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringStaticValues() const{ return m_stringStaticValues; }
    inline bool StringStaticValuesHasBeenSet() const { return m_stringStaticValuesHasBeenSet; }
    inline void SetStringStaticValues(const Aws::Vector<Aws::String>& value) { m_stringStaticValuesHasBeenSet = true; m_stringStaticValues = value; }
    inline void SetStringStaticValues(Aws::Vector<Aws::String>&& value) { m_stringStaticValuesHasBeenSet = true; m_stringStaticValues = std::move(value); }
    inline NewDefaultValues& WithStringStaticValues(const Aws::Vector<Aws::String>& value) { SetStringStaticValues(value); return *this;}
    inline NewDefaultValues& WithStringStaticValues(Aws::Vector<Aws::String>&& value) { SetStringStaticValues(std::move(value)); return *this;}
    inline NewDefaultValues& AddStringStaticValues(const Aws::String& value) { m_stringStaticValuesHasBeenSet = true; m_stringStaticValues.push_back(value); return *this; }
    inline NewDefaultValues& AddStringStaticValues(Aws::String&& value) { m_stringStaticValuesHasBeenSet = true; m_stringStaticValues.push_back(std::move(value)); return *this; }
    inline NewDefaultValues& AddStringStaticValues(const char* value) { m_stringStaticValuesHasBeenSet = true; m_stringStaticValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of static default values for a given decimal parameter.</p>
     */
    inline const Aws::Vector<double>& GetDecimalStaticValues() const{ return m_decimalStaticValues; }
    inline bool DecimalStaticValuesHasBeenSet() const { return m_decimalStaticValuesHasBeenSet; }
    inline void SetDecimalStaticValues(const Aws::Vector<double>& value) { m_decimalStaticValuesHasBeenSet = true; m_decimalStaticValues = value; }
    inline void SetDecimalStaticValues(Aws::Vector<double>&& value) { m_decimalStaticValuesHasBeenSet = true; m_decimalStaticValues = std::move(value); }
    inline NewDefaultValues& WithDecimalStaticValues(const Aws::Vector<double>& value) { SetDecimalStaticValues(value); return *this;}
    inline NewDefaultValues& WithDecimalStaticValues(Aws::Vector<double>&& value) { SetDecimalStaticValues(std::move(value)); return *this;}
    inline NewDefaultValues& AddDecimalStaticValues(double value) { m_decimalStaticValuesHasBeenSet = true; m_decimalStaticValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of static default values for a given date time parameter.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetDateTimeStaticValues() const{ return m_dateTimeStaticValues; }
    inline bool DateTimeStaticValuesHasBeenSet() const { return m_dateTimeStaticValuesHasBeenSet; }
    inline void SetDateTimeStaticValues(const Aws::Vector<Aws::Utils::DateTime>& value) { m_dateTimeStaticValuesHasBeenSet = true; m_dateTimeStaticValues = value; }
    inline void SetDateTimeStaticValues(Aws::Vector<Aws::Utils::DateTime>&& value) { m_dateTimeStaticValuesHasBeenSet = true; m_dateTimeStaticValues = std::move(value); }
    inline NewDefaultValues& WithDateTimeStaticValues(const Aws::Vector<Aws::Utils::DateTime>& value) { SetDateTimeStaticValues(value); return *this;}
    inline NewDefaultValues& WithDateTimeStaticValues(Aws::Vector<Aws::Utils::DateTime>&& value) { SetDateTimeStaticValues(std::move(value)); return *this;}
    inline NewDefaultValues& AddDateTimeStaticValues(const Aws::Utils::DateTime& value) { m_dateTimeStaticValuesHasBeenSet = true; m_dateTimeStaticValues.push_back(value); return *this; }
    inline NewDefaultValues& AddDateTimeStaticValues(Aws::Utils::DateTime&& value) { m_dateTimeStaticValuesHasBeenSet = true; m_dateTimeStaticValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of static default values for a given integer parameter.</p>
     */
    inline const Aws::Vector<long long>& GetIntegerStaticValues() const{ return m_integerStaticValues; }
    inline bool IntegerStaticValuesHasBeenSet() const { return m_integerStaticValuesHasBeenSet; }
    inline void SetIntegerStaticValues(const Aws::Vector<long long>& value) { m_integerStaticValuesHasBeenSet = true; m_integerStaticValues = value; }
    inline void SetIntegerStaticValues(Aws::Vector<long long>&& value) { m_integerStaticValuesHasBeenSet = true; m_integerStaticValues = std::move(value); }
    inline NewDefaultValues& WithIntegerStaticValues(const Aws::Vector<long long>& value) { SetIntegerStaticValues(value); return *this;}
    inline NewDefaultValues& WithIntegerStaticValues(Aws::Vector<long long>&& value) { SetIntegerStaticValues(std::move(value)); return *this;}
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

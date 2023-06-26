/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>Contains an array.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ArrayValue">AWS
   * API Reference</a></p>
   */
  class ArrayValue
  {
  public:
    AWS_RDSDATASERVICE_API ArrayValue();
    AWS_RDSDATASERVICE_API ArrayValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API ArrayValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of Boolean values.</p>
     */
    inline const Aws::Vector<bool>& GetBooleanValues() const{ return m_booleanValues; }

    /**
     * <p>An array of Boolean values.</p>
     */
    inline bool BooleanValuesHasBeenSet() const { return m_booleanValuesHasBeenSet; }

    /**
     * <p>An array of Boolean values.</p>
     */
    inline void SetBooleanValues(const Aws::Vector<bool>& value) { m_booleanValuesHasBeenSet = true; m_booleanValues = value; }

    /**
     * <p>An array of Boolean values.</p>
     */
    inline void SetBooleanValues(Aws::Vector<bool>&& value) { m_booleanValuesHasBeenSet = true; m_booleanValues = std::move(value); }

    /**
     * <p>An array of Boolean values.</p>
     */
    inline ArrayValue& WithBooleanValues(const Aws::Vector<bool>& value) { SetBooleanValues(value); return *this;}

    /**
     * <p>An array of Boolean values.</p>
     */
    inline ArrayValue& WithBooleanValues(Aws::Vector<bool>&& value) { SetBooleanValues(std::move(value)); return *this;}

    /**
     * <p>An array of Boolean values.</p>
     */
    inline ArrayValue& AddBooleanValues(bool value) { m_booleanValuesHasBeenSet = true; m_booleanValues.push_back(value); return *this; }


    /**
     * <p>An array of integers.</p>
     */
    inline const Aws::Vector<long long>& GetLongValues() const{ return m_longValues; }

    /**
     * <p>An array of integers.</p>
     */
    inline bool LongValuesHasBeenSet() const { return m_longValuesHasBeenSet; }

    /**
     * <p>An array of integers.</p>
     */
    inline void SetLongValues(const Aws::Vector<long long>& value) { m_longValuesHasBeenSet = true; m_longValues = value; }

    /**
     * <p>An array of integers.</p>
     */
    inline void SetLongValues(Aws::Vector<long long>&& value) { m_longValuesHasBeenSet = true; m_longValues = std::move(value); }

    /**
     * <p>An array of integers.</p>
     */
    inline ArrayValue& WithLongValues(const Aws::Vector<long long>& value) { SetLongValues(value); return *this;}

    /**
     * <p>An array of integers.</p>
     */
    inline ArrayValue& WithLongValues(Aws::Vector<long long>&& value) { SetLongValues(std::move(value)); return *this;}

    /**
     * <p>An array of integers.</p>
     */
    inline ArrayValue& AddLongValues(long long value) { m_longValuesHasBeenSet = true; m_longValues.push_back(value); return *this; }


    /**
     * <p>An array of floating-point numbers.</p>
     */
    inline const Aws::Vector<double>& GetDoubleValues() const{ return m_doubleValues; }

    /**
     * <p>An array of floating-point numbers.</p>
     */
    inline bool DoubleValuesHasBeenSet() const { return m_doubleValuesHasBeenSet; }

    /**
     * <p>An array of floating-point numbers.</p>
     */
    inline void SetDoubleValues(const Aws::Vector<double>& value) { m_doubleValuesHasBeenSet = true; m_doubleValues = value; }

    /**
     * <p>An array of floating-point numbers.</p>
     */
    inline void SetDoubleValues(Aws::Vector<double>&& value) { m_doubleValuesHasBeenSet = true; m_doubleValues = std::move(value); }

    /**
     * <p>An array of floating-point numbers.</p>
     */
    inline ArrayValue& WithDoubleValues(const Aws::Vector<double>& value) { SetDoubleValues(value); return *this;}

    /**
     * <p>An array of floating-point numbers.</p>
     */
    inline ArrayValue& WithDoubleValues(Aws::Vector<double>&& value) { SetDoubleValues(std::move(value)); return *this;}

    /**
     * <p>An array of floating-point numbers.</p>
     */
    inline ArrayValue& AddDoubleValues(double value) { m_doubleValuesHasBeenSet = true; m_doubleValues.push_back(value); return *this; }


    /**
     * <p>An array of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const{ return m_stringValues; }

    /**
     * <p>An array of strings.</p>
     */
    inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }

    /**
     * <p>An array of strings.</p>
     */
    inline void SetStringValues(const Aws::Vector<Aws::String>& value) { m_stringValuesHasBeenSet = true; m_stringValues = value; }

    /**
     * <p>An array of strings.</p>
     */
    inline void SetStringValues(Aws::Vector<Aws::String>&& value) { m_stringValuesHasBeenSet = true; m_stringValues = std::move(value); }

    /**
     * <p>An array of strings.</p>
     */
    inline ArrayValue& WithStringValues(const Aws::Vector<Aws::String>& value) { SetStringValues(value); return *this;}

    /**
     * <p>An array of strings.</p>
     */
    inline ArrayValue& WithStringValues(Aws::Vector<Aws::String>&& value) { SetStringValues(std::move(value)); return *this;}

    /**
     * <p>An array of strings.</p>
     */
    inline ArrayValue& AddStringValues(const Aws::String& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }

    /**
     * <p>An array of strings.</p>
     */
    inline ArrayValue& AddStringValues(Aws::String&& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings.</p>
     */
    inline ArrayValue& AddStringValues(const char* value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }


    /**
     * <p>An array of arrays.</p>
     */
    inline const Aws::Vector<ArrayValue>& GetArrayValues() const{ return m_arrayValues; }

    /**
     * <p>An array of arrays.</p>
     */
    inline bool ArrayValuesHasBeenSet() const { return m_arrayValuesHasBeenSet; }

    /**
     * <p>An array of arrays.</p>
     */
    inline void SetArrayValues(const Aws::Vector<ArrayValue>& value) { m_arrayValuesHasBeenSet = true; m_arrayValues = value; }

    /**
     * <p>An array of arrays.</p>
     */
    inline void SetArrayValues(Aws::Vector<ArrayValue>&& value) { m_arrayValuesHasBeenSet = true; m_arrayValues = std::move(value); }

    /**
     * <p>An array of arrays.</p>
     */
    inline ArrayValue& WithArrayValues(const Aws::Vector<ArrayValue>& value) { SetArrayValues(value); return *this;}

    /**
     * <p>An array of arrays.</p>
     */
    inline ArrayValue& WithArrayValues(Aws::Vector<ArrayValue>&& value) { SetArrayValues(std::move(value)); return *this;}

    /**
     * <p>An array of arrays.</p>
     */
    inline ArrayValue& AddArrayValues(const ArrayValue& value) { m_arrayValuesHasBeenSet = true; m_arrayValues.push_back(value); return *this; }

    /**
     * <p>An array of arrays.</p>
     */
    inline ArrayValue& AddArrayValues(ArrayValue&& value) { m_arrayValuesHasBeenSet = true; m_arrayValues.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<bool> m_booleanValues;
    bool m_booleanValuesHasBeenSet = false;

    Aws::Vector<long long> m_longValues;
    bool m_longValuesHasBeenSet = false;

    Aws::Vector<double> m_doubleValues;
    bool m_doubleValuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringValues;
    bool m_stringValuesHasBeenSet = false;

    Aws::Vector<ArrayValue> m_arrayValues;
    bool m_arrayValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws

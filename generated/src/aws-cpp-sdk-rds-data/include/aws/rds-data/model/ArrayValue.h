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


    ///@{
    /**
     * <p>An array of Boolean values.</p>
     */
    inline const Aws::Vector<bool>& GetBooleanValues() const{ return m_booleanValues; }
    inline bool BooleanValuesHasBeenSet() const { return m_booleanValuesHasBeenSet; }
    inline void SetBooleanValues(const Aws::Vector<bool>& value) { m_booleanValuesHasBeenSet = true; m_booleanValues = value; }
    inline void SetBooleanValues(Aws::Vector<bool>&& value) { m_booleanValuesHasBeenSet = true; m_booleanValues = std::move(value); }
    inline ArrayValue& WithBooleanValues(const Aws::Vector<bool>& value) { SetBooleanValues(value); return *this;}
    inline ArrayValue& WithBooleanValues(Aws::Vector<bool>&& value) { SetBooleanValues(std::move(value)); return *this;}
    inline ArrayValue& AddBooleanValues(bool value) { m_booleanValuesHasBeenSet = true; m_booleanValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of integers.</p>
     */
    inline const Aws::Vector<long long>& GetLongValues() const{ return m_longValues; }
    inline bool LongValuesHasBeenSet() const { return m_longValuesHasBeenSet; }
    inline void SetLongValues(const Aws::Vector<long long>& value) { m_longValuesHasBeenSet = true; m_longValues = value; }
    inline void SetLongValues(Aws::Vector<long long>&& value) { m_longValuesHasBeenSet = true; m_longValues = std::move(value); }
    inline ArrayValue& WithLongValues(const Aws::Vector<long long>& value) { SetLongValues(value); return *this;}
    inline ArrayValue& WithLongValues(Aws::Vector<long long>&& value) { SetLongValues(std::move(value)); return *this;}
    inline ArrayValue& AddLongValues(long long value) { m_longValuesHasBeenSet = true; m_longValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of floating-point numbers.</p>
     */
    inline const Aws::Vector<double>& GetDoubleValues() const{ return m_doubleValues; }
    inline bool DoubleValuesHasBeenSet() const { return m_doubleValuesHasBeenSet; }
    inline void SetDoubleValues(const Aws::Vector<double>& value) { m_doubleValuesHasBeenSet = true; m_doubleValues = value; }
    inline void SetDoubleValues(Aws::Vector<double>&& value) { m_doubleValuesHasBeenSet = true; m_doubleValues = std::move(value); }
    inline ArrayValue& WithDoubleValues(const Aws::Vector<double>& value) { SetDoubleValues(value); return *this;}
    inline ArrayValue& WithDoubleValues(Aws::Vector<double>&& value) { SetDoubleValues(std::move(value)); return *this;}
    inline ArrayValue& AddDoubleValues(double value) { m_doubleValuesHasBeenSet = true; m_doubleValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const{ return m_stringValues; }
    inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }
    inline void SetStringValues(const Aws::Vector<Aws::String>& value) { m_stringValuesHasBeenSet = true; m_stringValues = value; }
    inline void SetStringValues(Aws::Vector<Aws::String>&& value) { m_stringValuesHasBeenSet = true; m_stringValues = std::move(value); }
    inline ArrayValue& WithStringValues(const Aws::Vector<Aws::String>& value) { SetStringValues(value); return *this;}
    inline ArrayValue& WithStringValues(Aws::Vector<Aws::String>&& value) { SetStringValues(std::move(value)); return *this;}
    inline ArrayValue& AddStringValues(const Aws::String& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }
    inline ArrayValue& AddStringValues(Aws::String&& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(std::move(value)); return *this; }
    inline ArrayValue& AddStringValues(const char* value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of arrays.</p>
     */
    inline const Aws::Vector<ArrayValue>& GetArrayValues() const{ return m_arrayValues; }
    inline bool ArrayValuesHasBeenSet() const { return m_arrayValuesHasBeenSet; }
    inline void SetArrayValues(const Aws::Vector<ArrayValue>& value) { m_arrayValuesHasBeenSet = true; m_arrayValues = value; }
    inline void SetArrayValues(Aws::Vector<ArrayValue>&& value) { m_arrayValuesHasBeenSet = true; m_arrayValues = std::move(value); }
    inline ArrayValue& WithArrayValues(const Aws::Vector<ArrayValue>& value) { SetArrayValues(value); return *this;}
    inline ArrayValue& WithArrayValues(Aws::Vector<ArrayValue>&& value) { SetArrayValues(std::move(value)); return *this;}
    inline ArrayValue& AddArrayValues(const ArrayValue& value) { m_arrayValuesHasBeenSet = true; m_arrayValues.push_back(value); return *this; }
    inline ArrayValue& AddArrayValues(ArrayValue&& value) { m_arrayValuesHasBeenSet = true; m_arrayValues.push_back(std::move(value)); return *this; }
    ///@}
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

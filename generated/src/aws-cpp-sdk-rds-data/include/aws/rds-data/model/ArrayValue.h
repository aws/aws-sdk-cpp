/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <aws/rds-data/RDSDataService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RDSDataService {
namespace Model {

/**
 * <p>Contains an array.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ArrayValue">AWS
 * API Reference</a></p>
 */
class ArrayValue {
 public:
  AWS_RDSDATASERVICE_API ArrayValue() = default;
  AWS_RDSDATASERVICE_API ArrayValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_RDSDATASERVICE_API ArrayValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of Boolean values. Can contain null values.</p>
   */
  inline const Aws::Vector<Aws::Crt::Optional<bool>>& GetBooleanValues() const { return m_booleanValues; }
  inline bool BooleanValuesHasBeenSet() const { return m_booleanValuesHasBeenSet; }
  template <typename BooleanValuesT = Aws::Vector<Aws::Crt::Optional<bool>>>
  void SetBooleanValues(BooleanValuesT&& value) {
    m_booleanValuesHasBeenSet = true;
    m_booleanValues = std::forward<BooleanValuesT>(value);
  }
  template <typename BooleanValuesT = Aws::Vector<Aws::Crt::Optional<bool>>>
  ArrayValue& WithBooleanValues(BooleanValuesT&& value) {
    SetBooleanValues(std::forward<BooleanValuesT>(value));
    return *this;
  }
  inline ArrayValue& AddBooleanValues(bool value) {
    m_booleanValuesHasBeenSet = true;
    m_booleanValues.push_back(value);
    return *this;
  }
  inline ArrayValue& AddBooleanValues(Aws::Crt::Optional<bool> value) {
    m_booleanValuesHasBeenSet = true;
    m_booleanValues.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of integers. Can contain null values.</p>
   */
  inline const Aws::Vector<Aws::Crt::Optional<long long>>& GetLongValues() const { return m_longValues; }
  inline bool LongValuesHasBeenSet() const { return m_longValuesHasBeenSet; }
  template <typename LongValuesT = Aws::Vector<Aws::Crt::Optional<long long>>>
  void SetLongValues(LongValuesT&& value) {
    m_longValuesHasBeenSet = true;
    m_longValues = std::forward<LongValuesT>(value);
  }
  template <typename LongValuesT = Aws::Vector<Aws::Crt::Optional<long long>>>
  ArrayValue& WithLongValues(LongValuesT&& value) {
    SetLongValues(std::forward<LongValuesT>(value));
    return *this;
  }
  inline ArrayValue& AddLongValues(long long value) {
    m_longValuesHasBeenSet = true;
    m_longValues.push_back(value);
    return *this;
  }
  inline ArrayValue& AddLongValues(Aws::Crt::Optional<long long> value) {
    m_longValuesHasBeenSet = true;
    m_longValues.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of floating-point numbers. Can contain null values.</p>
   */
  inline const Aws::Vector<Aws::Crt::Optional<double>>& GetDoubleValues() const { return m_doubleValues; }
  inline bool DoubleValuesHasBeenSet() const { return m_doubleValuesHasBeenSet; }
  template <typename DoubleValuesT = Aws::Vector<Aws::Crt::Optional<double>>>
  void SetDoubleValues(DoubleValuesT&& value) {
    m_doubleValuesHasBeenSet = true;
    m_doubleValues = std::forward<DoubleValuesT>(value);
  }
  template <typename DoubleValuesT = Aws::Vector<Aws::Crt::Optional<double>>>
  ArrayValue& WithDoubleValues(DoubleValuesT&& value) {
    SetDoubleValues(std::forward<DoubleValuesT>(value));
    return *this;
  }
  inline ArrayValue& AddDoubleValues(double value) {
    m_doubleValuesHasBeenSet = true;
    m_doubleValues.push_back(value);
    return *this;
  }
  inline ArrayValue& AddDoubleValues(Aws::Crt::Optional<double> value) {
    m_doubleValuesHasBeenSet = true;
    m_doubleValues.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of strings. Can contain null values.</p>
   */
  inline const Aws::Vector<Aws::Crt::Optional<Aws::String>>& GetStringValues() const { return m_stringValues; }
  inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }
  template <typename StringValuesT = Aws::Vector<Aws::Crt::Optional<Aws::String>>>
  void SetStringValues(StringValuesT&& value) {
    m_stringValuesHasBeenSet = true;
    m_stringValues = std::forward<StringValuesT>(value);
  }
  template <typename StringValuesT = Aws::Vector<Aws::Crt::Optional<Aws::String>>>
  ArrayValue& WithStringValues(StringValuesT&& value) {
    SetStringValues(std::forward<StringValuesT>(value));
    return *this;
  }
  template <typename StringValuesT = Aws::String>
  ArrayValue& AddStringValues(StringValuesT&& value) {
    m_stringValuesHasBeenSet = true;
    m_stringValues.emplace_back(std::forward<StringValuesT>(value));
    return *this;
  }
  inline ArrayValue& AddStringValues(Aws::Crt::Optional<Aws::String> value) {
    m_stringValuesHasBeenSet = true;
    m_stringValues.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of arrays. Can contain null values.</p>
   */
  inline const Aws::Vector<Aws::Crt::Optional<ArrayValue>>& GetArrayValues() const { return m_arrayValues; }
  inline bool ArrayValuesHasBeenSet() const { return m_arrayValuesHasBeenSet; }
  template <typename ArrayValuesT = Aws::Vector<Aws::Crt::Optional<ArrayValue>>>
  void SetArrayValues(ArrayValuesT&& value) {
    m_arrayValuesHasBeenSet = true;
    m_arrayValues = std::forward<ArrayValuesT>(value);
  }
  template <typename ArrayValuesT = Aws::Vector<Aws::Crt::Optional<ArrayValue>>>
  ArrayValue& WithArrayValues(ArrayValuesT&& value) {
    SetArrayValues(std::forward<ArrayValuesT>(value));
    return *this;
  }
  template <typename ArrayValuesT = ArrayValue>
  ArrayValue& AddArrayValues(ArrayValuesT&& value) {
    m_arrayValuesHasBeenSet = true;
    m_arrayValues.emplace_back(std::forward<ArrayValuesT>(value));
    return *this;
  }
  inline ArrayValue& AddArrayValues(Aws::Crt::Optional<ArrayValue> value) {
    m_arrayValuesHasBeenSet = true;
    m_arrayValues.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::Crt::Optional<bool>> m_booleanValues;

  Aws::Vector<Aws::Crt::Optional<long long>> m_longValues;

  Aws::Vector<Aws::Crt::Optional<double>> m_doubleValues;

  Aws::Vector<Aws::Crt::Optional<Aws::String>> m_stringValues;

  Aws::Vector<Aws::Crt::Optional<ArrayValue>> m_arrayValues;
  bool m_booleanValuesHasBeenSet = false;
  bool m_longValuesHasBeenSet = false;
  bool m_doubleValuesHasBeenSet = false;
  bool m_stringValuesHasBeenSet = false;
  bool m_arrayValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDSDataService
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p> Defines criteria for selecting resources based on field values.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AdvancedFieldSelector">AWS
 * API Reference</a></p>
 */
class AdvancedFieldSelector {
 public:
  AWS_OBSERVABILITYADMIN_API AdvancedFieldSelector() = default;
  AWS_OBSERVABILITYADMIN_API AdvancedFieldSelector(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AdvancedFieldSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The name of the field to use for selection. </p>
   */
  inline const Aws::String& GetField() const { return m_field; }
  inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
  template <typename FieldT = Aws::String>
  void SetField(FieldT&& value) {
    m_fieldHasBeenSet = true;
    m_field = std::forward<FieldT>(value);
  }
  template <typename FieldT = Aws::String>
  AdvancedFieldSelector& WithField(FieldT&& value) {
    SetField(std::forward<FieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Matches if the field value equals the specified value. </p>
   */
  inline const Aws::Vector<Aws::String>& GetEquals() const { return m_equals; }
  inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
  template <typename EqualsT = Aws::Vector<Aws::String>>
  void SetEquals(EqualsT&& value) {
    m_equalsHasBeenSet = true;
    m_equals = std::forward<EqualsT>(value);
  }
  template <typename EqualsT = Aws::Vector<Aws::String>>
  AdvancedFieldSelector& WithEquals(EqualsT&& value) {
    SetEquals(std::forward<EqualsT>(value));
    return *this;
  }
  template <typename EqualsT = Aws::String>
  AdvancedFieldSelector& AddEquals(EqualsT&& value) {
    m_equalsHasBeenSet = true;
    m_equals.emplace_back(std::forward<EqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Matches if the field value starts with the specified value. </p>
   */
  inline const Aws::Vector<Aws::String>& GetStartsWith() const { return m_startsWith; }
  inline bool StartsWithHasBeenSet() const { return m_startsWithHasBeenSet; }
  template <typename StartsWithT = Aws::Vector<Aws::String>>
  void SetStartsWith(StartsWithT&& value) {
    m_startsWithHasBeenSet = true;
    m_startsWith = std::forward<StartsWithT>(value);
  }
  template <typename StartsWithT = Aws::Vector<Aws::String>>
  AdvancedFieldSelector& WithStartsWith(StartsWithT&& value) {
    SetStartsWith(std::forward<StartsWithT>(value));
    return *this;
  }
  template <typename StartsWithT = Aws::String>
  AdvancedFieldSelector& AddStartsWith(StartsWithT&& value) {
    m_startsWithHasBeenSet = true;
    m_startsWith.emplace_back(std::forward<StartsWithT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Matches if the field value ends with the specified value. </p>
   */
  inline const Aws::Vector<Aws::String>& GetEndsWith() const { return m_endsWith; }
  inline bool EndsWithHasBeenSet() const { return m_endsWithHasBeenSet; }
  template <typename EndsWithT = Aws::Vector<Aws::String>>
  void SetEndsWith(EndsWithT&& value) {
    m_endsWithHasBeenSet = true;
    m_endsWith = std::forward<EndsWithT>(value);
  }
  template <typename EndsWithT = Aws::Vector<Aws::String>>
  AdvancedFieldSelector& WithEndsWith(EndsWithT&& value) {
    SetEndsWith(std::forward<EndsWithT>(value));
    return *this;
  }
  template <typename EndsWithT = Aws::String>
  AdvancedFieldSelector& AddEndsWith(EndsWithT&& value) {
    m_endsWithHasBeenSet = true;
    m_endsWith.emplace_back(std::forward<EndsWithT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Matches if the field value does not equal the specified value. </p>
   */
  inline const Aws::Vector<Aws::String>& GetNotEquals() const { return m_notEquals; }
  inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
  template <typename NotEqualsT = Aws::Vector<Aws::String>>
  void SetNotEquals(NotEqualsT&& value) {
    m_notEqualsHasBeenSet = true;
    m_notEquals = std::forward<NotEqualsT>(value);
  }
  template <typename NotEqualsT = Aws::Vector<Aws::String>>
  AdvancedFieldSelector& WithNotEquals(NotEqualsT&& value) {
    SetNotEquals(std::forward<NotEqualsT>(value));
    return *this;
  }
  template <typename NotEqualsT = Aws::String>
  AdvancedFieldSelector& AddNotEquals(NotEqualsT&& value) {
    m_notEqualsHasBeenSet = true;
    m_notEquals.emplace_back(std::forward<NotEqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Matches if the field value does not start with the specified value. </p>
   */
  inline const Aws::Vector<Aws::String>& GetNotStartsWith() const { return m_notStartsWith; }
  inline bool NotStartsWithHasBeenSet() const { return m_notStartsWithHasBeenSet; }
  template <typename NotStartsWithT = Aws::Vector<Aws::String>>
  void SetNotStartsWith(NotStartsWithT&& value) {
    m_notStartsWithHasBeenSet = true;
    m_notStartsWith = std::forward<NotStartsWithT>(value);
  }
  template <typename NotStartsWithT = Aws::Vector<Aws::String>>
  AdvancedFieldSelector& WithNotStartsWith(NotStartsWithT&& value) {
    SetNotStartsWith(std::forward<NotStartsWithT>(value));
    return *this;
  }
  template <typename NotStartsWithT = Aws::String>
  AdvancedFieldSelector& AddNotStartsWith(NotStartsWithT&& value) {
    m_notStartsWithHasBeenSet = true;
    m_notStartsWith.emplace_back(std::forward<NotStartsWithT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Matches if the field value does not end with the specified value. </p>
   */
  inline const Aws::Vector<Aws::String>& GetNotEndsWith() const { return m_notEndsWith; }
  inline bool NotEndsWithHasBeenSet() const { return m_notEndsWithHasBeenSet; }
  template <typename NotEndsWithT = Aws::Vector<Aws::String>>
  void SetNotEndsWith(NotEndsWithT&& value) {
    m_notEndsWithHasBeenSet = true;
    m_notEndsWith = std::forward<NotEndsWithT>(value);
  }
  template <typename NotEndsWithT = Aws::Vector<Aws::String>>
  AdvancedFieldSelector& WithNotEndsWith(NotEndsWithT&& value) {
    SetNotEndsWith(std::forward<NotEndsWithT>(value));
    return *this;
  }
  template <typename NotEndsWithT = Aws::String>
  AdvancedFieldSelector& AddNotEndsWith(NotEndsWithT&& value) {
    m_notEndsWithHasBeenSet = true;
    m_notEndsWith.emplace_back(std::forward<NotEndsWithT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_field;
  bool m_fieldHasBeenSet = false;

  Aws::Vector<Aws::String> m_equals;
  bool m_equalsHasBeenSet = false;

  Aws::Vector<Aws::String> m_startsWith;
  bool m_startsWithHasBeenSet = false;

  Aws::Vector<Aws::String> m_endsWith;
  bool m_endsWithHasBeenSet = false;

  Aws::Vector<Aws::String> m_notEquals;
  bool m_notEqualsHasBeenSet = false;

  Aws::Vector<Aws::String> m_notStartsWith;
  bool m_notStartsWithHasBeenSet = false;

  Aws::Vector<Aws::String> m_notEndsWith;
  bool m_notEndsWithHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws

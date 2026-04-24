/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Represents a detailed validation error with message, reason, and field
 * mapping for comprehensive error reporting.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ValidationError">AWS
 * API Reference</a></p>
 */
class ValidationError {
 public:
  AWS_OBSERVABILITYADMIN_API ValidationError() = default;
  AWS_OBSERVABILITYADMIN_API ValidationError(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API ValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error message describing the validation issue.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ValidationError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason code or category for the validation error.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  ValidationError& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A mapping of field names to specific validation issues within the
   * configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetFieldMap() const { return m_fieldMap; }
  inline bool FieldMapHasBeenSet() const { return m_fieldMapHasBeenSet; }
  template <typename FieldMapT = Aws::Map<Aws::String, Aws::String>>
  void SetFieldMap(FieldMapT&& value) {
    m_fieldMapHasBeenSet = true;
    m_fieldMap = std::forward<FieldMapT>(value);
  }
  template <typename FieldMapT = Aws::Map<Aws::String, Aws::String>>
  ValidationError& WithFieldMap(FieldMapT&& value) {
    SetFieldMap(std::forward<FieldMapT>(value));
    return *this;
  }
  template <typename FieldMapKeyT = Aws::String, typename FieldMapValueT = Aws::String>
  ValidationError& AddFieldMap(FieldMapKeyT&& key, FieldMapValueT&& value) {
    m_fieldMapHasBeenSet = true;
    m_fieldMap.emplace(std::forward<FieldMapKeyT>(key), std::forward<FieldMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_reason;

  Aws::Map<Aws::String, Aws::String> m_fieldMap;
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_fieldMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/ValidationExceptionField.h>
#include <aws/payments/model/ValidationExceptionReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {

/**
 * <p>The request isn't valid. Check <code>reason</code> and <code>fieldList</code>
 * for the cause, correct the request, and try again.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/ValidationException">AWS
 * API Reference</a></p>
 */
class ValidationException {
 public:
  AWS_PAYMENTS_API ValidationException() = default;
  AWS_PAYMENTS_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ValidationException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that validation failed. The following values are valid:</p> <ul>
   * <li> <p> <code>CANNOT_PARSE</code> – The request body couldn't be parsed, or a
   * value isn't of the expected type.</p> </li> <li> <p>
   * <code>FIELD_VALIDATION_FAILED</code> – One or more members failed validation.
   * <code>fieldList</code> names them.</p> </li> <li> <p>
   * <code>INVALID_PAGINATION_TOKEN</code> – The <code>nextToken</code> is malformed
   * or expired, or doesn't match the original request. Start again from the first
   * page.</p> </li> <li> <p> <code>UNSUPPORTED_ACTION</code> – The request is well
   * formed, but the action isn't supported for your account, Region, or
   * resource.</p> </li> <li> <p> <code>OTHER</code> – The request isn't valid for
   * another reason.</p> </li> </ul>
   */
  inline ValidationExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(ValidationExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ValidationException& WithReason(ValidationExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request members that failed validation. This member is populated when
   * <code>reason</code> is <code>FIELD_VALIDATION_FAILED</code>.</p>
   */
  inline const Aws::Vector<ValidationExceptionField>& GetFieldList() const { return m_fieldList; }
  inline bool FieldListHasBeenSet() const { return m_fieldListHasBeenSet; }
  template <typename FieldListT = Aws::Vector<ValidationExceptionField>>
  void SetFieldList(FieldListT&& value) {
    m_fieldListHasBeenSet = true;
    m_fieldList = std::forward<FieldListT>(value);
  }
  template <typename FieldListT = Aws::Vector<ValidationExceptionField>>
  ValidationException& WithFieldList(FieldListT&& value) {
    SetFieldList(std::forward<FieldListT>(value));
    return *this;
  }
  template <typename FieldListT = ValidationExceptionField>
  ValidationException& AddFieldList(FieldListT&& value) {
    m_fieldListHasBeenSet = true;
    m_fieldList.emplace_back(std::forward<FieldListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  ValidationExceptionReason m_reason{ValidationExceptionReason::NOT_SET};

  Aws::Vector<ValidationExceptionField> m_fieldList;
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_fieldListHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws

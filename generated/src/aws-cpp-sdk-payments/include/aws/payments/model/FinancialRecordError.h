/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/BatchErrorCode.h>
#include <aws/payments/model/FinancialRecordKey.h>

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
 * <p>The reason that one of the records requested from
 * <code>BatchGetFinancialRecord</code> couldn't be returned. The other records in
 * the request are unaffected.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/FinancialRecordError">AWS
 * API Reference</a></p>
 */
class FinancialRecordError {
 public:
  AWS_PAYMENTS_API FinancialRecordError() = default;
  AWS_PAYMENTS_API FinancialRecordError(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API FinancialRecordError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key of the record that couldn't be retrieved, as you requested it.</p>
   */
  inline const FinancialRecordKey& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = FinancialRecordKey>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = FinancialRecordKey>
  FinancialRecordError& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code that indicates why the retrieval failed. The following values
   * are valid:</p> <ul> <li> <p> <code>NOT_FOUND</code> – No financial record on
   * your account matches the key.</p> </li> <li> <p> <code>INTERNAL_ERROR</code> –
   * An internal error occurred while processing this record. The other records in
   * the request are unaffected. You can retry this record.</p> </li> </ul>
   */
  inline BatchErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(BatchErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline FinancialRecordError& WithCode(BatchErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of why the operation couldn't retrieve this record. The wording
   * can change at any time and isn't localized, so don't parse this value. To handle
   * the error in your code, use <code>code</code> instead.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  FinancialRecordError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  FinancialRecordKey m_key;

  BatchErrorCode m_code{BatchErrorCode::NOT_SET};

  Aws::String m_message;
  bool m_keyHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws

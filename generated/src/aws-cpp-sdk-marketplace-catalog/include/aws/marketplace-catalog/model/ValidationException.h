/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ValidationExceptionField.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>An error occurred during validation.</p> <p>HTTP status code:
 * 422</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ValidationException">AWS
 * API Reference</a></p>
 */
class ValidationException {
 public:
  AWS_MARKETPLACECATALOG_API ValidationException() = default;
  AWS_MARKETPLACECATALOG_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

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
   * <p>A list of detailed entries describing the request fields that failed
   * validation. Present when the failure can be attributed to one or more specific
   * fields.</p>
   */
  inline const Aws::Vector<ValidationExceptionField>& GetValidationExceptionFieldList() const { return m_validationExceptionFieldList; }
  inline bool ValidationExceptionFieldListHasBeenSet() const { return m_validationExceptionFieldListHasBeenSet; }
  template <typename ValidationExceptionFieldListT = Aws::Vector<ValidationExceptionField>>
  void SetValidationExceptionFieldList(ValidationExceptionFieldListT&& value) {
    m_validationExceptionFieldListHasBeenSet = true;
    m_validationExceptionFieldList = std::forward<ValidationExceptionFieldListT>(value);
  }
  template <typename ValidationExceptionFieldListT = Aws::Vector<ValidationExceptionField>>
  ValidationException& WithValidationExceptionFieldList(ValidationExceptionFieldListT&& value) {
    SetValidationExceptionFieldList(std::forward<ValidationExceptionFieldListT>(value));
    return *this;
  }
  template <typename ValidationExceptionFieldListT = ValidationExceptionField>
  ValidationException& AddValidationExceptionFieldList(ValidationExceptionFieldListT&& value) {
    m_validationExceptionFieldListHasBeenSet = true;
    m_validationExceptionFieldList.emplace_back(std::forward<ValidationExceptionFieldListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::Vector<ValidationExceptionField> m_validationExceptionFieldList;
  bool m_messageHasBeenSet = false;
  bool m_validationExceptionFieldListHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/ResourceShareError.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MQ {
namespace Model {

/**
 * <p>Returns information about an error.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BadRequestException">AWS
 * API Reference</a></p>
 */
class BadRequestException {
 public:
  AWS_MQ_API BadRequestException() = default;
  AWS_MQ_API BadRequestException(Aws::Utils::Json::JsonView jsonValue);
  AWS_MQ_API BadRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attribute which caused the error.</p>
   */
  inline const Aws::String& GetErrorAttribute() const { return m_errorAttribute; }
  inline bool ErrorAttributeHasBeenSet() const { return m_errorAttributeHasBeenSet; }
  template <typename ErrorAttributeT = Aws::String>
  void SetErrorAttribute(ErrorAttributeT&& value) {
    m_errorAttributeHasBeenSet = true;
    m_errorAttribute = std::forward<ErrorAttributeT>(value);
  }
  template <typename ErrorAttributeT = Aws::String>
  BadRequestException& WithErrorAttribute(ErrorAttributeT&& value) {
    SetErrorAttribute(std::forward<ErrorAttributeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The explanation of the error.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BadRequestException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of resource share errors.</p>
   */
  inline const Aws::Vector<ResourceShareError>& GetResourceShareErrors() const { return m_resourceShareErrors; }
  inline bool ResourceShareErrorsHasBeenSet() const { return m_resourceShareErrorsHasBeenSet; }
  template <typename ResourceShareErrorsT = Aws::Vector<ResourceShareError>>
  void SetResourceShareErrors(ResourceShareErrorsT&& value) {
    m_resourceShareErrorsHasBeenSet = true;
    m_resourceShareErrors = std::forward<ResourceShareErrorsT>(value);
  }
  template <typename ResourceShareErrorsT = Aws::Vector<ResourceShareError>>
  BadRequestException& WithResourceShareErrors(ResourceShareErrorsT&& value) {
    SetResourceShareErrors(std::forward<ResourceShareErrorsT>(value));
    return *this;
  }
  template <typename ResourceShareErrorsT = ResourceShareError>
  BadRequestException& AddResourceShareErrors(ResourceShareErrorsT&& value) {
    m_resourceShareErrorsHasBeenSet = true;
    m_resourceShareErrors.emplace_back(std::forward<ResourceShareErrorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_errorAttribute;

  Aws::String m_message;

  Aws::Vector<ResourceShareError> m_resourceShareErrors;
  bool m_errorAttributeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_resourceShareErrorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MQ
}  // namespace Aws

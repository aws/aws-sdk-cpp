/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/ValidationFindingCode.h>
#include <aws/ssm/model/ValidationFindingScope.h>
#include <aws/ssm/model/ValidationFindingType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {

/**
 * <p>A validation finding from a cloud connector validation check.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ValidationFinding">AWS
 * API Reference</a></p>
 */
class ValidationFinding {
 public:
  AWS_SSM_API ValidationFinding() = default;
  AWS_SSM_API ValidationFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API ValidationFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the validation finding.</p>
   */
  inline ValidationFindingType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ValidationFindingType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ValidationFinding& WithType(ValidationFindingType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code that identifies the specific validation finding.</p>
   */
  inline ValidationFindingCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(ValidationFindingCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline ValidationFinding& WithCode(ValidationFindingCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that describes the validation finding.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ValidationFinding& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message from the third-party cloud provider related to the validation
   * finding.</p>
   */
  inline const Aws::String& GetProviderMessage() const { return m_providerMessage; }
  inline bool ProviderMessageHasBeenSet() const { return m_providerMessageHasBeenSet; }
  template <typename ProviderMessageT = Aws::String>
  void SetProviderMessage(ProviderMessageT&& value) {
    m_providerMessageHasBeenSet = true;
    m_providerMessage = std::forward<ProviderMessageT>(value);
  }
  template <typename ProviderMessageT = Aws::String>
  ValidationFinding& WithProviderMessage(ProviderMessageT&& value) {
    SetProviderMessage(std::forward<ProviderMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of the validation finding, identifying the specific resource
   * affected.</p>
   */
  inline const ValidationFindingScope& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = ValidationFindingScope>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = ValidationFindingScope>
  ValidationFinding& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}
 private:
  ValidationFindingType m_type{ValidationFindingType::NOT_SET};

  ValidationFindingCode m_code{ValidationFindingCode::NOT_SET};

  Aws::String m_message;

  Aws::String m_providerMessage;

  ValidationFindingScope m_scope;
  bool m_typeHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_providerMessageHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws

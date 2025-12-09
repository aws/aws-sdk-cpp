/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/BlockchainInstant.h>
#include <aws/managedblockchain-query/model/ErrorType.h>
#include <aws/managedblockchain-query/model/OwnerIdentifier.h>
#include <aws/managedblockchain-query/model/TokenIdentifier.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ManagedBlockchainQuery {
namespace Model {

/**
 * <p>Error generated from a failed <code>BatchGetTokenBalance</code>
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/BatchGetTokenBalanceErrorItem">AWS
 * API Reference</a></p>
 */
class BatchGetTokenBalanceErrorItem {
 public:
  AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceErrorItem() = default;
  AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceErrorItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceErrorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const TokenIdentifier& GetTokenIdentifier() const { return m_tokenIdentifier; }
  inline bool TokenIdentifierHasBeenSet() const { return m_tokenIdentifierHasBeenSet; }
  template <typename TokenIdentifierT = TokenIdentifier>
  void SetTokenIdentifier(TokenIdentifierT&& value) {
    m_tokenIdentifierHasBeenSet = true;
    m_tokenIdentifier = std::forward<TokenIdentifierT>(value);
  }
  template <typename TokenIdentifierT = TokenIdentifier>
  BatchGetTokenBalanceErrorItem& WithTokenIdentifier(TokenIdentifierT&& value) {
    SetTokenIdentifier(std::forward<TokenIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const OwnerIdentifier& GetOwnerIdentifier() const { return m_ownerIdentifier; }
  inline bool OwnerIdentifierHasBeenSet() const { return m_ownerIdentifierHasBeenSet; }
  template <typename OwnerIdentifierT = OwnerIdentifier>
  void SetOwnerIdentifier(OwnerIdentifierT&& value) {
    m_ownerIdentifierHasBeenSet = true;
    m_ownerIdentifier = std::forward<OwnerIdentifierT>(value);
  }
  template <typename OwnerIdentifierT = OwnerIdentifier>
  BatchGetTokenBalanceErrorItem& WithOwnerIdentifier(OwnerIdentifierT&& value) {
    SetOwnerIdentifier(std::forward<OwnerIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BlockchainInstant& GetAtBlockchainInstant() const { return m_atBlockchainInstant; }
  inline bool AtBlockchainInstantHasBeenSet() const { return m_atBlockchainInstantHasBeenSet; }
  template <typename AtBlockchainInstantT = BlockchainInstant>
  void SetAtBlockchainInstant(AtBlockchainInstantT&& value) {
    m_atBlockchainInstantHasBeenSet = true;
    m_atBlockchainInstant = std::forward<AtBlockchainInstantT>(value);
  }
  template <typename AtBlockchainInstantT = BlockchainInstant>
  BatchGetTokenBalanceErrorItem& WithAtBlockchainInstant(AtBlockchainInstantT&& value) {
    SetAtBlockchainInstant(std::forward<AtBlockchainInstantT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code associated with the error.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  BatchGetTokenBalanceErrorItem& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message associated with the error.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  BatchGetTokenBalanceErrorItem& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of error.</p>
   */
  inline ErrorType GetErrorType() const { return m_errorType; }
  inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
  inline void SetErrorType(ErrorType value) {
    m_errorTypeHasBeenSet = true;
    m_errorType = value;
  }
  inline BatchGetTokenBalanceErrorItem& WithErrorType(ErrorType value) {
    SetErrorType(value);
    return *this;
  }
  ///@}
 private:
  TokenIdentifier m_tokenIdentifier;

  OwnerIdentifier m_ownerIdentifier;

  BlockchainInstant m_atBlockchainInstant;

  Aws::String m_errorCode;

  Aws::String m_errorMessage;

  ErrorType m_errorType{ErrorType::NOT_SET};
  bool m_tokenIdentifierHasBeenSet = false;
  bool m_ownerIdentifierHasBeenSet = false;
  bool m_atBlockchainInstantHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_errorTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedBlockchainQuery
}  // namespace Aws

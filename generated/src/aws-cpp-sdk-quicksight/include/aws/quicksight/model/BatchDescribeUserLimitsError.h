/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>Information about a user whose limits could not be described in a batch
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BatchDescribeUserLimitsError">AWS
 * API Reference</a></p>
 */
class BatchDescribeUserLimitsError {
 public:
  AWS_QUICKSIGHT_API BatchDescribeUserLimitsError() = default;
  AWS_QUICKSIGHT_API BatchDescribeUserLimitsError(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BatchDescribeUserLimitsError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the user that failed.</p>
   */
  inline const Aws::String& GetUserName() const { return m_userName; }
  inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
  template <typename UserNameT = Aws::String>
  void SetUserName(UserNameT&& value) {
    m_userNameHasBeenSet = true;
    m_userName = std::forward<UserNameT>(value);
  }
  template <typename UserNameT = Aws::String>
  BatchDescribeUserLimitsError& WithUserName(UserNameT&& value) {
    SetUserName(std::forward<UserNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace of the user that failed.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  BatchDescribeUserLimitsError& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the user that failed.</p>
   */
  inline const Aws::String& GetUserArn() const { return m_userArn; }
  inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
  template <typename UserArnT = Aws::String>
  void SetUserArn(UserArnT&& value) {
    m_userArnHasBeenSet = true;
    m_userArn = std::forward<UserArnT>(value);
  }
  template <typename UserArnT = Aws::String>
  BatchDescribeUserLimitsError& WithUserArn(UserArnT&& value) {
    SetUserArn(std::forward<UserArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code for the failure.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  BatchDescribeUserLimitsError& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message for the failure.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchDescribeUserLimitsError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userName;

  Aws::String m_namespace;

  Aws::String m_userArn;

  Aws::String m_errorCode;

  Aws::String m_message;
  bool m_userNameHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_userArnHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

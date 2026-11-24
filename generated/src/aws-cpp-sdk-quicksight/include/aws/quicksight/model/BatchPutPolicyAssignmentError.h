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
 * <p>A principal that a <code>BatchPutPolicyAssignmentByPolicy</code> request
 * couldn't assign the policy to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BatchPutPolicyAssignmentError">AWS
 * API Reference</a></p>
 */
class BatchPutPolicyAssignmentError {
 public:
  AWS_QUICKSIGHT_API BatchPutPolicyAssignmentError() = default;
  AWS_QUICKSIGHT_API BatchPutPolicyAssignmentError(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BatchPutPolicyAssignmentError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the principal.</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  BatchPutPolicyAssignmentError& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the entry failed. Possible values:</p> <ul> <li> <p>
   * <code>ValidationException</code> – The entry is not valid.</p> </li> <li> <p>
   * <code>ResourceNotFoundException</code> – The principal doesn't exist, or the
   * policy was deleted while the request was being processed.</p> </li> <li> <p>
   * <code>ConflictException</code> – The principal doesn't have the existing policy
   * that you specified, or the assignment changed since the revision that you
   * specified.</p> </li> <li> <p> <code>ThrottlingException</code> – The entry was
   * throttled. You can retry this entry.</p> </li> <li> <p>
   * <code>InternalFailureException</code> – An internal error occurred.</p> </li>
   * </ul>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  BatchPutPolicyAssignmentError& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the error.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  BatchPutPolicyAssignmentError& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_principalArn;

  Aws::String m_errorCode;

  Aws::String m_errorMessage;
  bool m_principalArnHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AccessDeniedExceptionErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>This error occurs when you don't have permission to perform the requested
 * action.</p> <p>You don’t have access to this action or resource. Review IAM
 * policies or contact your AWS administrator for assistance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AccessDeniedException">AWS
 * API Reference</a></p>
 */
class AccessDeniedException {
 public:
  AWS_PARTNERCENTRALSELLING_API AccessDeniedException() = default;
  AWS_PARTNERCENTRALSELLING_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  AccessDeniedException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why access was denied for the requested operation.</p>
   */
  inline AccessDeniedExceptionErrorCode GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(AccessDeniedExceptionErrorCode value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline AccessDeniedException& WithReason(AccessDeniedExceptionErrorCode value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;
  bool m_messageHasBeenSet = false;

  AccessDeniedExceptionErrorCode m_reason{AccessDeniedExceptionErrorCode::NOT_SET};
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/MailboxValidation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {
/**
 * <p>Validation insights about an email address.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailAddressInsightsResponse">AWS
 * API Reference</a></p>
 */
class GetEmailAddressInsightsResult {
 public:
  AWS_SESV2_API GetEmailAddressInsightsResult() = default;
  AWS_SESV2_API GetEmailAddressInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SESV2_API GetEmailAddressInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Detailed validation results for the email address.</p>
   */
  inline const MailboxValidation& GetMailboxValidation() const { return m_mailboxValidation; }
  template <typename MailboxValidationT = MailboxValidation>
  void SetMailboxValidation(MailboxValidationT&& value) {
    m_mailboxValidationHasBeenSet = true;
    m_mailboxValidation = std::forward<MailboxValidationT>(value);
  }
  template <typename MailboxValidationT = MailboxValidation>
  GetEmailAddressInsightsResult& WithMailboxValidation(MailboxValidationT&& value) {
    SetMailboxValidation(std::forward<MailboxValidationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetEmailAddressInsightsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  MailboxValidation m_mailboxValidation;

  Aws::String m_requestId;
  bool m_mailboxValidationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws

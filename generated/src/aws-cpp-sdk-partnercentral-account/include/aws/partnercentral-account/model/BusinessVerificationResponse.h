/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/BusinessVerificationDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Contains the response information and results from a business verification
 * process, including any verification-specific data returned by the verification
 * service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/BusinessVerificationResponse">AWS
 * API Reference</a></p>
 */
class BusinessVerificationResponse {
 public:
  AWS_PARTNERCENTRALACCOUNT_API BusinessVerificationResponse() = default;
  AWS_PARTNERCENTRALACCOUNT_API BusinessVerificationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API BusinessVerificationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The business verification details that were processed and verified,
   * potentially including additional information discovered during the verification
   * process.</p>
   */
  inline const BusinessVerificationDetails& GetBusinessVerificationDetails() const { return m_businessVerificationDetails; }
  inline bool BusinessVerificationDetailsHasBeenSet() const { return m_businessVerificationDetailsHasBeenSet; }
  template <typename BusinessVerificationDetailsT = BusinessVerificationDetails>
  void SetBusinessVerificationDetails(BusinessVerificationDetailsT&& value) {
    m_businessVerificationDetailsHasBeenSet = true;
    m_businessVerificationDetails = std::forward<BusinessVerificationDetailsT>(value);
  }
  template <typename BusinessVerificationDetailsT = BusinessVerificationDetails>
  BusinessVerificationResponse& WithBusinessVerificationDetails(BusinessVerificationDetailsT&& value) {
    SetBusinessVerificationDetails(std::forward<BusinessVerificationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A secure URL where the registrant can complete additional verification steps,
   * such as document upload or identity confirmation through a third-party
   * verification service.</p>
   */
  inline const Aws::String& GetCompletionUrl() const { return m_completionUrl; }
  inline bool CompletionUrlHasBeenSet() const { return m_completionUrlHasBeenSet; }
  template <typename CompletionUrlT = Aws::String>
  void SetCompletionUrl(CompletionUrlT&& value) {
    m_completionUrlHasBeenSet = true;
    m_completionUrl = std::forward<CompletionUrlT>(value);
  }
  template <typename CompletionUrlT = Aws::String>
  BusinessVerificationResponse& WithCompletionUrl(CompletionUrlT&& value) {
    SetCompletionUrl(std::forward<CompletionUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the completion URL expires and is no longer valid for
   * accessing the verification workflow.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletionUrlExpiresAt() const { return m_completionUrlExpiresAt; }
  inline bool CompletionUrlExpiresAtHasBeenSet() const { return m_completionUrlExpiresAtHasBeenSet; }
  template <typename CompletionUrlExpiresAtT = Aws::Utils::DateTime>
  void SetCompletionUrlExpiresAt(CompletionUrlExpiresAtT&& value) {
    m_completionUrlExpiresAtHasBeenSet = true;
    m_completionUrlExpiresAt = std::forward<CompletionUrlExpiresAtT>(value);
  }
  template <typename CompletionUrlExpiresAtT = Aws::Utils::DateTime>
  BusinessVerificationResponse& WithCompletionUrlExpiresAt(CompletionUrlExpiresAtT&& value) {
    SetCompletionUrlExpiresAt(std::forward<CompletionUrlExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  BusinessVerificationDetails m_businessVerificationDetails;

  Aws::String m_completionUrl;

  Aws::Utils::DateTime m_completionUrlExpiresAt{};
  bool m_businessVerificationDetailsHasBeenSet = false;
  bool m_completionUrlHasBeenSet = false;
  bool m_completionUrlExpiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws

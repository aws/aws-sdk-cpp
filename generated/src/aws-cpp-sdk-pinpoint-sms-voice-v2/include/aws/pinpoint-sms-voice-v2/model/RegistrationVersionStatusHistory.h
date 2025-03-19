/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The <b>RegistrationVersionStatusHistory</b> object contains the time stamps
   * for when the reservations status changes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationVersionStatusHistory">AWS
   * API Reference</a></p>
   */
  class RegistrationVersionStatusHistory
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionStatusHistory() = default;
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionStatusHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionStatusHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the registration was in the draft state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetDraftTimestamp() const { return m_draftTimestamp; }
    inline bool DraftTimestampHasBeenSet() const { return m_draftTimestampHasBeenSet; }
    template<typename DraftTimestampT = Aws::Utils::DateTime>
    void SetDraftTimestamp(DraftTimestampT&& value) { m_draftTimestampHasBeenSet = true; m_draftTimestamp = std::forward<DraftTimestampT>(value); }
    template<typename DraftTimestampT = Aws::Utils::DateTime>
    RegistrationVersionStatusHistory& WithDraftTimestamp(DraftTimestampT&& value) { SetDraftTimestamp(std::forward<DraftTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the submitted state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedTimestamp() const { return m_submittedTimestamp; }
    inline bool SubmittedTimestampHasBeenSet() const { return m_submittedTimestampHasBeenSet; }
    template<typename SubmittedTimestampT = Aws::Utils::DateTime>
    void SetSubmittedTimestamp(SubmittedTimestampT&& value) { m_submittedTimestampHasBeenSet = true; m_submittedTimestamp = std::forward<SubmittedTimestampT>(value); }
    template<typename SubmittedTimestampT = Aws::Utils::DateTime>
    RegistrationVersionStatusHistory& WithSubmittedTimestamp(SubmittedTimestampT&& value) { SetSubmittedTimestamp(std::forward<SubmittedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the reviewing state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetReviewingTimestamp() const { return m_reviewingTimestamp; }
    inline bool ReviewingTimestampHasBeenSet() const { return m_reviewingTimestampHasBeenSet; }
    template<typename ReviewingTimestampT = Aws::Utils::DateTime>
    void SetReviewingTimestamp(ReviewingTimestampT&& value) { m_reviewingTimestampHasBeenSet = true; m_reviewingTimestamp = std::forward<ReviewingTimestampT>(value); }
    template<typename ReviewingTimestampT = Aws::Utils::DateTime>
    RegistrationVersionStatusHistory& WithReviewingTimestamp(ReviewingTimestampT&& value) { SetReviewingTimestamp(std::forward<ReviewingTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the requires authentication state, in
     * <a href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetRequiresAuthenticationTimestamp() const { return m_requiresAuthenticationTimestamp; }
    inline bool RequiresAuthenticationTimestampHasBeenSet() const { return m_requiresAuthenticationTimestampHasBeenSet; }
    template<typename RequiresAuthenticationTimestampT = Aws::Utils::DateTime>
    void SetRequiresAuthenticationTimestamp(RequiresAuthenticationTimestampT&& value) { m_requiresAuthenticationTimestampHasBeenSet = true; m_requiresAuthenticationTimestamp = std::forward<RequiresAuthenticationTimestampT>(value); }
    template<typename RequiresAuthenticationTimestampT = Aws::Utils::DateTime>
    RegistrationVersionStatusHistory& WithRequiresAuthenticationTimestamp(RequiresAuthenticationTimestampT&& value) { SetRequiresAuthenticationTimestamp(std::forward<RequiresAuthenticationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the approved state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovedTimestamp() const { return m_approvedTimestamp; }
    inline bool ApprovedTimestampHasBeenSet() const { return m_approvedTimestampHasBeenSet; }
    template<typename ApprovedTimestampT = Aws::Utils::DateTime>
    void SetApprovedTimestamp(ApprovedTimestampT&& value) { m_approvedTimestampHasBeenSet = true; m_approvedTimestamp = std::forward<ApprovedTimestampT>(value); }
    template<typename ApprovedTimestampT = Aws::Utils::DateTime>
    RegistrationVersionStatusHistory& WithApprovedTimestamp(ApprovedTimestampT&& value) { SetApprovedTimestamp(std::forward<ApprovedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the discarded state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetDiscardedTimestamp() const { return m_discardedTimestamp; }
    inline bool DiscardedTimestampHasBeenSet() const { return m_discardedTimestampHasBeenSet; }
    template<typename DiscardedTimestampT = Aws::Utils::DateTime>
    void SetDiscardedTimestamp(DiscardedTimestampT&& value) { m_discardedTimestampHasBeenSet = true; m_discardedTimestamp = std::forward<DiscardedTimestampT>(value); }
    template<typename DiscardedTimestampT = Aws::Utils::DateTime>
    RegistrationVersionStatusHistory& WithDiscardedTimestamp(DiscardedTimestampT&& value) { SetDiscardedTimestamp(std::forward<DiscardedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the denied state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeniedTimestamp() const { return m_deniedTimestamp; }
    inline bool DeniedTimestampHasBeenSet() const { return m_deniedTimestampHasBeenSet; }
    template<typename DeniedTimestampT = Aws::Utils::DateTime>
    void SetDeniedTimestamp(DeniedTimestampT&& value) { m_deniedTimestampHasBeenSet = true; m_deniedTimestamp = std::forward<DeniedTimestampT>(value); }
    template<typename DeniedTimestampT = Aws::Utils::DateTime>
    RegistrationVersionStatusHistory& WithDeniedTimestamp(DeniedTimestampT&& value) { SetDeniedTimestamp(std::forward<DeniedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the revoked state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedTimestamp() const { return m_revokedTimestamp; }
    inline bool RevokedTimestampHasBeenSet() const { return m_revokedTimestampHasBeenSet; }
    template<typename RevokedTimestampT = Aws::Utils::DateTime>
    void SetRevokedTimestamp(RevokedTimestampT&& value) { m_revokedTimestampHasBeenSet = true; m_revokedTimestamp = std::forward<RevokedTimestampT>(value); }
    template<typename RevokedTimestampT = Aws::Utils::DateTime>
    RegistrationVersionStatusHistory& WithRevokedTimestamp(RevokedTimestampT&& value) { SetRevokedTimestamp(std::forward<RevokedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the archived state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetArchivedTimestamp() const { return m_archivedTimestamp; }
    inline bool ArchivedTimestampHasBeenSet() const { return m_archivedTimestampHasBeenSet; }
    template<typename ArchivedTimestampT = Aws::Utils::DateTime>
    void SetArchivedTimestamp(ArchivedTimestampT&& value) { m_archivedTimestampHasBeenSet = true; m_archivedTimestamp = std::forward<ArchivedTimestampT>(value); }
    template<typename ArchivedTimestampT = Aws::Utils::DateTime>
    RegistrationVersionStatusHistory& WithArchivedTimestamp(ArchivedTimestampT&& value) { SetArchivedTimestamp(std::forward<ArchivedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_draftTimestamp{};
    bool m_draftTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_submittedTimestamp{};
    bool m_submittedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_reviewingTimestamp{};
    bool m_reviewingTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_requiresAuthenticationTimestamp{};
    bool m_requiresAuthenticationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_approvedTimestamp{};
    bool m_approvedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_discardedTimestamp{};
    bool m_discardedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deniedTimestamp{};
    bool m_deniedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_revokedTimestamp{};
    bool m_revokedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_archivedTimestamp{};
    bool m_archivedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

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
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionStatusHistory();
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionStatusHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionStatusHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the registration was in the draft state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetDraftTimestamp() const{ return m_draftTimestamp; }
    inline bool DraftTimestampHasBeenSet() const { return m_draftTimestampHasBeenSet; }
    inline void SetDraftTimestamp(const Aws::Utils::DateTime& value) { m_draftTimestampHasBeenSet = true; m_draftTimestamp = value; }
    inline void SetDraftTimestamp(Aws::Utils::DateTime&& value) { m_draftTimestampHasBeenSet = true; m_draftTimestamp = std::move(value); }
    inline RegistrationVersionStatusHistory& WithDraftTimestamp(const Aws::Utils::DateTime& value) { SetDraftTimestamp(value); return *this;}
    inline RegistrationVersionStatusHistory& WithDraftTimestamp(Aws::Utils::DateTime&& value) { SetDraftTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the submitted state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedTimestamp() const{ return m_submittedTimestamp; }
    inline bool SubmittedTimestampHasBeenSet() const { return m_submittedTimestampHasBeenSet; }
    inline void SetSubmittedTimestamp(const Aws::Utils::DateTime& value) { m_submittedTimestampHasBeenSet = true; m_submittedTimestamp = value; }
    inline void SetSubmittedTimestamp(Aws::Utils::DateTime&& value) { m_submittedTimestampHasBeenSet = true; m_submittedTimestamp = std::move(value); }
    inline RegistrationVersionStatusHistory& WithSubmittedTimestamp(const Aws::Utils::DateTime& value) { SetSubmittedTimestamp(value); return *this;}
    inline RegistrationVersionStatusHistory& WithSubmittedTimestamp(Aws::Utils::DateTime&& value) { SetSubmittedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the reviewing state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetReviewingTimestamp() const{ return m_reviewingTimestamp; }
    inline bool ReviewingTimestampHasBeenSet() const { return m_reviewingTimestampHasBeenSet; }
    inline void SetReviewingTimestamp(const Aws::Utils::DateTime& value) { m_reviewingTimestampHasBeenSet = true; m_reviewingTimestamp = value; }
    inline void SetReviewingTimestamp(Aws::Utils::DateTime&& value) { m_reviewingTimestampHasBeenSet = true; m_reviewingTimestamp = std::move(value); }
    inline RegistrationVersionStatusHistory& WithReviewingTimestamp(const Aws::Utils::DateTime& value) { SetReviewingTimestamp(value); return *this;}
    inline RegistrationVersionStatusHistory& WithReviewingTimestamp(Aws::Utils::DateTime&& value) { SetReviewingTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the requires authentication state, in
     * <a href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetRequiresAuthenticationTimestamp() const{ return m_requiresAuthenticationTimestamp; }
    inline bool RequiresAuthenticationTimestampHasBeenSet() const { return m_requiresAuthenticationTimestampHasBeenSet; }
    inline void SetRequiresAuthenticationTimestamp(const Aws::Utils::DateTime& value) { m_requiresAuthenticationTimestampHasBeenSet = true; m_requiresAuthenticationTimestamp = value; }
    inline void SetRequiresAuthenticationTimestamp(Aws::Utils::DateTime&& value) { m_requiresAuthenticationTimestampHasBeenSet = true; m_requiresAuthenticationTimestamp = std::move(value); }
    inline RegistrationVersionStatusHistory& WithRequiresAuthenticationTimestamp(const Aws::Utils::DateTime& value) { SetRequiresAuthenticationTimestamp(value); return *this;}
    inline RegistrationVersionStatusHistory& WithRequiresAuthenticationTimestamp(Aws::Utils::DateTime&& value) { SetRequiresAuthenticationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the approved state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovedTimestamp() const{ return m_approvedTimestamp; }
    inline bool ApprovedTimestampHasBeenSet() const { return m_approvedTimestampHasBeenSet; }
    inline void SetApprovedTimestamp(const Aws::Utils::DateTime& value) { m_approvedTimestampHasBeenSet = true; m_approvedTimestamp = value; }
    inline void SetApprovedTimestamp(Aws::Utils::DateTime&& value) { m_approvedTimestampHasBeenSet = true; m_approvedTimestamp = std::move(value); }
    inline RegistrationVersionStatusHistory& WithApprovedTimestamp(const Aws::Utils::DateTime& value) { SetApprovedTimestamp(value); return *this;}
    inline RegistrationVersionStatusHistory& WithApprovedTimestamp(Aws::Utils::DateTime&& value) { SetApprovedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the discarded state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetDiscardedTimestamp() const{ return m_discardedTimestamp; }
    inline bool DiscardedTimestampHasBeenSet() const { return m_discardedTimestampHasBeenSet; }
    inline void SetDiscardedTimestamp(const Aws::Utils::DateTime& value) { m_discardedTimestampHasBeenSet = true; m_discardedTimestamp = value; }
    inline void SetDiscardedTimestamp(Aws::Utils::DateTime&& value) { m_discardedTimestampHasBeenSet = true; m_discardedTimestamp = std::move(value); }
    inline RegistrationVersionStatusHistory& WithDiscardedTimestamp(const Aws::Utils::DateTime& value) { SetDiscardedTimestamp(value); return *this;}
    inline RegistrationVersionStatusHistory& WithDiscardedTimestamp(Aws::Utils::DateTime&& value) { SetDiscardedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the denied state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeniedTimestamp() const{ return m_deniedTimestamp; }
    inline bool DeniedTimestampHasBeenSet() const { return m_deniedTimestampHasBeenSet; }
    inline void SetDeniedTimestamp(const Aws::Utils::DateTime& value) { m_deniedTimestampHasBeenSet = true; m_deniedTimestamp = value; }
    inline void SetDeniedTimestamp(Aws::Utils::DateTime&& value) { m_deniedTimestampHasBeenSet = true; m_deniedTimestamp = std::move(value); }
    inline RegistrationVersionStatusHistory& WithDeniedTimestamp(const Aws::Utils::DateTime& value) { SetDeniedTimestamp(value); return *this;}
    inline RegistrationVersionStatusHistory& WithDeniedTimestamp(Aws::Utils::DateTime&& value) { SetDeniedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the revoked state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedTimestamp() const{ return m_revokedTimestamp; }
    inline bool RevokedTimestampHasBeenSet() const { return m_revokedTimestampHasBeenSet; }
    inline void SetRevokedTimestamp(const Aws::Utils::DateTime& value) { m_revokedTimestampHasBeenSet = true; m_revokedTimestamp = value; }
    inline void SetRevokedTimestamp(Aws::Utils::DateTime&& value) { m_revokedTimestampHasBeenSet = true; m_revokedTimestamp = std::move(value); }
    inline RegistrationVersionStatusHistory& WithRevokedTimestamp(const Aws::Utils::DateTime& value) { SetRevokedTimestamp(value); return *this;}
    inline RegistrationVersionStatusHistory& WithRevokedTimestamp(Aws::Utils::DateTime&& value) { SetRevokedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration was in the archived state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetArchivedTimestamp() const{ return m_archivedTimestamp; }
    inline bool ArchivedTimestampHasBeenSet() const { return m_archivedTimestampHasBeenSet; }
    inline void SetArchivedTimestamp(const Aws::Utils::DateTime& value) { m_archivedTimestampHasBeenSet = true; m_archivedTimestamp = value; }
    inline void SetArchivedTimestamp(Aws::Utils::DateTime&& value) { m_archivedTimestampHasBeenSet = true; m_archivedTimestamp = std::move(value); }
    inline RegistrationVersionStatusHistory& WithArchivedTimestamp(const Aws::Utils::DateTime& value) { SetArchivedTimestamp(value); return *this;}
    inline RegistrationVersionStatusHistory& WithArchivedTimestamp(Aws::Utils::DateTime&& value) { SetArchivedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_draftTimestamp;
    bool m_draftTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_submittedTimestamp;
    bool m_submittedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_reviewingTimestamp;
    bool m_reviewingTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_requiresAuthenticationTimestamp;
    bool m_requiresAuthenticationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_approvedTimestamp;
    bool m_approvedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_discardedTimestamp;
    bool m_discardedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deniedTimestamp;
    bool m_deniedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_revokedTimestamp;
    bool m_revokedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_archivedTimestamp;
    bool m_archivedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

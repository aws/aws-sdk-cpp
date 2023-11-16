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


    /**
     * <p>The time when the registration was in the draft state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetDraftTimestamp() const{ return m_draftTimestamp; }

    /**
     * <p>The time when the registration was in the draft state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool DraftTimestampHasBeenSet() const { return m_draftTimestampHasBeenSet; }

    /**
     * <p>The time when the registration was in the draft state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetDraftTimestamp(const Aws::Utils::DateTime& value) { m_draftTimestampHasBeenSet = true; m_draftTimestamp = value; }

    /**
     * <p>The time when the registration was in the draft state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetDraftTimestamp(Aws::Utils::DateTime&& value) { m_draftTimestampHasBeenSet = true; m_draftTimestamp = std::move(value); }

    /**
     * <p>The time when the registration was in the draft state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithDraftTimestamp(const Aws::Utils::DateTime& value) { SetDraftTimestamp(value); return *this;}

    /**
     * <p>The time when the registration was in the draft state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithDraftTimestamp(Aws::Utils::DateTime&& value) { SetDraftTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time when the registration was in the submitted state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedTimestamp() const{ return m_submittedTimestamp; }

    /**
     * <p>The time when the registration was in the submitted state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool SubmittedTimestampHasBeenSet() const { return m_submittedTimestampHasBeenSet; }

    /**
     * <p>The time when the registration was in the submitted state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetSubmittedTimestamp(const Aws::Utils::DateTime& value) { m_submittedTimestampHasBeenSet = true; m_submittedTimestamp = value; }

    /**
     * <p>The time when the registration was in the submitted state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetSubmittedTimestamp(Aws::Utils::DateTime&& value) { m_submittedTimestampHasBeenSet = true; m_submittedTimestamp = std::move(value); }

    /**
     * <p>The time when the registration was in the submitted state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithSubmittedTimestamp(const Aws::Utils::DateTime& value) { SetSubmittedTimestamp(value); return *this;}

    /**
     * <p>The time when the registration was in the submitted state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithSubmittedTimestamp(Aws::Utils::DateTime&& value) { SetSubmittedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time when the registration was in the reviewing state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetReviewingTimestamp() const{ return m_reviewingTimestamp; }

    /**
     * <p>The time when the registration was in the reviewing state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool ReviewingTimestampHasBeenSet() const { return m_reviewingTimestampHasBeenSet; }

    /**
     * <p>The time when the registration was in the reviewing state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetReviewingTimestamp(const Aws::Utils::DateTime& value) { m_reviewingTimestampHasBeenSet = true; m_reviewingTimestamp = value; }

    /**
     * <p>The time when the registration was in the reviewing state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetReviewingTimestamp(Aws::Utils::DateTime&& value) { m_reviewingTimestampHasBeenSet = true; m_reviewingTimestamp = std::move(value); }

    /**
     * <p>The time when the registration was in the reviewing state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithReviewingTimestamp(const Aws::Utils::DateTime& value) { SetReviewingTimestamp(value); return *this;}

    /**
     * <p>The time when the registration was in the reviewing state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithReviewingTimestamp(Aws::Utils::DateTime&& value) { SetReviewingTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time when the registration was in the approved state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovedTimestamp() const{ return m_approvedTimestamp; }

    /**
     * <p>The time when the registration was in the approved state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool ApprovedTimestampHasBeenSet() const { return m_approvedTimestampHasBeenSet; }

    /**
     * <p>The time when the registration was in the approved state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetApprovedTimestamp(const Aws::Utils::DateTime& value) { m_approvedTimestampHasBeenSet = true; m_approvedTimestamp = value; }

    /**
     * <p>The time when the registration was in the approved state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetApprovedTimestamp(Aws::Utils::DateTime&& value) { m_approvedTimestampHasBeenSet = true; m_approvedTimestamp = std::move(value); }

    /**
     * <p>The time when the registration was in the approved state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithApprovedTimestamp(const Aws::Utils::DateTime& value) { SetApprovedTimestamp(value); return *this;}

    /**
     * <p>The time when the registration was in the approved state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithApprovedTimestamp(Aws::Utils::DateTime&& value) { SetApprovedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time when the registration was in the discarded state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetDiscardedTimestamp() const{ return m_discardedTimestamp; }

    /**
     * <p>The time when the registration was in the discarded state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool DiscardedTimestampHasBeenSet() const { return m_discardedTimestampHasBeenSet; }

    /**
     * <p>The time when the registration was in the discarded state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetDiscardedTimestamp(const Aws::Utils::DateTime& value) { m_discardedTimestampHasBeenSet = true; m_discardedTimestamp = value; }

    /**
     * <p>The time when the registration was in the discarded state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetDiscardedTimestamp(Aws::Utils::DateTime&& value) { m_discardedTimestampHasBeenSet = true; m_discardedTimestamp = std::move(value); }

    /**
     * <p>The time when the registration was in the discarded state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithDiscardedTimestamp(const Aws::Utils::DateTime& value) { SetDiscardedTimestamp(value); return *this;}

    /**
     * <p>The time when the registration was in the discarded state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithDiscardedTimestamp(Aws::Utils::DateTime&& value) { SetDiscardedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time when the registration was in the denied state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeniedTimestamp() const{ return m_deniedTimestamp; }

    /**
     * <p>The time when the registration was in the denied state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool DeniedTimestampHasBeenSet() const { return m_deniedTimestampHasBeenSet; }

    /**
     * <p>The time when the registration was in the denied state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetDeniedTimestamp(const Aws::Utils::DateTime& value) { m_deniedTimestampHasBeenSet = true; m_deniedTimestamp = value; }

    /**
     * <p>The time when the registration was in the denied state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetDeniedTimestamp(Aws::Utils::DateTime&& value) { m_deniedTimestampHasBeenSet = true; m_deniedTimestamp = std::move(value); }

    /**
     * <p>The time when the registration was in the denied state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithDeniedTimestamp(const Aws::Utils::DateTime& value) { SetDeniedTimestamp(value); return *this;}

    /**
     * <p>The time when the registration was in the denied state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithDeniedTimestamp(Aws::Utils::DateTime&& value) { SetDeniedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time when the registration was in the revoked state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedTimestamp() const{ return m_revokedTimestamp; }

    /**
     * <p>The time when the registration was in the revoked state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool RevokedTimestampHasBeenSet() const { return m_revokedTimestampHasBeenSet; }

    /**
     * <p>The time when the registration was in the revoked state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetRevokedTimestamp(const Aws::Utils::DateTime& value) { m_revokedTimestampHasBeenSet = true; m_revokedTimestamp = value; }

    /**
     * <p>The time when the registration was in the revoked state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetRevokedTimestamp(Aws::Utils::DateTime&& value) { m_revokedTimestampHasBeenSet = true; m_revokedTimestamp = std::move(value); }

    /**
     * <p>The time when the registration was in the revoked state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithRevokedTimestamp(const Aws::Utils::DateTime& value) { SetRevokedTimestamp(value); return *this;}

    /**
     * <p>The time when the registration was in the revoked state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithRevokedTimestamp(Aws::Utils::DateTime&& value) { SetRevokedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time when the registration was in the archived state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetArchivedTimestamp() const{ return m_archivedTimestamp; }

    /**
     * <p>The time when the registration was in the archived state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool ArchivedTimestampHasBeenSet() const { return m_archivedTimestampHasBeenSet; }

    /**
     * <p>The time when the registration was in the archived state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetArchivedTimestamp(const Aws::Utils::DateTime& value) { m_archivedTimestampHasBeenSet = true; m_archivedTimestamp = value; }

    /**
     * <p>The time when the registration was in the archived state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetArchivedTimestamp(Aws::Utils::DateTime&& value) { m_archivedTimestampHasBeenSet = true; m_archivedTimestamp = std::move(value); }

    /**
     * <p>The time when the registration was in the archived state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithArchivedTimestamp(const Aws::Utils::DateTime& value) { SetArchivedTimestamp(value); return *this;}

    /**
     * <p>The time when the registration was in the archived state, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationVersionStatusHistory& WithArchivedTimestamp(Aws::Utils::DateTime&& value) { SetArchivedTimestamp(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_draftTimestamp;
    bool m_draftTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_submittedTimestamp;
    bool m_submittedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_reviewingTimestamp;
    bool m_reviewingTimestampHasBeenSet = false;

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

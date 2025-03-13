/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationVersionStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationVersionStatusHistory.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationDeniedReasonInformation.h>
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
   * <p>Provides information about the specified version of the
   * registration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationVersionInformation">AWS
   * API Reference</a></p>
   */
  class RegistrationVersionInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionInformation() = default;
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number of the registration.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline RegistrationVersionInformation& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>APPROVED</code>: Your
     * registration has been approved.</p> </li> <li> <p> <code>ARCHIVED</code>: Your
     * previously approved registration version moves into this status when a more
     * recently submitted version is approved.</p> </li> <li> <p> <code>DENIED</code>:
     * You must fix your registration and resubmit it.</p> </li> <li> <p>
     * <code>DISCARDED</code>: You've abandon this version of their registration to
     * start over with a new version. </p> </li> <li> <p> <code>DRAFT</code>: The
     * initial status of a registration version after it’s created.</p> </li> <li> <p>
     * <code>REQUIRES_AUTHENTICATION</code>: You need to complete email
     * authentication.</p> </li> <li> <p> <code>REVIEWING</code>: Your registration has
     * been accepted and is being reviewed.</p> </li> <li> <p> <code>REVOKED</code>:
     * Your previously approved registration has been revoked.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted.</p> </li> </ul>
     */
    inline RegistrationVersionStatus GetRegistrationVersionStatus() const { return m_registrationVersionStatus; }
    inline bool RegistrationVersionStatusHasBeenSet() const { return m_registrationVersionStatusHasBeenSet; }
    inline void SetRegistrationVersionStatus(RegistrationVersionStatus value) { m_registrationVersionStatusHasBeenSet = true; m_registrationVersionStatus = value; }
    inline RegistrationVersionInformation& WithRegistrationVersionStatus(RegistrationVersionStatus value) { SetRegistrationVersionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <b>RegistrationVersionStatusHistory</b> object contains the time stamps
     * for when the reservations status changes.</p>
     */
    inline const RegistrationVersionStatusHistory& GetRegistrationVersionStatusHistory() const { return m_registrationVersionStatusHistory; }
    inline bool RegistrationVersionStatusHistoryHasBeenSet() const { return m_registrationVersionStatusHistoryHasBeenSet; }
    template<typename RegistrationVersionStatusHistoryT = RegistrationVersionStatusHistory>
    void SetRegistrationVersionStatusHistory(RegistrationVersionStatusHistoryT&& value) { m_registrationVersionStatusHistoryHasBeenSet = true; m_registrationVersionStatusHistory = std::forward<RegistrationVersionStatusHistoryT>(value); }
    template<typename RegistrationVersionStatusHistoryT = RegistrationVersionStatusHistory>
    RegistrationVersionInformation& WithRegistrationVersionStatusHistory(RegistrationVersionStatusHistoryT&& value) { SetRegistrationVersionStatusHistory(std::forward<RegistrationVersionStatusHistoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RegistrationDeniedReasonInformation objects. </p>
     */
    inline const Aws::Vector<RegistrationDeniedReasonInformation>& GetDeniedReasons() const { return m_deniedReasons; }
    inline bool DeniedReasonsHasBeenSet() const { return m_deniedReasonsHasBeenSet; }
    template<typename DeniedReasonsT = Aws::Vector<RegistrationDeniedReasonInformation>>
    void SetDeniedReasons(DeniedReasonsT&& value) { m_deniedReasonsHasBeenSet = true; m_deniedReasons = std::forward<DeniedReasonsT>(value); }
    template<typename DeniedReasonsT = Aws::Vector<RegistrationDeniedReasonInformation>>
    RegistrationVersionInformation& WithDeniedReasons(DeniedReasonsT&& value) { SetDeniedReasons(std::forward<DeniedReasonsT>(value)); return *this;}
    template<typename DeniedReasonsT = RegistrationDeniedReasonInformation>
    RegistrationVersionInformation& AddDeniedReasons(DeniedReasonsT&& value) { m_deniedReasonsHasBeenSet = true; m_deniedReasons.emplace_back(std::forward<DeniedReasonsT>(value)); return *this; }
    ///@}
  private:

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    RegistrationVersionStatus m_registrationVersionStatus{RegistrationVersionStatus::NOT_SET};
    bool m_registrationVersionStatusHasBeenSet = false;

    RegistrationVersionStatusHistory m_registrationVersionStatusHistory;
    bool m_registrationVersionStatusHistoryHasBeenSet = false;

    Aws::Vector<RegistrationDeniedReasonInformation> m_deniedReasons;
    bool m_deniedReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

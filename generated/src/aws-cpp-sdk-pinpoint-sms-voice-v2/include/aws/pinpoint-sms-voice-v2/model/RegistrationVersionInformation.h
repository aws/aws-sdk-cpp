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
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionInformation();
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationVersionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version number of the registration.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version number of the registration.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version number of the registration.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version number of the registration.</p>
     */
    inline RegistrationVersionInformation& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>DRAFT</code>: The
     * initial status of a registration version after it’s created.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted.</p> </li> <li> <p>
     * <code>REVIEWING</code>: Your registration has been accepted and is being
     * reviewed.</p> </li> <li> <p> <code>APPROVED</code>: Your registration has been
     * approved.</p> </li> <li> <p> <code>DISCARDED</code>: You've abandon this version
     * of their registration to start over with a new version. </p> </li> <li> <p>
     * <code>DENIED</code>: You must fix your registration and resubmit it.</p> </li>
     * <li> <p> <code>REVOKED</code>: Your previously approved registration has been
     * revoked.</p> </li> <li> <p> <code>ARCHIVED</code>: Your previously approved
     * registration version moves into this status when a more recently submitted
     * version is approved.</p> </li> </ul>
     */
    inline const RegistrationVersionStatus& GetRegistrationVersionStatus() const{ return m_registrationVersionStatus; }

    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>DRAFT</code>: The
     * initial status of a registration version after it’s created.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted.</p> </li> <li> <p>
     * <code>REVIEWING</code>: Your registration has been accepted and is being
     * reviewed.</p> </li> <li> <p> <code>APPROVED</code>: Your registration has been
     * approved.</p> </li> <li> <p> <code>DISCARDED</code>: You've abandon this version
     * of their registration to start over with a new version. </p> </li> <li> <p>
     * <code>DENIED</code>: You must fix your registration and resubmit it.</p> </li>
     * <li> <p> <code>REVOKED</code>: Your previously approved registration has been
     * revoked.</p> </li> <li> <p> <code>ARCHIVED</code>: Your previously approved
     * registration version moves into this status when a more recently submitted
     * version is approved.</p> </li> </ul>
     */
    inline bool RegistrationVersionStatusHasBeenSet() const { return m_registrationVersionStatusHasBeenSet; }

    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>DRAFT</code>: The
     * initial status of a registration version after it’s created.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted.</p> </li> <li> <p>
     * <code>REVIEWING</code>: Your registration has been accepted and is being
     * reviewed.</p> </li> <li> <p> <code>APPROVED</code>: Your registration has been
     * approved.</p> </li> <li> <p> <code>DISCARDED</code>: You've abandon this version
     * of their registration to start over with a new version. </p> </li> <li> <p>
     * <code>DENIED</code>: You must fix your registration and resubmit it.</p> </li>
     * <li> <p> <code>REVOKED</code>: Your previously approved registration has been
     * revoked.</p> </li> <li> <p> <code>ARCHIVED</code>: Your previously approved
     * registration version moves into this status when a more recently submitted
     * version is approved.</p> </li> </ul>
     */
    inline void SetRegistrationVersionStatus(const RegistrationVersionStatus& value) { m_registrationVersionStatusHasBeenSet = true; m_registrationVersionStatus = value; }

    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>DRAFT</code>: The
     * initial status of a registration version after it’s created.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted.</p> </li> <li> <p>
     * <code>REVIEWING</code>: Your registration has been accepted and is being
     * reviewed.</p> </li> <li> <p> <code>APPROVED</code>: Your registration has been
     * approved.</p> </li> <li> <p> <code>DISCARDED</code>: You've abandon this version
     * of their registration to start over with a new version. </p> </li> <li> <p>
     * <code>DENIED</code>: You must fix your registration and resubmit it.</p> </li>
     * <li> <p> <code>REVOKED</code>: Your previously approved registration has been
     * revoked.</p> </li> <li> <p> <code>ARCHIVED</code>: Your previously approved
     * registration version moves into this status when a more recently submitted
     * version is approved.</p> </li> </ul>
     */
    inline void SetRegistrationVersionStatus(RegistrationVersionStatus&& value) { m_registrationVersionStatusHasBeenSet = true; m_registrationVersionStatus = std::move(value); }

    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>DRAFT</code>: The
     * initial status of a registration version after it’s created.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted.</p> </li> <li> <p>
     * <code>REVIEWING</code>: Your registration has been accepted and is being
     * reviewed.</p> </li> <li> <p> <code>APPROVED</code>: Your registration has been
     * approved.</p> </li> <li> <p> <code>DISCARDED</code>: You've abandon this version
     * of their registration to start over with a new version. </p> </li> <li> <p>
     * <code>DENIED</code>: You must fix your registration and resubmit it.</p> </li>
     * <li> <p> <code>REVOKED</code>: Your previously approved registration has been
     * revoked.</p> </li> <li> <p> <code>ARCHIVED</code>: Your previously approved
     * registration version moves into this status when a more recently submitted
     * version is approved.</p> </li> </ul>
     */
    inline RegistrationVersionInformation& WithRegistrationVersionStatus(const RegistrationVersionStatus& value) { SetRegistrationVersionStatus(value); return *this;}

    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>DRAFT</code>: The
     * initial status of a registration version after it’s created.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted.</p> </li> <li> <p>
     * <code>REVIEWING</code>: Your registration has been accepted and is being
     * reviewed.</p> </li> <li> <p> <code>APPROVED</code>: Your registration has been
     * approved.</p> </li> <li> <p> <code>DISCARDED</code>: You've abandon this version
     * of their registration to start over with a new version. </p> </li> <li> <p>
     * <code>DENIED</code>: You must fix your registration and resubmit it.</p> </li>
     * <li> <p> <code>REVOKED</code>: Your previously approved registration has been
     * revoked.</p> </li> <li> <p> <code>ARCHIVED</code>: Your previously approved
     * registration version moves into this status when a more recently submitted
     * version is approved.</p> </li> </ul>
     */
    inline RegistrationVersionInformation& WithRegistrationVersionStatus(RegistrationVersionStatus&& value) { SetRegistrationVersionStatus(std::move(value)); return *this;}


    /**
     * <p>The <b>RegistrationVersionStatusHistory</b> object contains the time stamps
     * for when the reservations status changes.</p>
     */
    inline const RegistrationVersionStatusHistory& GetRegistrationVersionStatusHistory() const{ return m_registrationVersionStatusHistory; }

    /**
     * <p>The <b>RegistrationVersionStatusHistory</b> object contains the time stamps
     * for when the reservations status changes.</p>
     */
    inline bool RegistrationVersionStatusHistoryHasBeenSet() const { return m_registrationVersionStatusHistoryHasBeenSet; }

    /**
     * <p>The <b>RegistrationVersionStatusHistory</b> object contains the time stamps
     * for when the reservations status changes.</p>
     */
    inline void SetRegistrationVersionStatusHistory(const RegistrationVersionStatusHistory& value) { m_registrationVersionStatusHistoryHasBeenSet = true; m_registrationVersionStatusHistory = value; }

    /**
     * <p>The <b>RegistrationVersionStatusHistory</b> object contains the time stamps
     * for when the reservations status changes.</p>
     */
    inline void SetRegistrationVersionStatusHistory(RegistrationVersionStatusHistory&& value) { m_registrationVersionStatusHistoryHasBeenSet = true; m_registrationVersionStatusHistory = std::move(value); }

    /**
     * <p>The <b>RegistrationVersionStatusHistory</b> object contains the time stamps
     * for when the reservations status changes.</p>
     */
    inline RegistrationVersionInformation& WithRegistrationVersionStatusHistory(const RegistrationVersionStatusHistory& value) { SetRegistrationVersionStatusHistory(value); return *this;}

    /**
     * <p>The <b>RegistrationVersionStatusHistory</b> object contains the time stamps
     * for when the reservations status changes.</p>
     */
    inline RegistrationVersionInformation& WithRegistrationVersionStatusHistory(RegistrationVersionStatusHistory&& value) { SetRegistrationVersionStatusHistory(std::move(value)); return *this;}


    /**
     * <p>An array of RegistrationDeniedReasonInformation objects. </p>
     */
    inline const Aws::Vector<RegistrationDeniedReasonInformation>& GetDeniedReasons() const{ return m_deniedReasons; }

    /**
     * <p>An array of RegistrationDeniedReasonInformation objects. </p>
     */
    inline bool DeniedReasonsHasBeenSet() const { return m_deniedReasonsHasBeenSet; }

    /**
     * <p>An array of RegistrationDeniedReasonInformation objects. </p>
     */
    inline void SetDeniedReasons(const Aws::Vector<RegistrationDeniedReasonInformation>& value) { m_deniedReasonsHasBeenSet = true; m_deniedReasons = value; }

    /**
     * <p>An array of RegistrationDeniedReasonInformation objects. </p>
     */
    inline void SetDeniedReasons(Aws::Vector<RegistrationDeniedReasonInformation>&& value) { m_deniedReasonsHasBeenSet = true; m_deniedReasons = std::move(value); }

    /**
     * <p>An array of RegistrationDeniedReasonInformation objects. </p>
     */
    inline RegistrationVersionInformation& WithDeniedReasons(const Aws::Vector<RegistrationDeniedReasonInformation>& value) { SetDeniedReasons(value); return *this;}

    /**
     * <p>An array of RegistrationDeniedReasonInformation objects. </p>
     */
    inline RegistrationVersionInformation& WithDeniedReasons(Aws::Vector<RegistrationDeniedReasonInformation>&& value) { SetDeniedReasons(std::move(value)); return *this;}

    /**
     * <p>An array of RegistrationDeniedReasonInformation objects. </p>
     */
    inline RegistrationVersionInformation& AddDeniedReasons(const RegistrationDeniedReasonInformation& value) { m_deniedReasonsHasBeenSet = true; m_deniedReasons.push_back(value); return *this; }

    /**
     * <p>An array of RegistrationDeniedReasonInformation objects. </p>
     */
    inline RegistrationVersionInformation& AddDeniedReasons(RegistrationDeniedReasonInformation&& value) { m_deniedReasonsHasBeenSet = true; m_deniedReasons.push_back(std::move(value)); return *this; }

  private:

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    RegistrationVersionStatus m_registrationVersionStatus;
    bool m_registrationVersionStatusHasBeenSet = false;

    RegistrationVersionStatusHistory m_registrationVersionStatusHistory;
    bool m_registrationVersionStatusHistoryHasBeenSet = false;

    Aws::Vector<RegistrationDeniedReasonInformation> m_deniedReasons;
    bool m_deniedReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

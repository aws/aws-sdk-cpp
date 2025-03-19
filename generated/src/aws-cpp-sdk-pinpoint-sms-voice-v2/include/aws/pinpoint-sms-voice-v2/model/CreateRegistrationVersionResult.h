/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationVersionStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationVersionStatusHistory.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class CreateRegistrationVersionResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationVersionResult() = default;
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline const Aws::String& GetRegistrationArn() const { return m_registrationArn; }
    template<typename RegistrationArnT = Aws::String>
    void SetRegistrationArn(RegistrationArnT&& value) { m_registrationArnHasBeenSet = true; m_registrationArn = std::forward<RegistrationArnT>(value); }
    template<typename RegistrationArnT = Aws::String>
    CreateRegistrationVersionResult& WithRegistrationArn(RegistrationArnT&& value) { SetRegistrationArn(std::forward<RegistrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    CreateRegistrationVersionResult& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new version number of the registration.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline CreateRegistrationVersionResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
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
    inline void SetRegistrationVersionStatus(RegistrationVersionStatus value) { m_registrationVersionStatusHasBeenSet = true; m_registrationVersionStatus = value; }
    inline CreateRegistrationVersionResult& WithRegistrationVersionStatus(RegistrationVersionStatus value) { SetRegistrationVersionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <b>RegistrationVersionStatusHistory</b> object that contains timestamps for
     * the registration.</p>
     */
    inline const RegistrationVersionStatusHistory& GetRegistrationVersionStatusHistory() const { return m_registrationVersionStatusHistory; }
    template<typename RegistrationVersionStatusHistoryT = RegistrationVersionStatusHistory>
    void SetRegistrationVersionStatusHistory(RegistrationVersionStatusHistoryT&& value) { m_registrationVersionStatusHistoryHasBeenSet = true; m_registrationVersionStatusHistory = std::forward<RegistrationVersionStatusHistoryT>(value); }
    template<typename RegistrationVersionStatusHistoryT = RegistrationVersionStatusHistory>
    CreateRegistrationVersionResult& WithRegistrationVersionStatusHistory(RegistrationVersionStatusHistoryT&& value) { SetRegistrationVersionStatusHistory(std::forward<RegistrationVersionStatusHistoryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRegistrationVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationArn;
    bool m_registrationArnHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    RegistrationVersionStatus m_registrationVersionStatus{RegistrationVersionStatus::NOT_SET};
    bool m_registrationVersionStatusHasBeenSet = false;

    RegistrationVersionStatusHistory m_registrationVersionStatusHistory;
    bool m_registrationVersionStatusHistoryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

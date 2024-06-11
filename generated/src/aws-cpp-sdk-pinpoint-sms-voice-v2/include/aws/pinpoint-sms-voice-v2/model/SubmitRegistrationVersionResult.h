﻿/**
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
  class SubmitRegistrationVersionResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SubmitRegistrationVersionResult();
    AWS_PINPOINTSMSVOICEV2_API SubmitRegistrationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API SubmitRegistrationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline const Aws::String& GetRegistrationArn() const{ return m_registrationArn; }
    inline void SetRegistrationArn(const Aws::String& value) { m_registrationArn = value; }
    inline void SetRegistrationArn(Aws::String&& value) { m_registrationArn = std::move(value); }
    inline void SetRegistrationArn(const char* value) { m_registrationArn.assign(value); }
    inline SubmitRegistrationVersionResult& WithRegistrationArn(const Aws::String& value) { SetRegistrationArn(value); return *this;}
    inline SubmitRegistrationVersionResult& WithRegistrationArn(Aws::String&& value) { SetRegistrationArn(std::move(value)); return *this;}
    inline SubmitRegistrationVersionResult& WithRegistrationArn(const char* value) { SetRegistrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationId.assign(value); }
    inline SubmitRegistrationVersionResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline SubmitRegistrationVersionResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline SubmitRegistrationVersionResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the registration.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }
    inline SubmitRegistrationVersionResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the registration version.</p> <ul> <li> <p> <code>DRAFT</code>:
     * The initial status of a registration version after it’s created.</p> </li> <li>
     * <p> <code>SUBMITTED</code>: Your registration has been submitted.</p> </li> <li>
     * <p> <code>REVIEWING</code>: Your registration has been accepted and is being
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
    inline void SetRegistrationVersionStatus(const RegistrationVersionStatus& value) { m_registrationVersionStatus = value; }
    inline void SetRegistrationVersionStatus(RegistrationVersionStatus&& value) { m_registrationVersionStatus = std::move(value); }
    inline SubmitRegistrationVersionResult& WithRegistrationVersionStatus(const RegistrationVersionStatus& value) { SetRegistrationVersionStatus(value); return *this;}
    inline SubmitRegistrationVersionResult& WithRegistrationVersionStatus(RegistrationVersionStatus&& value) { SetRegistrationVersionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <b>RegistrationVersionStatusHistory</b> object contains the time stamps
     * for when the reservations status changes.</p>
     */
    inline const RegistrationVersionStatusHistory& GetRegistrationVersionStatusHistory() const{ return m_registrationVersionStatusHistory; }
    inline void SetRegistrationVersionStatusHistory(const RegistrationVersionStatusHistory& value) { m_registrationVersionStatusHistory = value; }
    inline void SetRegistrationVersionStatusHistory(RegistrationVersionStatusHistory&& value) { m_registrationVersionStatusHistory = std::move(value); }
    inline SubmitRegistrationVersionResult& WithRegistrationVersionStatusHistory(const RegistrationVersionStatusHistory& value) { SetRegistrationVersionStatusHistory(value); return *this;}
    inline SubmitRegistrationVersionResult& WithRegistrationVersionStatusHistory(RegistrationVersionStatusHistory&& value) { SetRegistrationVersionStatusHistory(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SubmitRegistrationVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SubmitRegistrationVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SubmitRegistrationVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registrationArn;

    Aws::String m_registrationId;

    long long m_versionNumber;

    RegistrationVersionStatus m_registrationVersionStatus;

    RegistrationVersionStatusHistory m_registrationVersionStatusHistory;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

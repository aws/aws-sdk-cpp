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
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationVersionResult();
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline const Aws::String& GetRegistrationArn() const{ return m_registrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline void SetRegistrationArn(const Aws::String& value) { m_registrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline void SetRegistrationArn(Aws::String&& value) { m_registrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline void SetRegistrationArn(const char* value) { m_registrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline CreateRegistrationVersionResult& WithRegistrationArn(const Aws::String& value) { SetRegistrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline CreateRegistrationVersionResult& WithRegistrationArn(Aws::String&& value) { SetRegistrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline CreateRegistrationVersionResult& WithRegistrationArn(const char* value) { SetRegistrationArn(value); return *this;}


    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(const Aws::String& value) { m_registrationId = value; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(Aws::String&& value) { m_registrationId = std::move(value); }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(const char* value) { m_registrationId.assign(value); }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline CreateRegistrationVersionResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline CreateRegistrationVersionResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline CreateRegistrationVersionResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}


    /**
     * <p>The new version number of the registration.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The new version number of the registration.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }

    /**
     * <p>The new version number of the registration.</p>
     */
    inline CreateRegistrationVersionResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


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
    inline void SetRegistrationVersionStatus(const RegistrationVersionStatus& value) { m_registrationVersionStatus = value; }

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
    inline void SetRegistrationVersionStatus(RegistrationVersionStatus&& value) { m_registrationVersionStatus = std::move(value); }

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
    inline CreateRegistrationVersionResult& WithRegistrationVersionStatus(const RegistrationVersionStatus& value) { SetRegistrationVersionStatus(value); return *this;}

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
    inline CreateRegistrationVersionResult& WithRegistrationVersionStatus(RegistrationVersionStatus&& value) { SetRegistrationVersionStatus(std::move(value)); return *this;}


    /**
     * <p>A <b>RegistrationVersionStatusHistory</b> object that contains timestamps for
     * the registration.</p>
     */
    inline const RegistrationVersionStatusHistory& GetRegistrationVersionStatusHistory() const{ return m_registrationVersionStatusHistory; }

    /**
     * <p>A <b>RegistrationVersionStatusHistory</b> object that contains timestamps for
     * the registration.</p>
     */
    inline void SetRegistrationVersionStatusHistory(const RegistrationVersionStatusHistory& value) { m_registrationVersionStatusHistory = value; }

    /**
     * <p>A <b>RegistrationVersionStatusHistory</b> object that contains timestamps for
     * the registration.</p>
     */
    inline void SetRegistrationVersionStatusHistory(RegistrationVersionStatusHistory&& value) { m_registrationVersionStatusHistory = std::move(value); }

    /**
     * <p>A <b>RegistrationVersionStatusHistory</b> object that contains timestamps for
     * the registration.</p>
     */
    inline CreateRegistrationVersionResult& WithRegistrationVersionStatusHistory(const RegistrationVersionStatusHistory& value) { SetRegistrationVersionStatusHistory(value); return *this;}

    /**
     * <p>A <b>RegistrationVersionStatusHistory</b> object that contains timestamps for
     * the registration.</p>
     */
    inline CreateRegistrationVersionResult& WithRegistrationVersionStatusHistory(RegistrationVersionStatusHistory&& value) { SetRegistrationVersionStatusHistory(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRegistrationVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRegistrationVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRegistrationVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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

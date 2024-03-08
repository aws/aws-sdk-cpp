/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
  class DeleteRegistrationResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteRegistrationResult& WithRegistrationArn(const Aws::String& value) { SetRegistrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline DeleteRegistrationResult& WithRegistrationArn(Aws::String&& value) { SetRegistrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline DeleteRegistrationResult& WithRegistrationArn(const char* value) { SetRegistrationArn(value); return *this;}


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
    inline DeleteRegistrationResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline DeleteRegistrationResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline DeleteRegistrationResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}


    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::String& GetRegistrationType() const{ return m_registrationType; }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(const Aws::String& value) { m_registrationType = value; }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(Aws::String&& value) { m_registrationType = std::move(value); }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(const char* value) { m_registrationType.assign(value); }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline DeleteRegistrationResult& WithRegistrationType(const Aws::String& value) { SetRegistrationType(value); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline DeleteRegistrationResult& WithRegistrationType(Aws::String&& value) { SetRegistrationType(std::move(value)); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline DeleteRegistrationResult& WithRegistrationType(const char* value) { SetRegistrationType(value); return *this;}


    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>CREATED</code>: Your
     * registration is created but not submitted.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted and is awaiting
     * review.</p> </li> <li> <p> <code>REVIEWING</code>: Your registration has been
     * accepted and is being reviewed.</p> </li> <li> <p> <code>PROVISIONING</code>:
     * Your registration has been approved and your origination identity is being
     * created.</p> </li> <li> <p> <code>COMPLETE</code>: Your registration has been
     * approved and and your origination identity has been created.</p> </li> <li> <p>
     * <code>REQUIRES_UPDATES</code>: You must fix your registration and resubmit
     * it.</p> </li> <li> <p> <code>CLOSED</code>: The phone number or sender ID has
     * been deleted and you must also delete the registration for the number.</p> </li>
     * <li> <p> <code>DELETED</code>: The registration has been deleted.</p> </li>
     * </ul>
     */
    inline const RegistrationStatus& GetRegistrationStatus() const{ return m_registrationStatus; }

    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>CREATED</code>: Your
     * registration is created but not submitted.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted and is awaiting
     * review.</p> </li> <li> <p> <code>REVIEWING</code>: Your registration has been
     * accepted and is being reviewed.</p> </li> <li> <p> <code>PROVISIONING</code>:
     * Your registration has been approved and your origination identity is being
     * created.</p> </li> <li> <p> <code>COMPLETE</code>: Your registration has been
     * approved and and your origination identity has been created.</p> </li> <li> <p>
     * <code>REQUIRES_UPDATES</code>: You must fix your registration and resubmit
     * it.</p> </li> <li> <p> <code>CLOSED</code>: The phone number or sender ID has
     * been deleted and you must also delete the registration for the number.</p> </li>
     * <li> <p> <code>DELETED</code>: The registration has been deleted.</p> </li>
     * </ul>
     */
    inline void SetRegistrationStatus(const RegistrationStatus& value) { m_registrationStatus = value; }

    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>CREATED</code>: Your
     * registration is created but not submitted.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted and is awaiting
     * review.</p> </li> <li> <p> <code>REVIEWING</code>: Your registration has been
     * accepted and is being reviewed.</p> </li> <li> <p> <code>PROVISIONING</code>:
     * Your registration has been approved and your origination identity is being
     * created.</p> </li> <li> <p> <code>COMPLETE</code>: Your registration has been
     * approved and and your origination identity has been created.</p> </li> <li> <p>
     * <code>REQUIRES_UPDATES</code>: You must fix your registration and resubmit
     * it.</p> </li> <li> <p> <code>CLOSED</code>: The phone number or sender ID has
     * been deleted and you must also delete the registration for the number.</p> </li>
     * <li> <p> <code>DELETED</code>: The registration has been deleted.</p> </li>
     * </ul>
     */
    inline void SetRegistrationStatus(RegistrationStatus&& value) { m_registrationStatus = std::move(value); }

    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>CREATED</code>: Your
     * registration is created but not submitted.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted and is awaiting
     * review.</p> </li> <li> <p> <code>REVIEWING</code>: Your registration has been
     * accepted and is being reviewed.</p> </li> <li> <p> <code>PROVISIONING</code>:
     * Your registration has been approved and your origination identity is being
     * created.</p> </li> <li> <p> <code>COMPLETE</code>: Your registration has been
     * approved and and your origination identity has been created.</p> </li> <li> <p>
     * <code>REQUIRES_UPDATES</code>: You must fix your registration and resubmit
     * it.</p> </li> <li> <p> <code>CLOSED</code>: The phone number or sender ID has
     * been deleted and you must also delete the registration for the number.</p> </li>
     * <li> <p> <code>DELETED</code>: The registration has been deleted.</p> </li>
     * </ul>
     */
    inline DeleteRegistrationResult& WithRegistrationStatus(const RegistrationStatus& value) { SetRegistrationStatus(value); return *this;}

    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>CREATED</code>: Your
     * registration is created but not submitted.</p> </li> <li> <p>
     * <code>SUBMITTED</code>: Your registration has been submitted and is awaiting
     * review.</p> </li> <li> <p> <code>REVIEWING</code>: Your registration has been
     * accepted and is being reviewed.</p> </li> <li> <p> <code>PROVISIONING</code>:
     * Your registration has been approved and your origination identity is being
     * created.</p> </li> <li> <p> <code>COMPLETE</code>: Your registration has been
     * approved and and your origination identity has been created.</p> </li> <li> <p>
     * <code>REQUIRES_UPDATES</code>: You must fix your registration and resubmit
     * it.</p> </li> <li> <p> <code>CLOSED</code>: The phone number or sender ID has
     * been deleted and you must also delete the registration for the number.</p> </li>
     * <li> <p> <code>DELETED</code>: The registration has been deleted.</p> </li>
     * </ul>
     */
    inline DeleteRegistrationResult& WithRegistrationStatus(RegistrationStatus&& value) { SetRegistrationStatus(std::move(value)); return *this;}


    /**
     * <p>The current version number of the registration.</p>
     */
    inline long long GetCurrentVersionNumber() const{ return m_currentVersionNumber; }

    /**
     * <p>The current version number of the registration.</p>
     */
    inline void SetCurrentVersionNumber(long long value) { m_currentVersionNumber = value; }

    /**
     * <p>The current version number of the registration.</p>
     */
    inline DeleteRegistrationResult& WithCurrentVersionNumber(long long value) { SetCurrentVersionNumber(value); return *this;}


    /**
     * <p>The version number of the registration that was approved.</p>
     */
    inline long long GetApprovedVersionNumber() const{ return m_approvedVersionNumber; }

    /**
     * <p>The version number of the registration that was approved.</p>
     */
    inline void SetApprovedVersionNumber(long long value) { m_approvedVersionNumber = value; }

    /**
     * <p>The version number of the registration that was approved.</p>
     */
    inline DeleteRegistrationResult& WithApprovedVersionNumber(long long value) { SetApprovedVersionNumber(value); return *this;}


    /**
     * <p>The latest version number of the registration that was denied.</p>
     */
    inline long long GetLatestDeniedVersionNumber() const{ return m_latestDeniedVersionNumber; }

    /**
     * <p>The latest version number of the registration that was denied.</p>
     */
    inline void SetLatestDeniedVersionNumber(long long value) { m_latestDeniedVersionNumber = value; }

    /**
     * <p>The latest version number of the registration that was denied.</p>
     */
    inline DeleteRegistrationResult& WithLatestDeniedVersionNumber(long long value) { SetLatestDeniedVersionNumber(value); return *this;}


    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalAttributes() const{ return m_additionalAttributes; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline void SetAdditionalAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalAttributes = value; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline void SetAdditionalAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalAttributes = std::move(value); }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline DeleteRegistrationResult& WithAdditionalAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalAttributes(value); return *this;}

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline DeleteRegistrationResult& WithAdditionalAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalAttributes(std::move(value)); return *this;}

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline DeleteRegistrationResult& AddAdditionalAttributes(const Aws::String& key, const Aws::String& value) { m_additionalAttributes.emplace(key, value); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline DeleteRegistrationResult& AddAdditionalAttributes(Aws::String&& key, const Aws::String& value) { m_additionalAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline DeleteRegistrationResult& AddAdditionalAttributes(const Aws::String& key, Aws::String&& value) { m_additionalAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline DeleteRegistrationResult& AddAdditionalAttributes(Aws::String&& key, Aws::String&& value) { m_additionalAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline DeleteRegistrationResult& AddAdditionalAttributes(const char* key, Aws::String&& value) { m_additionalAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline DeleteRegistrationResult& AddAdditionalAttributes(Aws::String&& key, const char* value) { m_additionalAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline DeleteRegistrationResult& AddAdditionalAttributes(const char* key, const char* value) { m_additionalAttributes.emplace(key, value); return *this; }


    /**
     * <p>The time when the registration was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the registration was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The time when the registration was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the registration was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline DeleteRegistrationResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the registration was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline DeleteRegistrationResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_registrationArn;

    Aws::String m_registrationId;

    Aws::String m_registrationType;

    RegistrationStatus m_registrationStatus;

    long long m_currentVersionNumber;

    long long m_approvedVersionNumber;

    long long m_latestDeniedVersionNumber;

    Aws::Map<Aws::String, Aws::String> m_additionalAttributes;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

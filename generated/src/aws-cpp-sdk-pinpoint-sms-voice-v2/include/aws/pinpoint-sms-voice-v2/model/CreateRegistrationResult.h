/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>
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
  class CreateRegistrationResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationResult();
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateRegistrationResult& WithRegistrationArn(const Aws::String& value) { SetRegistrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline CreateRegistrationResult& WithRegistrationArn(Aws::String&& value) { SetRegistrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline CreateRegistrationResult& WithRegistrationArn(const char* value) { SetRegistrationArn(value); return *this;}


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
    inline CreateRegistrationResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline CreateRegistrationResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline CreateRegistrationResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}


    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::String& GetRegistrationType() const{ return m_registrationType; }

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(const Aws::String& value) { m_registrationType = value; }

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(Aws::String&& value) { m_registrationType = std::move(value); }

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(const char* value) { m_registrationType.assign(value); }

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline CreateRegistrationResult& WithRegistrationType(const Aws::String& value) { SetRegistrationType(value); return *this;}

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline CreateRegistrationResult& WithRegistrationType(Aws::String&& value) { SetRegistrationType(std::move(value)); return *this;}

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline CreateRegistrationResult& WithRegistrationType(const char* value) { SetRegistrationType(value); return *this;}


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
    inline CreateRegistrationResult& WithRegistrationStatus(const RegistrationStatus& value) { SetRegistrationStatus(value); return *this;}

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
    inline CreateRegistrationResult& WithRegistrationStatus(RegistrationStatus&& value) { SetRegistrationStatus(std::move(value)); return *this;}


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
    inline CreateRegistrationResult& WithCurrentVersionNumber(long long value) { SetCurrentVersionNumber(value); return *this;}


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
    inline CreateRegistrationResult& WithAdditionalAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalAttributes(value); return *this;}

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline CreateRegistrationResult& WithAdditionalAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalAttributes(std::move(value)); return *this;}

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline CreateRegistrationResult& AddAdditionalAttributes(const Aws::String& key, const Aws::String& value) { m_additionalAttributes.emplace(key, value); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline CreateRegistrationResult& AddAdditionalAttributes(Aws::String&& key, const Aws::String& value) { m_additionalAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline CreateRegistrationResult& AddAdditionalAttributes(const Aws::String& key, Aws::String&& value) { m_additionalAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline CreateRegistrationResult& AddAdditionalAttributes(Aws::String&& key, Aws::String&& value) { m_additionalAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline CreateRegistrationResult& AddAdditionalAttributes(const char* key, Aws::String&& value) { m_additionalAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline CreateRegistrationResult& AddAdditionalAttributes(Aws::String&& key, const char* value) { m_additionalAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline CreateRegistrationResult& AddAdditionalAttributes(const char* key, const char* value) { m_additionalAttributes.emplace(key, value); return *this; }


    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline CreateRegistrationResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline CreateRegistrationResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline CreateRegistrationResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline CreateRegistrationResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


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
    inline CreateRegistrationResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the registration was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline CreateRegistrationResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_registrationArn;

    Aws::String m_registrationId;

    Aws::String m_registrationType;

    RegistrationStatus m_registrationStatus;

    long long m_currentVersionNumber;

    Aws::Map<Aws::String, Aws::String> m_additionalAttributes;

    Aws::Vector<Tag> m_tags;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

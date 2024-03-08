/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateRegistrationAssociationResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationAssociationResult();
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateRegistrationAssociationResult& WithRegistrationArn(const Aws::String& value) { SetRegistrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline CreateRegistrationAssociationResult& WithRegistrationArn(Aws::String&& value) { SetRegistrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline CreateRegistrationAssociationResult& WithRegistrationArn(const char* value) { SetRegistrationArn(value); return *this;}


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
    inline CreateRegistrationAssociationResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline CreateRegistrationAssociationResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline CreateRegistrationAssociationResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}


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
    inline CreateRegistrationAssociationResult& WithRegistrationType(const Aws::String& value) { SetRegistrationType(value); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline CreateRegistrationAssociationResult& WithRegistrationType(Aws::String&& value) { SetRegistrationType(std::move(value)); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline CreateRegistrationAssociationResult& WithRegistrationType(const char* value) { SetRegistrationType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the origination identity that is associated
     * with the registration. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the origination identity that is associated
     * with the registration. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the origination identity that is associated
     * with the registration. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the origination identity that is associated
     * with the registration. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the origination identity that is associated
     * with the registration. </p>
     */
    inline CreateRegistrationAssociationResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the origination identity that is associated
     * with the registration. </p>
     */
    inline CreateRegistrationAssociationResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the origination identity that is associated
     * with the registration. </p>
     */
    inline CreateRegistrationAssociationResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The unique identifier for the origination identity. For example this could be
     * a <b>PhoneNumberId</b> or <b>SenderId</b>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique identifier for the origination identity. For example this could be
     * a <b>PhoneNumberId</b> or <b>SenderId</b>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }

    /**
     * <p>The unique identifier for the origination identity. For example this could be
     * a <b>PhoneNumberId</b> or <b>SenderId</b>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }

    /**
     * <p>The unique identifier for the origination identity. For example this could be
     * a <b>PhoneNumberId</b> or <b>SenderId</b>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }

    /**
     * <p>The unique identifier for the origination identity. For example this could be
     * a <b>PhoneNumberId</b> or <b>SenderId</b>.</p>
     */
    inline CreateRegistrationAssociationResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier for the origination identity. For example this could be
     * a <b>PhoneNumberId</b> or <b>SenderId</b>.</p>
     */
    inline CreateRegistrationAssociationResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the origination identity. For example this could be
     * a <b>PhoneNumberId</b> or <b>SenderId</b>.</p>
     */
    inline CreateRegistrationAssociationResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The registration type or origination identity type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The registration type or origination identity type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceType = value; }

    /**
     * <p>The registration type or origination identity type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceType = std::move(value); }

    /**
     * <p>The registration type or origination identity type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceType.assign(value); }

    /**
     * <p>The registration type or origination identity type.</p>
     */
    inline CreateRegistrationAssociationResult& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The registration type or origination identity type.</p>
     */
    inline CreateRegistrationAssociationResult& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The registration type or origination identity type.</p>
     */
    inline CreateRegistrationAssociationResult& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCode = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCode = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCode.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline CreateRegistrationAssociationResult& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline CreateRegistrationAssociationResult& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline CreateRegistrationAssociationResult& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}


    /**
     * <p>The phone number associated with the registration in E.164 format.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number associated with the registration in E.164 format.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumber = value; }

    /**
     * <p>The phone number associated with the registration in E.164 format.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number associated with the registration in E.164 format.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumber.assign(value); }

    /**
     * <p>The phone number associated with the registration in E.164 format.</p>
     */
    inline CreateRegistrationAssociationResult& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number associated with the registration in E.164 format.</p>
     */
    inline CreateRegistrationAssociationResult& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number associated with the registration in E.164 format.</p>
     */
    inline CreateRegistrationAssociationResult& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRegistrationAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRegistrationAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRegistrationAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_registrationArn;

    Aws::String m_registrationId;

    Aws::String m_registrationType;

    Aws::String m_resourceArn;

    Aws::String m_resourceId;

    Aws::String m_resourceType;

    Aws::String m_isoCountryCode;

    Aws::String m_phoneNumber;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

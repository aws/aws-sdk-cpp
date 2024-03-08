/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationAssociationMetadata.h>
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
  class ListRegistrationAssociationsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ListRegistrationAssociationsResult();
    AWS_PINPOINTSMSVOICEV2_API ListRegistrationAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API ListRegistrationAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListRegistrationAssociationsResult& WithRegistrationArn(const Aws::String& value) { SetRegistrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline ListRegistrationAssociationsResult& WithRegistrationArn(Aws::String&& value) { SetRegistrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline ListRegistrationAssociationsResult& WithRegistrationArn(const char* value) { SetRegistrationArn(value); return *this;}


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
    inline ListRegistrationAssociationsResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline ListRegistrationAssociationsResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline ListRegistrationAssociationsResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}


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
    inline ListRegistrationAssociationsResult& WithRegistrationType(const Aws::String& value) { SetRegistrationType(value); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline ListRegistrationAssociationsResult& WithRegistrationType(Aws::String&& value) { SetRegistrationType(std::move(value)); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline ListRegistrationAssociationsResult& WithRegistrationType(const char* value) { SetRegistrationType(value); return *this;}


    /**
     * <p>An array of RegistrationAssociationMetadata objects.</p>
     */
    inline const Aws::Vector<RegistrationAssociationMetadata>& GetRegistrationAssociations() const{ return m_registrationAssociations; }

    /**
     * <p>An array of RegistrationAssociationMetadata objects.</p>
     */
    inline void SetRegistrationAssociations(const Aws::Vector<RegistrationAssociationMetadata>& value) { m_registrationAssociations = value; }

    /**
     * <p>An array of RegistrationAssociationMetadata objects.</p>
     */
    inline void SetRegistrationAssociations(Aws::Vector<RegistrationAssociationMetadata>&& value) { m_registrationAssociations = std::move(value); }

    /**
     * <p>An array of RegistrationAssociationMetadata objects.</p>
     */
    inline ListRegistrationAssociationsResult& WithRegistrationAssociations(const Aws::Vector<RegistrationAssociationMetadata>& value) { SetRegistrationAssociations(value); return *this;}

    /**
     * <p>An array of RegistrationAssociationMetadata objects.</p>
     */
    inline ListRegistrationAssociationsResult& WithRegistrationAssociations(Aws::Vector<RegistrationAssociationMetadata>&& value) { SetRegistrationAssociations(std::move(value)); return *this;}

    /**
     * <p>An array of RegistrationAssociationMetadata objects.</p>
     */
    inline ListRegistrationAssociationsResult& AddRegistrationAssociations(const RegistrationAssociationMetadata& value) { m_registrationAssociations.push_back(value); return *this; }

    /**
     * <p>An array of RegistrationAssociationMetadata objects.</p>
     */
    inline ListRegistrationAssociationsResult& AddRegistrationAssociations(RegistrationAssociationMetadata&& value) { m_registrationAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline ListRegistrationAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline ListRegistrationAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline ListRegistrationAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRegistrationAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRegistrationAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRegistrationAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_registrationArn;

    Aws::String m_registrationId;

    Aws::String m_registrationType;

    Aws::Vector<RegistrationAssociationMetadata> m_registrationAssociations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

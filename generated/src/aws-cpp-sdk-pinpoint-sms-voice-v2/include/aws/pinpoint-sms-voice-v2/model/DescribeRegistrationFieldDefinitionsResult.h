/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationFieldDefinition.h>
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
  class DescribeRegistrationFieldDefinitionsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldDefinitionsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeRegistrationFieldDefinitionsResult& WithRegistrationType(const Aws::String& value) { SetRegistrationType(value); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline DescribeRegistrationFieldDefinitionsResult& WithRegistrationType(Aws::String&& value) { SetRegistrationType(std::move(value)); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline DescribeRegistrationFieldDefinitionsResult& WithRegistrationType(const char* value) { SetRegistrationType(value); return *this;}


    /**
     * <p>An array of RegistrationFieldDefinitions objects that contain the details for
     * the requested fields. </p>
     */
    inline const Aws::Vector<RegistrationFieldDefinition>& GetRegistrationFieldDefinitions() const{ return m_registrationFieldDefinitions; }

    /**
     * <p>An array of RegistrationFieldDefinitions objects that contain the details for
     * the requested fields. </p>
     */
    inline void SetRegistrationFieldDefinitions(const Aws::Vector<RegistrationFieldDefinition>& value) { m_registrationFieldDefinitions = value; }

    /**
     * <p>An array of RegistrationFieldDefinitions objects that contain the details for
     * the requested fields. </p>
     */
    inline void SetRegistrationFieldDefinitions(Aws::Vector<RegistrationFieldDefinition>&& value) { m_registrationFieldDefinitions = std::move(value); }

    /**
     * <p>An array of RegistrationFieldDefinitions objects that contain the details for
     * the requested fields. </p>
     */
    inline DescribeRegistrationFieldDefinitionsResult& WithRegistrationFieldDefinitions(const Aws::Vector<RegistrationFieldDefinition>& value) { SetRegistrationFieldDefinitions(value); return *this;}

    /**
     * <p>An array of RegistrationFieldDefinitions objects that contain the details for
     * the requested fields. </p>
     */
    inline DescribeRegistrationFieldDefinitionsResult& WithRegistrationFieldDefinitions(Aws::Vector<RegistrationFieldDefinition>&& value) { SetRegistrationFieldDefinitions(std::move(value)); return *this;}

    /**
     * <p>An array of RegistrationFieldDefinitions objects that contain the details for
     * the requested fields. </p>
     */
    inline DescribeRegistrationFieldDefinitionsResult& AddRegistrationFieldDefinitions(const RegistrationFieldDefinition& value) { m_registrationFieldDefinitions.push_back(value); return *this; }

    /**
     * <p>An array of RegistrationFieldDefinitions objects that contain the details for
     * the requested fields. </p>
     */
    inline DescribeRegistrationFieldDefinitionsResult& AddRegistrationFieldDefinitions(RegistrationFieldDefinition&& value) { m_registrationFieldDefinitions.push_back(std::move(value)); return *this; }


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
    inline DescribeRegistrationFieldDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationFieldDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationFieldDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRegistrationFieldDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRegistrationFieldDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRegistrationFieldDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_registrationType;

    Aws::Vector<RegistrationFieldDefinition> m_registrationFieldDefinitions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

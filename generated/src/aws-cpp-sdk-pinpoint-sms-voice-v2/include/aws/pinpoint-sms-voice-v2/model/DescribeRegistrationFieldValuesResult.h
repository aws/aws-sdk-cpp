/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationFieldValueInformation.h>
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
  class DescribeRegistrationFieldValuesResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldValuesResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeRegistrationFieldValuesResult& WithRegistrationArn(const Aws::String& value) { SetRegistrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline DescribeRegistrationFieldValuesResult& WithRegistrationArn(Aws::String&& value) { SetRegistrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline DescribeRegistrationFieldValuesResult& WithRegistrationArn(const char* value) { SetRegistrationArn(value); return *this;}


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
    inline DescribeRegistrationFieldValuesResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline DescribeRegistrationFieldValuesResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline DescribeRegistrationFieldValuesResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}


    /**
     * <p>The current version of the registration.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The current version of the registration.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }

    /**
     * <p>The current version of the registration.</p>
     */
    inline DescribeRegistrationFieldValuesResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


    /**
     * <p>An array of RegistrationFieldValues objects that contain the values for the
     * requested registration. </p>
     */
    inline const Aws::Vector<RegistrationFieldValueInformation>& GetRegistrationFieldValues() const{ return m_registrationFieldValues; }

    /**
     * <p>An array of RegistrationFieldValues objects that contain the values for the
     * requested registration. </p>
     */
    inline void SetRegistrationFieldValues(const Aws::Vector<RegistrationFieldValueInformation>& value) { m_registrationFieldValues = value; }

    /**
     * <p>An array of RegistrationFieldValues objects that contain the values for the
     * requested registration. </p>
     */
    inline void SetRegistrationFieldValues(Aws::Vector<RegistrationFieldValueInformation>&& value) { m_registrationFieldValues = std::move(value); }

    /**
     * <p>An array of RegistrationFieldValues objects that contain the values for the
     * requested registration. </p>
     */
    inline DescribeRegistrationFieldValuesResult& WithRegistrationFieldValues(const Aws::Vector<RegistrationFieldValueInformation>& value) { SetRegistrationFieldValues(value); return *this;}

    /**
     * <p>An array of RegistrationFieldValues objects that contain the values for the
     * requested registration. </p>
     */
    inline DescribeRegistrationFieldValuesResult& WithRegistrationFieldValues(Aws::Vector<RegistrationFieldValueInformation>&& value) { SetRegistrationFieldValues(std::move(value)); return *this;}

    /**
     * <p>An array of RegistrationFieldValues objects that contain the values for the
     * requested registration. </p>
     */
    inline DescribeRegistrationFieldValuesResult& AddRegistrationFieldValues(const RegistrationFieldValueInformation& value) { m_registrationFieldValues.push_back(value); return *this; }

    /**
     * <p>An array of RegistrationFieldValues objects that contain the values for the
     * requested registration. </p>
     */
    inline DescribeRegistrationFieldValuesResult& AddRegistrationFieldValues(RegistrationFieldValueInformation&& value) { m_registrationFieldValues.push_back(std::move(value)); return *this; }


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
    inline DescribeRegistrationFieldValuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationFieldValuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationFieldValuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRegistrationFieldValuesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRegistrationFieldValuesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRegistrationFieldValuesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_registrationArn;

    Aws::String m_registrationId;

    long long m_versionNumber;

    Aws::Vector<RegistrationFieldValueInformation> m_registrationFieldValues;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

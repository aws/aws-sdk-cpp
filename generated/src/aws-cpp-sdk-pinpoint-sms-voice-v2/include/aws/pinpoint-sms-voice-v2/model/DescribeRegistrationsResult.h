/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationInformation.h>
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
  class DescribeRegistrationsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of RegistrationInformation objects.</p>
     */
    inline const Aws::Vector<RegistrationInformation>& GetRegistrations() const{ return m_registrations; }

    /**
     * <p>An array of RegistrationInformation objects.</p>
     */
    inline void SetRegistrations(const Aws::Vector<RegistrationInformation>& value) { m_registrations = value; }

    /**
     * <p>An array of RegistrationInformation objects.</p>
     */
    inline void SetRegistrations(Aws::Vector<RegistrationInformation>&& value) { m_registrations = std::move(value); }

    /**
     * <p>An array of RegistrationInformation objects.</p>
     */
    inline DescribeRegistrationsResult& WithRegistrations(const Aws::Vector<RegistrationInformation>& value) { SetRegistrations(value); return *this;}

    /**
     * <p>An array of RegistrationInformation objects.</p>
     */
    inline DescribeRegistrationsResult& WithRegistrations(Aws::Vector<RegistrationInformation>&& value) { SetRegistrations(std::move(value)); return *this;}

    /**
     * <p>An array of RegistrationInformation objects.</p>
     */
    inline DescribeRegistrationsResult& AddRegistrations(const RegistrationInformation& value) { m_registrations.push_back(value); return *this; }

    /**
     * <p>An array of RegistrationInformation objects.</p>
     */
    inline DescribeRegistrationsResult& AddRegistrations(RegistrationInformation&& value) { m_registrations.push_back(std::move(value)); return *this; }


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
    inline DescribeRegistrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRegistrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRegistrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRegistrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RegistrationInformation> m_registrations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

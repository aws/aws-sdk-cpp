/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationVersionInformation.h>
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
  class DescribeRegistrationVersionsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationVersionsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline const Aws::String& GetRegistrationArn() const{ return m_registrationArn; }
    inline void SetRegistrationArn(const Aws::String& value) { m_registrationArn = value; }
    inline void SetRegistrationArn(Aws::String&& value) { m_registrationArn = std::move(value); }
    inline void SetRegistrationArn(const char* value) { m_registrationArn.assign(value); }
    inline DescribeRegistrationVersionsResult& WithRegistrationArn(const Aws::String& value) { SetRegistrationArn(value); return *this;}
    inline DescribeRegistrationVersionsResult& WithRegistrationArn(Aws::String&& value) { SetRegistrationArn(std::move(value)); return *this;}
    inline DescribeRegistrationVersionsResult& WithRegistrationArn(const char* value) { SetRegistrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationId.assign(value); }
    inline DescribeRegistrationVersionsResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline DescribeRegistrationVersionsResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline DescribeRegistrationVersionsResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RegistrationVersions objects.</p>
     */
    inline const Aws::Vector<RegistrationVersionInformation>& GetRegistrationVersions() const{ return m_registrationVersions; }
    inline void SetRegistrationVersions(const Aws::Vector<RegistrationVersionInformation>& value) { m_registrationVersions = value; }
    inline void SetRegistrationVersions(Aws::Vector<RegistrationVersionInformation>&& value) { m_registrationVersions = std::move(value); }
    inline DescribeRegistrationVersionsResult& WithRegistrationVersions(const Aws::Vector<RegistrationVersionInformation>& value) { SetRegistrationVersions(value); return *this;}
    inline DescribeRegistrationVersionsResult& WithRegistrationVersions(Aws::Vector<RegistrationVersionInformation>&& value) { SetRegistrationVersions(std::move(value)); return *this;}
    inline DescribeRegistrationVersionsResult& AddRegistrationVersions(const RegistrationVersionInformation& value) { m_registrationVersions.push_back(value); return *this; }
    inline DescribeRegistrationVersionsResult& AddRegistrationVersions(RegistrationVersionInformation&& value) { m_registrationVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeRegistrationVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeRegistrationVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeRegistrationVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRegistrationVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRegistrationVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRegistrationVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registrationArn;

    Aws::String m_registrationId;

    Aws::Vector<RegistrationVersionInformation> m_registrationVersions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

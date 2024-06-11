﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/KeywordInformation.h>
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
  class DescribeKeywordsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeKeywordsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeKeywordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeKeywordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The PhoneNumberArn or PoolArn that is associated with the
     * OriginationIdentity. </p>
     */
    inline const Aws::String& GetOriginationIdentityArn() const{ return m_originationIdentityArn; }
    inline void SetOriginationIdentityArn(const Aws::String& value) { m_originationIdentityArn = value; }
    inline void SetOriginationIdentityArn(Aws::String&& value) { m_originationIdentityArn = std::move(value); }
    inline void SetOriginationIdentityArn(const char* value) { m_originationIdentityArn.assign(value); }
    inline DescribeKeywordsResult& WithOriginationIdentityArn(const Aws::String& value) { SetOriginationIdentityArn(value); return *this;}
    inline DescribeKeywordsResult& WithOriginationIdentityArn(Aws::String&& value) { SetOriginationIdentityArn(std::move(value)); return *this;}
    inline DescribeKeywordsResult& WithOriginationIdentityArn(const char* value) { SetOriginationIdentityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PhoneNumberId or PoolId that is associated with the
     * OriginationIdentity.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentity = value; }
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentity = std::move(value); }
    inline void SetOriginationIdentity(const char* value) { m_originationIdentity.assign(value); }
    inline DescribeKeywordsResult& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}
    inline DescribeKeywordsResult& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}
    inline DescribeKeywordsResult& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of KeywordInformation objects that contain the results.</p>
     */
    inline const Aws::Vector<KeywordInformation>& GetKeywords() const{ return m_keywords; }
    inline void SetKeywords(const Aws::Vector<KeywordInformation>& value) { m_keywords = value; }
    inline void SetKeywords(Aws::Vector<KeywordInformation>&& value) { m_keywords = std::move(value); }
    inline DescribeKeywordsResult& WithKeywords(const Aws::Vector<KeywordInformation>& value) { SetKeywords(value); return *this;}
    inline DescribeKeywordsResult& WithKeywords(Aws::Vector<KeywordInformation>&& value) { SetKeywords(std::move(value)); return *this;}
    inline DescribeKeywordsResult& AddKeywords(const KeywordInformation& value) { m_keywords.push_back(value); return *this; }
    inline DescribeKeywordsResult& AddKeywords(KeywordInformation&& value) { m_keywords.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeKeywordsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeKeywordsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeKeywordsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeKeywordsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeKeywordsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeKeywordsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_originationIdentityArn;

    Aws::String m_originationIdentity;

    Aws::Vector<KeywordInformation> m_keywords;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

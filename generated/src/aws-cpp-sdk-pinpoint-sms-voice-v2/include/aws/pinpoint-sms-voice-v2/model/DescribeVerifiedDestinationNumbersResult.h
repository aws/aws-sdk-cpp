/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/VerifiedDestinationNumberInformation.h>
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
  class DescribeVerifiedDestinationNumbersResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeVerifiedDestinationNumbersResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeVerifiedDestinationNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeVerifiedDestinationNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of VerifiedDestinationNumberInformation objects</p>
     */
    inline const Aws::Vector<VerifiedDestinationNumberInformation>& GetVerifiedDestinationNumbers() const{ return m_verifiedDestinationNumbers; }

    /**
     * <p>An array of VerifiedDestinationNumberInformation objects</p>
     */
    inline void SetVerifiedDestinationNumbers(const Aws::Vector<VerifiedDestinationNumberInformation>& value) { m_verifiedDestinationNumbers = value; }

    /**
     * <p>An array of VerifiedDestinationNumberInformation objects</p>
     */
    inline void SetVerifiedDestinationNumbers(Aws::Vector<VerifiedDestinationNumberInformation>&& value) { m_verifiedDestinationNumbers = std::move(value); }

    /**
     * <p>An array of VerifiedDestinationNumberInformation objects</p>
     */
    inline DescribeVerifiedDestinationNumbersResult& WithVerifiedDestinationNumbers(const Aws::Vector<VerifiedDestinationNumberInformation>& value) { SetVerifiedDestinationNumbers(value); return *this;}

    /**
     * <p>An array of VerifiedDestinationNumberInformation objects</p>
     */
    inline DescribeVerifiedDestinationNumbersResult& WithVerifiedDestinationNumbers(Aws::Vector<VerifiedDestinationNumberInformation>&& value) { SetVerifiedDestinationNumbers(std::move(value)); return *this;}

    /**
     * <p>An array of VerifiedDestinationNumberInformation objects</p>
     */
    inline DescribeVerifiedDestinationNumbersResult& AddVerifiedDestinationNumbers(const VerifiedDestinationNumberInformation& value) { m_verifiedDestinationNumbers.push_back(value); return *this; }

    /**
     * <p>An array of VerifiedDestinationNumberInformation objects</p>
     */
    inline DescribeVerifiedDestinationNumbersResult& AddVerifiedDestinationNumbers(VerifiedDestinationNumberInformation&& value) { m_verifiedDestinationNumbers.push_back(std::move(value)); return *this; }


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
    inline DescribeVerifiedDestinationNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeVerifiedDestinationNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeVerifiedDestinationNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeVerifiedDestinationNumbersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeVerifiedDestinationNumbersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeVerifiedDestinationNumbersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<VerifiedDestinationNumberInformation> m_verifiedDestinationNumbers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

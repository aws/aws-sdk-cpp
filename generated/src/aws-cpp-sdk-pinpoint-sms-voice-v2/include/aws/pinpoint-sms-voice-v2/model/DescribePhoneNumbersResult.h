/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/PhoneNumberInformation.h>
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
  class DescribePhoneNumbersResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribePhoneNumbersResult();
    AWS_PINPOINTSMSVOICEV2_API DescribePhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribePhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of PhoneNumberInformation objects that contain the details for the
     * requested phone numbers.</p>
     */
    inline const Aws::Vector<PhoneNumberInformation>& GetPhoneNumbers() const{ return m_phoneNumbers; }

    /**
     * <p>An array of PhoneNumberInformation objects that contain the details for the
     * requested phone numbers.</p>
     */
    inline void SetPhoneNumbers(const Aws::Vector<PhoneNumberInformation>& value) { m_phoneNumbers = value; }

    /**
     * <p>An array of PhoneNumberInformation objects that contain the details for the
     * requested phone numbers.</p>
     */
    inline void SetPhoneNumbers(Aws::Vector<PhoneNumberInformation>&& value) { m_phoneNumbers = std::move(value); }

    /**
     * <p>An array of PhoneNumberInformation objects that contain the details for the
     * requested phone numbers.</p>
     */
    inline DescribePhoneNumbersResult& WithPhoneNumbers(const Aws::Vector<PhoneNumberInformation>& value) { SetPhoneNumbers(value); return *this;}

    /**
     * <p>An array of PhoneNumberInformation objects that contain the details for the
     * requested phone numbers.</p>
     */
    inline DescribePhoneNumbersResult& WithPhoneNumbers(Aws::Vector<PhoneNumberInformation>&& value) { SetPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>An array of PhoneNumberInformation objects that contain the details for the
     * requested phone numbers.</p>
     */
    inline DescribePhoneNumbersResult& AddPhoneNumbers(const PhoneNumberInformation& value) { m_phoneNumbers.push_back(value); return *this; }

    /**
     * <p>An array of PhoneNumberInformation objects that contain the details for the
     * requested phone numbers.</p>
     */
    inline DescribePhoneNumbersResult& AddPhoneNumbers(PhoneNumberInformation&& value) { m_phoneNumbers.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribePhoneNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribePhoneNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribePhoneNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PhoneNumberInformation> m_phoneNumbers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

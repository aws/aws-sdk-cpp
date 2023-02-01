/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/SenderIdInformation.h>
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
  class DescribeSenderIdsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeSenderIdsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeSenderIdsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeSenderIdsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of SernderIdInformation objects that contain the details for the
     * requested SenderIds.</p>
     */
    inline const Aws::Vector<SenderIdInformation>& GetSenderIds() const{ return m_senderIds; }

    /**
     * <p>An array of SernderIdInformation objects that contain the details for the
     * requested SenderIds.</p>
     */
    inline void SetSenderIds(const Aws::Vector<SenderIdInformation>& value) { m_senderIds = value; }

    /**
     * <p>An array of SernderIdInformation objects that contain the details for the
     * requested SenderIds.</p>
     */
    inline void SetSenderIds(Aws::Vector<SenderIdInformation>&& value) { m_senderIds = std::move(value); }

    /**
     * <p>An array of SernderIdInformation objects that contain the details for the
     * requested SenderIds.</p>
     */
    inline DescribeSenderIdsResult& WithSenderIds(const Aws::Vector<SenderIdInformation>& value) { SetSenderIds(value); return *this;}

    /**
     * <p>An array of SernderIdInformation objects that contain the details for the
     * requested SenderIds.</p>
     */
    inline DescribeSenderIdsResult& WithSenderIds(Aws::Vector<SenderIdInformation>&& value) { SetSenderIds(std::move(value)); return *this;}

    /**
     * <p>An array of SernderIdInformation objects that contain the details for the
     * requested SenderIds.</p>
     */
    inline DescribeSenderIdsResult& AddSenderIds(const SenderIdInformation& value) { m_senderIds.push_back(value); return *this; }

    /**
     * <p>An array of SernderIdInformation objects that contain the details for the
     * requested SenderIds.</p>
     */
    inline DescribeSenderIdsResult& AddSenderIds(SenderIdInformation&& value) { m_senderIds.push_back(std::move(value)); return *this; }


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
    inline DescribeSenderIdsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeSenderIdsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeSenderIdsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SenderIdInformation> m_senderIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

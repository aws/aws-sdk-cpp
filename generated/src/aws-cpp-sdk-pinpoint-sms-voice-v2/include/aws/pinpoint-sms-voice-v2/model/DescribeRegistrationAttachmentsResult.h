/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationAttachmentsInformation.h>
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
  class DescribeRegistrationAttachmentsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationAttachmentsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <b>RegistrationAttachments</b> objects that contain the details
     * for the requested registration attachments. </p>
     */
    inline const Aws::Vector<RegistrationAttachmentsInformation>& GetRegistrationAttachments() const{ return m_registrationAttachments; }

    /**
     * <p>An array of <b>RegistrationAttachments</b> objects that contain the details
     * for the requested registration attachments. </p>
     */
    inline void SetRegistrationAttachments(const Aws::Vector<RegistrationAttachmentsInformation>& value) { m_registrationAttachments = value; }

    /**
     * <p>An array of <b>RegistrationAttachments</b> objects that contain the details
     * for the requested registration attachments. </p>
     */
    inline void SetRegistrationAttachments(Aws::Vector<RegistrationAttachmentsInformation>&& value) { m_registrationAttachments = std::move(value); }

    /**
     * <p>An array of <b>RegistrationAttachments</b> objects that contain the details
     * for the requested registration attachments. </p>
     */
    inline DescribeRegistrationAttachmentsResult& WithRegistrationAttachments(const Aws::Vector<RegistrationAttachmentsInformation>& value) { SetRegistrationAttachments(value); return *this;}

    /**
     * <p>An array of <b>RegistrationAttachments</b> objects that contain the details
     * for the requested registration attachments. </p>
     */
    inline DescribeRegistrationAttachmentsResult& WithRegistrationAttachments(Aws::Vector<RegistrationAttachmentsInformation>&& value) { SetRegistrationAttachments(std::move(value)); return *this;}

    /**
     * <p>An array of <b>RegistrationAttachments</b> objects that contain the details
     * for the requested registration attachments. </p>
     */
    inline DescribeRegistrationAttachmentsResult& AddRegistrationAttachments(const RegistrationAttachmentsInformation& value) { m_registrationAttachments.push_back(value); return *this; }

    /**
     * <p>An array of <b>RegistrationAttachments</b> objects that contain the details
     * for the requested registration attachments. </p>
     */
    inline DescribeRegistrationAttachmentsResult& AddRegistrationAttachments(RegistrationAttachmentsInformation&& value) { m_registrationAttachments.push_back(std::move(value)); return *this; }


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
    inline DescribeRegistrationAttachmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationAttachmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationAttachmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRegistrationAttachmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRegistrationAttachmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRegistrationAttachmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RegistrationAttachmentsInformation> m_registrationAttachments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

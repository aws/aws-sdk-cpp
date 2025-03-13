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
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationAttachmentsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <b>RegistrationAttachments</b> objects that contain the details
     * for the requested registration attachments. </p>
     */
    inline const Aws::Vector<RegistrationAttachmentsInformation>& GetRegistrationAttachments() const { return m_registrationAttachments; }
    template<typename RegistrationAttachmentsT = Aws::Vector<RegistrationAttachmentsInformation>>
    void SetRegistrationAttachments(RegistrationAttachmentsT&& value) { m_registrationAttachmentsHasBeenSet = true; m_registrationAttachments = std::forward<RegistrationAttachmentsT>(value); }
    template<typename RegistrationAttachmentsT = Aws::Vector<RegistrationAttachmentsInformation>>
    DescribeRegistrationAttachmentsResult& WithRegistrationAttachments(RegistrationAttachmentsT&& value) { SetRegistrationAttachments(std::forward<RegistrationAttachmentsT>(value)); return *this;}
    template<typename RegistrationAttachmentsT = RegistrationAttachmentsInformation>
    DescribeRegistrationAttachmentsResult& AddRegistrationAttachments(RegistrationAttachmentsT&& value) { m_registrationAttachmentsHasBeenSet = true; m_registrationAttachments.emplace_back(std::forward<RegistrationAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRegistrationAttachmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRegistrationAttachmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RegistrationAttachmentsInformation> m_registrationAttachments;
    bool m_registrationAttachmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

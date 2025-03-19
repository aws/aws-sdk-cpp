/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/MessageTag.h>
#include <aws/sesv2/model/EmailInsights.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about a message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetMessageInsightsResponse">AWS
   * API Reference</a></p>
   */
  class GetMessageInsightsResult
  {
  public:
    AWS_SESV2_API GetMessageInsightsResult() = default;
    AWS_SESV2_API GetMessageInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetMessageInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the message.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    GetMessageInsightsResult& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The from address used to send the message.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const { return m_fromEmailAddress; }
    template<typename FromEmailAddressT = Aws::String>
    void SetFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::forward<FromEmailAddressT>(value); }
    template<typename FromEmailAddressT = Aws::String>
    GetMessageInsightsResult& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line of the message.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    GetMessageInsightsResult& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tags, in the form of name/value pairs, that were applied to the
     * email you sent, along with Amazon SES <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-using-event-publishing.html">Auto-Tags</a>.
     * </p>
     */
    inline const Aws::Vector<MessageTag>& GetEmailTags() const { return m_emailTags; }
    template<typename EmailTagsT = Aws::Vector<MessageTag>>
    void SetEmailTags(EmailTagsT&& value) { m_emailTagsHasBeenSet = true; m_emailTags = std::forward<EmailTagsT>(value); }
    template<typename EmailTagsT = Aws::Vector<MessageTag>>
    GetMessageInsightsResult& WithEmailTags(EmailTagsT&& value) { SetEmailTags(std::forward<EmailTagsT>(value)); return *this;}
    template<typename EmailTagsT = MessageTag>
    GetMessageInsightsResult& AddEmailTags(EmailTagsT&& value) { m_emailTagsHasBeenSet = true; m_emailTags.emplace_back(std::forward<EmailTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of insights associated with the message.</p>
     */
    inline const Aws::Vector<EmailInsights>& GetInsights() const { return m_insights; }
    template<typename InsightsT = Aws::Vector<EmailInsights>>
    void SetInsights(InsightsT&& value) { m_insightsHasBeenSet = true; m_insights = std::forward<InsightsT>(value); }
    template<typename InsightsT = Aws::Vector<EmailInsights>>
    GetMessageInsightsResult& WithInsights(InsightsT&& value) { SetInsights(std::forward<InsightsT>(value)); return *this;}
    template<typename InsightsT = EmailInsights>
    GetMessageInsightsResult& AddInsights(InsightsT&& value) { m_insightsHasBeenSet = true; m_insights.emplace_back(std::forward<InsightsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMessageInsightsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::Vector<MessageTag> m_emailTags;
    bool m_emailTagsHasBeenSet = false;

    Aws::Vector<EmailInsights> m_insights;
    bool m_insightsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

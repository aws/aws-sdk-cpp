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
    AWS_SESV2_API GetMessageInsightsResult();
    AWS_SESV2_API GetMessageInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetMessageInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>A unique identifier for the message.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p>A unique identifier for the message.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * <p>A unique identifier for the message.</p>
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p>A unique identifier for the message.</p>
     */
    inline GetMessageInsightsResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>A unique identifier for the message.</p>
     */
    inline GetMessageInsightsResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the message.</p>
     */
    inline GetMessageInsightsResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The from address used to send the message.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }

    /**
     * <p>The from address used to send the message.</p>
     */
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddress = value; }

    /**
     * <p>The from address used to send the message.</p>
     */
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddress = std::move(value); }

    /**
     * <p>The from address used to send the message.</p>
     */
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddress.assign(value); }

    /**
     * <p>The from address used to send the message.</p>
     */
    inline GetMessageInsightsResult& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}

    /**
     * <p>The from address used to send the message.</p>
     */
    inline GetMessageInsightsResult& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The from address used to send the message.</p>
     */
    inline GetMessageInsightsResult& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}


    /**
     * <p>The subject line of the message.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line of the message.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subject = value; }

    /**
     * <p>The subject line of the message.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subject = std::move(value); }

    /**
     * <p>The subject line of the message.</p>
     */
    inline void SetSubject(const char* value) { m_subject.assign(value); }

    /**
     * <p>The subject line of the message.</p>
     */
    inline GetMessageInsightsResult& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line of the message.</p>
     */
    inline GetMessageInsightsResult& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line of the message.</p>
     */
    inline GetMessageInsightsResult& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p> A list of tags, in the form of name/value pairs, that were applied to the
     * email you sent, along with Amazon SES <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-using-event-publishing.html">Auto-Tags</a>.
     * </p>
     */
    inline const Aws::Vector<MessageTag>& GetEmailTags() const{ return m_emailTags; }

    /**
     * <p> A list of tags, in the form of name/value pairs, that were applied to the
     * email you sent, along with Amazon SES <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-using-event-publishing.html">Auto-Tags</a>.
     * </p>
     */
    inline void SetEmailTags(const Aws::Vector<MessageTag>& value) { m_emailTags = value; }

    /**
     * <p> A list of tags, in the form of name/value pairs, that were applied to the
     * email you sent, along with Amazon SES <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-using-event-publishing.html">Auto-Tags</a>.
     * </p>
     */
    inline void SetEmailTags(Aws::Vector<MessageTag>&& value) { m_emailTags = std::move(value); }

    /**
     * <p> A list of tags, in the form of name/value pairs, that were applied to the
     * email you sent, along with Amazon SES <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-using-event-publishing.html">Auto-Tags</a>.
     * </p>
     */
    inline GetMessageInsightsResult& WithEmailTags(const Aws::Vector<MessageTag>& value) { SetEmailTags(value); return *this;}

    /**
     * <p> A list of tags, in the form of name/value pairs, that were applied to the
     * email you sent, along with Amazon SES <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-using-event-publishing.html">Auto-Tags</a>.
     * </p>
     */
    inline GetMessageInsightsResult& WithEmailTags(Aws::Vector<MessageTag>&& value) { SetEmailTags(std::move(value)); return *this;}

    /**
     * <p> A list of tags, in the form of name/value pairs, that were applied to the
     * email you sent, along with Amazon SES <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-using-event-publishing.html">Auto-Tags</a>.
     * </p>
     */
    inline GetMessageInsightsResult& AddEmailTags(const MessageTag& value) { m_emailTags.push_back(value); return *this; }

    /**
     * <p> A list of tags, in the form of name/value pairs, that were applied to the
     * email you sent, along with Amazon SES <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-using-event-publishing.html">Auto-Tags</a>.
     * </p>
     */
    inline GetMessageInsightsResult& AddEmailTags(MessageTag&& value) { m_emailTags.push_back(std::move(value)); return *this; }


    /**
     * <p>A set of insights associated with the message.</p>
     */
    inline const Aws::Vector<EmailInsights>& GetInsights() const{ return m_insights; }

    /**
     * <p>A set of insights associated with the message.</p>
     */
    inline void SetInsights(const Aws::Vector<EmailInsights>& value) { m_insights = value; }

    /**
     * <p>A set of insights associated with the message.</p>
     */
    inline void SetInsights(Aws::Vector<EmailInsights>&& value) { m_insights = std::move(value); }

    /**
     * <p>A set of insights associated with the message.</p>
     */
    inline GetMessageInsightsResult& WithInsights(const Aws::Vector<EmailInsights>& value) { SetInsights(value); return *this;}

    /**
     * <p>A set of insights associated with the message.</p>
     */
    inline GetMessageInsightsResult& WithInsights(Aws::Vector<EmailInsights>&& value) { SetInsights(std::move(value)); return *this;}

    /**
     * <p>A set of insights associated with the message.</p>
     */
    inline GetMessageInsightsResult& AddInsights(const EmailInsights& value) { m_insights.push_back(value); return *this; }

    /**
     * <p>A set of insights associated with the message.</p>
     */
    inline GetMessageInsightsResult& AddInsights(EmailInsights&& value) { m_insights.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMessageInsightsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMessageInsightsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMessageInsightsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_messageId;

    Aws::String m_fromEmailAddress;

    Aws::String m_subject;

    Aws::Vector<MessageTag> m_emailTags;

    Aws::Vector<EmailInsights> m_insights;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

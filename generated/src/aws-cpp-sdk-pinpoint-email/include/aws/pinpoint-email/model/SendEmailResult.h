/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>A unique message ID that you receive when Amazon Pinpoint accepts an email
   * for sending.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/SendEmailResponse">AWS
   * API Reference</a></p>
   */
  class SendEmailResult
  {
  public:
    AWS_PINPOINTEMAIL_API SendEmailResult();
    AWS_PINPOINTEMAIL_API SendEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API SendEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p>  <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> 
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p>  <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> 
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p>  <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> 
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p>  <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> 
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p>  <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> 
     */
    inline SendEmailResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p>  <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> 
     */
    inline SendEmailResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p>  <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> 
     */
    inline SendEmailResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    Aws::String m_messageId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws

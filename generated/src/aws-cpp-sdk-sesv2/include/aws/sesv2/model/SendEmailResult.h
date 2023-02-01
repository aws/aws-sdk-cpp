/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>A unique message ID that you receive when an email is accepted for
   * sending.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendEmailResponse">AWS
   * API Reference</a></p>
   */
  class SendEmailResult
  {
  public:
    AWS_SESV2_API SendEmailResult();
    AWS_SESV2_API SendEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API SendEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the message that is generated when the message is
     * accepted.</p>  <p>It's possible for Amazon SES to accept a message without
     * sending it. This can happen when the message that you're trying to send has an
     * attachment contains a virus, or when you send a templated email that contains
     * invalid personalization content, for example.</p> 
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>A unique identifier for the message that is generated when the message is
     * accepted.</p>  <p>It's possible for Amazon SES to accept a message without
     * sending it. This can happen when the message that you're trying to send has an
     * attachment contains a virus, or when you send a templated email that contains
     * invalid personalization content, for example.</p> 
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p>A unique identifier for the message that is generated when the message is
     * accepted.</p>  <p>It's possible for Amazon SES to accept a message without
     * sending it. This can happen when the message that you're trying to send has an
     * attachment contains a virus, or when you send a templated email that contains
     * invalid personalization content, for example.</p> 
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * <p>A unique identifier for the message that is generated when the message is
     * accepted.</p>  <p>It's possible for Amazon SES to accept a message without
     * sending it. This can happen when the message that you're trying to send has an
     * attachment contains a virus, or when you send a templated email that contains
     * invalid personalization content, for example.</p> 
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p>A unique identifier for the message that is generated when the message is
     * accepted.</p>  <p>It's possible for Amazon SES to accept a message without
     * sending it. This can happen when the message that you're trying to send has an
     * attachment contains a virus, or when you send a templated email that contains
     * invalid personalization content, for example.</p> 
     */
    inline SendEmailResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>A unique identifier for the message that is generated when the message is
     * accepted.</p>  <p>It's possible for Amazon SES to accept a message without
     * sending it. This can happen when the message that you're trying to send has an
     * attachment contains a virus, or when you send a templated email that contains
     * invalid personalization content, for example.</p> 
     */
    inline SendEmailResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the message that is generated when the message is
     * accepted.</p>  <p>It's possible for Amazon SES to accept a message without
     * sending it. This can happen when the message that you're trying to send has an
     * attachment contains a virus, or when you send a templated email that contains
     * invalid personalization content, for example.</p> 
     */
    inline SendEmailResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    Aws::String m_messageId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

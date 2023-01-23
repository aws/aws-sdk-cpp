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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains additional attributes that are related an email
   * address that is on the suppression list for your account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressedDestinationAttributes">AWS
   * API Reference</a></p>
   */
  class SuppressedDestinationAttributes
  {
  public:
    AWS_SESV2_API SuppressedDestinationAttributes();
    AWS_SESV2_API SuppressedDestinationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SuppressedDestinationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the email message that caused the email address to
     * be added to the suppression list for your account.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The unique identifier of the email message that caused the email address to
     * be added to the suppression list for your account.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The unique identifier of the email message that caused the email address to
     * be added to the suppression list for your account.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The unique identifier of the email message that caused the email address to
     * be added to the suppression list for your account.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The unique identifier of the email message that caused the email address to
     * be added to the suppression list for your account.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The unique identifier of the email message that caused the email address to
     * be added to the suppression list for your account.</p>
     */
    inline SuppressedDestinationAttributes& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The unique identifier of the email message that caused the email address to
     * be added to the suppression list for your account.</p>
     */
    inline SuppressedDestinationAttributes& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the email message that caused the email address to
     * be added to the suppression list for your account.</p>
     */
    inline SuppressedDestinationAttributes& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>A unique identifier that's generated when an email address is added to the
     * suppression list for your account.</p>
     */
    inline const Aws::String& GetFeedbackId() const{ return m_feedbackId; }

    /**
     * <p>A unique identifier that's generated when an email address is added to the
     * suppression list for your account.</p>
     */
    inline bool FeedbackIdHasBeenSet() const { return m_feedbackIdHasBeenSet; }

    /**
     * <p>A unique identifier that's generated when an email address is added to the
     * suppression list for your account.</p>
     */
    inline void SetFeedbackId(const Aws::String& value) { m_feedbackIdHasBeenSet = true; m_feedbackId = value; }

    /**
     * <p>A unique identifier that's generated when an email address is added to the
     * suppression list for your account.</p>
     */
    inline void SetFeedbackId(Aws::String&& value) { m_feedbackIdHasBeenSet = true; m_feedbackId = std::move(value); }

    /**
     * <p>A unique identifier that's generated when an email address is added to the
     * suppression list for your account.</p>
     */
    inline void SetFeedbackId(const char* value) { m_feedbackIdHasBeenSet = true; m_feedbackId.assign(value); }

    /**
     * <p>A unique identifier that's generated when an email address is added to the
     * suppression list for your account.</p>
     */
    inline SuppressedDestinationAttributes& WithFeedbackId(const Aws::String& value) { SetFeedbackId(value); return *this;}

    /**
     * <p>A unique identifier that's generated when an email address is added to the
     * suppression list for your account.</p>
     */
    inline SuppressedDestinationAttributes& WithFeedbackId(Aws::String&& value) { SetFeedbackId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that's generated when an email address is added to the
     * suppression list for your account.</p>
     */
    inline SuppressedDestinationAttributes& WithFeedbackId(const char* value) { SetFeedbackId(value); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_feedbackId;
    bool m_feedbackIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

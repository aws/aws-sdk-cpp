/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/TextOutputEvent.h>
#include <aws/qbusiness/model/MetadataEvent.h>
#include <aws/qbusiness/model/ActionReviewEvent.h>
#include <aws/qbusiness/model/FailedAttachmentEvent.h>
#include <aws/qbusiness/model/AuthChallengeRequestEvent.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The streaming output for the <code>Chat</code> API.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ChatOutputStream">AWS
   * API Reference</a></p>
   */
  class ChatOutputStream
  {
  public:
    AWS_QBUSINESS_API ChatOutputStream();
    AWS_QBUSINESS_API ChatOutputStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ChatOutputStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the payload of the <code>ChatOutputStream</code> event
     * containing the AI-generated message output.</p>
     */
    inline const TextOutputEvent& GetTextEvent() const{ return m_textEvent; }

    /**
     * <p>Information about the payload of the <code>ChatOutputStream</code> event
     * containing the AI-generated message output.</p>
     */
    inline bool TextEventHasBeenSet() const { return m_textEventHasBeenSet; }

    /**
     * <p>Information about the payload of the <code>ChatOutputStream</code> event
     * containing the AI-generated message output.</p>
     */
    inline void SetTextEvent(const TextOutputEvent& value) { m_textEventHasBeenSet = true; m_textEvent = value; }

    /**
     * <p>Information about the payload of the <code>ChatOutputStream</code> event
     * containing the AI-generated message output.</p>
     */
    inline void SetTextEvent(TextOutputEvent&& value) { m_textEventHasBeenSet = true; m_textEvent = std::move(value); }

    /**
     * <p>Information about the payload of the <code>ChatOutputStream</code> event
     * containing the AI-generated message output.</p>
     */
    inline ChatOutputStream& WithTextEvent(const TextOutputEvent& value) { SetTextEvent(value); return *this;}

    /**
     * <p>Information about the payload of the <code>ChatOutputStream</code> event
     * containing the AI-generated message output.</p>
     */
    inline ChatOutputStream& WithTextEvent(TextOutputEvent&& value) { SetTextEvent(std::move(value)); return *this;}


    /**
     * <p>A metadata event for a AI-generated text output message in a Amazon Q
     * Business conversation. </p>
     */
    inline const MetadataEvent& GetMetadataEvent() const{ return m_metadataEvent; }

    /**
     * <p>A metadata event for a AI-generated text output message in a Amazon Q
     * Business conversation. </p>
     */
    inline bool MetadataEventHasBeenSet() const { return m_metadataEventHasBeenSet; }

    /**
     * <p>A metadata event for a AI-generated text output message in a Amazon Q
     * Business conversation. </p>
     */
    inline void SetMetadataEvent(const MetadataEvent& value) { m_metadataEventHasBeenSet = true; m_metadataEvent = value; }

    /**
     * <p>A metadata event for a AI-generated text output message in a Amazon Q
     * Business conversation. </p>
     */
    inline void SetMetadataEvent(MetadataEvent&& value) { m_metadataEventHasBeenSet = true; m_metadataEvent = std::move(value); }

    /**
     * <p>A metadata event for a AI-generated text output message in a Amazon Q
     * Business conversation. </p>
     */
    inline ChatOutputStream& WithMetadataEvent(const MetadataEvent& value) { SetMetadataEvent(value); return *this;}

    /**
     * <p>A metadata event for a AI-generated text output message in a Amazon Q
     * Business conversation. </p>
     */
    inline ChatOutputStream& WithMetadataEvent(MetadataEvent&& value) { SetMetadataEvent(std::move(value)); return *this;}


    /**
     * <p>A request from Amazon Q Business to the end user for information Amazon Q
     * Business needs to successfully complete a requested plugin action.</p>
     */
    inline const ActionReviewEvent& GetActionReviewEvent() const{ return m_actionReviewEvent; }

    /**
     * <p>A request from Amazon Q Business to the end user for information Amazon Q
     * Business needs to successfully complete a requested plugin action.</p>
     */
    inline bool ActionReviewEventHasBeenSet() const { return m_actionReviewEventHasBeenSet; }

    /**
     * <p>A request from Amazon Q Business to the end user for information Amazon Q
     * Business needs to successfully complete a requested plugin action.</p>
     */
    inline void SetActionReviewEvent(const ActionReviewEvent& value) { m_actionReviewEventHasBeenSet = true; m_actionReviewEvent = value; }

    /**
     * <p>A request from Amazon Q Business to the end user for information Amazon Q
     * Business needs to successfully complete a requested plugin action.</p>
     */
    inline void SetActionReviewEvent(ActionReviewEvent&& value) { m_actionReviewEventHasBeenSet = true; m_actionReviewEvent = std::move(value); }

    /**
     * <p>A request from Amazon Q Business to the end user for information Amazon Q
     * Business needs to successfully complete a requested plugin action.</p>
     */
    inline ChatOutputStream& WithActionReviewEvent(const ActionReviewEvent& value) { SetActionReviewEvent(value); return *this;}

    /**
     * <p>A request from Amazon Q Business to the end user for information Amazon Q
     * Business needs to successfully complete a requested plugin action.</p>
     */
    inline ChatOutputStream& WithActionReviewEvent(ActionReviewEvent&& value) { SetActionReviewEvent(std::move(value)); return *this;}


    /**
     * <p>A failed file upload event during a web experience chat.</p>
     */
    inline const FailedAttachmentEvent& GetFailedAttachmentEvent() const{ return m_failedAttachmentEvent; }

    /**
     * <p>A failed file upload event during a web experience chat.</p>
     */
    inline bool FailedAttachmentEventHasBeenSet() const { return m_failedAttachmentEventHasBeenSet; }

    /**
     * <p>A failed file upload event during a web experience chat.</p>
     */
    inline void SetFailedAttachmentEvent(const FailedAttachmentEvent& value) { m_failedAttachmentEventHasBeenSet = true; m_failedAttachmentEvent = value; }

    /**
     * <p>A failed file upload event during a web experience chat.</p>
     */
    inline void SetFailedAttachmentEvent(FailedAttachmentEvent&& value) { m_failedAttachmentEventHasBeenSet = true; m_failedAttachmentEvent = std::move(value); }

    /**
     * <p>A failed file upload event during a web experience chat.</p>
     */
    inline ChatOutputStream& WithFailedAttachmentEvent(const FailedAttachmentEvent& value) { SetFailedAttachmentEvent(value); return *this;}

    /**
     * <p>A failed file upload event during a web experience chat.</p>
     */
    inline ChatOutputStream& WithFailedAttachmentEvent(FailedAttachmentEvent&& value) { SetFailedAttachmentEvent(std::move(value)); return *this;}


    /**
     * <p>An authentication verification event activated by an end user request to use
     * a custom plugin.</p>
     */
    inline const AuthChallengeRequestEvent& GetAuthChallengeRequestEvent() const{ return m_authChallengeRequestEvent; }

    /**
     * <p>An authentication verification event activated by an end user request to use
     * a custom plugin.</p>
     */
    inline bool AuthChallengeRequestEventHasBeenSet() const { return m_authChallengeRequestEventHasBeenSet; }

    /**
     * <p>An authentication verification event activated by an end user request to use
     * a custom plugin.</p>
     */
    inline void SetAuthChallengeRequestEvent(const AuthChallengeRequestEvent& value) { m_authChallengeRequestEventHasBeenSet = true; m_authChallengeRequestEvent = value; }

    /**
     * <p>An authentication verification event activated by an end user request to use
     * a custom plugin.</p>
     */
    inline void SetAuthChallengeRequestEvent(AuthChallengeRequestEvent&& value) { m_authChallengeRequestEventHasBeenSet = true; m_authChallengeRequestEvent = std::move(value); }

    /**
     * <p>An authentication verification event activated by an end user request to use
     * a custom plugin.</p>
     */
    inline ChatOutputStream& WithAuthChallengeRequestEvent(const AuthChallengeRequestEvent& value) { SetAuthChallengeRequestEvent(value); return *this;}

    /**
     * <p>An authentication verification event activated by an end user request to use
     * a custom plugin.</p>
     */
    inline ChatOutputStream& WithAuthChallengeRequestEvent(AuthChallengeRequestEvent&& value) { SetAuthChallengeRequestEvent(std::move(value)); return *this;}

  private:

    TextOutputEvent m_textEvent;
    bool m_textEventHasBeenSet = false;

    MetadataEvent m_metadataEvent;
    bool m_metadataEventHasBeenSet = false;

    ActionReviewEvent m_actionReviewEvent;
    bool m_actionReviewEventHasBeenSet = false;

    FailedAttachmentEvent m_failedAttachmentEvent;
    bool m_failedAttachmentEventHasBeenSet = false;

    AuthChallengeRequestEvent m_authChallengeRequestEvent;
    bool m_authChallengeRequestEventHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws

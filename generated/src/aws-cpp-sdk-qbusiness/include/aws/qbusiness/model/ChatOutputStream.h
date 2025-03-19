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
    AWS_QBUSINESS_API ChatOutputStream() = default;
    AWS_QBUSINESS_API ChatOutputStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ChatOutputStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the payload of the <code>ChatOutputStream</code> event
     * containing the AI-generated message output.</p>
     */
    inline const TextOutputEvent& GetTextEvent() const { return m_textEvent; }
    inline bool TextEventHasBeenSet() const { return m_textEventHasBeenSet; }
    template<typename TextEventT = TextOutputEvent>
    void SetTextEvent(TextEventT&& value) { m_textEventHasBeenSet = true; m_textEvent = std::forward<TextEventT>(value); }
    template<typename TextEventT = TextOutputEvent>
    ChatOutputStream& WithTextEvent(TextEventT&& value) { SetTextEvent(std::forward<TextEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A metadata event for a AI-generated text output message in a Amazon Q
     * Business conversation. </p>
     */
    inline const MetadataEvent& GetMetadataEvent() const { return m_metadataEvent; }
    inline bool MetadataEventHasBeenSet() const { return m_metadataEventHasBeenSet; }
    template<typename MetadataEventT = MetadataEvent>
    void SetMetadataEvent(MetadataEventT&& value) { m_metadataEventHasBeenSet = true; m_metadataEvent = std::forward<MetadataEventT>(value); }
    template<typename MetadataEventT = MetadataEvent>
    ChatOutputStream& WithMetadataEvent(MetadataEventT&& value) { SetMetadataEvent(std::forward<MetadataEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A request from Amazon Q Business to the end user for information Amazon Q
     * Business needs to successfully complete a requested plugin action.</p>
     */
    inline const ActionReviewEvent& GetActionReviewEvent() const { return m_actionReviewEvent; }
    inline bool ActionReviewEventHasBeenSet() const { return m_actionReviewEventHasBeenSet; }
    template<typename ActionReviewEventT = ActionReviewEvent>
    void SetActionReviewEvent(ActionReviewEventT&& value) { m_actionReviewEventHasBeenSet = true; m_actionReviewEvent = std::forward<ActionReviewEventT>(value); }
    template<typename ActionReviewEventT = ActionReviewEvent>
    ChatOutputStream& WithActionReviewEvent(ActionReviewEventT&& value) { SetActionReviewEvent(std::forward<ActionReviewEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A failed file upload event during a web experience chat.</p>
     */
    inline const FailedAttachmentEvent& GetFailedAttachmentEvent() const { return m_failedAttachmentEvent; }
    inline bool FailedAttachmentEventHasBeenSet() const { return m_failedAttachmentEventHasBeenSet; }
    template<typename FailedAttachmentEventT = FailedAttachmentEvent>
    void SetFailedAttachmentEvent(FailedAttachmentEventT&& value) { m_failedAttachmentEventHasBeenSet = true; m_failedAttachmentEvent = std::forward<FailedAttachmentEventT>(value); }
    template<typename FailedAttachmentEventT = FailedAttachmentEvent>
    ChatOutputStream& WithFailedAttachmentEvent(FailedAttachmentEventT&& value) { SetFailedAttachmentEvent(std::forward<FailedAttachmentEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An authentication verification event activated by an end user request to use
     * a custom plugin.</p>
     */
    inline const AuthChallengeRequestEvent& GetAuthChallengeRequestEvent() const { return m_authChallengeRequestEvent; }
    inline bool AuthChallengeRequestEventHasBeenSet() const { return m_authChallengeRequestEventHasBeenSet; }
    template<typename AuthChallengeRequestEventT = AuthChallengeRequestEvent>
    void SetAuthChallengeRequestEvent(AuthChallengeRequestEventT&& value) { m_authChallengeRequestEventHasBeenSet = true; m_authChallengeRequestEvent = std::forward<AuthChallengeRequestEventT>(value); }
    template<typename AuthChallengeRequestEventT = AuthChallengeRequestEvent>
    ChatOutputStream& WithAuthChallengeRequestEvent(AuthChallengeRequestEventT&& value) { SetAuthChallengeRequestEvent(std::forward<AuthChallengeRequestEventT>(value)); return *this;}
    ///@}
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

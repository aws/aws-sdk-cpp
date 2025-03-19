/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/ActionReview.h>
#include <aws/qbusiness/model/ActionExecution.h>
#include <aws/qbusiness/model/AttachmentOutput.h>
#include <aws/qbusiness/model/SourceAttribution.h>
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
   * <p>A message in an Amazon Q Business web experience.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_QBUSINESS_API Message() = default;
    AWS_QBUSINESS_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business web experience message.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    Message& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the Amazon Q Business web experience message.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    Message& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the first Amazon Q Business web experience message.</p>
     */
    inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::Utils::DateTime>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::Utils::DateTime>
    Message& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Q Business message, whether <code>HUMAN</code> or
     * <code>AI</code> generated.</p>
     */
    inline MessageType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MessageType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Message& WithType(MessageType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A file directly uploaded into an Amazon Q Business web experience chat.</p>
     */
    inline const Aws::Vector<AttachmentOutput>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<AttachmentOutput>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<AttachmentOutput>>
    Message& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = AttachmentOutput>
    Message& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source documents used to generate Amazon Q Business web experience
     * message.</p>
     */
    inline const Aws::Vector<SourceAttribution>& GetSourceAttribution() const { return m_sourceAttribution; }
    inline bool SourceAttributionHasBeenSet() const { return m_sourceAttributionHasBeenSet; }
    template<typename SourceAttributionT = Aws::Vector<SourceAttribution>>
    void SetSourceAttribution(SourceAttributionT&& value) { m_sourceAttributionHasBeenSet = true; m_sourceAttribution = std::forward<SourceAttributionT>(value); }
    template<typename SourceAttributionT = Aws::Vector<SourceAttribution>>
    Message& WithSourceAttribution(SourceAttributionT&& value) { SetSourceAttribution(std::forward<SourceAttributionT>(value)); return *this;}
    template<typename SourceAttributionT = SourceAttribution>
    Message& AddSourceAttribution(SourceAttributionT&& value) { m_sourceAttributionHasBeenSet = true; m_sourceAttribution.emplace_back(std::forward<SourceAttributionT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ActionReview& GetActionReview() const { return m_actionReview; }
    inline bool ActionReviewHasBeenSet() const { return m_actionReviewHasBeenSet; }
    template<typename ActionReviewT = ActionReview>
    void SetActionReview(ActionReviewT&& value) { m_actionReviewHasBeenSet = true; m_actionReview = std::forward<ActionReviewT>(value); }
    template<typename ActionReviewT = ActionReview>
    Message& WithActionReview(ActionReviewT&& value) { SetActionReview(std::forward<ActionReviewT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ActionExecution& GetActionExecution() const { return m_actionExecution; }
    inline bool ActionExecutionHasBeenSet() const { return m_actionExecutionHasBeenSet; }
    template<typename ActionExecutionT = ActionExecution>
    void SetActionExecution(ActionExecutionT&& value) { m_actionExecutionHasBeenSet = true; m_actionExecution = std::forward<ActionExecutionT>(value); }
    template<typename ActionExecutionT = ActionExecution>
    Message& WithActionExecution(ActionExecutionT&& value) { SetActionExecution(std::forward<ActionExecutionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Utils::DateTime m_time{};
    bool m_timeHasBeenSet = false;

    MessageType m_type{MessageType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<AttachmentOutput> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::Vector<SourceAttribution> m_sourceAttribution;
    bool m_sourceAttributionHasBeenSet = false;

    ActionReview m_actionReview;
    bool m_actionReviewHasBeenSet = false;

    ActionExecution m_actionExecution;
    bool m_actionExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws

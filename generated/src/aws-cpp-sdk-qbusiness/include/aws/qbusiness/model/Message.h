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
    AWS_QBUSINESS_API Message();
    AWS_QBUSINESS_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business web experience message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline Message& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline Message& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline Message& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the Amazon Q Business web experience message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline Message& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline Message& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline Message& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the first Amazon Q Business web experience message.</p>
     */
    inline const Aws::Utils::DateTime& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline Message& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}
    inline Message& WithTime(Aws::Utils::DateTime&& value) { SetTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Q Business message, whether <code>HUMAN</code> or
     * <code>AI</code> generated.</p>
     */
    inline const MessageType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const MessageType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(MessageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Message& WithType(const MessageType& value) { SetType(value); return *this;}
    inline Message& WithType(MessageType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A file directly uploaded into an Amazon Q Business web experience chat.</p>
     */
    inline const Aws::Vector<AttachmentOutput>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<AttachmentOutput>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<AttachmentOutput>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline Message& WithAttachments(const Aws::Vector<AttachmentOutput>& value) { SetAttachments(value); return *this;}
    inline Message& WithAttachments(Aws::Vector<AttachmentOutput>&& value) { SetAttachments(std::move(value)); return *this;}
    inline Message& AddAttachments(const AttachmentOutput& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline Message& AddAttachments(AttachmentOutput&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source documents used to generate Amazon Q Business web experience
     * message.</p>
     */
    inline const Aws::Vector<SourceAttribution>& GetSourceAttribution() const{ return m_sourceAttribution; }
    inline bool SourceAttributionHasBeenSet() const { return m_sourceAttributionHasBeenSet; }
    inline void SetSourceAttribution(const Aws::Vector<SourceAttribution>& value) { m_sourceAttributionHasBeenSet = true; m_sourceAttribution = value; }
    inline void SetSourceAttribution(Aws::Vector<SourceAttribution>&& value) { m_sourceAttributionHasBeenSet = true; m_sourceAttribution = std::move(value); }
    inline Message& WithSourceAttribution(const Aws::Vector<SourceAttribution>& value) { SetSourceAttribution(value); return *this;}
    inline Message& WithSourceAttribution(Aws::Vector<SourceAttribution>&& value) { SetSourceAttribution(std::move(value)); return *this;}
    inline Message& AddSourceAttribution(const SourceAttribution& value) { m_sourceAttributionHasBeenSet = true; m_sourceAttribution.push_back(value); return *this; }
    inline Message& AddSourceAttribution(SourceAttribution&& value) { m_sourceAttributionHasBeenSet = true; m_sourceAttribution.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ActionReview& GetActionReview() const{ return m_actionReview; }
    inline bool ActionReviewHasBeenSet() const { return m_actionReviewHasBeenSet; }
    inline void SetActionReview(const ActionReview& value) { m_actionReviewHasBeenSet = true; m_actionReview = value; }
    inline void SetActionReview(ActionReview&& value) { m_actionReviewHasBeenSet = true; m_actionReview = std::move(value); }
    inline Message& WithActionReview(const ActionReview& value) { SetActionReview(value); return *this;}
    inline Message& WithActionReview(ActionReview&& value) { SetActionReview(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ActionExecution& GetActionExecution() const{ return m_actionExecution; }
    inline bool ActionExecutionHasBeenSet() const { return m_actionExecutionHasBeenSet; }
    inline void SetActionExecution(const ActionExecution& value) { m_actionExecutionHasBeenSet = true; m_actionExecution = value; }
    inline void SetActionExecution(ActionExecution&& value) { m_actionExecutionHasBeenSet = true; m_actionExecution = std::move(value); }
    inline Message& WithActionExecution(const ActionExecution& value) { SetActionExecution(value); return *this;}
    inline Message& WithActionExecution(ActionExecution&& value) { SetActionExecution(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Utils::DateTime m_time;
    bool m_timeHasBeenSet = false;

    MessageType m_type;
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

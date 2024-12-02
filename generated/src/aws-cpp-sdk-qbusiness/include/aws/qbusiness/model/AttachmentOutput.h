/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/AttachmentStatus.h>
#include <aws/qbusiness/model/ErrorDetail.h>
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
   * <p>The details of a file uploaded during chat.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AttachmentOutput">AWS
   * API Reference</a></p>
   */
  class AttachmentOutput
  {
  public:
    AWS_QBUSINESS_API AttachmentOutput();
    AWS_QBUSINESS_API AttachmentOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AttachmentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a file uploaded during chat.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AttachmentOutput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AttachmentOutput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AttachmentOutput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a file uploaded during chat.</p>
     */
    inline const AttachmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AttachmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AttachmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AttachmentOutput& WithStatus(const AttachmentStatus& value) { SetStatus(value); return *this;}
    inline AttachmentOutput& WithStatus(AttachmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error associated with a file uploaded during chat.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline AttachmentOutput& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline AttachmentOutput& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline AttachmentOutput& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline AttachmentOutput& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline AttachmentOutput& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business conversation.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline AttachmentOutput& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline AttachmentOutput& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline AttachmentOutput& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AttachmentStatus m_status;
    bool m_statusHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws

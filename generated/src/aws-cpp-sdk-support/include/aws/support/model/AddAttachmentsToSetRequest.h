/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/Attachment.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class AddAttachmentsToSetRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API AddAttachmentsToSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddAttachmentsToSet"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> is not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> is specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline const Aws::String& GetAttachmentSetId() const { return m_attachmentSetId; }
    inline bool AttachmentSetIdHasBeenSet() const { return m_attachmentSetIdHasBeenSet; }
    template<typename AttachmentSetIdT = Aws::String>
    void SetAttachmentSetId(AttachmentSetIdT&& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = std::forward<AttachmentSetIdT>(value); }
    template<typename AttachmentSetIdT = Aws::String>
    AddAttachmentsToSetRequest& WithAttachmentSetId(AttachmentSetIdT&& value) { SetAttachmentSetId(std::forward<AttachmentSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more attachments to add to the set. You can add up to three
     * attachments per set. The size limit is 5 MB per attachment.</p> <p>In the
     * <code>Attachment</code> object, use the <code>data</code> parameter to specify
     * the contents of the attachment file. In the previous request syntax, the value
     * for <code>data</code> appear as <code>blob</code>, which is represented as a
     * base64-encoded string. The value for <code>fileName</code> is the name of the
     * attachment, such as <code>troubleshoot-screenshot.png</code>.</p>
     */
    inline const Aws::Vector<Attachment>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<Attachment>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<Attachment>>
    AddAttachmentsToSetRequest& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = Attachment>
    AddAttachmentsToSetRequest& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_attachmentSetId;
    bool m_attachmentSetIdHasBeenSet = false;

    Aws::Vector<Attachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws

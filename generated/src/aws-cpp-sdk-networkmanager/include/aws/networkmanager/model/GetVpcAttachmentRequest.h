/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class GetVpcAttachmentRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetVpcAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVpcAttachment"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline GetVpcAttachmentRequest& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline GetVpcAttachmentRequest& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline GetVpcAttachmentRequest& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}

  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

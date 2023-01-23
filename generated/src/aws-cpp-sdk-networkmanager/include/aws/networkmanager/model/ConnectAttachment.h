/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Attachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/ConnectAttachmentOptions.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network Connect attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectAttachment">AWS
   * API Reference</a></p>
   */
  class ConnectAttachment
  {
  public:
    AWS_NETWORKMANAGER_API ConnectAttachment();
    AWS_NETWORKMANAGER_API ConnectAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attachment details.</p>
     */
    inline const Attachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>The attachment details.</p>
     */
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    /**
     * <p>The attachment details.</p>
     */
    inline void SetAttachment(const Attachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>The attachment details.</p>
     */
    inline void SetAttachment(Attachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    /**
     * <p>The attachment details.</p>
     */
    inline ConnectAttachment& WithAttachment(const Attachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>The attachment details.</p>
     */
    inline ConnectAttachment& WithAttachment(Attachment&& value) { SetAttachment(std::move(value)); return *this;}


    /**
     * <p>The ID of the transport attachment.</p>
     */
    inline const Aws::String& GetTransportAttachmentId() const{ return m_transportAttachmentId; }

    /**
     * <p>The ID of the transport attachment.</p>
     */
    inline bool TransportAttachmentIdHasBeenSet() const { return m_transportAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the transport attachment.</p>
     */
    inline void SetTransportAttachmentId(const Aws::String& value) { m_transportAttachmentIdHasBeenSet = true; m_transportAttachmentId = value; }

    /**
     * <p>The ID of the transport attachment.</p>
     */
    inline void SetTransportAttachmentId(Aws::String&& value) { m_transportAttachmentIdHasBeenSet = true; m_transportAttachmentId = std::move(value); }

    /**
     * <p>The ID of the transport attachment.</p>
     */
    inline void SetTransportAttachmentId(const char* value) { m_transportAttachmentIdHasBeenSet = true; m_transportAttachmentId.assign(value); }

    /**
     * <p>The ID of the transport attachment.</p>
     */
    inline ConnectAttachment& WithTransportAttachmentId(const Aws::String& value) { SetTransportAttachmentId(value); return *this;}

    /**
     * <p>The ID of the transport attachment.</p>
     */
    inline ConnectAttachment& WithTransportAttachmentId(Aws::String&& value) { SetTransportAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transport attachment.</p>
     */
    inline ConnectAttachment& WithTransportAttachmentId(const char* value) { SetTransportAttachmentId(value); return *this;}


    /**
     * <p>Options for connecting an attachment.</p>
     */
    inline const ConnectAttachmentOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Options for connecting an attachment.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Options for connecting an attachment.</p>
     */
    inline void SetOptions(const ConnectAttachmentOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Options for connecting an attachment.</p>
     */
    inline void SetOptions(ConnectAttachmentOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Options for connecting an attachment.</p>
     */
    inline ConnectAttachment& WithOptions(const ConnectAttachmentOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Options for connecting an attachment.</p>
     */
    inline ConnectAttachment& WithOptions(ConnectAttachmentOptions&& value) { SetOptions(std::move(value)); return *this;}

  private:

    Attachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::String m_transportAttachmentId;
    bool m_transportAttachmentIdHasBeenSet = false;

    ConnectAttachmentOptions m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

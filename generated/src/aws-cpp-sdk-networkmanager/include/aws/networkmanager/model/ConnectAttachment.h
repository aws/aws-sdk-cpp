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
    AWS_NETWORKMANAGER_API ConnectAttachment() = default;
    AWS_NETWORKMANAGER_API ConnectAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attachment details.</p>
     */
    inline const Attachment& GetAttachment() const { return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    template<typename AttachmentT = Attachment>
    void SetAttachment(AttachmentT&& value) { m_attachmentHasBeenSet = true; m_attachment = std::forward<AttachmentT>(value); }
    template<typename AttachmentT = Attachment>
    ConnectAttachment& WithAttachment(AttachmentT&& value) { SetAttachment(std::forward<AttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transport attachment.</p>
     */
    inline const Aws::String& GetTransportAttachmentId() const { return m_transportAttachmentId; }
    inline bool TransportAttachmentIdHasBeenSet() const { return m_transportAttachmentIdHasBeenSet; }
    template<typename TransportAttachmentIdT = Aws::String>
    void SetTransportAttachmentId(TransportAttachmentIdT&& value) { m_transportAttachmentIdHasBeenSet = true; m_transportAttachmentId = std::forward<TransportAttachmentIdT>(value); }
    template<typename TransportAttachmentIdT = Aws::String>
    ConnectAttachment& WithTransportAttachmentId(TransportAttachmentIdT&& value) { SetTransportAttachmentId(std::forward<TransportAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for connecting an attachment.</p>
     */
    inline const ConnectAttachmentOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = ConnectAttachmentOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = ConnectAttachmentOptions>
    ConnectAttachment& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Attachment.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a Direct Connect gateway attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DirectConnectGatewayAttachment">AWS
   * API Reference</a></p>
   */
  class DirectConnectGatewayAttachment
  {
  public:
    AWS_NETWORKMANAGER_API DirectConnectGatewayAttachment() = default;
    AWS_NETWORKMANAGER_API DirectConnectGatewayAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API DirectConnectGatewayAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Attachment& GetAttachment() const { return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    template<typename AttachmentT = Attachment>
    void SetAttachment(AttachmentT&& value) { m_attachmentHasBeenSet = true; m_attachment = std::forward<AttachmentT>(value); }
    template<typename AttachmentT = Attachment>
    DirectConnectGatewayAttachment& WithAttachment(AttachmentT&& value) { SetAttachment(std::forward<AttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect gateway attachment ARN.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayArn() const { return m_directConnectGatewayArn; }
    inline bool DirectConnectGatewayArnHasBeenSet() const { return m_directConnectGatewayArnHasBeenSet; }
    template<typename DirectConnectGatewayArnT = Aws::String>
    void SetDirectConnectGatewayArn(DirectConnectGatewayArnT&& value) { m_directConnectGatewayArnHasBeenSet = true; m_directConnectGatewayArn = std::forward<DirectConnectGatewayArnT>(value); }
    template<typename DirectConnectGatewayArnT = Aws::String>
    DirectConnectGatewayAttachment& WithDirectConnectGatewayArn(DirectConnectGatewayArnT&& value) { SetDirectConnectGatewayArn(std::forward<DirectConnectGatewayArnT>(value)); return *this;}
    ///@}
  private:

    Attachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::String m_directConnectGatewayArn;
    bool m_directConnectGatewayArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

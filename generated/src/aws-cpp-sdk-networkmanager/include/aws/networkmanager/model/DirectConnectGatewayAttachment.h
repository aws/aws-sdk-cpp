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
    AWS_NETWORKMANAGER_API DirectConnectGatewayAttachment();
    AWS_NETWORKMANAGER_API DirectConnectGatewayAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API DirectConnectGatewayAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Attachment& GetAttachment() const{ return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    inline void SetAttachment(const Attachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }
    inline void SetAttachment(Attachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }
    inline DirectConnectGatewayAttachment& WithAttachment(const Attachment& value) { SetAttachment(value); return *this;}
    inline DirectConnectGatewayAttachment& WithAttachment(Attachment&& value) { SetAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect gateway attachment ARN.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayArn() const{ return m_directConnectGatewayArn; }
    inline bool DirectConnectGatewayArnHasBeenSet() const { return m_directConnectGatewayArnHasBeenSet; }
    inline void SetDirectConnectGatewayArn(const Aws::String& value) { m_directConnectGatewayArnHasBeenSet = true; m_directConnectGatewayArn = value; }
    inline void SetDirectConnectGatewayArn(Aws::String&& value) { m_directConnectGatewayArnHasBeenSet = true; m_directConnectGatewayArn = std::move(value); }
    inline void SetDirectConnectGatewayArn(const char* value) { m_directConnectGatewayArnHasBeenSet = true; m_directConnectGatewayArn.assign(value); }
    inline DirectConnectGatewayAttachment& WithDirectConnectGatewayArn(const Aws::String& value) { SetDirectConnectGatewayArn(value); return *this;}
    inline DirectConnectGatewayAttachment& WithDirectConnectGatewayArn(Aws::String&& value) { SetDirectConnectGatewayArn(std::move(value)); return *this;}
    inline DirectConnectGatewayAttachment& WithDirectConnectGatewayArn(const char* value) { SetDirectConnectGatewayArn(value); return *this;}
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

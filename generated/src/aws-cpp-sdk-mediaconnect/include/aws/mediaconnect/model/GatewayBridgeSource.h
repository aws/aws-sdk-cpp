﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/VpcInterfaceAttachment.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The source configuration for cloud flows receiving a stream from a
   * bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GatewayBridgeSource">AWS
   * API Reference</a></p>
   */
  class GatewayBridgeSource
  {
  public:
    AWS_MEDIACONNECT_API GatewayBridgeSource() = default;
    AWS_MEDIACONNECT_API GatewayBridgeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API GatewayBridgeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the bridge feeding this flow.
     */
    inline const Aws::String& GetBridgeArn() const { return m_bridgeArn; }
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }
    template<typename BridgeArnT = Aws::String>
    void SetBridgeArn(BridgeArnT&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::forward<BridgeArnT>(value); }
    template<typename BridgeArnT = Aws::String>
    GatewayBridgeSource& WithBridgeArn(BridgeArnT&& value) { SetBridgeArn(std::forward<BridgeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the VPC interface attachment to use for this bridge source.
     */
    inline const VpcInterfaceAttachment& GetVpcInterfaceAttachment() const { return m_vpcInterfaceAttachment; }
    inline bool VpcInterfaceAttachmentHasBeenSet() const { return m_vpcInterfaceAttachmentHasBeenSet; }
    template<typename VpcInterfaceAttachmentT = VpcInterfaceAttachment>
    void SetVpcInterfaceAttachment(VpcInterfaceAttachmentT&& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = std::forward<VpcInterfaceAttachmentT>(value); }
    template<typename VpcInterfaceAttachmentT = VpcInterfaceAttachment>
    GatewayBridgeSource& WithVpcInterfaceAttachment(VpcInterfaceAttachmentT&& value) { SetVpcInterfaceAttachment(std::forward<VpcInterfaceAttachmentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    VpcInterfaceAttachment m_vpcInterfaceAttachment;
    bool m_vpcInterfaceAttachmentHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

/**
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
   * <p> Update the flow source of the bridge. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeFlowSourceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBridgeFlowSourceRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeFlowSourceRequest() = default;
    AWS_MEDIACONNECT_API UpdateBridgeFlowSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API UpdateBridgeFlowSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that identifies the MediaConnect resource
     * from which to delete tags.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    UpdateBridgeFlowSourceRequest& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VPC interface attachment to use for this source. </p>
     */
    inline const VpcInterfaceAttachment& GetFlowVpcInterfaceAttachment() const { return m_flowVpcInterfaceAttachment; }
    inline bool FlowVpcInterfaceAttachmentHasBeenSet() const { return m_flowVpcInterfaceAttachmentHasBeenSet; }
    template<typename FlowVpcInterfaceAttachmentT = VpcInterfaceAttachment>
    void SetFlowVpcInterfaceAttachment(FlowVpcInterfaceAttachmentT&& value) { m_flowVpcInterfaceAttachmentHasBeenSet = true; m_flowVpcInterfaceAttachment = std::forward<FlowVpcInterfaceAttachmentT>(value); }
    template<typename FlowVpcInterfaceAttachmentT = VpcInterfaceAttachment>
    UpdateBridgeFlowSourceRequest& WithFlowVpcInterfaceAttachment(FlowVpcInterfaceAttachmentT&& value) { SetFlowVpcInterfaceAttachment(std::forward<FlowVpcInterfaceAttachmentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    VpcInterfaceAttachment m_flowVpcInterfaceAttachment;
    bool m_flowVpcInterfaceAttachmentHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

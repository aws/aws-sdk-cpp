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
   * <p> Add a flow source to an existing bridge. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeFlowSourceRequest">AWS
   * API Reference</a></p>
   */
  class AddBridgeFlowSourceRequest
  {
  public:
    AWS_MEDIACONNECT_API AddBridgeFlowSourceRequest() = default;
    AWS_MEDIACONNECT_API AddBridgeFlowSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddBridgeFlowSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the flow to use as a source of this
     * bridge. </p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    AddBridgeFlowSourceRequest& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
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
    AddBridgeFlowSourceRequest& WithFlowVpcInterfaceAttachment(FlowVpcInterfaceAttachmentT&& value) { SetFlowVpcInterfaceAttachment(std::forward<FlowVpcInterfaceAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the flow source. This name is used to reference the source and
     * must be unique among sources in this bridge. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AddBridgeFlowSourceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    VpcInterfaceAttachment m_flowVpcInterfaceAttachment;
    bool m_flowVpcInterfaceAttachmentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

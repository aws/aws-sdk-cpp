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
   * Update the flow source of the bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeFlowSourceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBridgeFlowSourceRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeFlowSourceRequest();
    AWS_MEDIACONNECT_API UpdateBridgeFlowSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API UpdateBridgeFlowSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the cloud flow to use as a source of this bridge.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the cloud flow to use as a source of this bridge.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The ARN of the cloud flow to use as a source of this bridge.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The ARN of the cloud flow to use as a source of this bridge.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The ARN of the cloud flow to use as a source of this bridge.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The ARN of the cloud flow to use as a source of this bridge.
     */
    inline UpdateBridgeFlowSourceRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the cloud flow to use as a source of this bridge.
     */
    inline UpdateBridgeFlowSourceRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the cloud flow to use as a source of this bridge.
     */
    inline UpdateBridgeFlowSourceRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The name of the VPC interface attachment to use for this source.
     */
    inline const VpcInterfaceAttachment& GetFlowVpcInterfaceAttachment() const{ return m_flowVpcInterfaceAttachment; }

    /**
     * The name of the VPC interface attachment to use for this source.
     */
    inline bool FlowVpcInterfaceAttachmentHasBeenSet() const { return m_flowVpcInterfaceAttachmentHasBeenSet; }

    /**
     * The name of the VPC interface attachment to use for this source.
     */
    inline void SetFlowVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { m_flowVpcInterfaceAttachmentHasBeenSet = true; m_flowVpcInterfaceAttachment = value; }

    /**
     * The name of the VPC interface attachment to use for this source.
     */
    inline void SetFlowVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { m_flowVpcInterfaceAttachmentHasBeenSet = true; m_flowVpcInterfaceAttachment = std::move(value); }

    /**
     * The name of the VPC interface attachment to use for this source.
     */
    inline UpdateBridgeFlowSourceRequest& WithFlowVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { SetFlowVpcInterfaceAttachment(value); return *this;}

    /**
     * The name of the VPC interface attachment to use for this source.
     */
    inline UpdateBridgeFlowSourceRequest& WithFlowVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { SetFlowVpcInterfaceAttachment(std::move(value)); return *this;}

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    VpcInterfaceAttachment m_flowVpcInterfaceAttachment;
    bool m_flowVpcInterfaceAttachmentHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

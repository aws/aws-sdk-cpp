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
   * Add a flow source to an existing bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeFlowSourceRequest">AWS
   * API Reference</a></p>
   */
  class AddBridgeFlowSourceRequest
  {
  public:
    AWS_MEDIACONNECT_API AddBridgeFlowSourceRequest();
    AWS_MEDIACONNECT_API AddBridgeFlowSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddBridgeFlowSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Number (ARN) of the cloud flow to use as a source of this
     * bridge.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The Amazon Resource Number (ARN) of the cloud flow to use as a source of this
     * bridge.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The Amazon Resource Number (ARN) of the cloud flow to use as a source of this
     * bridge.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The Amazon Resource Number (ARN) of the cloud flow to use as a source of this
     * bridge.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The Amazon Resource Number (ARN) of the cloud flow to use as a source of this
     * bridge.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The Amazon Resource Number (ARN) of the cloud flow to use as a source of this
     * bridge.
     */
    inline AddBridgeFlowSourceRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the cloud flow to use as a source of this
     * bridge.
     */
    inline AddBridgeFlowSourceRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the cloud flow to use as a source of this
     * bridge.
     */
    inline AddBridgeFlowSourceRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


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
    inline AddBridgeFlowSourceRequest& WithFlowVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { SetFlowVpcInterfaceAttachment(value); return *this;}

    /**
     * The name of the VPC interface attachment to use for this source.
     */
    inline AddBridgeFlowSourceRequest& WithFlowVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { SetFlowVpcInterfaceAttachment(std::move(value)); return *this;}


    /**
     * The name of the flow source. This name is used to reference the source and must
     * be unique among sources in this bridge.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the flow source. This name is used to reference the source and must
     * be unique among sources in this bridge.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the flow source. This name is used to reference the source and must
     * be unique among sources in this bridge.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the flow source. This name is used to reference the source and must
     * be unique among sources in this bridge.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the flow source. This name is used to reference the source and must
     * be unique among sources in this bridge.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the flow source. This name is used to reference the source and must
     * be unique among sources in this bridge.
     */
    inline AddBridgeFlowSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the flow source. This name is used to reference the source and must
     * be unique among sources in this bridge.
     */
    inline AddBridgeFlowSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the flow source. This name is used to reference the source and must
     * be unique among sources in this bridge.
     */
    inline AddBridgeFlowSourceRequest& WithName(const char* value) { SetName(value); return *this;}

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

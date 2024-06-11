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
   * The source of the bridge. A flow source originates in MediaConnect as an
   * existing cloud flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BridgeFlowSource">AWS
   * API Reference</a></p>
   */
  class BridgeFlowSource
  {
  public:
    AWS_MEDIACONNECT_API BridgeFlowSource();
    AWS_MEDIACONNECT_API BridgeFlowSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API BridgeFlowSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the cloud flow used as a source of this bridge.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline BridgeFlowSource& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline BridgeFlowSource& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline BridgeFlowSource& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the VPC interface attachment to use for this source.
     */
    inline const VpcInterfaceAttachment& GetFlowVpcInterfaceAttachment() const{ return m_flowVpcInterfaceAttachment; }
    inline bool FlowVpcInterfaceAttachmentHasBeenSet() const { return m_flowVpcInterfaceAttachmentHasBeenSet; }
    inline void SetFlowVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { m_flowVpcInterfaceAttachmentHasBeenSet = true; m_flowVpcInterfaceAttachment = value; }
    inline void SetFlowVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { m_flowVpcInterfaceAttachmentHasBeenSet = true; m_flowVpcInterfaceAttachment = std::move(value); }
    inline BridgeFlowSource& WithFlowVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { SetFlowVpcInterfaceAttachment(value); return *this;}
    inline BridgeFlowSource& WithFlowVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { SetFlowVpcInterfaceAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the flow source.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BridgeFlowSource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BridgeFlowSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BridgeFlowSource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Number (ARN) of the output.
     */
    inline const Aws::String& GetOutputArn() const{ return m_outputArn; }
    inline bool OutputArnHasBeenSet() const { return m_outputArnHasBeenSet; }
    inline void SetOutputArn(const Aws::String& value) { m_outputArnHasBeenSet = true; m_outputArn = value; }
    inline void SetOutputArn(Aws::String&& value) { m_outputArnHasBeenSet = true; m_outputArn = std::move(value); }
    inline void SetOutputArn(const char* value) { m_outputArnHasBeenSet = true; m_outputArn.assign(value); }
    inline BridgeFlowSource& WithOutputArn(const Aws::String& value) { SetOutputArn(value); return *this;}
    inline BridgeFlowSource& WithOutputArn(Aws::String&& value) { SetOutputArn(std::move(value)); return *this;}
    inline BridgeFlowSource& WithOutputArn(const char* value) { SetOutputArn(value); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    VpcInterfaceAttachment m_flowVpcInterfaceAttachment;
    bool m_flowVpcInterfaceAttachmentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_outputArn;
    bool m_outputArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

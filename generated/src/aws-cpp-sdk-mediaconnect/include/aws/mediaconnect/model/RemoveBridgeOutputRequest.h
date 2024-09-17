/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class RemoveBridgeOutputRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API RemoveBridgeOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveBridgeOutput"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ARN of the bridge that you want to update.
     */
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = value; }
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::move(value); }
    inline void SetBridgeArn(const char* value) { m_bridgeArnHasBeenSet = true; m_bridgeArn.assign(value); }
    inline RemoveBridgeOutputRequest& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}
    inline RemoveBridgeOutputRequest& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}
    inline RemoveBridgeOutputRequest& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the bridge output that you want to remove.
     */
    inline const Aws::String& GetOutputName() const{ return m_outputName; }
    inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }
    inline void SetOutputName(const Aws::String& value) { m_outputNameHasBeenSet = true; m_outputName = value; }
    inline void SetOutputName(Aws::String&& value) { m_outputNameHasBeenSet = true; m_outputName = std::move(value); }
    inline void SetOutputName(const char* value) { m_outputNameHasBeenSet = true; m_outputName.assign(value); }
    inline RemoveBridgeOutputRequest& WithOutputName(const Aws::String& value) { SetOutputName(value); return *this;}
    inline RemoveBridgeOutputRequest& WithOutputName(Aws::String&& value) { SetOutputName(std::move(value)); return *this;}
    inline RemoveBridgeOutputRequest& WithOutputName(const char* value) { SetOutputName(value); return *this;}
    ///@}
  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    Aws::String m_outputName;
    bool m_outputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

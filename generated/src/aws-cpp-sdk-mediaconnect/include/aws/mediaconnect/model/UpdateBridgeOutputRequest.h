/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateBridgeNetworkOutputRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * The fields that you want to update in the bridge output.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeOutputRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBridgeOutputRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBridgeOutput"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The ARN of the bridge that you want to update.
     */
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }

    /**
     * The ARN of the bridge that you want to update.
     */
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }

    /**
     * The ARN of the bridge that you want to update.
     */
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = value; }

    /**
     * The ARN of the bridge that you want to update.
     */
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::move(value); }

    /**
     * The ARN of the bridge that you want to update.
     */
    inline void SetBridgeArn(const char* value) { m_bridgeArnHasBeenSet = true; m_bridgeArn.assign(value); }

    /**
     * The ARN of the bridge that you want to update.
     */
    inline UpdateBridgeOutputRequest& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The ARN of the bridge that you want to update.
     */
    inline UpdateBridgeOutputRequest& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The ARN of the bridge that you want to update.
     */
    inline UpdateBridgeOutputRequest& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    
    inline const UpdateBridgeNetworkOutputRequest& GetNetworkOutput() const{ return m_networkOutput; }

    
    inline bool NetworkOutputHasBeenSet() const { return m_networkOutputHasBeenSet; }

    
    inline void SetNetworkOutput(const UpdateBridgeNetworkOutputRequest& value) { m_networkOutputHasBeenSet = true; m_networkOutput = value; }

    
    inline void SetNetworkOutput(UpdateBridgeNetworkOutputRequest&& value) { m_networkOutputHasBeenSet = true; m_networkOutput = std::move(value); }

    
    inline UpdateBridgeOutputRequest& WithNetworkOutput(const UpdateBridgeNetworkOutputRequest& value) { SetNetworkOutput(value); return *this;}

    
    inline UpdateBridgeOutputRequest& WithNetworkOutput(UpdateBridgeNetworkOutputRequest&& value) { SetNetworkOutput(std::move(value)); return *this;}


    /**
     * The name of the bridge output that you want to update.
     */
    inline const Aws::String& GetOutputName() const{ return m_outputName; }

    /**
     * The name of the bridge output that you want to update.
     */
    inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }

    /**
     * The name of the bridge output that you want to update.
     */
    inline void SetOutputName(const Aws::String& value) { m_outputNameHasBeenSet = true; m_outputName = value; }

    /**
     * The name of the bridge output that you want to update.
     */
    inline void SetOutputName(Aws::String&& value) { m_outputNameHasBeenSet = true; m_outputName = std::move(value); }

    /**
     * The name of the bridge output that you want to update.
     */
    inline void SetOutputName(const char* value) { m_outputNameHasBeenSet = true; m_outputName.assign(value); }

    /**
     * The name of the bridge output that you want to update.
     */
    inline UpdateBridgeOutputRequest& WithOutputName(const Aws::String& value) { SetOutputName(value); return *this;}

    /**
     * The name of the bridge output that you want to update.
     */
    inline UpdateBridgeOutputRequest& WithOutputName(Aws::String&& value) { SetOutputName(std::move(value)); return *this;}

    /**
     * The name of the bridge output that you want to update.
     */
    inline UpdateBridgeOutputRequest& WithOutputName(const char* value) { SetOutputName(value); return *this;}

  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    UpdateBridgeNetworkOutputRequest m_networkOutput;
    bool m_networkOutputHasBeenSet = false;

    Aws::String m_outputName;
    bool m_outputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

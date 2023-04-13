/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateBridgeFlowSourceRequest.h>
#include <aws/mediaconnect/model/UpdateBridgeNetworkSourceRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * The fields that you want to update in the bridge source.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeSourceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBridgeSourceRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBridgeSource"; }

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
    inline UpdateBridgeSourceRequest& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The ARN of the bridge that you want to update.
     */
    inline UpdateBridgeSourceRequest& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The ARN of the bridge that you want to update.
     */
    inline UpdateBridgeSourceRequest& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    
    inline const UpdateBridgeFlowSourceRequest& GetFlowSource() const{ return m_flowSource; }

    
    inline bool FlowSourceHasBeenSet() const { return m_flowSourceHasBeenSet; }

    
    inline void SetFlowSource(const UpdateBridgeFlowSourceRequest& value) { m_flowSourceHasBeenSet = true; m_flowSource = value; }

    
    inline void SetFlowSource(UpdateBridgeFlowSourceRequest&& value) { m_flowSourceHasBeenSet = true; m_flowSource = std::move(value); }

    
    inline UpdateBridgeSourceRequest& WithFlowSource(const UpdateBridgeFlowSourceRequest& value) { SetFlowSource(value); return *this;}

    
    inline UpdateBridgeSourceRequest& WithFlowSource(UpdateBridgeFlowSourceRequest&& value) { SetFlowSource(std::move(value)); return *this;}


    
    inline const UpdateBridgeNetworkSourceRequest& GetNetworkSource() const{ return m_networkSource; }

    
    inline bool NetworkSourceHasBeenSet() const { return m_networkSourceHasBeenSet; }

    
    inline void SetNetworkSource(const UpdateBridgeNetworkSourceRequest& value) { m_networkSourceHasBeenSet = true; m_networkSource = value; }

    
    inline void SetNetworkSource(UpdateBridgeNetworkSourceRequest&& value) { m_networkSourceHasBeenSet = true; m_networkSource = std::move(value); }

    
    inline UpdateBridgeSourceRequest& WithNetworkSource(const UpdateBridgeNetworkSourceRequest& value) { SetNetworkSource(value); return *this;}

    
    inline UpdateBridgeSourceRequest& WithNetworkSource(UpdateBridgeNetworkSourceRequest&& value) { SetNetworkSource(std::move(value)); return *this;}


    /**
     * The name of the source that you want to update.
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * The name of the source that you want to update.
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * The name of the source that you want to update.
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * The name of the source that you want to update.
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * The name of the source that you want to update.
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * The name of the source that you want to update.
     */
    inline UpdateBridgeSourceRequest& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * The name of the source that you want to update.
     */
    inline UpdateBridgeSourceRequest& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * The name of the source that you want to update.
     */
    inline UpdateBridgeSourceRequest& WithSourceName(const char* value) { SetSourceName(value); return *this;}

  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    UpdateBridgeFlowSourceRequest m_flowSource;
    bool m_flowSourceHasBeenSet = false;

    UpdateBridgeNetworkSourceRequest m_networkSource;
    bool m_networkSourceHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

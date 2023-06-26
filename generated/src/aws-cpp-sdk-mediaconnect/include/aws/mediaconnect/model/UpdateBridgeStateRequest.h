/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/DesiredState.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to update the bridge state.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeStateRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBridgeStateRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBridgeState"; }

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
    inline UpdateBridgeStateRequest& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The ARN of the bridge that you want to update.
     */
    inline UpdateBridgeStateRequest& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The ARN of the bridge that you want to update.
     */
    inline UpdateBridgeStateRequest& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    
    inline const DesiredState& GetDesiredState() const{ return m_desiredState; }

    
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    
    inline void SetDesiredState(const DesiredState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    
    inline void SetDesiredState(DesiredState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    
    inline UpdateBridgeStateRequest& WithDesiredState(const DesiredState& value) { SetDesiredState(value); return *this;}

    
    inline UpdateBridgeStateRequest& WithDesiredState(DesiredState&& value) { SetDesiredState(std::move(value)); return *this;}

  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    DesiredState m_desiredState;
    bool m_desiredStateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

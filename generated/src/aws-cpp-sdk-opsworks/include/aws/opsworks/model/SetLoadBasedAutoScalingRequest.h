/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/AutoScalingThresholds.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class SetLoadBasedAutoScalingRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API SetLoadBasedAutoScalingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetLoadBasedAutoScaling"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = std::move(value); }
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }
    inline SetLoadBasedAutoScalingRequest& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}
    inline SetLoadBasedAutoScalingRequest& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}
    inline SetLoadBasedAutoScalingRequest& WithLayerId(const char* value) { SetLayerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables load-based auto scaling for the layer.</p>
     */
    inline bool GetEnable() const{ return m_enable; }
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }
    inline SetLoadBasedAutoScalingRequest& WithEnable(bool value) { SetEnable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>AutoScalingThresholds</code> object with the upscaling threshold
     * configuration. If the load exceeds these thresholds for a specified amount of
     * time, OpsWorks Stacks starts a specified number of instances.</p>
     */
    inline const AutoScalingThresholds& GetUpScaling() const{ return m_upScaling; }
    inline bool UpScalingHasBeenSet() const { return m_upScalingHasBeenSet; }
    inline void SetUpScaling(const AutoScalingThresholds& value) { m_upScalingHasBeenSet = true; m_upScaling = value; }
    inline void SetUpScaling(AutoScalingThresholds&& value) { m_upScalingHasBeenSet = true; m_upScaling = std::move(value); }
    inline SetLoadBasedAutoScalingRequest& WithUpScaling(const AutoScalingThresholds& value) { SetUpScaling(value); return *this;}
    inline SetLoadBasedAutoScalingRequest& WithUpScaling(AutoScalingThresholds&& value) { SetUpScaling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>AutoScalingThresholds</code> object with the downscaling threshold
     * configuration. If the load falls below these thresholds for a specified amount
     * of time, OpsWorks Stacks stops a specified number of instances.</p>
     */
    inline const AutoScalingThresholds& GetDownScaling() const{ return m_downScaling; }
    inline bool DownScalingHasBeenSet() const { return m_downScalingHasBeenSet; }
    inline void SetDownScaling(const AutoScalingThresholds& value) { m_downScalingHasBeenSet = true; m_downScaling = value; }
    inline void SetDownScaling(AutoScalingThresholds&& value) { m_downScalingHasBeenSet = true; m_downScaling = std::move(value); }
    inline SetLoadBasedAutoScalingRequest& WithDownScaling(const AutoScalingThresholds& value) { SetDownScaling(value); return *this;}
    inline SetLoadBasedAutoScalingRequest& WithDownScaling(AutoScalingThresholds&& value) { SetDownScaling(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet = false;

    bool m_enable;
    bool m_enableHasBeenSet = false;

    AutoScalingThresholds m_upScaling;
    bool m_upScalingHasBeenSet = false;

    AutoScalingThresholds m_downScaling;
    bool m_downScalingHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws

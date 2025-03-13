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
    AWS_OPSWORKS_API SetLoadBasedAutoScalingRequest() = default;

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
    inline const Aws::String& GetLayerId() const { return m_layerId; }
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }
    template<typename LayerIdT = Aws::String>
    void SetLayerId(LayerIdT&& value) { m_layerIdHasBeenSet = true; m_layerId = std::forward<LayerIdT>(value); }
    template<typename LayerIdT = Aws::String>
    SetLoadBasedAutoScalingRequest& WithLayerId(LayerIdT&& value) { SetLayerId(std::forward<LayerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables load-based auto scaling for the layer.</p>
     */
    inline bool GetEnable() const { return m_enable; }
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
    inline const AutoScalingThresholds& GetUpScaling() const { return m_upScaling; }
    inline bool UpScalingHasBeenSet() const { return m_upScalingHasBeenSet; }
    template<typename UpScalingT = AutoScalingThresholds>
    void SetUpScaling(UpScalingT&& value) { m_upScalingHasBeenSet = true; m_upScaling = std::forward<UpScalingT>(value); }
    template<typename UpScalingT = AutoScalingThresholds>
    SetLoadBasedAutoScalingRequest& WithUpScaling(UpScalingT&& value) { SetUpScaling(std::forward<UpScalingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>AutoScalingThresholds</code> object with the downscaling threshold
     * configuration. If the load falls below these thresholds for a specified amount
     * of time, OpsWorks Stacks stops a specified number of instances.</p>
     */
    inline const AutoScalingThresholds& GetDownScaling() const { return m_downScaling; }
    inline bool DownScalingHasBeenSet() const { return m_downScalingHasBeenSet; }
    template<typename DownScalingT = AutoScalingThresholds>
    void SetDownScaling(DownScalingT&& value) { m_downScalingHasBeenSet = true; m_downScaling = std::forward<DownScalingT>(value); }
    template<typename DownScalingT = AutoScalingThresholds>
    SetLoadBasedAutoScalingRequest& WithDownScaling(DownScalingT&& value) { SetDownScaling(std::forward<DownScalingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet = false;

    bool m_enable{false};
    bool m_enableHasBeenSet = false;

    AutoScalingThresholds m_upScaling;
    bool m_upScalingHasBeenSet = false;

    AutoScalingThresholds m_downScaling;
    bool m_downScalingHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/AutoScalingThresholds.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a layer's load-based auto scaling configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/LoadBasedAutoScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoadBasedAutoScalingConfiguration
  {
  public:
    AWS_OPSWORKS_API LoadBasedAutoScalingConfiguration() = default;
    AWS_OPSWORKS_API LoadBasedAutoScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API LoadBasedAutoScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const { return m_layerId; }
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }
    template<typename LayerIdT = Aws::String>
    void SetLayerId(LayerIdT&& value) { m_layerIdHasBeenSet = true; m_layerId = std::forward<LayerIdT>(value); }
    template<typename LayerIdT = Aws::String>
    LoadBasedAutoScalingConfiguration& WithLayerId(LayerIdT&& value) { SetLayerId(std::forward<LayerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether load-based auto scaling is enabled for the layer.</p>
     */
    inline bool GetEnable() const { return m_enable; }
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }
    inline LoadBasedAutoScalingConfiguration& WithEnable(bool value) { SetEnable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the upscaling
     * configuration, which defines how and when OpsWorks Stacks increases the number
     * of instances.</p>
     */
    inline const AutoScalingThresholds& GetUpScaling() const { return m_upScaling; }
    inline bool UpScalingHasBeenSet() const { return m_upScalingHasBeenSet; }
    template<typename UpScalingT = AutoScalingThresholds>
    void SetUpScaling(UpScalingT&& value) { m_upScalingHasBeenSet = true; m_upScaling = std::forward<UpScalingT>(value); }
    template<typename UpScalingT = AutoScalingThresholds>
    LoadBasedAutoScalingConfiguration& WithUpScaling(UpScalingT&& value) { SetUpScaling(std::forward<UpScalingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>AutoScalingThresholds</code> object that describes the downscaling
     * configuration, which defines how and when OpsWorks Stacks reduces the number of
     * instances.</p>
     */
    inline const AutoScalingThresholds& GetDownScaling() const { return m_downScaling; }
    inline bool DownScalingHasBeenSet() const { return m_downScalingHasBeenSet; }
    template<typename DownScalingT = AutoScalingThresholds>
    void SetDownScaling(DownScalingT&& value) { m_downScalingHasBeenSet = true; m_downScaling = std::forward<DownScalingT>(value); }
    template<typename DownScalingT = AutoScalingThresholds>
    LoadBasedAutoScalingConfiguration& WithDownScaling(DownScalingT&& value) { SetDownScaling(std::forward<DownScalingT>(value)); return *this;}
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

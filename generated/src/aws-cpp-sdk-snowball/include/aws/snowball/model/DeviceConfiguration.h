/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/SnowconeDeviceConfiguration.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>The container for <code>SnowconeDeviceConfiguration</code>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DeviceConfiguration">AWS
   * API Reference</a></p>
   */
  class DeviceConfiguration
  {
  public:
    AWS_SNOWBALL_API DeviceConfiguration() = default;
    AWS_SNOWBALL_API DeviceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API DeviceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns information about the device configuration for an Snowball Edge
     * job.</p>
     */
    inline const SnowconeDeviceConfiguration& GetSnowconeDeviceConfiguration() const { return m_snowconeDeviceConfiguration; }
    inline bool SnowconeDeviceConfigurationHasBeenSet() const { return m_snowconeDeviceConfigurationHasBeenSet; }
    template<typename SnowconeDeviceConfigurationT = SnowconeDeviceConfiguration>
    void SetSnowconeDeviceConfiguration(SnowconeDeviceConfigurationT&& value) { m_snowconeDeviceConfigurationHasBeenSet = true; m_snowconeDeviceConfiguration = std::forward<SnowconeDeviceConfigurationT>(value); }
    template<typename SnowconeDeviceConfigurationT = SnowconeDeviceConfiguration>
    DeviceConfiguration& WithSnowconeDeviceConfiguration(SnowconeDeviceConfigurationT&& value) { SetSnowconeDeviceConfiguration(std::forward<SnowconeDeviceConfigurationT>(value)); return *this;}
    ///@}
  private:

    SnowconeDeviceConfiguration m_snowconeDeviceConfiguration;
    bool m_snowconeDeviceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws

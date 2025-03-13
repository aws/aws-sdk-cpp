/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/OTAJobConfig.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A job's configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeviceJobConfig">AWS
   * API Reference</a></p>
   */
  class DeviceJobConfig
  {
  public:
    AWS_PANORAMA_API DeviceJobConfig() = default;
    AWS_PANORAMA_API DeviceJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API DeviceJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A configuration for an over-the-air (OTA) upgrade. Required for OTA jobs.</p>
     */
    inline const OTAJobConfig& GetOTAJobConfig() const { return m_oTAJobConfig; }
    inline bool OTAJobConfigHasBeenSet() const { return m_oTAJobConfigHasBeenSet; }
    template<typename OTAJobConfigT = OTAJobConfig>
    void SetOTAJobConfig(OTAJobConfigT&& value) { m_oTAJobConfigHasBeenSet = true; m_oTAJobConfig = std::forward<OTAJobConfigT>(value); }
    template<typename OTAJobConfigT = OTAJobConfig>
    DeviceJobConfig& WithOTAJobConfig(OTAJobConfigT&& value) { SetOTAJobConfig(std::forward<OTAJobConfigT>(value)); return *this;}
    ///@}
  private:

    OTAJobConfig m_oTAJobConfig;
    bool m_oTAJobConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

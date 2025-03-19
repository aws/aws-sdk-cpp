/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SetDimension.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies demographic-based dimension settings for including or excluding
   * endpoints from a segment. These settings derive from characteristics of endpoint
   * devices, such as platform, make, and model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentDemographics">AWS
   * API Reference</a></p>
   */
  class SegmentDemographics
  {
  public:
    AWS_PINPOINT_API SegmentDemographics() = default;
    AWS_PINPOINT_API SegmentDemographics(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentDemographics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The app version criteria for the segment.</p>
     */
    inline const SetDimension& GetAppVersion() const { return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    template<typename AppVersionT = SetDimension>
    void SetAppVersion(AppVersionT&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::forward<AppVersionT>(value); }
    template<typename AppVersionT = SetDimension>
    SegmentDemographics& WithAppVersion(AppVersionT&& value) { SetAppVersion(std::forward<AppVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel criteria for the segment.</p>
     */
    inline const SetDimension& GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    template<typename ChannelT = SetDimension>
    void SetChannel(ChannelT&& value) { m_channelHasBeenSet = true; m_channel = std::forward<ChannelT>(value); }
    template<typename ChannelT = SetDimension>
    SegmentDemographics& WithChannel(ChannelT&& value) { SetChannel(std::forward<ChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device type criteria for the segment.</p>
     */
    inline const SetDimension& GetDeviceType() const { return m_deviceType; }
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
    template<typename DeviceTypeT = SetDimension>
    void SetDeviceType(DeviceTypeT&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::forward<DeviceTypeT>(value); }
    template<typename DeviceTypeT = SetDimension>
    SegmentDemographics& WithDeviceType(DeviceTypeT&& value) { SetDeviceType(std::forward<DeviceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device make criteria for the segment.</p>
     */
    inline const SetDimension& GetMake() const { return m_make; }
    inline bool MakeHasBeenSet() const { return m_makeHasBeenSet; }
    template<typename MakeT = SetDimension>
    void SetMake(MakeT&& value) { m_makeHasBeenSet = true; m_make = std::forward<MakeT>(value); }
    template<typename MakeT = SetDimension>
    SegmentDemographics& WithMake(MakeT&& value) { SetMake(std::forward<MakeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device model criteria for the segment.</p>
     */
    inline const SetDimension& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = SetDimension>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = SetDimension>
    SegmentDemographics& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device platform criteria for the segment.</p>
     */
    inline const SetDimension& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = SetDimension>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = SetDimension>
    SegmentDemographics& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}
  private:

    SetDimension m_appVersion;
    bool m_appVersionHasBeenSet = false;

    SetDimension m_channel;
    bool m_channelHasBeenSet = false;

    SetDimension m_deviceType;
    bool m_deviceTypeHasBeenSet = false;

    SetDimension m_make;
    bool m_makeHasBeenSet = false;

    SetDimension m_model;
    bool m_modelHasBeenSet = false;

    SetDimension m_platform;
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/BlackoutSlateNetworkEndBlackout.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/BlackoutSlateState.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Blackout Slate<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BlackoutSlate">AWS
   * API Reference</a></p>
   */
  class BlackoutSlate
  {
  public:
    AWS_MEDIALIVE_API BlackoutSlate() = default;
    AWS_MEDIALIVE_API BlackoutSlate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API BlackoutSlate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Blackout slate image to be used. Leave empty for solid black. Only bmp and png
     * images are supported.
     */
    inline const InputLocation& GetBlackoutSlateImage() const { return m_blackoutSlateImage; }
    inline bool BlackoutSlateImageHasBeenSet() const { return m_blackoutSlateImageHasBeenSet; }
    template<typename BlackoutSlateImageT = InputLocation>
    void SetBlackoutSlateImage(BlackoutSlateImageT&& value) { m_blackoutSlateImageHasBeenSet = true; m_blackoutSlateImage = std::forward<BlackoutSlateImageT>(value); }
    template<typename BlackoutSlateImageT = InputLocation>
    BlackoutSlate& WithBlackoutSlateImage(BlackoutSlateImageT&& value) { SetBlackoutSlateImage(std::forward<BlackoutSlateImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Setting to enabled causes the encoder to blackout the video, audio, and
     * captions, and raise the "Network Blackout Image" slate when an SCTE104/35
     * Network End Segmentation Descriptor is encountered. The blackout will be lifted
     * when the Network Start Segmentation Descriptor is encountered. The Network End
     * and Network Start descriptors must contain a network ID that matches the value
     * entered in "Network ID".
     */
    inline BlackoutSlateNetworkEndBlackout GetNetworkEndBlackout() const { return m_networkEndBlackout; }
    inline bool NetworkEndBlackoutHasBeenSet() const { return m_networkEndBlackoutHasBeenSet; }
    inline void SetNetworkEndBlackout(BlackoutSlateNetworkEndBlackout value) { m_networkEndBlackoutHasBeenSet = true; m_networkEndBlackout = value; }
    inline BlackoutSlate& WithNetworkEndBlackout(BlackoutSlateNetworkEndBlackout value) { SetNetworkEndBlackout(value); return *this;}
    ///@}

    ///@{
    /**
     * Path to local file to use as Network End Blackout image. Image will be scaled to
     * fill the entire output raster.
     */
    inline const InputLocation& GetNetworkEndBlackoutImage() const { return m_networkEndBlackoutImage; }
    inline bool NetworkEndBlackoutImageHasBeenSet() const { return m_networkEndBlackoutImageHasBeenSet; }
    template<typename NetworkEndBlackoutImageT = InputLocation>
    void SetNetworkEndBlackoutImage(NetworkEndBlackoutImageT&& value) { m_networkEndBlackoutImageHasBeenSet = true; m_networkEndBlackoutImage = std::forward<NetworkEndBlackoutImageT>(value); }
    template<typename NetworkEndBlackoutImageT = InputLocation>
    BlackoutSlate& WithNetworkEndBlackoutImage(NetworkEndBlackoutImageT&& value) { SetNetworkEndBlackoutImage(std::forward<NetworkEndBlackoutImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Provides Network ID that matches EIDR ID format (e.g.,
     * "10.XXXX/XXXX-XXXX-XXXX-XXXX-XXXX-C").
     */
    inline const Aws::String& GetNetworkId() const { return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    template<typename NetworkIdT = Aws::String>
    void SetNetworkId(NetworkIdT&& value) { m_networkIdHasBeenSet = true; m_networkId = std::forward<NetworkIdT>(value); }
    template<typename NetworkIdT = Aws::String>
    BlackoutSlate& WithNetworkId(NetworkIdT&& value) { SetNetworkId(std::forward<NetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * indicated by program metadata.
     */
    inline BlackoutSlateState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(BlackoutSlateState value) { m_stateHasBeenSet = true; m_state = value; }
    inline BlackoutSlate& WithState(BlackoutSlateState value) { SetState(value); return *this;}
    ///@}
  private:

    InputLocation m_blackoutSlateImage;
    bool m_blackoutSlateImageHasBeenSet = false;

    BlackoutSlateNetworkEndBlackout m_networkEndBlackout{BlackoutSlateNetworkEndBlackout::NOT_SET};
    bool m_networkEndBlackoutHasBeenSet = false;

    InputLocation m_networkEndBlackoutImage;
    bool m_networkEndBlackoutImageHasBeenSet = false;

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    BlackoutSlateState m_state{BlackoutSlateState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

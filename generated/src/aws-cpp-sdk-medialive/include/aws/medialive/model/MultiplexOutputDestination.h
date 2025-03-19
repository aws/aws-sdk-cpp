/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MultiplexMediaConnectOutputDestinationSettings.h>
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
   * Multiplex output destination settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexOutputDestination">AWS
   * API Reference</a></p>
   */
  class MultiplexOutputDestination
  {
  public:
    AWS_MEDIALIVE_API MultiplexOutputDestination() = default;
    AWS_MEDIALIVE_API MultiplexOutputDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexOutputDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Multiplex MediaConnect output destination settings.
     */
    inline const MultiplexMediaConnectOutputDestinationSettings& GetMediaConnectSettings() const { return m_mediaConnectSettings; }
    inline bool MediaConnectSettingsHasBeenSet() const { return m_mediaConnectSettingsHasBeenSet; }
    template<typename MediaConnectSettingsT = MultiplexMediaConnectOutputDestinationSettings>
    void SetMediaConnectSettings(MediaConnectSettingsT&& value) { m_mediaConnectSettingsHasBeenSet = true; m_mediaConnectSettings = std::forward<MediaConnectSettingsT>(value); }
    template<typename MediaConnectSettingsT = MultiplexMediaConnectOutputDestinationSettings>
    MultiplexOutputDestination& WithMediaConnectSettings(MediaConnectSettingsT&& value) { SetMediaConnectSettings(std::forward<MediaConnectSettingsT>(value)); return *this;}
    ///@}
  private:

    MultiplexMediaConnectOutputDestinationSettings m_mediaConnectSettings;
    bool m_mediaConnectSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

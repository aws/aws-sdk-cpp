/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Smpte2110ReceiverGroupSdpSettings.h>
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
   * A receiver group is a collection of video, audio, and ancillary streams that you
   * want to group together and attach to one input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Smpte2110ReceiverGroup">AWS
   * API Reference</a></p>
   */
  class Smpte2110ReceiverGroup
  {
  public:
    AWS_MEDIALIVE_API Smpte2110ReceiverGroup() = default;
    AWS_MEDIALIVE_API Smpte2110ReceiverGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Smpte2110ReceiverGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The single Smpte2110ReceiverGroupSdpSettings that identify the video, audio, and
     * ancillary streams for this receiver group.
     */
    inline const Smpte2110ReceiverGroupSdpSettings& GetSdpSettings() const { return m_sdpSettings; }
    inline bool SdpSettingsHasBeenSet() const { return m_sdpSettingsHasBeenSet; }
    template<typename SdpSettingsT = Smpte2110ReceiverGroupSdpSettings>
    void SetSdpSettings(SdpSettingsT&& value) { m_sdpSettingsHasBeenSet = true; m_sdpSettings = std::forward<SdpSettingsT>(value); }
    template<typename SdpSettingsT = Smpte2110ReceiverGroupSdpSettings>
    Smpte2110ReceiverGroup& WithSdpSettings(SdpSettingsT&& value) { SetSdpSettings(std::forward<SdpSettingsT>(value)); return *this;}
    ///@}
  private:

    Smpte2110ReceiverGroupSdpSettings m_sdpSettings;
    bool m_sdpSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

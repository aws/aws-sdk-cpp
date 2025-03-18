/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputDeviceUhdAudioChannelPairProfile.h>
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
   * One audio configuration that specifies the format for one audio pair that the
   * device produces as output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceUhdAudioChannelPairConfig">AWS
   * API Reference</a></p>
   */
  class InputDeviceUhdAudioChannelPairConfig
  {
  public:
    AWS_MEDIALIVE_API InputDeviceUhdAudioChannelPairConfig() = default;
    AWS_MEDIALIVE_API InputDeviceUhdAudioChannelPairConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceUhdAudioChannelPairConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ID for one audio pair configuration, a value from 1 to 8.
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline InputDeviceUhdAudioChannelPairConfig& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The profile for one audio pair configuration. This property describes one audio
     * configuration in the format (rate control algorithm)-(codec)_(quality)-(bitrate
     * in bytes). For example, CBR-AAC_HQ-192000. Or DISABLED, in which case the device
     * won't produce audio for this pair.
     */
    inline InputDeviceUhdAudioChannelPairProfile GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(InputDeviceUhdAudioChannelPairProfile value) { m_profileHasBeenSet = true; m_profile = value; }
    inline InputDeviceUhdAudioChannelPairConfig& WithProfile(InputDeviceUhdAudioChannelPairProfile value) { SetProfile(value); return *this;}
    ///@}
  private:

    int m_id{0};
    bool m_idHasBeenSet = false;

    InputDeviceUhdAudioChannelPairProfile m_profile{InputDeviceUhdAudioChannelPairProfile::NOT_SET};
    bool m_profileHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

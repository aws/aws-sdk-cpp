/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/PresetSpeke20Audio.h>
#include <aws/mediaconvert/model/PresetSpeke20Video.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Specify the SPEKE version, either v1.0 or v2.0, that MediaConvert uses when
   * encrypting your output. For more information, see:
   * https://docs.aws.amazon.com/speke/latest/documentation/speke-api-specification.html
   * To use SPEKE v1.0: Leave blank. To use SPEKE v2.0: Specify a SPEKE v2.0 video
   * preset and a SPEKE v2.0 audio preset.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/EncryptionContractConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionContractConfiguration
  {
  public:
    AWS_MEDIACONVERT_API EncryptionContractConfiguration() = default;
    AWS_MEDIACONVERT_API EncryptionContractConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API EncryptionContractConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify which SPEKE version 2.0 audio preset MediaConvert uses to request
     * content keys from your SPEKE server. For more information, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/drm-content-speke-v2-presets.html
     * To encrypt to your audio outputs, choose from the following: Audio preset 1,
     * Audio preset 2, or Audio preset 3. To encrypt your audio outputs, using the same
     * content key for both your audio and video outputs: Choose Shared. When you do,
     * you must also set SPEKE v2.0 video preset to Shared. To not encrypt your audio
     * outputs: Choose Unencrypted. When you do, to encrypt your video outputs, you
     * must also specify a SPEKE v2.0 video preset (other than Shared or Unencrypted).
     */
    inline PresetSpeke20Audio GetSpekeAudioPreset() const { return m_spekeAudioPreset; }
    inline bool SpekeAudioPresetHasBeenSet() const { return m_spekeAudioPresetHasBeenSet; }
    inline void SetSpekeAudioPreset(PresetSpeke20Audio value) { m_spekeAudioPresetHasBeenSet = true; m_spekeAudioPreset = value; }
    inline EncryptionContractConfiguration& WithSpekeAudioPreset(PresetSpeke20Audio value) { SetSpekeAudioPreset(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify which SPEKE version 2.0 video preset MediaConvert uses to request
     * content keys from your SPEKE server. For more information, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/drm-content-speke-v2-presets.html
     * To encrypt to your video outputs, choose from the following: Video preset 1,
     * Video preset 2, Video preset 3, Video preset 4, Video preset 5, Video preset 6,
     * Video preset 7, or Video preset 8. To encrypt your video outputs, using the same
     * content key for both your video and audio outputs: Choose Shared. When you do,
     * you must also set SPEKE v2.0 audio preset to Shared. To not encrypt your video
     * outputs: Choose Unencrypted. When you do, to encrypt your audio outputs, you
     * must also specify a SPEKE v2.0 audio preset (other than Shared or Unencrypted).
     */
    inline PresetSpeke20Video GetSpekeVideoPreset() const { return m_spekeVideoPreset; }
    inline bool SpekeVideoPresetHasBeenSet() const { return m_spekeVideoPresetHasBeenSet; }
    inline void SetSpekeVideoPreset(PresetSpeke20Video value) { m_spekeVideoPresetHasBeenSet = true; m_spekeVideoPreset = value; }
    inline EncryptionContractConfiguration& WithSpekeVideoPreset(PresetSpeke20Video value) { SetSpekeVideoPreset(value); return *this;}
    ///@}
  private:

    PresetSpeke20Audio m_spekeAudioPreset{PresetSpeke20Audio::NOT_SET};
    bool m_spekeAudioPresetHasBeenSet = false;

    PresetSpeke20Video m_spekeVideoPreset{PresetSpeke20Video::NOT_SET};
    bool m_spekeVideoPresetHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

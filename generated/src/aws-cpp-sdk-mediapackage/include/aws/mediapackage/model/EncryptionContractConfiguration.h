/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/PresetSpeke20Audio.h>
#include <aws/mediapackage/model/PresetSpeke20Video.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * Use encryptionContractConfiguration to configure one or more content encryption
   * keys for your endpoints that use SPEKE 2.0. 
The encryption contract defines
   * which content keys are used to encrypt the audio and video tracks in your
   * stream. 
To configure the encryption contract, specify which audio and video
   * encryption presets to use.
Note the following considerations when using
   * encryptionContractConfiguration:
encryptionContractConfiguration can be used for
   * DASH or CMAF endpoints that use SPEKE 2.0. SPEKE 2.0 relies on the CPIX 2.3
   * specification.
You must disable key rotation for this endpoint by setting
   * keyRotationIntervalSeconds to 0.
<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/EncryptionContractConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionContractConfiguration
  {
  public:
    AWS_MEDIAPACKAGE_API EncryptionContractConfiguration();
    AWS_MEDIAPACKAGE_API EncryptionContractConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API EncryptionContractConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A collection of audio encryption presets.
     */
    inline const PresetSpeke20Audio& GetPresetSpeke20Audio() const{ return m_presetSpeke20Audio; }

    /**
     * A collection of audio encryption presets.
     */
    inline bool PresetSpeke20AudioHasBeenSet() const { return m_presetSpeke20AudioHasBeenSet; }

    /**
     * A collection of audio encryption presets.
     */
    inline void SetPresetSpeke20Audio(const PresetSpeke20Audio& value) { m_presetSpeke20AudioHasBeenSet = true; m_presetSpeke20Audio = value; }

    /**
     * A collection of audio encryption presets.
     */
    inline void SetPresetSpeke20Audio(PresetSpeke20Audio&& value) { m_presetSpeke20AudioHasBeenSet = true; m_presetSpeke20Audio = std::move(value); }

    /**
     * A collection of audio encryption presets.
     */
    inline EncryptionContractConfiguration& WithPresetSpeke20Audio(const PresetSpeke20Audio& value) { SetPresetSpeke20Audio(value); return *this;}

    /**
     * A collection of audio encryption presets.
     */
    inline EncryptionContractConfiguration& WithPresetSpeke20Audio(PresetSpeke20Audio&& value) { SetPresetSpeke20Audio(std::move(value)); return *this;}


    /**
     * A collection of video encryption presets.
     */
    inline const PresetSpeke20Video& GetPresetSpeke20Video() const{ return m_presetSpeke20Video; }

    /**
     * A collection of video encryption presets.
     */
    inline bool PresetSpeke20VideoHasBeenSet() const { return m_presetSpeke20VideoHasBeenSet; }

    /**
     * A collection of video encryption presets.
     */
    inline void SetPresetSpeke20Video(const PresetSpeke20Video& value) { m_presetSpeke20VideoHasBeenSet = true; m_presetSpeke20Video = value; }

    /**
     * A collection of video encryption presets.
     */
    inline void SetPresetSpeke20Video(PresetSpeke20Video&& value) { m_presetSpeke20VideoHasBeenSet = true; m_presetSpeke20Video = std::move(value); }

    /**
     * A collection of video encryption presets.
     */
    inline EncryptionContractConfiguration& WithPresetSpeke20Video(const PresetSpeke20Video& value) { SetPresetSpeke20Video(value); return *this;}

    /**
     * A collection of video encryption presets.
     */
    inline EncryptionContractConfiguration& WithPresetSpeke20Video(PresetSpeke20Video&& value) { SetPresetSpeke20Video(std::move(value)); return *this;}

  private:

    PresetSpeke20Audio m_presetSpeke20Audio;
    bool m_presetSpeke20AudioHasBeenSet = false;

    PresetSpeke20Video m_presetSpeke20Video;
    bool m_presetSpeke20VideoHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws

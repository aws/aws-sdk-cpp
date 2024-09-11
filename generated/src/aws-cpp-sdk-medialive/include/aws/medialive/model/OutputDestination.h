/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/MultiplexProgramChannelDestinationSettings.h>
#include <aws/medialive/model/MediaPackageOutputDestinationSettings.h>
#include <aws/medialive/model/OutputDestinationSettings.h>
#include <aws/medialive/model/SrtOutputDestinationSettings.h>
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
   * Placeholder documentation for OutputDestination<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputDestination">AWS
   * API Reference</a></p>
   */
  class OutputDestination
  {
  public:
    AWS_MEDIALIVE_API OutputDestination();
    AWS_MEDIALIVE_API OutputDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API OutputDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * User-specified id. This is used in an output group or an output.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline OutputDestination& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline OutputDestination& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline OutputDestination& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * Destination settings for a MediaPackage output; one destination for both
     * encoders.
     */
    inline const Aws::Vector<MediaPackageOutputDestinationSettings>& GetMediaPackageSettings() const{ return m_mediaPackageSettings; }
    inline bool MediaPackageSettingsHasBeenSet() const { return m_mediaPackageSettingsHasBeenSet; }
    inline void SetMediaPackageSettings(const Aws::Vector<MediaPackageOutputDestinationSettings>& value) { m_mediaPackageSettingsHasBeenSet = true; m_mediaPackageSettings = value; }
    inline void SetMediaPackageSettings(Aws::Vector<MediaPackageOutputDestinationSettings>&& value) { m_mediaPackageSettingsHasBeenSet = true; m_mediaPackageSettings = std::move(value); }
    inline OutputDestination& WithMediaPackageSettings(const Aws::Vector<MediaPackageOutputDestinationSettings>& value) { SetMediaPackageSettings(value); return *this;}
    inline OutputDestination& WithMediaPackageSettings(Aws::Vector<MediaPackageOutputDestinationSettings>&& value) { SetMediaPackageSettings(std::move(value)); return *this;}
    inline OutputDestination& AddMediaPackageSettings(const MediaPackageOutputDestinationSettings& value) { m_mediaPackageSettingsHasBeenSet = true; m_mediaPackageSettings.push_back(value); return *this; }
    inline OutputDestination& AddMediaPackageSettings(MediaPackageOutputDestinationSettings&& value) { m_mediaPackageSettingsHasBeenSet = true; m_mediaPackageSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Destination settings for a Multiplex output; one destination for both encoders.
     */
    inline const MultiplexProgramChannelDestinationSettings& GetMultiplexSettings() const{ return m_multiplexSettings; }
    inline bool MultiplexSettingsHasBeenSet() const { return m_multiplexSettingsHasBeenSet; }
    inline void SetMultiplexSettings(const MultiplexProgramChannelDestinationSettings& value) { m_multiplexSettingsHasBeenSet = true; m_multiplexSettings = value; }
    inline void SetMultiplexSettings(MultiplexProgramChannelDestinationSettings&& value) { m_multiplexSettingsHasBeenSet = true; m_multiplexSettings = std::move(value); }
    inline OutputDestination& WithMultiplexSettings(const MultiplexProgramChannelDestinationSettings& value) { SetMultiplexSettings(value); return *this;}
    inline OutputDestination& WithMultiplexSettings(MultiplexProgramChannelDestinationSettings&& value) { SetMultiplexSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Destination settings for a standard output; one destination for each redundant
     * encoder.
     */
    inline const Aws::Vector<OutputDestinationSettings>& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const Aws::Vector<OutputDestinationSettings>& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(Aws::Vector<OutputDestinationSettings>&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline OutputDestination& WithSettings(const Aws::Vector<OutputDestinationSettings>& value) { SetSettings(value); return *this;}
    inline OutputDestination& WithSettings(Aws::Vector<OutputDestinationSettings>&& value) { SetSettings(std::move(value)); return *this;}
    inline OutputDestination& AddSettings(const OutputDestinationSettings& value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }
    inline OutputDestination& AddSettings(OutputDestinationSettings&& value) { m_settingsHasBeenSet = true; m_settings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * SRT settings for an SRT output; one destination for each redundant encoder.
     */
    inline const Aws::Vector<SrtOutputDestinationSettings>& GetSrtSettings() const{ return m_srtSettings; }
    inline bool SrtSettingsHasBeenSet() const { return m_srtSettingsHasBeenSet; }
    inline void SetSrtSettings(const Aws::Vector<SrtOutputDestinationSettings>& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = value; }
    inline void SetSrtSettings(Aws::Vector<SrtOutputDestinationSettings>&& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = std::move(value); }
    inline OutputDestination& WithSrtSettings(const Aws::Vector<SrtOutputDestinationSettings>& value) { SetSrtSettings(value); return *this;}
    inline OutputDestination& WithSrtSettings(Aws::Vector<SrtOutputDestinationSettings>&& value) { SetSrtSettings(std::move(value)); return *this;}
    inline OutputDestination& AddSrtSettings(const SrtOutputDestinationSettings& value) { m_srtSettingsHasBeenSet = true; m_srtSettings.push_back(value); return *this; }
    inline OutputDestination& AddSrtSettings(SrtOutputDestinationSettings&& value) { m_srtSettingsHasBeenSet = true; m_srtSettings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<MediaPackageOutputDestinationSettings> m_mediaPackageSettings;
    bool m_mediaPackageSettingsHasBeenSet = false;

    MultiplexProgramChannelDestinationSettings m_multiplexSettings;
    bool m_multiplexSettingsHasBeenSet = false;

    Aws::Vector<OutputDestinationSettings> m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<SrtOutputDestinationSettings> m_srtSettings;
    bool m_srtSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

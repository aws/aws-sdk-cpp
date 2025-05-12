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
    AWS_MEDIALIVE_API OutputDestination() = default;
    AWS_MEDIALIVE_API OutputDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API OutputDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * User-specified id. This is used in an output group or an output.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    OutputDestination& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Destination settings for a MediaPackage output; one destination for both
     * encoders.
     */
    inline const Aws::Vector<MediaPackageOutputDestinationSettings>& GetMediaPackageSettings() const { return m_mediaPackageSettings; }
    inline bool MediaPackageSettingsHasBeenSet() const { return m_mediaPackageSettingsHasBeenSet; }
    template<typename MediaPackageSettingsT = Aws::Vector<MediaPackageOutputDestinationSettings>>
    void SetMediaPackageSettings(MediaPackageSettingsT&& value) { m_mediaPackageSettingsHasBeenSet = true; m_mediaPackageSettings = std::forward<MediaPackageSettingsT>(value); }
    template<typename MediaPackageSettingsT = Aws::Vector<MediaPackageOutputDestinationSettings>>
    OutputDestination& WithMediaPackageSettings(MediaPackageSettingsT&& value) { SetMediaPackageSettings(std::forward<MediaPackageSettingsT>(value)); return *this;}
    template<typename MediaPackageSettingsT = MediaPackageOutputDestinationSettings>
    OutputDestination& AddMediaPackageSettings(MediaPackageSettingsT&& value) { m_mediaPackageSettingsHasBeenSet = true; m_mediaPackageSettings.emplace_back(std::forward<MediaPackageSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Destination settings for a Multiplex output; one destination for both encoders.
     */
    inline const MultiplexProgramChannelDestinationSettings& GetMultiplexSettings() const { return m_multiplexSettings; }
    inline bool MultiplexSettingsHasBeenSet() const { return m_multiplexSettingsHasBeenSet; }
    template<typename MultiplexSettingsT = MultiplexProgramChannelDestinationSettings>
    void SetMultiplexSettings(MultiplexSettingsT&& value) { m_multiplexSettingsHasBeenSet = true; m_multiplexSettings = std::forward<MultiplexSettingsT>(value); }
    template<typename MultiplexSettingsT = MultiplexProgramChannelDestinationSettings>
    OutputDestination& WithMultiplexSettings(MultiplexSettingsT&& value) { SetMultiplexSettings(std::forward<MultiplexSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Destination settings for a standard output; one destination for each redundant
     * encoder.
     */
    inline const Aws::Vector<OutputDestinationSettings>& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = Aws::Vector<OutputDestinationSettings>>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = Aws::Vector<OutputDestinationSettings>>
    OutputDestination& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    template<typename SettingsT = OutputDestinationSettings>
    OutputDestination& AddSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings.emplace_back(std::forward<SettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * SRT settings for an SRT output; one destination for each redundant encoder.
     */
    inline const Aws::Vector<SrtOutputDestinationSettings>& GetSrtSettings() const { return m_srtSettings; }
    inline bool SrtSettingsHasBeenSet() const { return m_srtSettingsHasBeenSet; }
    template<typename SrtSettingsT = Aws::Vector<SrtOutputDestinationSettings>>
    void SetSrtSettings(SrtSettingsT&& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = std::forward<SrtSettingsT>(value); }
    template<typename SrtSettingsT = Aws::Vector<SrtOutputDestinationSettings>>
    OutputDestination& WithSrtSettings(SrtSettingsT&& value) { SetSrtSettings(std::forward<SrtSettingsT>(value)); return *this;}
    template<typename SrtSettingsT = SrtOutputDestinationSettings>
    OutputDestination& AddSrtSettings(SrtSettingsT&& value) { m_srtSettingsHasBeenSet = true; m_srtSettings.emplace_back(std::forward<SrtSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Optional assignment of an output to a logical interface on the Node. Only
     * applies to on premises channels.
     */
    inline const Aws::Vector<Aws::String>& GetLogicalInterfaceNames() const { return m_logicalInterfaceNames; }
    inline bool LogicalInterfaceNamesHasBeenSet() const { return m_logicalInterfaceNamesHasBeenSet; }
    template<typename LogicalInterfaceNamesT = Aws::Vector<Aws::String>>
    void SetLogicalInterfaceNames(LogicalInterfaceNamesT&& value) { m_logicalInterfaceNamesHasBeenSet = true; m_logicalInterfaceNames = std::forward<LogicalInterfaceNamesT>(value); }
    template<typename LogicalInterfaceNamesT = Aws::Vector<Aws::String>>
    OutputDestination& WithLogicalInterfaceNames(LogicalInterfaceNamesT&& value) { SetLogicalInterfaceNames(std::forward<LogicalInterfaceNamesT>(value)); return *this;}
    template<typename LogicalInterfaceNamesT = Aws::String>
    OutputDestination& AddLogicalInterfaceNames(LogicalInterfaceNamesT&& value) { m_logicalInterfaceNamesHasBeenSet = true; m_logicalInterfaceNames.emplace_back(std::forward<LogicalInterfaceNamesT>(value)); return *this; }
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

    Aws::Vector<Aws::String> m_logicalInterfaceNames;
    bool m_logicalInterfaceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

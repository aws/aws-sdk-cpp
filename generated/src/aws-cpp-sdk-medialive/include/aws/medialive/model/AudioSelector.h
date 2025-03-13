/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/AudioSelectorSettings.h>
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
   * Audio Selector<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioSelector">AWS
   * API Reference</a></p>
   */
  class AudioSelector
  {
  public:
    AWS_MEDIALIVE_API AudioSelector() = default;
    AWS_MEDIALIVE_API AudioSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The name of this AudioSelector. AudioDescriptions will use this name to uniquely
     * identify this Selector.  Selector names should be unique per input.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AudioSelector& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The audio selector settings.
     */
    inline const AudioSelectorSettings& GetSelectorSettings() const { return m_selectorSettings; }
    inline bool SelectorSettingsHasBeenSet() const { return m_selectorSettingsHasBeenSet; }
    template<typename SelectorSettingsT = AudioSelectorSettings>
    void SetSelectorSettings(SelectorSettingsT&& value) { m_selectorSettingsHasBeenSet = true; m_selectorSettings = std::forward<SelectorSettingsT>(value); }
    template<typename SelectorSettingsT = AudioSelectorSettings>
    AudioSelector& WithSelectorSettings(SelectorSettingsT&& value) { SetSelectorSettings(std::forward<SelectorSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AudioSelectorSettings m_selectorSettings;
    bool m_selectorSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

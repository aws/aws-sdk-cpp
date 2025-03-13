/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AutomatedEncodingSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/OutputGroupSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/Output.h>
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
   * Group of outputs<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputGroup">AWS
   * API Reference</a></p>
   */
  class OutputGroup
  {
  public:
    AWS_MEDIACONVERT_API OutputGroup() = default;
    AWS_MEDIACONVERT_API OutputGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API OutputGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use automated encoding to have MediaConvert choose your encoding settings for
     * you, based on characteristics of your input video.
     */
    inline const AutomatedEncodingSettings& GetAutomatedEncodingSettings() const { return m_automatedEncodingSettings; }
    inline bool AutomatedEncodingSettingsHasBeenSet() const { return m_automatedEncodingSettingsHasBeenSet; }
    template<typename AutomatedEncodingSettingsT = AutomatedEncodingSettings>
    void SetAutomatedEncodingSettings(AutomatedEncodingSettingsT&& value) { m_automatedEncodingSettingsHasBeenSet = true; m_automatedEncodingSettings = std::forward<AutomatedEncodingSettingsT>(value); }
    template<typename AutomatedEncodingSettingsT = AutomatedEncodingSettings>
    OutputGroup& WithAutomatedEncodingSettings(AutomatedEncodingSettingsT&& value) { SetAutomatedEncodingSettings(std::forward<AutomatedEncodingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Custom Group Name to specify a name for the output group. This value is
     * displayed on the console and can make your job settings JSON more
     * human-readable. It does not affect your outputs. Use up to twelve characters
     * that are either letters, numbers, spaces, or underscores.
     */
    inline const Aws::String& GetCustomName() const { return m_customName; }
    inline bool CustomNameHasBeenSet() const { return m_customNameHasBeenSet; }
    template<typename CustomNameT = Aws::String>
    void SetCustomName(CustomNameT&& value) { m_customNameHasBeenSet = true; m_customName = std::forward<CustomNameT>(value); }
    template<typename CustomNameT = Aws::String>
    OutputGroup& WithCustomName(CustomNameT&& value) { SetCustomName(std::forward<CustomNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Name of the output group
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    OutputGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Output Group settings, including type
     */
    inline const OutputGroupSettings& GetOutputGroupSettings() const { return m_outputGroupSettings; }
    inline bool OutputGroupSettingsHasBeenSet() const { return m_outputGroupSettingsHasBeenSet; }
    template<typename OutputGroupSettingsT = OutputGroupSettings>
    void SetOutputGroupSettings(OutputGroupSettingsT&& value) { m_outputGroupSettingsHasBeenSet = true; m_outputGroupSettings = std::forward<OutputGroupSettingsT>(value); }
    template<typename OutputGroupSettingsT = OutputGroupSettings>
    OutputGroup& WithOutputGroupSettings(OutputGroupSettingsT&& value) { SetOutputGroupSettings(std::forward<OutputGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * This object holds groups of encoding settings, one group of settings per output.
     */
    inline const Aws::Vector<Output>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<Output>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<Output>>
    OutputGroup& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = Output>
    OutputGroup& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}
  private:

    AutomatedEncodingSettings m_automatedEncodingSettings;
    bool m_automatedEncodingSettingsHasBeenSet = false;

    Aws::String m_customName;
    bool m_customNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OutputGroupSettings m_outputGroupSettings;
    bool m_outputGroupSettingsHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

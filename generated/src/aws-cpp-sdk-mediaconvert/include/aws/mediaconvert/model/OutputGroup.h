﻿/**
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
    AWS_MEDIACONVERT_API OutputGroup();
    AWS_MEDIACONVERT_API OutputGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API OutputGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use automated encoding to have MediaConvert choose your encoding settings for
     * you, based on characteristics of your input video.
     */
    inline const AutomatedEncodingSettings& GetAutomatedEncodingSettings() const{ return m_automatedEncodingSettings; }
    inline bool AutomatedEncodingSettingsHasBeenSet() const { return m_automatedEncodingSettingsHasBeenSet; }
    inline void SetAutomatedEncodingSettings(const AutomatedEncodingSettings& value) { m_automatedEncodingSettingsHasBeenSet = true; m_automatedEncodingSettings = value; }
    inline void SetAutomatedEncodingSettings(AutomatedEncodingSettings&& value) { m_automatedEncodingSettingsHasBeenSet = true; m_automatedEncodingSettings = std::move(value); }
    inline OutputGroup& WithAutomatedEncodingSettings(const AutomatedEncodingSettings& value) { SetAutomatedEncodingSettings(value); return *this;}
    inline OutputGroup& WithAutomatedEncodingSettings(AutomatedEncodingSettings&& value) { SetAutomatedEncodingSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Custom Group Name to specify a name for the output group. This value is
     * displayed on the console and can make your job settings JSON more
     * human-readable. It does not affect your outputs. Use up to twelve characters
     * that are either letters, numbers, spaces, or underscores.
     */
    inline const Aws::String& GetCustomName() const{ return m_customName; }
    inline bool CustomNameHasBeenSet() const { return m_customNameHasBeenSet; }
    inline void SetCustomName(const Aws::String& value) { m_customNameHasBeenSet = true; m_customName = value; }
    inline void SetCustomName(Aws::String&& value) { m_customNameHasBeenSet = true; m_customName = std::move(value); }
    inline void SetCustomName(const char* value) { m_customNameHasBeenSet = true; m_customName.assign(value); }
    inline OutputGroup& WithCustomName(const Aws::String& value) { SetCustomName(value); return *this;}
    inline OutputGroup& WithCustomName(Aws::String&& value) { SetCustomName(std::move(value)); return *this;}
    inline OutputGroup& WithCustomName(const char* value) { SetCustomName(value); return *this;}
    ///@}

    ///@{
    /**
     * Name of the output group
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline OutputGroup& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline OutputGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline OutputGroup& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Output Group settings, including type
     */
    inline const OutputGroupSettings& GetOutputGroupSettings() const{ return m_outputGroupSettings; }
    inline bool OutputGroupSettingsHasBeenSet() const { return m_outputGroupSettingsHasBeenSet; }
    inline void SetOutputGroupSettings(const OutputGroupSettings& value) { m_outputGroupSettingsHasBeenSet = true; m_outputGroupSettings = value; }
    inline void SetOutputGroupSettings(OutputGroupSettings&& value) { m_outputGroupSettingsHasBeenSet = true; m_outputGroupSettings = std::move(value); }
    inline OutputGroup& WithOutputGroupSettings(const OutputGroupSettings& value) { SetOutputGroupSettings(value); return *this;}
    inline OutputGroup& WithOutputGroupSettings(OutputGroupSettings&& value) { SetOutputGroupSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * This object holds groups of encoding settings, one group of settings per output.
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline OutputGroup& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}
    inline OutputGroup& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}
    inline OutputGroup& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline OutputGroup& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
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

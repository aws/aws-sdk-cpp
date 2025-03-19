/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AutomaticInputFailoverSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * Placeholder documentation for InputAttachment<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputAttachment">AWS
   * API Reference</a></p>
   */
  class InputAttachment
  {
  public:
    AWS_MEDIALIVE_API InputAttachment() = default;
    AWS_MEDIALIVE_API InputAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * User-specified settings for defining what the conditions are for declaring the
     * input unhealthy and failing over to a different input.
     */
    inline const AutomaticInputFailoverSettings& GetAutomaticInputFailoverSettings() const { return m_automaticInputFailoverSettings; }
    inline bool AutomaticInputFailoverSettingsHasBeenSet() const { return m_automaticInputFailoverSettingsHasBeenSet; }
    template<typename AutomaticInputFailoverSettingsT = AutomaticInputFailoverSettings>
    void SetAutomaticInputFailoverSettings(AutomaticInputFailoverSettingsT&& value) { m_automaticInputFailoverSettingsHasBeenSet = true; m_automaticInputFailoverSettings = std::forward<AutomaticInputFailoverSettingsT>(value); }
    template<typename AutomaticInputFailoverSettingsT = AutomaticInputFailoverSettings>
    InputAttachment& WithAutomaticInputFailoverSettings(AutomaticInputFailoverSettingsT&& value) { SetAutomaticInputFailoverSettings(std::forward<AutomaticInputFailoverSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline const Aws::String& GetInputAttachmentName() const { return m_inputAttachmentName; }
    inline bool InputAttachmentNameHasBeenSet() const { return m_inputAttachmentNameHasBeenSet; }
    template<typename InputAttachmentNameT = Aws::String>
    void SetInputAttachmentName(InputAttachmentNameT&& value) { m_inputAttachmentNameHasBeenSet = true; m_inputAttachmentName = std::forward<InputAttachmentNameT>(value); }
    template<typename InputAttachmentNameT = Aws::String>
    InputAttachment& WithInputAttachmentName(InputAttachmentNameT&& value) { SetInputAttachmentName(std::forward<InputAttachmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the input
     */
    inline const Aws::String& GetInputId() const { return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    template<typename InputIdT = Aws::String>
    void SetInputId(InputIdT&& value) { m_inputIdHasBeenSet = true; m_inputId = std::forward<InputIdT>(value); }
    template<typename InputIdT = Aws::String>
    InputAttachment& WithInputId(InputIdT&& value) { SetInputId(std::forward<InputIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings of an input (caption selector, etc.)
     */
    inline const InputSettings& GetInputSettings() const { return m_inputSettings; }
    inline bool InputSettingsHasBeenSet() const { return m_inputSettingsHasBeenSet; }
    template<typename InputSettingsT = InputSettings>
    void SetInputSettings(InputSettingsT&& value) { m_inputSettingsHasBeenSet = true; m_inputSettings = std::forward<InputSettingsT>(value); }
    template<typename InputSettingsT = InputSettings>
    InputAttachment& WithInputSettings(InputSettingsT&& value) { SetInputSettings(std::forward<InputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional assignment of an input to a logical interface on the Node. Only applies
     * to on premises channels.
     */
    inline const Aws::Vector<Aws::String>& GetLogicalInterfaceNames() const { return m_logicalInterfaceNames; }
    inline bool LogicalInterfaceNamesHasBeenSet() const { return m_logicalInterfaceNamesHasBeenSet; }
    template<typename LogicalInterfaceNamesT = Aws::Vector<Aws::String>>
    void SetLogicalInterfaceNames(LogicalInterfaceNamesT&& value) { m_logicalInterfaceNamesHasBeenSet = true; m_logicalInterfaceNames = std::forward<LogicalInterfaceNamesT>(value); }
    template<typename LogicalInterfaceNamesT = Aws::Vector<Aws::String>>
    InputAttachment& WithLogicalInterfaceNames(LogicalInterfaceNamesT&& value) { SetLogicalInterfaceNames(std::forward<LogicalInterfaceNamesT>(value)); return *this;}
    template<typename LogicalInterfaceNamesT = Aws::String>
    InputAttachment& AddLogicalInterfaceNames(LogicalInterfaceNamesT&& value) { m_logicalInterfaceNamesHasBeenSet = true; m_logicalInterfaceNames.emplace_back(std::forward<LogicalInterfaceNamesT>(value)); return *this; }
    ///@}
  private:

    AutomaticInputFailoverSettings m_automaticInputFailoverSettings;
    bool m_automaticInputFailoverSettingsHasBeenSet = false;

    Aws::String m_inputAttachmentName;
    bool m_inputAttachmentNameHasBeenSet = false;

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet = false;

    InputSettings m_inputSettings;
    bool m_inputSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_logicalInterfaceNames;
    bool m_logicalInterfaceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

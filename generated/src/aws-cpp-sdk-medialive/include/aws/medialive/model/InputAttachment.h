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
    AWS_MEDIALIVE_API InputAttachment();
    AWS_MEDIALIVE_API InputAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * User-specified settings for defining what the conditions are for declaring the
     * input unhealthy and failing over to a different input.
     */
    inline const AutomaticInputFailoverSettings& GetAutomaticInputFailoverSettings() const{ return m_automaticInputFailoverSettings; }
    inline bool AutomaticInputFailoverSettingsHasBeenSet() const { return m_automaticInputFailoverSettingsHasBeenSet; }
    inline void SetAutomaticInputFailoverSettings(const AutomaticInputFailoverSettings& value) { m_automaticInputFailoverSettingsHasBeenSet = true; m_automaticInputFailoverSettings = value; }
    inline void SetAutomaticInputFailoverSettings(AutomaticInputFailoverSettings&& value) { m_automaticInputFailoverSettingsHasBeenSet = true; m_automaticInputFailoverSettings = std::move(value); }
    inline InputAttachment& WithAutomaticInputFailoverSettings(const AutomaticInputFailoverSettings& value) { SetAutomaticInputFailoverSettings(value); return *this;}
    inline InputAttachment& WithAutomaticInputFailoverSettings(AutomaticInputFailoverSettings&& value) { SetAutomaticInputFailoverSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline const Aws::String& GetInputAttachmentName() const{ return m_inputAttachmentName; }
    inline bool InputAttachmentNameHasBeenSet() const { return m_inputAttachmentNameHasBeenSet; }
    inline void SetInputAttachmentName(const Aws::String& value) { m_inputAttachmentNameHasBeenSet = true; m_inputAttachmentName = value; }
    inline void SetInputAttachmentName(Aws::String&& value) { m_inputAttachmentNameHasBeenSet = true; m_inputAttachmentName = std::move(value); }
    inline void SetInputAttachmentName(const char* value) { m_inputAttachmentNameHasBeenSet = true; m_inputAttachmentName.assign(value); }
    inline InputAttachment& WithInputAttachmentName(const Aws::String& value) { SetInputAttachmentName(value); return *this;}
    inline InputAttachment& WithInputAttachmentName(Aws::String&& value) { SetInputAttachmentName(std::move(value)); return *this;}
    inline InputAttachment& WithInputAttachmentName(const char* value) { SetInputAttachmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the input
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }
    inline InputAttachment& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}
    inline InputAttachment& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}
    inline InputAttachment& WithInputId(const char* value) { SetInputId(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings of an input (caption selector, etc.)
     */
    inline const InputSettings& GetInputSettings() const{ return m_inputSettings; }
    inline bool InputSettingsHasBeenSet() const { return m_inputSettingsHasBeenSet; }
    inline void SetInputSettings(const InputSettings& value) { m_inputSettingsHasBeenSet = true; m_inputSettings = value; }
    inline void SetInputSettings(InputSettings&& value) { m_inputSettingsHasBeenSet = true; m_inputSettings = std::move(value); }
    inline InputAttachment& WithInputSettings(const InputSettings& value) { SetInputSettings(value); return *this;}
    inline InputAttachment& WithInputSettings(InputSettings&& value) { SetInputSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional assignment of an input to a logical interface on the Node. Only applies
     * to on premises channels.
     */
    inline const Aws::Vector<Aws::String>& GetLogicalInterfaceNames() const{ return m_logicalInterfaceNames; }
    inline bool LogicalInterfaceNamesHasBeenSet() const { return m_logicalInterfaceNamesHasBeenSet; }
    inline void SetLogicalInterfaceNames(const Aws::Vector<Aws::String>& value) { m_logicalInterfaceNamesHasBeenSet = true; m_logicalInterfaceNames = value; }
    inline void SetLogicalInterfaceNames(Aws::Vector<Aws::String>&& value) { m_logicalInterfaceNamesHasBeenSet = true; m_logicalInterfaceNames = std::move(value); }
    inline InputAttachment& WithLogicalInterfaceNames(const Aws::Vector<Aws::String>& value) { SetLogicalInterfaceNames(value); return *this;}
    inline InputAttachment& WithLogicalInterfaceNames(Aws::Vector<Aws::String>&& value) { SetLogicalInterfaceNames(std::move(value)); return *this;}
    inline InputAttachment& AddLogicalInterfaceNames(const Aws::String& value) { m_logicalInterfaceNamesHasBeenSet = true; m_logicalInterfaceNames.push_back(value); return *this; }
    inline InputAttachment& AddLogicalInterfaceNames(Aws::String&& value) { m_logicalInterfaceNamesHasBeenSet = true; m_logicalInterfaceNames.push_back(std::move(value)); return *this; }
    inline InputAttachment& AddLogicalInterfaceNames(const char* value) { m_logicalInterfaceNamesHasBeenSet = true; m_logicalInterfaceNames.push_back(value); return *this; }
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

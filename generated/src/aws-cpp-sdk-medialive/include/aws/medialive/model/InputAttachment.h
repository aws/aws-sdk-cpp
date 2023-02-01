/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AutomaticInputFailoverSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputSettings.h>
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


    /**
     * User-specified settings for defining what the conditions are for declaring the
     * input unhealthy and failing over to a different input.
     */
    inline const AutomaticInputFailoverSettings& GetAutomaticInputFailoverSettings() const{ return m_automaticInputFailoverSettings; }

    /**
     * User-specified settings for defining what the conditions are for declaring the
     * input unhealthy and failing over to a different input.
     */
    inline bool AutomaticInputFailoverSettingsHasBeenSet() const { return m_automaticInputFailoverSettingsHasBeenSet; }

    /**
     * User-specified settings for defining what the conditions are for declaring the
     * input unhealthy and failing over to a different input.
     */
    inline void SetAutomaticInputFailoverSettings(const AutomaticInputFailoverSettings& value) { m_automaticInputFailoverSettingsHasBeenSet = true; m_automaticInputFailoverSettings = value; }

    /**
     * User-specified settings for defining what the conditions are for declaring the
     * input unhealthy and failing over to a different input.
     */
    inline void SetAutomaticInputFailoverSettings(AutomaticInputFailoverSettings&& value) { m_automaticInputFailoverSettingsHasBeenSet = true; m_automaticInputFailoverSettings = std::move(value); }

    /**
     * User-specified settings for defining what the conditions are for declaring the
     * input unhealthy and failing over to a different input.
     */
    inline InputAttachment& WithAutomaticInputFailoverSettings(const AutomaticInputFailoverSettings& value) { SetAutomaticInputFailoverSettings(value); return *this;}

    /**
     * User-specified settings for defining what the conditions are for declaring the
     * input unhealthy and failing over to a different input.
     */
    inline InputAttachment& WithAutomaticInputFailoverSettings(AutomaticInputFailoverSettings&& value) { SetAutomaticInputFailoverSettings(std::move(value)); return *this;}


    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline const Aws::String& GetInputAttachmentName() const{ return m_inputAttachmentName; }

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline bool InputAttachmentNameHasBeenSet() const { return m_inputAttachmentNameHasBeenSet; }

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline void SetInputAttachmentName(const Aws::String& value) { m_inputAttachmentNameHasBeenSet = true; m_inputAttachmentName = value; }

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline void SetInputAttachmentName(Aws::String&& value) { m_inputAttachmentNameHasBeenSet = true; m_inputAttachmentName = std::move(value); }

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline void SetInputAttachmentName(const char* value) { m_inputAttachmentNameHasBeenSet = true; m_inputAttachmentName.assign(value); }

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline InputAttachment& WithInputAttachmentName(const Aws::String& value) { SetInputAttachmentName(value); return *this;}

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline InputAttachment& WithInputAttachmentName(Aws::String&& value) { SetInputAttachmentName(std::move(value)); return *this;}

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline InputAttachment& WithInputAttachmentName(const char* value) { SetInputAttachmentName(value); return *this;}


    /**
     * The ID of the input
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }

    /**
     * The ID of the input
     */
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }

    /**
     * The ID of the input
     */
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }

    /**
     * The ID of the input
     */
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }

    /**
     * The ID of the input
     */
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }

    /**
     * The ID of the input
     */
    inline InputAttachment& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * The ID of the input
     */
    inline InputAttachment& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}

    /**
     * The ID of the input
     */
    inline InputAttachment& WithInputId(const char* value) { SetInputId(value); return *this;}


    /**
     * Settings of an input (caption selector, etc.)
     */
    inline const InputSettings& GetInputSettings() const{ return m_inputSettings; }

    /**
     * Settings of an input (caption selector, etc.)
     */
    inline bool InputSettingsHasBeenSet() const { return m_inputSettingsHasBeenSet; }

    /**
     * Settings of an input (caption selector, etc.)
     */
    inline void SetInputSettings(const InputSettings& value) { m_inputSettingsHasBeenSet = true; m_inputSettings = value; }

    /**
     * Settings of an input (caption selector, etc.)
     */
    inline void SetInputSettings(InputSettings&& value) { m_inputSettingsHasBeenSet = true; m_inputSettings = std::move(value); }

    /**
     * Settings of an input (caption selector, etc.)
     */
    inline InputAttachment& WithInputSettings(const InputSettings& value) { SetInputSettings(value); return *this;}

    /**
     * Settings of an input (caption selector, etc.)
     */
    inline InputAttachment& WithInputSettings(InputSettings&& value) { SetInputSettings(std::move(value)); return *this;}

  private:

    AutomaticInputFailoverSettings m_automaticInputFailoverSettings;
    bool m_automaticInputFailoverSettingsHasBeenSet = false;

    Aws::String m_inputAttachmentName;
    bool m_inputAttachmentNameHasBeenSet = false;

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet = false;

    InputSettings m_inputSettings;
    bool m_inputSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

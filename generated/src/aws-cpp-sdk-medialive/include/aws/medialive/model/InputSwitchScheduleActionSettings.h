/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputClippingSettings.h>
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
   * Settings for the "switch input" action: to switch from ingesting one input to
   * ingesting another input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSwitchScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class InputSwitchScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API InputSwitchScheduleActionSettings() = default;
    AWS_MEDIALIVE_API InputSwitchScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputSwitchScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The name of the input attachment (not the name of the input!) to switch to. The
     * name is specified in the channel configuration.
     */
    inline const Aws::String& GetInputAttachmentNameReference() const { return m_inputAttachmentNameReference; }
    inline bool InputAttachmentNameReferenceHasBeenSet() const { return m_inputAttachmentNameReferenceHasBeenSet; }
    template<typename InputAttachmentNameReferenceT = Aws::String>
    void SetInputAttachmentNameReference(InputAttachmentNameReferenceT&& value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference = std::forward<InputAttachmentNameReferenceT>(value); }
    template<typename InputAttachmentNameReferenceT = Aws::String>
    InputSwitchScheduleActionSettings& WithInputAttachmentNameReference(InputAttachmentNameReferenceT&& value) { SetInputAttachmentNameReference(std::forward<InputAttachmentNameReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings to let you create a clip of the file input, in order to set up the
     * input to ingest only a portion of the file.
     */
    inline const InputClippingSettings& GetInputClippingSettings() const { return m_inputClippingSettings; }
    inline bool InputClippingSettingsHasBeenSet() const { return m_inputClippingSettingsHasBeenSet; }
    template<typename InputClippingSettingsT = InputClippingSettings>
    void SetInputClippingSettings(InputClippingSettingsT&& value) { m_inputClippingSettingsHasBeenSet = true; m_inputClippingSettings = std::forward<InputClippingSettingsT>(value); }
    template<typename InputClippingSettingsT = InputClippingSettings>
    InputSwitchScheduleActionSettings& WithInputClippingSettings(InputClippingSettingsT&& value) { SetInputClippingSettings(std::forward<InputClippingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The value for the variable portion of the URL for the dynamic input, for this
     * instance of the input. Each time you use the same dynamic input in an input
     * switch action, you can provide a different value, in order to connect the input
     * to a different content source.
     */
    inline const Aws::Vector<Aws::String>& GetUrlPath() const { return m_urlPath; }
    inline bool UrlPathHasBeenSet() const { return m_urlPathHasBeenSet; }
    template<typename UrlPathT = Aws::Vector<Aws::String>>
    void SetUrlPath(UrlPathT&& value) { m_urlPathHasBeenSet = true; m_urlPath = std::forward<UrlPathT>(value); }
    template<typename UrlPathT = Aws::Vector<Aws::String>>
    InputSwitchScheduleActionSettings& WithUrlPath(UrlPathT&& value) { SetUrlPath(std::forward<UrlPathT>(value)); return *this;}
    template<typename UrlPathT = Aws::String>
    InputSwitchScheduleActionSettings& AddUrlPath(UrlPathT&& value) { m_urlPathHasBeenSet = true; m_urlPath.emplace_back(std::forward<UrlPathT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_inputAttachmentNameReference;
    bool m_inputAttachmentNameReferenceHasBeenSet = false;

    InputClippingSettings m_inputClippingSettings;
    bool m_inputClippingSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_urlPath;
    bool m_urlPathHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

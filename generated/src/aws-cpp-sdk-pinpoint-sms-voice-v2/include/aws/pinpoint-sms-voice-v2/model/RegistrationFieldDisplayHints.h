/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/SelectOptionDescription.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Provides help information on the registration field.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationFieldDisplayHints">AWS
   * API Reference</a></p>
   */
  class RegistrationFieldDisplayHints
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDisplayHints() = default;
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDisplayHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDisplayHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the display hint.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    RegistrationFieldDisplayHints& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the display hint.</p>
     */
    inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
    template<typename ShortDescriptionT = Aws::String>
    void SetShortDescription(ShortDescriptionT&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::forward<ShortDescriptionT>(value); }
    template<typename ShortDescriptionT = Aws::String>
    RegistrationFieldDisplayHints& WithShortDescription(ShortDescriptionT&& value) { SetShortDescription(std::forward<ShortDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A full description of the display hint.</p>
     */
    inline const Aws::String& GetLongDescription() const { return m_longDescription; }
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }
    template<typename LongDescriptionT = Aws::String>
    void SetLongDescription(LongDescriptionT&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::forward<LongDescriptionT>(value); }
    template<typename LongDescriptionT = Aws::String>
    RegistrationFieldDisplayHints& WithLongDescription(LongDescriptionT&& value) { SetLongDescription(std::forward<LongDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document the display hint is associated with.</p>
     */
    inline const Aws::String& GetDocumentationTitle() const { return m_documentationTitle; }
    inline bool DocumentationTitleHasBeenSet() const { return m_documentationTitleHasBeenSet; }
    template<typename DocumentationTitleT = Aws::String>
    void SetDocumentationTitle(DocumentationTitleT&& value) { m_documentationTitleHasBeenSet = true; m_documentationTitle = std::forward<DocumentationTitleT>(value); }
    template<typename DocumentationTitleT = Aws::String>
    RegistrationFieldDisplayHints& WithDocumentationTitle(DocumentationTitleT&& value) { SetDocumentationTitle(std::forward<DocumentationTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The link to the document the display hint is associated with.</p>
     */
    inline const Aws::String& GetDocumentationLink() const { return m_documentationLink; }
    inline bool DocumentationLinkHasBeenSet() const { return m_documentationLinkHasBeenSet; }
    template<typename DocumentationLinkT = Aws::String>
    void SetDocumentationLink(DocumentationLinkT&& value) { m_documentationLinkHasBeenSet = true; m_documentationLink = std::forward<DocumentationLinkT>(value); }
    template<typename DocumentationLinkT = Aws::String>
    RegistrationFieldDisplayHints& WithDocumentationLink(DocumentationLinkT&& value) { SetDocumentationLink(std::forward<DocumentationLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of SelectOptionDescription objects.</p>
     */
    inline const Aws::Vector<SelectOptionDescription>& GetSelectOptionDescriptions() const { return m_selectOptionDescriptions; }
    inline bool SelectOptionDescriptionsHasBeenSet() const { return m_selectOptionDescriptionsHasBeenSet; }
    template<typename SelectOptionDescriptionsT = Aws::Vector<SelectOptionDescription>>
    void SetSelectOptionDescriptions(SelectOptionDescriptionsT&& value) { m_selectOptionDescriptionsHasBeenSet = true; m_selectOptionDescriptions = std::forward<SelectOptionDescriptionsT>(value); }
    template<typename SelectOptionDescriptionsT = Aws::Vector<SelectOptionDescription>>
    RegistrationFieldDisplayHints& WithSelectOptionDescriptions(SelectOptionDescriptionsT&& value) { SetSelectOptionDescriptions(std::forward<SelectOptionDescriptionsT>(value)); return *this;}
    template<typename SelectOptionDescriptionsT = SelectOptionDescription>
    RegistrationFieldDisplayHints& AddSelectOptionDescriptions(SelectOptionDescriptionsT&& value) { m_selectOptionDescriptionsHasBeenSet = true; m_selectOptionDescriptions.emplace_back(std::forward<SelectOptionDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validation rules for the text field.</p>
     */
    inline const Aws::String& GetTextValidationDescription() const { return m_textValidationDescription; }
    inline bool TextValidationDescriptionHasBeenSet() const { return m_textValidationDescriptionHasBeenSet; }
    template<typename TextValidationDescriptionT = Aws::String>
    void SetTextValidationDescription(TextValidationDescriptionT&& value) { m_textValidationDescriptionHasBeenSet = true; m_textValidationDescription = std::forward<TextValidationDescriptionT>(value); }
    template<typename TextValidationDescriptionT = Aws::String>
    RegistrationFieldDisplayHints& WithTextValidationDescription(TextValidationDescriptionT&& value) { SetTextValidationDescription(std::forward<TextValidationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Example text of what the value of a field should contain.</p>
     */
    inline const Aws::String& GetExampleTextValue() const { return m_exampleTextValue; }
    inline bool ExampleTextValueHasBeenSet() const { return m_exampleTextValueHasBeenSet; }
    template<typename ExampleTextValueT = Aws::String>
    void SetExampleTextValue(ExampleTextValueT&& value) { m_exampleTextValueHasBeenSet = true; m_exampleTextValue = std::forward<ExampleTextValueT>(value); }
    template<typename ExampleTextValueT = Aws::String>
    RegistrationFieldDisplayHints& WithExampleTextValue(ExampleTextValueT&& value) { SetExampleTextValue(std::forward<ExampleTextValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_shortDescription;
    bool m_shortDescriptionHasBeenSet = false;

    Aws::String m_longDescription;
    bool m_longDescriptionHasBeenSet = false;

    Aws::String m_documentationTitle;
    bool m_documentationTitleHasBeenSet = false;

    Aws::String m_documentationLink;
    bool m_documentationLinkHasBeenSet = false;

    Aws::Vector<SelectOptionDescription> m_selectOptionDescriptions;
    bool m_selectOptionDescriptionsHasBeenSet = false;

    Aws::String m_textValidationDescription;
    bool m_textValidationDescriptionHasBeenSet = false;

    Aws::String m_exampleTextValue;
    bool m_exampleTextValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

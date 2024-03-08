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
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDisplayHints();
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDisplayHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDisplayHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The title of the display hint.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the display hint.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the display hint.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the display hint.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the display hint.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the display hint.</p>
     */
    inline RegistrationFieldDisplayHints& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the display hint.</p>
     */
    inline RegistrationFieldDisplayHints& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the display hint.</p>
     */
    inline RegistrationFieldDisplayHints& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>A short description of the display hint.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }

    /**
     * <p>A short description of the display hint.</p>
     */
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }

    /**
     * <p>A short description of the display hint.</p>
     */
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }

    /**
     * <p>A short description of the display hint.</p>
     */
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }

    /**
     * <p>A short description of the display hint.</p>
     */
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }

    /**
     * <p>A short description of the display hint.</p>
     */
    inline RegistrationFieldDisplayHints& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}

    /**
     * <p>A short description of the display hint.</p>
     */
    inline RegistrationFieldDisplayHints& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}

    /**
     * <p>A short description of the display hint.</p>
     */
    inline RegistrationFieldDisplayHints& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}


    /**
     * <p>A full description of the display hint.</p>
     */
    inline const Aws::String& GetLongDescription() const{ return m_longDescription; }

    /**
     * <p>A full description of the display hint.</p>
     */
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }

    /**
     * <p>A full description of the display hint.</p>
     */
    inline void SetLongDescription(const Aws::String& value) { m_longDescriptionHasBeenSet = true; m_longDescription = value; }

    /**
     * <p>A full description of the display hint.</p>
     */
    inline void SetLongDescription(Aws::String&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::move(value); }

    /**
     * <p>A full description of the display hint.</p>
     */
    inline void SetLongDescription(const char* value) { m_longDescriptionHasBeenSet = true; m_longDescription.assign(value); }

    /**
     * <p>A full description of the display hint.</p>
     */
    inline RegistrationFieldDisplayHints& WithLongDescription(const Aws::String& value) { SetLongDescription(value); return *this;}

    /**
     * <p>A full description of the display hint.</p>
     */
    inline RegistrationFieldDisplayHints& WithLongDescription(Aws::String&& value) { SetLongDescription(std::move(value)); return *this;}

    /**
     * <p>A full description of the display hint.</p>
     */
    inline RegistrationFieldDisplayHints& WithLongDescription(const char* value) { SetLongDescription(value); return *this;}


    /**
     * <p>The title of the document the display hint is associated with.</p>
     */
    inline const Aws::String& GetDocumentationTitle() const{ return m_documentationTitle; }

    /**
     * <p>The title of the document the display hint is associated with.</p>
     */
    inline bool DocumentationTitleHasBeenSet() const { return m_documentationTitleHasBeenSet; }

    /**
     * <p>The title of the document the display hint is associated with.</p>
     */
    inline void SetDocumentationTitle(const Aws::String& value) { m_documentationTitleHasBeenSet = true; m_documentationTitle = value; }

    /**
     * <p>The title of the document the display hint is associated with.</p>
     */
    inline void SetDocumentationTitle(Aws::String&& value) { m_documentationTitleHasBeenSet = true; m_documentationTitle = std::move(value); }

    /**
     * <p>The title of the document the display hint is associated with.</p>
     */
    inline void SetDocumentationTitle(const char* value) { m_documentationTitleHasBeenSet = true; m_documentationTitle.assign(value); }

    /**
     * <p>The title of the document the display hint is associated with.</p>
     */
    inline RegistrationFieldDisplayHints& WithDocumentationTitle(const Aws::String& value) { SetDocumentationTitle(value); return *this;}

    /**
     * <p>The title of the document the display hint is associated with.</p>
     */
    inline RegistrationFieldDisplayHints& WithDocumentationTitle(Aws::String&& value) { SetDocumentationTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the document the display hint is associated with.</p>
     */
    inline RegistrationFieldDisplayHints& WithDocumentationTitle(const char* value) { SetDocumentationTitle(value); return *this;}


    /**
     * <p>The link to the document the display hint is associated with.</p>
     */
    inline const Aws::String& GetDocumentationLink() const{ return m_documentationLink; }

    /**
     * <p>The link to the document the display hint is associated with.</p>
     */
    inline bool DocumentationLinkHasBeenSet() const { return m_documentationLinkHasBeenSet; }

    /**
     * <p>The link to the document the display hint is associated with.</p>
     */
    inline void SetDocumentationLink(const Aws::String& value) { m_documentationLinkHasBeenSet = true; m_documentationLink = value; }

    /**
     * <p>The link to the document the display hint is associated with.</p>
     */
    inline void SetDocumentationLink(Aws::String&& value) { m_documentationLinkHasBeenSet = true; m_documentationLink = std::move(value); }

    /**
     * <p>The link to the document the display hint is associated with.</p>
     */
    inline void SetDocumentationLink(const char* value) { m_documentationLinkHasBeenSet = true; m_documentationLink.assign(value); }

    /**
     * <p>The link to the document the display hint is associated with.</p>
     */
    inline RegistrationFieldDisplayHints& WithDocumentationLink(const Aws::String& value) { SetDocumentationLink(value); return *this;}

    /**
     * <p>The link to the document the display hint is associated with.</p>
     */
    inline RegistrationFieldDisplayHints& WithDocumentationLink(Aws::String&& value) { SetDocumentationLink(std::move(value)); return *this;}

    /**
     * <p>The link to the document the display hint is associated with.</p>
     */
    inline RegistrationFieldDisplayHints& WithDocumentationLink(const char* value) { SetDocumentationLink(value); return *this;}


    /**
     * <p>An array of SelectOptionDescription objects.</p>
     */
    inline const Aws::Vector<SelectOptionDescription>& GetSelectOptionDescriptions() const{ return m_selectOptionDescriptions; }

    /**
     * <p>An array of SelectOptionDescription objects.</p>
     */
    inline bool SelectOptionDescriptionsHasBeenSet() const { return m_selectOptionDescriptionsHasBeenSet; }

    /**
     * <p>An array of SelectOptionDescription objects.</p>
     */
    inline void SetSelectOptionDescriptions(const Aws::Vector<SelectOptionDescription>& value) { m_selectOptionDescriptionsHasBeenSet = true; m_selectOptionDescriptions = value; }

    /**
     * <p>An array of SelectOptionDescription objects.</p>
     */
    inline void SetSelectOptionDescriptions(Aws::Vector<SelectOptionDescription>&& value) { m_selectOptionDescriptionsHasBeenSet = true; m_selectOptionDescriptions = std::move(value); }

    /**
     * <p>An array of SelectOptionDescription objects.</p>
     */
    inline RegistrationFieldDisplayHints& WithSelectOptionDescriptions(const Aws::Vector<SelectOptionDescription>& value) { SetSelectOptionDescriptions(value); return *this;}

    /**
     * <p>An array of SelectOptionDescription objects.</p>
     */
    inline RegistrationFieldDisplayHints& WithSelectOptionDescriptions(Aws::Vector<SelectOptionDescription>&& value) { SetSelectOptionDescriptions(std::move(value)); return *this;}

    /**
     * <p>An array of SelectOptionDescription objects.</p>
     */
    inline RegistrationFieldDisplayHints& AddSelectOptionDescriptions(const SelectOptionDescription& value) { m_selectOptionDescriptionsHasBeenSet = true; m_selectOptionDescriptions.push_back(value); return *this; }

    /**
     * <p>An array of SelectOptionDescription objects.</p>
     */
    inline RegistrationFieldDisplayHints& AddSelectOptionDescriptions(SelectOptionDescription&& value) { m_selectOptionDescriptionsHasBeenSet = true; m_selectOptionDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The validation rules for the text field.</p>
     */
    inline const Aws::String& GetTextValidationDescription() const{ return m_textValidationDescription; }

    /**
     * <p>The validation rules for the text field.</p>
     */
    inline bool TextValidationDescriptionHasBeenSet() const { return m_textValidationDescriptionHasBeenSet; }

    /**
     * <p>The validation rules for the text field.</p>
     */
    inline void SetTextValidationDescription(const Aws::String& value) { m_textValidationDescriptionHasBeenSet = true; m_textValidationDescription = value; }

    /**
     * <p>The validation rules for the text field.</p>
     */
    inline void SetTextValidationDescription(Aws::String&& value) { m_textValidationDescriptionHasBeenSet = true; m_textValidationDescription = std::move(value); }

    /**
     * <p>The validation rules for the text field.</p>
     */
    inline void SetTextValidationDescription(const char* value) { m_textValidationDescriptionHasBeenSet = true; m_textValidationDescription.assign(value); }

    /**
     * <p>The validation rules for the text field.</p>
     */
    inline RegistrationFieldDisplayHints& WithTextValidationDescription(const Aws::String& value) { SetTextValidationDescription(value); return *this;}

    /**
     * <p>The validation rules for the text field.</p>
     */
    inline RegistrationFieldDisplayHints& WithTextValidationDescription(Aws::String&& value) { SetTextValidationDescription(std::move(value)); return *this;}

    /**
     * <p>The validation rules for the text field.</p>
     */
    inline RegistrationFieldDisplayHints& WithTextValidationDescription(const char* value) { SetTextValidationDescription(value); return *this;}


    /**
     * <p>Example text of what the value of a field should contain.</p>
     */
    inline const Aws::String& GetExampleTextValue() const{ return m_exampleTextValue; }

    /**
     * <p>Example text of what the value of a field should contain.</p>
     */
    inline bool ExampleTextValueHasBeenSet() const { return m_exampleTextValueHasBeenSet; }

    /**
     * <p>Example text of what the value of a field should contain.</p>
     */
    inline void SetExampleTextValue(const Aws::String& value) { m_exampleTextValueHasBeenSet = true; m_exampleTextValue = value; }

    /**
     * <p>Example text of what the value of a field should contain.</p>
     */
    inline void SetExampleTextValue(Aws::String&& value) { m_exampleTextValueHasBeenSet = true; m_exampleTextValue = std::move(value); }

    /**
     * <p>Example text of what the value of a field should contain.</p>
     */
    inline void SetExampleTextValue(const char* value) { m_exampleTextValueHasBeenSet = true; m_exampleTextValue.assign(value); }

    /**
     * <p>Example text of what the value of a field should contain.</p>
     */
    inline RegistrationFieldDisplayHints& WithExampleTextValue(const Aws::String& value) { SetExampleTextValue(value); return *this;}

    /**
     * <p>Example text of what the value of a field should contain.</p>
     */
    inline RegistrationFieldDisplayHints& WithExampleTextValue(Aws::String&& value) { SetExampleTextValue(std::move(value)); return *this;}

    /**
     * <p>Example text of what the value of a field should contain.</p>
     */
    inline RegistrationFieldDisplayHints& WithExampleTextValue(const char* value) { SetExampleTextValue(value); return *this;}

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

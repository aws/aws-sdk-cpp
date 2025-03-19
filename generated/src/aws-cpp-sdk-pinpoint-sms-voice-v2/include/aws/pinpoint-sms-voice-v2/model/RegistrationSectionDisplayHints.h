/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides help information on the registration section.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationSectionDisplayHints">AWS
   * API Reference</a></p>
   */
  class RegistrationSectionDisplayHints
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationSectionDisplayHints() = default;
    AWS_PINPOINTSMSVOICEV2_API RegistrationSectionDisplayHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationSectionDisplayHints& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    RegistrationSectionDisplayHints& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
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
    RegistrationSectionDisplayHints& WithShortDescription(ShortDescriptionT&& value) { SetShortDescription(std::forward<ShortDescriptionT>(value)); return *this;}
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
    RegistrationSectionDisplayHints& WithLongDescription(LongDescriptionT&& value) { SetLongDescription(std::forward<LongDescriptionT>(value)); return *this;}
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
    RegistrationSectionDisplayHints& WithDocumentationTitle(DocumentationTitleT&& value) { SetDocumentationTitle(std::forward<DocumentationTitleT>(value)); return *this;}
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
    RegistrationSectionDisplayHints& WithDocumentationLink(DocumentationLinkT&& value) { SetDocumentationLink(std::forward<DocumentationLinkT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

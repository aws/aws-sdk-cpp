/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/model/LibraryTemplateButtonList.h>
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
namespace SocialMessaging
{
namespace Model
{

  /**
   * <p>Defines the complete structure and content of a template in Meta's
   * library.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/MetaLibraryTemplateDefinition">AWS
   * API Reference</a></p>
   */
  class MetaLibraryTemplateDefinition
  {
  public:
    AWS_SOCIALMESSAGING_API MetaLibraryTemplateDefinition() = default;
    AWS_SOCIALMESSAGING_API MetaLibraryTemplateDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API MetaLibraryTemplateDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    MetaLibraryTemplateDefinition& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code for the template (for example, en_US).</p>
     */
    inline const Aws::String& GetTemplateLanguage() const { return m_templateLanguage; }
    inline bool TemplateLanguageHasBeenSet() const { return m_templateLanguageHasBeenSet; }
    template<typename TemplateLanguageT = Aws::String>
    void SetTemplateLanguage(TemplateLanguageT&& value) { m_templateLanguageHasBeenSet = true; m_templateLanguage = std::forward<TemplateLanguageT>(value); }
    template<typename TemplateLanguageT = Aws::String>
    MetaLibraryTemplateDefinition& WithTemplateLanguage(TemplateLanguageT&& value) { SetTemplateLanguage(std::forward<TemplateLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the template (for example, UTILITY or MARKETING).</p>
     */
    inline const Aws::String& GetTemplateCategory() const { return m_templateCategory; }
    inline bool TemplateCategoryHasBeenSet() const { return m_templateCategoryHasBeenSet; }
    template<typename TemplateCategoryT = Aws::String>
    void SetTemplateCategory(TemplateCategoryT&& value) { m_templateCategoryHasBeenSet = true; m_templateCategory = std::forward<TemplateCategoryT>(value); }
    template<typename TemplateCategoryT = Aws::String>
    MetaLibraryTemplateDefinition& WithTemplateCategory(TemplateCategoryT&& value) { SetTemplateCategory(std::forward<TemplateCategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic or subject matter of the template.</p>
     */
    inline const Aws::String& GetTemplateTopic() const { return m_templateTopic; }
    inline bool TemplateTopicHasBeenSet() const { return m_templateTopicHasBeenSet; }
    template<typename TemplateTopicT = Aws::String>
    void SetTemplateTopic(TemplateTopicT&& value) { m_templateTopicHasBeenSet = true; m_templateTopic = std::forward<TemplateTopicT>(value); }
    template<typename TemplateTopicT = Aws::String>
    MetaLibraryTemplateDefinition& WithTemplateTopic(TemplateTopicT&& value) { SetTemplateTopic(std::forward<TemplateTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The intended use case for the template.</p>
     */
    inline const Aws::String& GetTemplateUseCase() const { return m_templateUseCase; }
    inline bool TemplateUseCaseHasBeenSet() const { return m_templateUseCaseHasBeenSet; }
    template<typename TemplateUseCaseT = Aws::String>
    void SetTemplateUseCase(TemplateUseCaseT&& value) { m_templateUseCaseHasBeenSet = true; m_templateUseCase = std::forward<TemplateUseCaseT>(value); }
    template<typename TemplateUseCaseT = Aws::String>
    MetaLibraryTemplateDefinition& WithTemplateUseCase(TemplateUseCaseT&& value) { SetTemplateUseCase(std::forward<TemplateUseCaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The industries the template is designed for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTemplateIndustry() const { return m_templateIndustry; }
    inline bool TemplateIndustryHasBeenSet() const { return m_templateIndustryHasBeenSet; }
    template<typename TemplateIndustryT = Aws::Vector<Aws::String>>
    void SetTemplateIndustry(TemplateIndustryT&& value) { m_templateIndustryHasBeenSet = true; m_templateIndustry = std::forward<TemplateIndustryT>(value); }
    template<typename TemplateIndustryT = Aws::Vector<Aws::String>>
    MetaLibraryTemplateDefinition& WithTemplateIndustry(TemplateIndustryT&& value) { SetTemplateIndustry(std::forward<TemplateIndustryT>(value)); return *this;}
    template<typename TemplateIndustryT = Aws::String>
    MetaLibraryTemplateDefinition& AddTemplateIndustry(TemplateIndustryT&& value) { m_templateIndustryHasBeenSet = true; m_templateIndustry.emplace_back(std::forward<TemplateIndustryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The header text of the template.</p>
     */
    inline const Aws::String& GetTemplateHeader() const { return m_templateHeader; }
    inline bool TemplateHeaderHasBeenSet() const { return m_templateHeaderHasBeenSet; }
    template<typename TemplateHeaderT = Aws::String>
    void SetTemplateHeader(TemplateHeaderT&& value) { m_templateHeaderHasBeenSet = true; m_templateHeader = std::forward<TemplateHeaderT>(value); }
    template<typename TemplateHeaderT = Aws::String>
    MetaLibraryTemplateDefinition& WithTemplateHeader(TemplateHeaderT&& value) { SetTemplateHeader(std::forward<TemplateHeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body text of the template.</p>
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    MetaLibraryTemplateDefinition& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buttons included in the template.</p>
     */
    inline const Aws::Vector<LibraryTemplateButtonList>& GetTemplateButtons() const { return m_templateButtons; }
    inline bool TemplateButtonsHasBeenSet() const { return m_templateButtonsHasBeenSet; }
    template<typename TemplateButtonsT = Aws::Vector<LibraryTemplateButtonList>>
    void SetTemplateButtons(TemplateButtonsT&& value) { m_templateButtonsHasBeenSet = true; m_templateButtons = std::forward<TemplateButtonsT>(value); }
    template<typename TemplateButtonsT = Aws::Vector<LibraryTemplateButtonList>>
    MetaLibraryTemplateDefinition& WithTemplateButtons(TemplateButtonsT&& value) { SetTemplateButtons(std::forward<TemplateButtonsT>(value)); return *this;}
    template<typename TemplateButtonsT = LibraryTemplateButtonList>
    MetaLibraryTemplateDefinition& AddTemplateButtons(TemplateButtonsT&& value) { m_templateButtonsHasBeenSet = true; m_templateButtons.emplace_back(std::forward<TemplateButtonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the template in Meta's library.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    MetaLibraryTemplateDefinition& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateLanguage;
    bool m_templateLanguageHasBeenSet = false;

    Aws::String m_templateCategory;
    bool m_templateCategoryHasBeenSet = false;

    Aws::String m_templateTopic;
    bool m_templateTopicHasBeenSet = false;

    Aws::String m_templateUseCase;
    bool m_templateUseCaseHasBeenSet = false;

    Aws::Vector<Aws::String> m_templateIndustry;
    bool m_templateIndustryHasBeenSet = false;

    Aws::String m_templateHeader;
    bool m_templateHeaderHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::Vector<LibraryTemplateButtonList> m_templateButtons;
    bool m_templateButtonsHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws

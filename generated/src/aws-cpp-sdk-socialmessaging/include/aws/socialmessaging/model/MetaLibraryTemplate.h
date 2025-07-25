/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/model/LibraryTemplateBodyInputs.h>
#include <aws/socialmessaging/model/LibraryTemplateButtonInput.h>
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
   * <p>Represents a template from Meta's library with customization
   * options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/MetaLibraryTemplate">AWS
   * API Reference</a></p>
   */
  class MetaLibraryTemplate
  {
  public:
    AWS_SOCIALMESSAGING_API MetaLibraryTemplate() = default;
    AWS_SOCIALMESSAGING_API MetaLibraryTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API MetaLibraryTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name to assign to the template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    MetaLibraryTemplate& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template in Meta's library.</p>
     */
    inline const Aws::String& GetLibraryTemplateName() const { return m_libraryTemplateName; }
    inline bool LibraryTemplateNameHasBeenSet() const { return m_libraryTemplateNameHasBeenSet; }
    template<typename LibraryTemplateNameT = Aws::String>
    void SetLibraryTemplateName(LibraryTemplateNameT&& value) { m_libraryTemplateNameHasBeenSet = true; m_libraryTemplateName = std::forward<LibraryTemplateNameT>(value); }
    template<typename LibraryTemplateNameT = Aws::String>
    MetaLibraryTemplate& WithLibraryTemplateName(LibraryTemplateNameT&& value) { SetLibraryTemplateName(std::forward<LibraryTemplateNameT>(value)); return *this;}
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
    MetaLibraryTemplate& WithTemplateCategory(TemplateCategoryT&& value) { SetTemplateCategory(std::forward<TemplateCategoryT>(value)); return *this;}
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
    MetaLibraryTemplate& WithTemplateLanguage(TemplateLanguageT&& value) { SetTemplateLanguage(std::forward<TemplateLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Button customizations for the template.</p>
     */
    inline const Aws::Vector<LibraryTemplateButtonInput>& GetLibraryTemplateButtonInputs() const { return m_libraryTemplateButtonInputs; }
    inline bool LibraryTemplateButtonInputsHasBeenSet() const { return m_libraryTemplateButtonInputsHasBeenSet; }
    template<typename LibraryTemplateButtonInputsT = Aws::Vector<LibraryTemplateButtonInput>>
    void SetLibraryTemplateButtonInputs(LibraryTemplateButtonInputsT&& value) { m_libraryTemplateButtonInputsHasBeenSet = true; m_libraryTemplateButtonInputs = std::forward<LibraryTemplateButtonInputsT>(value); }
    template<typename LibraryTemplateButtonInputsT = Aws::Vector<LibraryTemplateButtonInput>>
    MetaLibraryTemplate& WithLibraryTemplateButtonInputs(LibraryTemplateButtonInputsT&& value) { SetLibraryTemplateButtonInputs(std::forward<LibraryTemplateButtonInputsT>(value)); return *this;}
    template<typename LibraryTemplateButtonInputsT = LibraryTemplateButtonInput>
    MetaLibraryTemplate& AddLibraryTemplateButtonInputs(LibraryTemplateButtonInputsT&& value) { m_libraryTemplateButtonInputsHasBeenSet = true; m_libraryTemplateButtonInputs.emplace_back(std::forward<LibraryTemplateButtonInputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Body text customizations for the template.</p>
     */
    inline const LibraryTemplateBodyInputs& GetLibraryTemplateBodyInputs() const { return m_libraryTemplateBodyInputs; }
    inline bool LibraryTemplateBodyInputsHasBeenSet() const { return m_libraryTemplateBodyInputsHasBeenSet; }
    template<typename LibraryTemplateBodyInputsT = LibraryTemplateBodyInputs>
    void SetLibraryTemplateBodyInputs(LibraryTemplateBodyInputsT&& value) { m_libraryTemplateBodyInputsHasBeenSet = true; m_libraryTemplateBodyInputs = std::forward<LibraryTemplateBodyInputsT>(value); }
    template<typename LibraryTemplateBodyInputsT = LibraryTemplateBodyInputs>
    MetaLibraryTemplate& WithLibraryTemplateBodyInputs(LibraryTemplateBodyInputsT&& value) { SetLibraryTemplateBodyInputs(std::forward<LibraryTemplateBodyInputsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_libraryTemplateName;
    bool m_libraryTemplateNameHasBeenSet = false;

    Aws::String m_templateCategory;
    bool m_templateCategoryHasBeenSet = false;

    Aws::String m_templateLanguage;
    bool m_templateLanguageHasBeenSet = false;

    Aws::Vector<LibraryTemplateButtonInput> m_libraryTemplateButtonInputs;
    bool m_libraryTemplateButtonInputsHasBeenSet = false;

    LibraryTemplateBodyInputs m_libraryTemplateBodyInputs;
    bool m_libraryTemplateBodyInputsHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws

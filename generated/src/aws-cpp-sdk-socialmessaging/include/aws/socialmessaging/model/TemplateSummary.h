/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
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
namespace SocialMessaging
{
namespace Model
{

  /**
   * <p>Provides a summary of a WhatsApp message template's key
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/TemplateSummary">AWS
   * API Reference</a></p>
   */
  class TemplateSummary
  {
  public:
    AWS_SOCIALMESSAGING_API TemplateSummary() = default;
    AWS_SOCIALMESSAGING_API TemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API TemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    TemplateSummary& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric ID assigned to the template by Meta.</p>
     */
    inline const Aws::String& GetMetaTemplateId() const { return m_metaTemplateId; }
    inline bool MetaTemplateIdHasBeenSet() const { return m_metaTemplateIdHasBeenSet; }
    template<typename MetaTemplateIdT = Aws::String>
    void SetMetaTemplateId(MetaTemplateIdT&& value) { m_metaTemplateIdHasBeenSet = true; m_metaTemplateId = std::forward<MetaTemplateIdT>(value); }
    template<typename MetaTemplateIdT = Aws::String>
    TemplateSummary& WithMetaTemplateId(MetaTemplateIdT&& value) { SetMetaTemplateId(std::forward<MetaTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the template (for example, APPROVED, PENDING, or
     * REJECTED).</p>
     */
    inline const Aws::String& GetTemplateStatus() const { return m_templateStatus; }
    inline bool TemplateStatusHasBeenSet() const { return m_templateStatusHasBeenSet; }
    template<typename TemplateStatusT = Aws::String>
    void SetTemplateStatus(TemplateStatusT&& value) { m_templateStatusHasBeenSet = true; m_templateStatus = std::forward<TemplateStatusT>(value); }
    template<typename TemplateStatusT = Aws::String>
    TemplateSummary& WithTemplateStatus(TemplateStatusT&& value) { SetTemplateStatus(std::forward<TemplateStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quality score assigned to the template by Meta.</p>
     */
    inline const Aws::String& GetTemplateQualityScore() const { return m_templateQualityScore; }
    inline bool TemplateQualityScoreHasBeenSet() const { return m_templateQualityScoreHasBeenSet; }
    template<typename TemplateQualityScoreT = Aws::String>
    void SetTemplateQualityScore(TemplateQualityScoreT&& value) { m_templateQualityScoreHasBeenSet = true; m_templateQualityScore = std::forward<TemplateQualityScoreT>(value); }
    template<typename TemplateQualityScoreT = Aws::String>
    TemplateSummary& WithTemplateQualityScore(TemplateQualityScoreT&& value) { SetTemplateQualityScore(std::forward<TemplateQualityScoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the template (for example, en_US).</p>
     */
    inline const Aws::String& GetTemplateLanguage() const { return m_templateLanguage; }
    inline bool TemplateLanguageHasBeenSet() const { return m_templateLanguageHasBeenSet; }
    template<typename TemplateLanguageT = Aws::String>
    void SetTemplateLanguage(TemplateLanguageT&& value) { m_templateLanguageHasBeenSet = true; m_templateLanguage = std::forward<TemplateLanguageT>(value); }
    template<typename TemplateLanguageT = Aws::String>
    TemplateSummary& WithTemplateLanguage(TemplateLanguageT&& value) { SetTemplateLanguage(std::forward<TemplateLanguageT>(value)); return *this;}
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
    TemplateSummary& WithTemplateCategory(TemplateCategoryT&& value) { SetTemplateCategory(std::forward<TemplateCategoryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_metaTemplateId;
    bool m_metaTemplateIdHasBeenSet = false;

    Aws::String m_templateStatus;
    bool m_templateStatusHasBeenSet = false;

    Aws::String m_templateQualityScore;
    bool m_templateQualityScoreHasBeenSet = false;

    Aws::String m_templateLanguage;
    bool m_templateLanguageHasBeenSet = false;

    Aws::String m_templateCategory;
    bool m_templateCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws

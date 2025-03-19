/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/wellarchitected/model/ProfileTemplateQuestion.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>The profile template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ProfileTemplate">AWS
   * API Reference</a></p>
   */
  class ProfileTemplate
  {
  public:
    AWS_WELLARCHITECTED_API ProfileTemplate() = default;
    AWS_WELLARCHITECTED_API ProfileTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ProfileTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the profile template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    ProfileTemplate& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Profile template questions.</p>
     */
    inline const Aws::Vector<ProfileTemplateQuestion>& GetTemplateQuestions() const { return m_templateQuestions; }
    inline bool TemplateQuestionsHasBeenSet() const { return m_templateQuestionsHasBeenSet; }
    template<typename TemplateQuestionsT = Aws::Vector<ProfileTemplateQuestion>>
    void SetTemplateQuestions(TemplateQuestionsT&& value) { m_templateQuestionsHasBeenSet = true; m_templateQuestions = std::forward<TemplateQuestionsT>(value); }
    template<typename TemplateQuestionsT = Aws::Vector<ProfileTemplateQuestion>>
    ProfileTemplate& WithTemplateQuestions(TemplateQuestionsT&& value) { SetTemplateQuestions(std::forward<TemplateQuestionsT>(value)); return *this;}
    template<typename TemplateQuestionsT = ProfileTemplateQuestion>
    ProfileTemplate& AddTemplateQuestions(TemplateQuestionsT&& value) { m_templateQuestionsHasBeenSet = true; m_templateQuestions.emplace_back(std::forward<TemplateQuestionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ProfileTemplate& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ProfileTemplate& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::Vector<ProfileTemplateQuestion> m_templateQuestions;
    bool m_templateQuestionsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

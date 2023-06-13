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
    AWS_WELLARCHITECTED_API ProfileTemplate();
    AWS_WELLARCHITECTED_API ProfileTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ProfileTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the profile template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the profile template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the profile template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the profile template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the profile template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the profile template.</p>
     */
    inline ProfileTemplate& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the profile template.</p>
     */
    inline ProfileTemplate& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the profile template.</p>
     */
    inline ProfileTemplate& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>Profile template questions.</p>
     */
    inline const Aws::Vector<ProfileTemplateQuestion>& GetTemplateQuestions() const{ return m_templateQuestions; }

    /**
     * <p>Profile template questions.</p>
     */
    inline bool TemplateQuestionsHasBeenSet() const { return m_templateQuestionsHasBeenSet; }

    /**
     * <p>Profile template questions.</p>
     */
    inline void SetTemplateQuestions(const Aws::Vector<ProfileTemplateQuestion>& value) { m_templateQuestionsHasBeenSet = true; m_templateQuestions = value; }

    /**
     * <p>Profile template questions.</p>
     */
    inline void SetTemplateQuestions(Aws::Vector<ProfileTemplateQuestion>&& value) { m_templateQuestionsHasBeenSet = true; m_templateQuestions = std::move(value); }

    /**
     * <p>Profile template questions.</p>
     */
    inline ProfileTemplate& WithTemplateQuestions(const Aws::Vector<ProfileTemplateQuestion>& value) { SetTemplateQuestions(value); return *this;}

    /**
     * <p>Profile template questions.</p>
     */
    inline ProfileTemplate& WithTemplateQuestions(Aws::Vector<ProfileTemplateQuestion>&& value) { SetTemplateQuestions(std::move(value)); return *this;}

    /**
     * <p>Profile template questions.</p>
     */
    inline ProfileTemplate& AddTemplateQuestions(const ProfileTemplateQuestion& value) { m_templateQuestionsHasBeenSet = true; m_templateQuestions.push_back(value); return *this; }

    /**
     * <p>Profile template questions.</p>
     */
    inline ProfileTemplate& AddTemplateQuestions(ProfileTemplateQuestion&& value) { m_templateQuestionsHasBeenSet = true; m_templateQuestions.push_back(std::move(value)); return *this; }


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    
    inline ProfileTemplate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline ProfileTemplate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline ProfileTemplate& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline ProfileTemplate& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::Vector<ProfileTemplateQuestion> m_templateQuestions;
    bool m_templateQuestionsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

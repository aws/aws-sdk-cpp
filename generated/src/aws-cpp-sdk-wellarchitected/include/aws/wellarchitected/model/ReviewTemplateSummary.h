/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/wellarchitected/model/ReviewTemplateUpdateStatus.h>
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
   * <p>Summary of a review template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ReviewTemplateSummary">AWS
   * API Reference</a></p>
   */
  class ReviewTemplateSummary
  {
  public:
    AWS_WELLARCHITECTED_API ReviewTemplateSummary();
    AWS_WELLARCHITECTED_API ReviewTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ReviewTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Description of the review template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the review template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the review template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the review template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the review template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the review template.</p>
     */
    inline ReviewTemplateSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the review template.</p>
     */
    inline ReviewTemplateSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the review template.</p>
     */
    inline ReviewTemplateSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Lenses associated with the review template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLenses() const{ return m_lenses; }

    /**
     * <p>Lenses associated with the review template.</p>
     */
    inline bool LensesHasBeenSet() const { return m_lensesHasBeenSet; }

    /**
     * <p>Lenses associated with the review template.</p>
     */
    inline void SetLenses(const Aws::Vector<Aws::String>& value) { m_lensesHasBeenSet = true; m_lenses = value; }

    /**
     * <p>Lenses associated with the review template.</p>
     */
    inline void SetLenses(Aws::Vector<Aws::String>&& value) { m_lensesHasBeenSet = true; m_lenses = std::move(value); }

    /**
     * <p>Lenses associated with the review template.</p>
     */
    inline ReviewTemplateSummary& WithLenses(const Aws::Vector<Aws::String>& value) { SetLenses(value); return *this;}

    /**
     * <p>Lenses associated with the review template.</p>
     */
    inline ReviewTemplateSummary& WithLenses(Aws::Vector<Aws::String>&& value) { SetLenses(std::move(value)); return *this;}

    /**
     * <p>Lenses associated with the review template.</p>
     */
    inline ReviewTemplateSummary& AddLenses(const Aws::String& value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }

    /**
     * <p>Lenses associated with the review template.</p>
     */
    inline ReviewTemplateSummary& AddLenses(Aws::String&& value) { m_lensesHasBeenSet = true; m_lenses.push_back(std::move(value)); return *this; }

    /**
     * <p>Lenses associated with the review template.</p>
     */
    inline ReviewTemplateSummary& AddLenses(const char* value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }


    
    inline const Aws::String& GetOwner() const{ return m_owner; }

    
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    
    inline ReviewTemplateSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    
    inline ReviewTemplateSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    
    inline ReviewTemplateSummary& WithOwner(const char* value) { SetOwner(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline ReviewTemplateSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline ReviewTemplateSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The review template ARN.</p>
     */
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline ReviewTemplateSummary& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline ReviewTemplateSummary& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline ReviewTemplateSummary& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>The name of the review template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the review template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the review template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the review template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the review template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the review template.</p>
     */
    inline ReviewTemplateSummary& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the review template.</p>
     */
    inline ReviewTemplateSummary& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the review template.</p>
     */
    inline ReviewTemplateSummary& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The latest status of a review template.</p>
     */
    inline const ReviewTemplateUpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }

    /**
     * <p>The latest status of a review template.</p>
     */
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }

    /**
     * <p>The latest status of a review template.</p>
     */
    inline void SetUpdateStatus(const ReviewTemplateUpdateStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }

    /**
     * <p>The latest status of a review template.</p>
     */
    inline void SetUpdateStatus(ReviewTemplateUpdateStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }

    /**
     * <p>The latest status of a review template.</p>
     */
    inline ReviewTemplateSummary& WithUpdateStatus(const ReviewTemplateUpdateStatus& value) { SetUpdateStatus(value); return *this;}

    /**
     * <p>The latest status of a review template.</p>
     */
    inline ReviewTemplateSummary& WithUpdateStatus(ReviewTemplateUpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_lenses;
    bool m_lensesHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    ReviewTemplateUpdateStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

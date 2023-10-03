/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class CreateReviewTemplateRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API CreateReviewTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReviewTemplate"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    /**
     * <p>Name of the review template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>Name of the review template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>Name of the review template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>Name of the review template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>Name of the review template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>Name of the review template.</p>
     */
    inline CreateReviewTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>Name of the review template.</p>
     */
    inline CreateReviewTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>Name of the review template.</p>
     */
    inline CreateReviewTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The review template description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The review template description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The review template description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The review template description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The review template description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The review template description.</p>
     */
    inline CreateReviewTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The review template description.</p>
     */
    inline CreateReviewTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The review template description.</p>
     */
    inline CreateReviewTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Lenses applied to the review template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLenses() const{ return m_lenses; }

    /**
     * <p>Lenses applied to the review template.</p>
     */
    inline bool LensesHasBeenSet() const { return m_lensesHasBeenSet; }

    /**
     * <p>Lenses applied to the review template.</p>
     */
    inline void SetLenses(const Aws::Vector<Aws::String>& value) { m_lensesHasBeenSet = true; m_lenses = value; }

    /**
     * <p>Lenses applied to the review template.</p>
     */
    inline void SetLenses(Aws::Vector<Aws::String>&& value) { m_lensesHasBeenSet = true; m_lenses = std::move(value); }

    /**
     * <p>Lenses applied to the review template.</p>
     */
    inline CreateReviewTemplateRequest& WithLenses(const Aws::Vector<Aws::String>& value) { SetLenses(value); return *this;}

    /**
     * <p>Lenses applied to the review template.</p>
     */
    inline CreateReviewTemplateRequest& WithLenses(Aws::Vector<Aws::String>&& value) { SetLenses(std::move(value)); return *this;}

    /**
     * <p>Lenses applied to the review template.</p>
     */
    inline CreateReviewTemplateRequest& AddLenses(const Aws::String& value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }

    /**
     * <p>Lenses applied to the review template.</p>
     */
    inline CreateReviewTemplateRequest& AddLenses(Aws::String&& value) { m_lensesHasBeenSet = true; m_lenses.push_back(std::move(value)); return *this; }

    /**
     * <p>Lenses applied to the review template.</p>
     */
    inline CreateReviewTemplateRequest& AddLenses(const char* value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }


    
    inline const Aws::String& GetNotes() const{ return m_notes; }

    
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    
    inline CreateReviewTemplateRequest& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    
    inline CreateReviewTemplateRequest& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    
    inline CreateReviewTemplateRequest& WithNotes(const char* value) { SetNotes(value); return *this;}


    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline CreateReviewTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline CreateReviewTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline CreateReviewTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline CreateReviewTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline CreateReviewTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline CreateReviewTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline CreateReviewTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline CreateReviewTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the review template.</p>
     */
    inline CreateReviewTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateReviewTemplateRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateReviewTemplateRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateReviewTemplateRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_lenses;
    bool m_lensesHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

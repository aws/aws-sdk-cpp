/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class UpdateReviewTemplateLensReviewRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateReviewTemplateLensReviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReviewTemplateLensReview"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


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
    inline UpdateReviewTemplateLensReviewRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline UpdateReviewTemplateLensReviewRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline UpdateReviewTemplateLensReviewRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline UpdateReviewTemplateLensReviewRequest& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline UpdateReviewTemplateLensReviewRequest& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline UpdateReviewTemplateLensReviewRequest& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    
    inline const Aws::String& GetLensNotes() const{ return m_lensNotes; }

    
    inline bool LensNotesHasBeenSet() const { return m_lensNotesHasBeenSet; }

    
    inline void SetLensNotes(const Aws::String& value) { m_lensNotesHasBeenSet = true; m_lensNotes = value; }

    
    inline void SetLensNotes(Aws::String&& value) { m_lensNotesHasBeenSet = true; m_lensNotes = std::move(value); }

    
    inline void SetLensNotes(const char* value) { m_lensNotesHasBeenSet = true; m_lensNotes.assign(value); }

    
    inline UpdateReviewTemplateLensReviewRequest& WithLensNotes(const Aws::String& value) { SetLensNotes(value); return *this;}

    
    inline UpdateReviewTemplateLensReviewRequest& WithLensNotes(Aws::String&& value) { SetLensNotes(std::move(value)); return *this;}

    
    inline UpdateReviewTemplateLensReviewRequest& WithLensNotes(const char* value) { SetLensNotes(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetPillarNotes() const{ return m_pillarNotes; }

    
    inline bool PillarNotesHasBeenSet() const { return m_pillarNotesHasBeenSet; }

    
    inline void SetPillarNotes(const Aws::Map<Aws::String, Aws::String>& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes = value; }

    
    inline void SetPillarNotes(Aws::Map<Aws::String, Aws::String>&& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes = std::move(value); }

    
    inline UpdateReviewTemplateLensReviewRequest& WithPillarNotes(const Aws::Map<Aws::String, Aws::String>& value) { SetPillarNotes(value); return *this;}

    
    inline UpdateReviewTemplateLensReviewRequest& WithPillarNotes(Aws::Map<Aws::String, Aws::String>&& value) { SetPillarNotes(std::move(value)); return *this;}

    
    inline UpdateReviewTemplateLensReviewRequest& AddPillarNotes(const Aws::String& key, const Aws::String& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(key, value); return *this; }

    
    inline UpdateReviewTemplateLensReviewRequest& AddPillarNotes(Aws::String&& key, const Aws::String& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(std::move(key), value); return *this; }

    
    inline UpdateReviewTemplateLensReviewRequest& AddPillarNotes(const Aws::String& key, Aws::String&& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(key, std::move(value)); return *this; }

    
    inline UpdateReviewTemplateLensReviewRequest& AddPillarNotes(Aws::String&& key, Aws::String&& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(std::move(key), std::move(value)); return *this; }

    
    inline UpdateReviewTemplateLensReviewRequest& AddPillarNotes(const char* key, Aws::String&& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(key, std::move(value)); return *this; }

    
    inline UpdateReviewTemplateLensReviewRequest& AddPillarNotes(Aws::String&& key, const char* value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(std::move(key), value); return *this; }

    
    inline UpdateReviewTemplateLensReviewRequest& AddPillarNotes(const char* key, const char* value) { m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(key, value); return *this; }

  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensNotes;
    bool m_lensNotesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_pillarNotes;
    bool m_pillarNotesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

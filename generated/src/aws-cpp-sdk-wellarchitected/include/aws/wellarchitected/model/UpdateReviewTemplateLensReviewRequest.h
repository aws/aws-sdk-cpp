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
    AWS_WELLARCHITECTED_API UpdateReviewTemplateLensReviewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReviewTemplateLensReview"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    UpdateReviewTemplateLensReviewRequest& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    UpdateReviewTemplateLensReviewRequest& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensNotes() const { return m_lensNotes; }
    inline bool LensNotesHasBeenSet() const { return m_lensNotesHasBeenSet; }
    template<typename LensNotesT = Aws::String>
    void SetLensNotes(LensNotesT&& value) { m_lensNotesHasBeenSet = true; m_lensNotes = std::forward<LensNotesT>(value); }
    template<typename LensNotesT = Aws::String>
    UpdateReviewTemplateLensReviewRequest& WithLensNotes(LensNotesT&& value) { SetLensNotes(std::forward<LensNotesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetPillarNotes() const { return m_pillarNotes; }
    inline bool PillarNotesHasBeenSet() const { return m_pillarNotesHasBeenSet; }
    template<typename PillarNotesT = Aws::Map<Aws::String, Aws::String>>
    void SetPillarNotes(PillarNotesT&& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes = std::forward<PillarNotesT>(value); }
    template<typename PillarNotesT = Aws::Map<Aws::String, Aws::String>>
    UpdateReviewTemplateLensReviewRequest& WithPillarNotes(PillarNotesT&& value) { SetPillarNotes(std::forward<PillarNotesT>(value)); return *this;}
    template<typename PillarNotesKeyT = Aws::String, typename PillarNotesValueT = Aws::String>
    UpdateReviewTemplateLensReviewRequest& AddPillarNotes(PillarNotesKeyT&& key, PillarNotesValueT&& value) {
      m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(std::forward<PillarNotesKeyT>(key), std::forward<PillarNotesValueT>(value)); return *this;
    }
    ///@}
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

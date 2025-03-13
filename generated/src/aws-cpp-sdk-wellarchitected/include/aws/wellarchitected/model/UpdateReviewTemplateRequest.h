/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class UpdateReviewTemplateRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateReviewTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReviewTemplate"; }

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
    UpdateReviewTemplateRequest& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The review template name.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    UpdateReviewTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The review template description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateReviewTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    UpdateReviewTemplateRequest& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of lens aliases or ARNs to apply to the review template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLensesToAssociate() const { return m_lensesToAssociate; }
    inline bool LensesToAssociateHasBeenSet() const { return m_lensesToAssociateHasBeenSet; }
    template<typename LensesToAssociateT = Aws::Vector<Aws::String>>
    void SetLensesToAssociate(LensesToAssociateT&& value) { m_lensesToAssociateHasBeenSet = true; m_lensesToAssociate = std::forward<LensesToAssociateT>(value); }
    template<typename LensesToAssociateT = Aws::Vector<Aws::String>>
    UpdateReviewTemplateRequest& WithLensesToAssociate(LensesToAssociateT&& value) { SetLensesToAssociate(std::forward<LensesToAssociateT>(value)); return *this;}
    template<typename LensesToAssociateT = Aws::String>
    UpdateReviewTemplateRequest& AddLensesToAssociate(LensesToAssociateT&& value) { m_lensesToAssociateHasBeenSet = true; m_lensesToAssociate.emplace_back(std::forward<LensesToAssociateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of lens aliases or ARNs to unapply to the review template. The
     * <code>wellarchitected</code> lens cannot be unapplied.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLensesToDisassociate() const { return m_lensesToDisassociate; }
    inline bool LensesToDisassociateHasBeenSet() const { return m_lensesToDisassociateHasBeenSet; }
    template<typename LensesToDisassociateT = Aws::Vector<Aws::String>>
    void SetLensesToDisassociate(LensesToDisassociateT&& value) { m_lensesToDisassociateHasBeenSet = true; m_lensesToDisassociate = std::forward<LensesToDisassociateT>(value); }
    template<typename LensesToDisassociateT = Aws::Vector<Aws::String>>
    UpdateReviewTemplateRequest& WithLensesToDisassociate(LensesToDisassociateT&& value) { SetLensesToDisassociate(std::forward<LensesToDisassociateT>(value)); return *this;}
    template<typename LensesToDisassociateT = Aws::String>
    UpdateReviewTemplateRequest& AddLensesToDisassociate(LensesToDisassociateT&& value) { m_lensesToDisassociateHasBeenSet = true; m_lensesToDisassociate.emplace_back(std::forward<LensesToDisassociateT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Vector<Aws::String> m_lensesToAssociate;
    bool m_lensesToAssociateHasBeenSet = false;

    Aws::Vector<Aws::String> m_lensesToDisassociate;
    bool m_lensesToDisassociateHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

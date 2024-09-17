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
    AWS_WELLARCHITECTED_API UpdateReviewTemplateRequest();

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
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline UpdateReviewTemplateRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline UpdateReviewTemplateRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline UpdateReviewTemplateRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The review template name.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline UpdateReviewTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline UpdateReviewTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline UpdateReviewTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The review template description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateReviewTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateReviewTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateReviewTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNotes() const{ return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }
    inline UpdateReviewTemplateRequest& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}
    inline UpdateReviewTemplateRequest& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}
    inline UpdateReviewTemplateRequest& WithNotes(const char* value) { SetNotes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of lens aliases or ARNs to apply to the review template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLensesToAssociate() const{ return m_lensesToAssociate; }
    inline bool LensesToAssociateHasBeenSet() const { return m_lensesToAssociateHasBeenSet; }
    inline void SetLensesToAssociate(const Aws::Vector<Aws::String>& value) { m_lensesToAssociateHasBeenSet = true; m_lensesToAssociate = value; }
    inline void SetLensesToAssociate(Aws::Vector<Aws::String>&& value) { m_lensesToAssociateHasBeenSet = true; m_lensesToAssociate = std::move(value); }
    inline UpdateReviewTemplateRequest& WithLensesToAssociate(const Aws::Vector<Aws::String>& value) { SetLensesToAssociate(value); return *this;}
    inline UpdateReviewTemplateRequest& WithLensesToAssociate(Aws::Vector<Aws::String>&& value) { SetLensesToAssociate(std::move(value)); return *this;}
    inline UpdateReviewTemplateRequest& AddLensesToAssociate(const Aws::String& value) { m_lensesToAssociateHasBeenSet = true; m_lensesToAssociate.push_back(value); return *this; }
    inline UpdateReviewTemplateRequest& AddLensesToAssociate(Aws::String&& value) { m_lensesToAssociateHasBeenSet = true; m_lensesToAssociate.push_back(std::move(value)); return *this; }
    inline UpdateReviewTemplateRequest& AddLensesToAssociate(const char* value) { m_lensesToAssociateHasBeenSet = true; m_lensesToAssociate.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of lens aliases or ARNs to unapply to the review template. The
     * <code>wellarchitected</code> lens cannot be unapplied.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLensesToDisassociate() const{ return m_lensesToDisassociate; }
    inline bool LensesToDisassociateHasBeenSet() const { return m_lensesToDisassociateHasBeenSet; }
    inline void SetLensesToDisassociate(const Aws::Vector<Aws::String>& value) { m_lensesToDisassociateHasBeenSet = true; m_lensesToDisassociate = value; }
    inline void SetLensesToDisassociate(Aws::Vector<Aws::String>&& value) { m_lensesToDisassociateHasBeenSet = true; m_lensesToDisassociate = std::move(value); }
    inline UpdateReviewTemplateRequest& WithLensesToDisassociate(const Aws::Vector<Aws::String>& value) { SetLensesToDisassociate(value); return *this;}
    inline UpdateReviewTemplateRequest& WithLensesToDisassociate(Aws::Vector<Aws::String>&& value) { SetLensesToDisassociate(std::move(value)); return *this;}
    inline UpdateReviewTemplateRequest& AddLensesToDisassociate(const Aws::String& value) { m_lensesToDisassociateHasBeenSet = true; m_lensesToDisassociate.push_back(value); return *this; }
    inline UpdateReviewTemplateRequest& AddLensesToDisassociate(Aws::String&& value) { m_lensesToDisassociateHasBeenSet = true; m_lensesToDisassociate.push_back(std::move(value)); return *this; }
    inline UpdateReviewTemplateRequest& AddLensesToDisassociate(const char* value) { m_lensesToDisassociateHasBeenSet = true; m_lensesToDisassociate.push_back(value); return *this; }
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

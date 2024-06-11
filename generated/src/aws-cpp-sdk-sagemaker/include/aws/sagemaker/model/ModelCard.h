/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardStatus.h>
#include <aws/sagemaker/model/ModelCardSecurityConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An Amazon SageMaker Model Card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelCard">AWS
   * API Reference</a></p>
   */
  class ModelCard
  {
  public:
    AWS_SAGEMAKER_API ModelCard();
    AWS_SAGEMAKER_API ModelCard(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const{ return m_modelCardArn; }
    inline bool ModelCardArnHasBeenSet() const { return m_modelCardArnHasBeenSet; }
    inline void SetModelCardArn(const Aws::String& value) { m_modelCardArnHasBeenSet = true; m_modelCardArn = value; }
    inline void SetModelCardArn(Aws::String&& value) { m_modelCardArnHasBeenSet = true; m_modelCardArn = std::move(value); }
    inline void SetModelCardArn(const char* value) { m_modelCardArnHasBeenSet = true; m_modelCardArn.assign(value); }
    inline ModelCard& WithModelCardArn(const Aws::String& value) { SetModelCardArn(value); return *this;}
    inline ModelCard& WithModelCardArn(Aws::String&& value) { SetModelCardArn(std::move(value)); return *this;}
    inline ModelCard& WithModelCardArn(const char* value) { SetModelCardArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the model card.</p>
     */
    inline const Aws::String& GetModelCardName() const{ return m_modelCardName; }
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }
    inline void SetModelCardName(const Aws::String& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = value; }
    inline void SetModelCardName(Aws::String&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::move(value); }
    inline void SetModelCardName(const char* value) { m_modelCardNameHasBeenSet = true; m_modelCardName.assign(value); }
    inline ModelCard& WithModelCardName(const Aws::String& value) { SetModelCardName(value); return *this;}
    inline ModelCard& WithModelCardName(Aws::String&& value) { SetModelCardName(std::move(value)); return *this;}
    inline ModelCard& WithModelCardName(const char* value) { SetModelCardName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model card.</p>
     */
    inline int GetModelCardVersion() const{ return m_modelCardVersion; }
    inline bool ModelCardVersionHasBeenSet() const { return m_modelCardVersionHasBeenSet; }
    inline void SetModelCardVersion(int value) { m_modelCardVersionHasBeenSet = true; m_modelCardVersion = value; }
    inline ModelCard& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the model card. Content uses the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards.html#model-cards-json-schema">model
     * card JSON schema</a> and provided as a string.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline ModelCard& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline ModelCard& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline ModelCard& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model card within your organization. Different
     * organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline const ModelCardStatus& GetModelCardStatus() const{ return m_modelCardStatus; }
    inline bool ModelCardStatusHasBeenSet() const { return m_modelCardStatusHasBeenSet; }
    inline void SetModelCardStatus(const ModelCardStatus& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }
    inline void SetModelCardStatus(ModelCardStatus&& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = std::move(value); }
    inline ModelCard& WithModelCardStatus(const ModelCardStatus& value) { SetModelCardStatus(value); return *this;}
    inline ModelCard& WithModelCardStatus(ModelCardStatus&& value) { SetModelCardStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security configuration used to protect model card data.</p>
     */
    inline const ModelCardSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }
    inline void SetSecurityConfig(const ModelCardSecurityConfig& value) { m_securityConfigHasBeenSet = true; m_securityConfig = value; }
    inline void SetSecurityConfig(ModelCardSecurityConfig&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::move(value); }
    inline ModelCard& WithSecurityConfig(const ModelCardSecurityConfig& value) { SetSecurityConfig(value); return *this;}
    inline ModelCard& WithSecurityConfig(ModelCardSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the model card was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ModelCard& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ModelCard& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline ModelCard& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline ModelCard& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the model card was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ModelCard& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ModelCard& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline ModelCard& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline ModelCard& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs used to manage metadata for the model card.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ModelCard& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ModelCard& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ModelCard& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ModelCard& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique name (ID) of the model.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline ModelCard& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline ModelCard& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline ModelCard& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The risk rating of the model. Different organizations might have different
     * criteria for model card risk ratings. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards-risk-rating.html">Risk
     * ratings</a>.</p>
     */
    inline const Aws::String& GetRiskRating() const{ return m_riskRating; }
    inline bool RiskRatingHasBeenSet() const { return m_riskRatingHasBeenSet; }
    inline void SetRiskRating(const Aws::String& value) { m_riskRatingHasBeenSet = true; m_riskRating = value; }
    inline void SetRiskRating(Aws::String&& value) { m_riskRatingHasBeenSet = true; m_riskRating = std::move(value); }
    inline void SetRiskRating(const char* value) { m_riskRatingHasBeenSet = true; m_riskRating.assign(value); }
    inline ModelCard& WithRiskRating(const Aws::String& value) { SetRiskRating(value); return *this;}
    inline ModelCard& WithRiskRating(Aws::String&& value) { SetRiskRating(std::move(value)); return *this;}
    inline ModelCard& WithRiskRating(const char* value) { SetRiskRating(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model package group that contains the model package. Only relevant for
     * model cards created for model packages in the Amazon SageMaker Model Registry.
     * </p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }
    inline ModelCard& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}
    inline ModelCard& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}
    inline ModelCard& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}
    ///@}
  private:

    Aws::String m_modelCardArn;
    bool m_modelCardArnHasBeenSet = false;

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    int m_modelCardVersion;
    bool m_modelCardVersionHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    ModelCardStatus m_modelCardStatus;
    bool m_modelCardStatusHasBeenSet = false;

    ModelCardSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::String m_riskRating;
    bool m_riskRatingHasBeenSet = false;

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

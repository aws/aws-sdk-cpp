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
   * <p>The model card for a model displayed in the Amazon SageMaker Model
   * Dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDashboardModelCard">AWS
   * API Reference</a></p>
   */
  class ModelDashboardModelCard
  {
  public:
    AWS_SAGEMAKER_API ModelDashboardModelCard();
    AWS_SAGEMAKER_API ModelDashboardModelCard(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDashboardModelCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const{ return m_modelCardArn; }
    inline bool ModelCardArnHasBeenSet() const { return m_modelCardArnHasBeenSet; }
    inline void SetModelCardArn(const Aws::String& value) { m_modelCardArnHasBeenSet = true; m_modelCardArn = value; }
    inline void SetModelCardArn(Aws::String&& value) { m_modelCardArnHasBeenSet = true; m_modelCardArn = std::move(value); }
    inline void SetModelCardArn(const char* value) { m_modelCardArnHasBeenSet = true; m_modelCardArn.assign(value); }
    inline ModelDashboardModelCard& WithModelCardArn(const Aws::String& value) { SetModelCardArn(value); return *this;}
    inline ModelDashboardModelCard& WithModelCardArn(Aws::String&& value) { SetModelCardArn(std::move(value)); return *this;}
    inline ModelDashboardModelCard& WithModelCardArn(const char* value) { SetModelCardArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a model card.</p>
     */
    inline const Aws::String& GetModelCardName() const{ return m_modelCardName; }
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }
    inline void SetModelCardName(const Aws::String& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = value; }
    inline void SetModelCardName(Aws::String&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::move(value); }
    inline void SetModelCardName(const char* value) { m_modelCardNameHasBeenSet = true; m_modelCardName.assign(value); }
    inline ModelDashboardModelCard& WithModelCardName(const Aws::String& value) { SetModelCardName(value); return *this;}
    inline ModelDashboardModelCard& WithModelCardName(Aws::String&& value) { SetModelCardName(std::move(value)); return *this;}
    inline ModelDashboardModelCard& WithModelCardName(const char* value) { SetModelCardName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model card version.</p>
     */
    inline int GetModelCardVersion() const{ return m_modelCardVersion; }
    inline bool ModelCardVersionHasBeenSet() const { return m_modelCardVersionHasBeenSet; }
    inline void SetModelCardVersion(int value) { m_modelCardVersionHasBeenSet = true; m_modelCardVersion = value; }
    inline ModelDashboardModelCard& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model card status.</p>
     */
    inline const ModelCardStatus& GetModelCardStatus() const{ return m_modelCardStatus; }
    inline bool ModelCardStatusHasBeenSet() const { return m_modelCardStatusHasBeenSet; }
    inline void SetModelCardStatus(const ModelCardStatus& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }
    inline void SetModelCardStatus(ModelCardStatus&& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = std::move(value); }
    inline ModelDashboardModelCard& WithModelCardStatus(const ModelCardStatus& value) { SetModelCardStatus(value); return *this;}
    inline ModelDashboardModelCard& WithModelCardStatus(ModelCardStatus&& value) { SetModelCardStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) for encryption of model card
     * information.</p>
     */
    inline const ModelCardSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }
    inline void SetSecurityConfig(const ModelCardSecurityConfig& value) { m_securityConfigHasBeenSet = true; m_securityConfig = value; }
    inline void SetSecurityConfig(ModelCardSecurityConfig&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::move(value); }
    inline ModelDashboardModelCard& WithSecurityConfig(const ModelCardSecurityConfig& value) { SetSecurityConfig(value); return *this;}
    inline ModelDashboardModelCard& WithSecurityConfig(ModelCardSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the model card was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ModelDashboardModelCard& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ModelDashboardModelCard& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline ModelDashboardModelCard& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline ModelDashboardModelCard& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the model card was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ModelDashboardModelCard& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ModelDashboardModelCard& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline ModelDashboardModelCard& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline ModelDashboardModelCard& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with a model card.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ModelDashboardModelCard& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ModelDashboardModelCard& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ModelDashboardModelCard& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ModelDashboardModelCard& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For models created in SageMaker, this is the model ARN. For models created
     * outside of SageMaker, this is a user-customized string.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline ModelDashboardModelCard& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline ModelDashboardModelCard& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline ModelDashboardModelCard& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A model card's risk rating. Can be low, medium, or high.</p>
     */
    inline const Aws::String& GetRiskRating() const{ return m_riskRating; }
    inline bool RiskRatingHasBeenSet() const { return m_riskRatingHasBeenSet; }
    inline void SetRiskRating(const Aws::String& value) { m_riskRatingHasBeenSet = true; m_riskRating = value; }
    inline void SetRiskRating(Aws::String&& value) { m_riskRatingHasBeenSet = true; m_riskRating = std::move(value); }
    inline void SetRiskRating(const char* value) { m_riskRatingHasBeenSet = true; m_riskRating.assign(value); }
    inline ModelDashboardModelCard& WithRiskRating(const Aws::String& value) { SetRiskRating(value); return *this;}
    inline ModelDashboardModelCard& WithRiskRating(Aws::String&& value) { SetRiskRating(std::move(value)); return *this;}
    inline ModelDashboardModelCard& WithRiskRating(const char* value) { SetRiskRating(value); return *this;}
    ///@}
  private:

    Aws::String m_modelCardArn;
    bool m_modelCardArnHasBeenSet = false;

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    int m_modelCardVersion;
    bool m_modelCardVersionHasBeenSet = false;

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

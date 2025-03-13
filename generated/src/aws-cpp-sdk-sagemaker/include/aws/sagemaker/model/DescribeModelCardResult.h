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
#include <aws/sagemaker/model/ModelCardProcessingStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeModelCardResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelCardResult() = default;
    AWS_SAGEMAKER_API DescribeModelCardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelCardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const { return m_modelCardArn; }
    template<typename ModelCardArnT = Aws::String>
    void SetModelCardArn(ModelCardArnT&& value) { m_modelCardArnHasBeenSet = true; m_modelCardArn = std::forward<ModelCardArnT>(value); }
    template<typename ModelCardArnT = Aws::String>
    DescribeModelCardResult& WithModelCardArn(ModelCardArnT&& value) { SetModelCardArn(std::forward<ModelCardArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model card.</p>
     */
    inline const Aws::String& GetModelCardName() const { return m_modelCardName; }
    template<typename ModelCardNameT = Aws::String>
    void SetModelCardName(ModelCardNameT&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::forward<ModelCardNameT>(value); }
    template<typename ModelCardNameT = Aws::String>
    DescribeModelCardResult& WithModelCardName(ModelCardNameT&& value) { SetModelCardName(std::forward<ModelCardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model card.</p>
     */
    inline int GetModelCardVersion() const { return m_modelCardVersion; }
    inline void SetModelCardVersion(int value) { m_modelCardVersionHasBeenSet = true; m_modelCardVersion = value; }
    inline DescribeModelCardResult& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the model card.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    DescribeModelCardResult& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
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
    inline ModelCardStatus GetModelCardStatus() const { return m_modelCardStatus; }
    inline void SetModelCardStatus(ModelCardStatus value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }
    inline DescribeModelCardResult& WithModelCardStatus(ModelCardStatus value) { SetModelCardStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security configuration used to protect model card content.</p>
     */
    inline const ModelCardSecurityConfig& GetSecurityConfig() const { return m_securityConfig; }
    template<typename SecurityConfigT = ModelCardSecurityConfig>
    void SetSecurityConfig(SecurityConfigT&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::forward<SecurityConfigT>(value); }
    template<typename SecurityConfigT = ModelCardSecurityConfig>
    DescribeModelCardResult& WithSecurityConfig(SecurityConfigT&& value) { SetSecurityConfig(std::forward<SecurityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the model card was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeModelCardResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    DescribeModelCardResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the model card was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeModelCardResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    DescribeModelCardResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing status of model card deletion. The
     * <code>ModelCardProcessingStatus</code> updates throughout the different deletion
     * steps.</p> <ul> <li> <p> <code>DeletePending</code>: Model card deletion request
     * received.</p> </li> <li> <p> <code>DeleteInProgress</code>: Model card deletion
     * is in progress.</p> </li> <li> <p> <code>ContentDeleted</code>: Deleted model
     * card content.</p> </li> <li> <p> <code>ExportJobsDeleted</code>: Deleted all
     * export jobs associated with the model card.</p> </li> <li> <p>
     * <code>DeleteCompleted</code>: Successfully deleted the model card.</p> </li>
     * <li> <p> <code>DeleteFailed</code>: The model card failed to delete.</p> </li>
     * </ul>
     */
    inline ModelCardProcessingStatus GetModelCardProcessingStatus() const { return m_modelCardProcessingStatus; }
    inline void SetModelCardProcessingStatus(ModelCardProcessingStatus value) { m_modelCardProcessingStatusHasBeenSet = true; m_modelCardProcessingStatus = value; }
    inline DescribeModelCardResult& WithModelCardProcessingStatus(ModelCardProcessingStatus value) { SetModelCardProcessingStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelCardResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelCardArn;
    bool m_modelCardArnHasBeenSet = false;

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    int m_modelCardVersion{0};
    bool m_modelCardVersionHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    ModelCardStatus m_modelCardStatus{ModelCardStatus::NOT_SET};
    bool m_modelCardStatusHasBeenSet = false;

    ModelCardSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    ModelCardProcessingStatus m_modelCardProcessingStatus{ModelCardProcessingStatus::NOT_SET};
    bool m_modelCardProcessingStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

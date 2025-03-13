/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/ModelPackageGroupStatus.h>
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
  class DescribeModelPackageGroupResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelPackageGroupResult() = default;
    AWS_SAGEMAKER_API DescribeModelPackageGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelPackageGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const { return m_modelPackageGroupName; }
    template<typename ModelPackageGroupNameT = Aws::String>
    void SetModelPackageGroupName(ModelPackageGroupNameT&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::forward<ModelPackageGroupNameT>(value); }
    template<typename ModelPackageGroupNameT = Aws::String>
    DescribeModelPackageGroupResult& WithModelPackageGroupName(ModelPackageGroupNameT&& value) { SetModelPackageGroupName(std::forward<ModelPackageGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupArn() const { return m_modelPackageGroupArn; }
    template<typename ModelPackageGroupArnT = Aws::String>
    void SetModelPackageGroupArn(ModelPackageGroupArnT&& value) { m_modelPackageGroupArnHasBeenSet = true; m_modelPackageGroupArn = std::forward<ModelPackageGroupArnT>(value); }
    template<typename ModelPackageGroupArnT = Aws::String>
    DescribeModelPackageGroupResult& WithModelPackageGroupArn(ModelPackageGroupArnT&& value) { SetModelPackageGroupArn(std::forward<ModelPackageGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupDescription() const { return m_modelPackageGroupDescription; }
    template<typename ModelPackageGroupDescriptionT = Aws::String>
    void SetModelPackageGroupDescription(ModelPackageGroupDescriptionT&& value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription = std::forward<ModelPackageGroupDescriptionT>(value); }
    template<typename ModelPackageGroupDescriptionT = Aws::String>
    DescribeModelPackageGroupResult& WithModelPackageGroupDescription(ModelPackageGroupDescriptionT&& value) { SetModelPackageGroupDescription(std::forward<ModelPackageGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the model group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeModelPackageGroupResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    DescribeModelPackageGroupResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model group.</p>
     */
    inline ModelPackageGroupStatus GetModelPackageGroupStatus() const { return m_modelPackageGroupStatus; }
    inline void SetModelPackageGroupStatus(ModelPackageGroupStatus value) { m_modelPackageGroupStatusHasBeenSet = true; m_modelPackageGroupStatus = value; }
    inline DescribeModelPackageGroupResult& WithModelPackageGroupStatus(ModelPackageGroupStatus value) { SetModelPackageGroupStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelPackageGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    Aws::String m_modelPackageGroupArn;
    bool m_modelPackageGroupArnHasBeenSet = false;

    Aws::String m_modelPackageGroupDescription;
    bool m_modelPackageGroupDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    ModelPackageGroupStatus m_modelPackageGroupStatus{ModelPackageGroupStatus::NOT_SET};
    bool m_modelPackageGroupStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

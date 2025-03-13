/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/BatchDescribeModelPackageSummary.h>
#include <aws/sagemaker/model/BatchDescribeModelPackageError.h>
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
  class BatchDescribeModelPackageResult
  {
  public:
    AWS_SAGEMAKER_API BatchDescribeModelPackageResult() = default;
    AWS_SAGEMAKER_API BatchDescribeModelPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API BatchDescribeModelPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries for the model package versions</p>
     */
    inline const Aws::Map<Aws::String, BatchDescribeModelPackageSummary>& GetModelPackageSummaries() const { return m_modelPackageSummaries; }
    template<typename ModelPackageSummariesT = Aws::Map<Aws::String, BatchDescribeModelPackageSummary>>
    void SetModelPackageSummaries(ModelPackageSummariesT&& value) { m_modelPackageSummariesHasBeenSet = true; m_modelPackageSummaries = std::forward<ModelPackageSummariesT>(value); }
    template<typename ModelPackageSummariesT = Aws::Map<Aws::String, BatchDescribeModelPackageSummary>>
    BatchDescribeModelPackageResult& WithModelPackageSummaries(ModelPackageSummariesT&& value) { SetModelPackageSummaries(std::forward<ModelPackageSummariesT>(value)); return *this;}
    template<typename ModelPackageSummariesKeyT = Aws::String, typename ModelPackageSummariesValueT = BatchDescribeModelPackageSummary>
    BatchDescribeModelPackageResult& AddModelPackageSummaries(ModelPackageSummariesKeyT&& key, ModelPackageSummariesValueT&& value) {
      m_modelPackageSummariesHasBeenSet = true; m_modelPackageSummaries.emplace(std::forward<ModelPackageSummariesKeyT>(key), std::forward<ModelPackageSummariesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline const Aws::Map<Aws::String, BatchDescribeModelPackageError>& GetBatchDescribeModelPackageErrorMap() const { return m_batchDescribeModelPackageErrorMap; }
    template<typename BatchDescribeModelPackageErrorMapT = Aws::Map<Aws::String, BatchDescribeModelPackageError>>
    void SetBatchDescribeModelPackageErrorMap(BatchDescribeModelPackageErrorMapT&& value) { m_batchDescribeModelPackageErrorMapHasBeenSet = true; m_batchDescribeModelPackageErrorMap = std::forward<BatchDescribeModelPackageErrorMapT>(value); }
    template<typename BatchDescribeModelPackageErrorMapT = Aws::Map<Aws::String, BatchDescribeModelPackageError>>
    BatchDescribeModelPackageResult& WithBatchDescribeModelPackageErrorMap(BatchDescribeModelPackageErrorMapT&& value) { SetBatchDescribeModelPackageErrorMap(std::forward<BatchDescribeModelPackageErrorMapT>(value)); return *this;}
    template<typename BatchDescribeModelPackageErrorMapKeyT = Aws::String, typename BatchDescribeModelPackageErrorMapValueT = BatchDescribeModelPackageError>
    BatchDescribeModelPackageResult& AddBatchDescribeModelPackageErrorMap(BatchDescribeModelPackageErrorMapKeyT&& key, BatchDescribeModelPackageErrorMapValueT&& value) {
      m_batchDescribeModelPackageErrorMapHasBeenSet = true; m_batchDescribeModelPackageErrorMap.emplace(std::forward<BatchDescribeModelPackageErrorMapKeyT>(key), std::forward<BatchDescribeModelPackageErrorMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDescribeModelPackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, BatchDescribeModelPackageSummary> m_modelPackageSummaries;
    bool m_modelPackageSummariesHasBeenSet = false;

    Aws::Map<Aws::String, BatchDescribeModelPackageError> m_batchDescribeModelPackageErrorMap;
    bool m_batchDescribeModelPackageErrorMapHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

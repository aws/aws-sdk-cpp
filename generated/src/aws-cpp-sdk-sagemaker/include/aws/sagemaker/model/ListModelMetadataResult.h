/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelMetadataSummary.h>
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
  class ListModelMetadataResult
  {
  public:
    AWS_SAGEMAKER_API ListModelMetadataResult() = default;
    AWS_SAGEMAKER_API ListModelMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that holds model metadata.</p>
     */
    inline const Aws::Vector<ModelMetadataSummary>& GetModelMetadataSummaries() const { return m_modelMetadataSummaries; }
    template<typename ModelMetadataSummariesT = Aws::Vector<ModelMetadataSummary>>
    void SetModelMetadataSummaries(ModelMetadataSummariesT&& value) { m_modelMetadataSummariesHasBeenSet = true; m_modelMetadataSummaries = std::forward<ModelMetadataSummariesT>(value); }
    template<typename ModelMetadataSummariesT = Aws::Vector<ModelMetadataSummary>>
    ListModelMetadataResult& WithModelMetadataSummaries(ModelMetadataSummariesT&& value) { SetModelMetadataSummaries(std::forward<ModelMetadataSummariesT>(value)); return *this;}
    template<typename ModelMetadataSummariesT = ModelMetadataSummary>
    ListModelMetadataResult& AddModelMetadataSummaries(ModelMetadataSummariesT&& value) { m_modelMetadataSummariesHasBeenSet = true; m_modelMetadataSummaries.emplace_back(std::forward<ModelMetadataSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelMetadataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ModelMetadataSummary> m_modelMetadataSummaries;
    bool m_modelMetadataSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

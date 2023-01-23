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
    AWS_SAGEMAKER_API ListModelMetadataResult();
    AWS_SAGEMAKER_API ListModelMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that holds model metadata.</p>
     */
    inline const Aws::Vector<ModelMetadataSummary>& GetModelMetadataSummaries() const{ return m_modelMetadataSummaries; }

    /**
     * <p>A structure that holds model metadata.</p>
     */
    inline void SetModelMetadataSummaries(const Aws::Vector<ModelMetadataSummary>& value) { m_modelMetadataSummaries = value; }

    /**
     * <p>A structure that holds model metadata.</p>
     */
    inline void SetModelMetadataSummaries(Aws::Vector<ModelMetadataSummary>&& value) { m_modelMetadataSummaries = std::move(value); }

    /**
     * <p>A structure that holds model metadata.</p>
     */
    inline ListModelMetadataResult& WithModelMetadataSummaries(const Aws::Vector<ModelMetadataSummary>& value) { SetModelMetadataSummaries(value); return *this;}

    /**
     * <p>A structure that holds model metadata.</p>
     */
    inline ListModelMetadataResult& WithModelMetadataSummaries(Aws::Vector<ModelMetadataSummary>&& value) { SetModelMetadataSummaries(std::move(value)); return *this;}

    /**
     * <p>A structure that holds model metadata.</p>
     */
    inline ListModelMetadataResult& AddModelMetadataSummaries(const ModelMetadataSummary& value) { m_modelMetadataSummaries.push_back(value); return *this; }

    /**
     * <p>A structure that holds model metadata.</p>
     */
    inline ListModelMetadataResult& AddModelMetadataSummaries(ModelMetadataSummary&& value) { m_modelMetadataSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline ListModelMetadataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline ListModelMetadataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline ListModelMetadataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ModelMetadataSummary> m_modelMetadataSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

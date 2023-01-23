/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelSummary.h>
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
  class ListModelsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelsResult();
    AWS_SAGEMAKER_API ListModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>ModelSummary</code> objects, each of which lists a
     * model.</p>
     */
    inline const Aws::Vector<ModelSummary>& GetModels() const{ return m_models; }

    /**
     * <p>An array of <code>ModelSummary</code> objects, each of which lists a
     * model.</p>
     */
    inline void SetModels(const Aws::Vector<ModelSummary>& value) { m_models = value; }

    /**
     * <p>An array of <code>ModelSummary</code> objects, each of which lists a
     * model.</p>
     */
    inline void SetModels(Aws::Vector<ModelSummary>&& value) { m_models = std::move(value); }

    /**
     * <p>An array of <code>ModelSummary</code> objects, each of which lists a
     * model.</p>
     */
    inline ListModelsResult& WithModels(const Aws::Vector<ModelSummary>& value) { SetModels(value); return *this;}

    /**
     * <p>An array of <code>ModelSummary</code> objects, each of which lists a
     * model.</p>
     */
    inline ListModelsResult& WithModels(Aws::Vector<ModelSummary>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ModelSummary</code> objects, each of which lists a
     * model.</p>
     */
    inline ListModelsResult& AddModels(const ModelSummary& value) { m_models.push_back(value); return *this; }

    /**
     * <p>An array of <code>ModelSummary</code> objects, each of which lists a
     * model.</p>
     */
    inline ListModelsResult& AddModels(ModelSummary&& value) { m_models.push_back(std::move(value)); return *this; }


    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of models, use it in the subsequent request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of models, use it in the subsequent request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of models, use it in the subsequent request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of models, use it in the subsequent request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of models, use it in the subsequent request. </p>
     */
    inline ListModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of models, use it in the subsequent request. </p>
     */
    inline ListModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of models, use it in the subsequent request. </p>
     */
    inline ListModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ModelSummary> m_models;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardSummary.h>
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
  class ListModelCardsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelCardsResult();
    AWS_SAGEMAKER_API ListModelCardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelCardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summaries of the listed model cards.</p>
     */
    inline const Aws::Vector<ModelCardSummary>& GetModelCardSummaries() const{ return m_modelCardSummaries; }

    /**
     * <p>The summaries of the listed model cards.</p>
     */
    inline void SetModelCardSummaries(const Aws::Vector<ModelCardSummary>& value) { m_modelCardSummaries = value; }

    /**
     * <p>The summaries of the listed model cards.</p>
     */
    inline void SetModelCardSummaries(Aws::Vector<ModelCardSummary>&& value) { m_modelCardSummaries = std::move(value); }

    /**
     * <p>The summaries of the listed model cards.</p>
     */
    inline ListModelCardsResult& WithModelCardSummaries(const Aws::Vector<ModelCardSummary>& value) { SetModelCardSummaries(value); return *this;}

    /**
     * <p>The summaries of the listed model cards.</p>
     */
    inline ListModelCardsResult& WithModelCardSummaries(Aws::Vector<ModelCardSummary>&& value) { SetModelCardSummaries(std::move(value)); return *this;}

    /**
     * <p>The summaries of the listed model cards.</p>
     */
    inline ListModelCardsResult& AddModelCardSummaries(const ModelCardSummary& value) { m_modelCardSummaries.push_back(value); return *this; }

    /**
     * <p>The summaries of the listed model cards.</p>
     */
    inline ListModelCardsResult& AddModelCardSummaries(ModelCardSummary&& value) { m_modelCardSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model cards, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model cards, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model cards, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model cards, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model cards, use it in the subsequent request.</p>
     */
    inline ListModelCardsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model cards, use it in the subsequent request.</p>
     */
    inline ListModelCardsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model cards, use it in the subsequent request.</p>
     */
    inline ListModelCardsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ModelCardSummary> m_modelCardSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContextSummary.h>
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
  class ListContextsResult
  {
  public:
    AWS_SAGEMAKER_API ListContextsResult();
    AWS_SAGEMAKER_API ListContextsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListContextsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of contexts and their properties.</p>
     */
    inline const Aws::Vector<ContextSummary>& GetContextSummaries() const{ return m_contextSummaries; }

    /**
     * <p>A list of contexts and their properties.</p>
     */
    inline void SetContextSummaries(const Aws::Vector<ContextSummary>& value) { m_contextSummaries = value; }

    /**
     * <p>A list of contexts and their properties.</p>
     */
    inline void SetContextSummaries(Aws::Vector<ContextSummary>&& value) { m_contextSummaries = std::move(value); }

    /**
     * <p>A list of contexts and their properties.</p>
     */
    inline ListContextsResult& WithContextSummaries(const Aws::Vector<ContextSummary>& value) { SetContextSummaries(value); return *this;}

    /**
     * <p>A list of contexts and their properties.</p>
     */
    inline ListContextsResult& WithContextSummaries(Aws::Vector<ContextSummary>&& value) { SetContextSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of contexts and their properties.</p>
     */
    inline ListContextsResult& AddContextSummaries(const ContextSummary& value) { m_contextSummaries.push_back(value); return *this; }

    /**
     * <p>A list of contexts and their properties.</p>
     */
    inline ListContextsResult& AddContextSummaries(ContextSummary&& value) { m_contextSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of contexts, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of contexts, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of contexts, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of contexts, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of contexts, if there are any.</p>
     */
    inline ListContextsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of contexts, if there are any.</p>
     */
    inline ListContextsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of contexts, if there are any.</p>
     */
    inline ListContextsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ContextSummary> m_contextSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

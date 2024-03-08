/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceComponentSummary.h>
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
  class ListInferenceComponentsResult
  {
  public:
    AWS_SAGEMAKER_API ListInferenceComponentsResult();
    AWS_SAGEMAKER_API ListInferenceComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListInferenceComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of inference components and their properties that matches any of the
     * filters you specified in the request.</p>
     */
    inline const Aws::Vector<InferenceComponentSummary>& GetInferenceComponents() const{ return m_inferenceComponents; }

    /**
     * <p>A list of inference components and their properties that matches any of the
     * filters you specified in the request.</p>
     */
    inline void SetInferenceComponents(const Aws::Vector<InferenceComponentSummary>& value) { m_inferenceComponents = value; }

    /**
     * <p>A list of inference components and their properties that matches any of the
     * filters you specified in the request.</p>
     */
    inline void SetInferenceComponents(Aws::Vector<InferenceComponentSummary>&& value) { m_inferenceComponents = std::move(value); }

    /**
     * <p>A list of inference components and their properties that matches any of the
     * filters you specified in the request.</p>
     */
    inline ListInferenceComponentsResult& WithInferenceComponents(const Aws::Vector<InferenceComponentSummary>& value) { SetInferenceComponents(value); return *this;}

    /**
     * <p>A list of inference components and their properties that matches any of the
     * filters you specified in the request.</p>
     */
    inline ListInferenceComponentsResult& WithInferenceComponents(Aws::Vector<InferenceComponentSummary>&& value) { SetInferenceComponents(std::move(value)); return *this;}

    /**
     * <p>A list of inference components and their properties that matches any of the
     * filters you specified in the request.</p>
     */
    inline ListInferenceComponentsResult& AddInferenceComponents(const InferenceComponentSummary& value) { m_inferenceComponents.push_back(value); return *this; }

    /**
     * <p>A list of inference components and their properties that matches any of the
     * filters you specified in the request.</p>
     */
    inline ListInferenceComponentsResult& AddInferenceComponents(InferenceComponentSummary&& value) { m_inferenceComponents.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use in a subsequent request to get the next set of results
     * following a truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use in a subsequent request to get the next set of results
     * following a truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use in a subsequent request to get the next set of results
     * following a truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use in a subsequent request to get the next set of results
     * following a truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use in a subsequent request to get the next set of results
     * following a truncated response.</p>
     */
    inline ListInferenceComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use in a subsequent request to get the next set of results
     * following a truncated response.</p>
     */
    inline ListInferenceComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use in a subsequent request to get the next set of results
     * following a truncated response.</p>
     */
    inline ListInferenceComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListInferenceComponentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListInferenceComponentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListInferenceComponentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<InferenceComponentSummary> m_inferenceComponents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

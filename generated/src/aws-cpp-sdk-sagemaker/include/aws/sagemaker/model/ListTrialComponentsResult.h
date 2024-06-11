﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialComponentSummary.h>
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
  class ListTrialComponentsResult
  {
  public:
    AWS_SAGEMAKER_API ListTrialComponentsResult();
    AWS_SAGEMAKER_API ListTrialComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListTrialComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the summaries of your trial components.</p>
     */
    inline const Aws::Vector<TrialComponentSummary>& GetTrialComponentSummaries() const{ return m_trialComponentSummaries; }
    inline void SetTrialComponentSummaries(const Aws::Vector<TrialComponentSummary>& value) { m_trialComponentSummaries = value; }
    inline void SetTrialComponentSummaries(Aws::Vector<TrialComponentSummary>&& value) { m_trialComponentSummaries = std::move(value); }
    inline ListTrialComponentsResult& WithTrialComponentSummaries(const Aws::Vector<TrialComponentSummary>& value) { SetTrialComponentSummaries(value); return *this;}
    inline ListTrialComponentsResult& WithTrialComponentSummaries(Aws::Vector<TrialComponentSummary>&& value) { SetTrialComponentSummaries(std::move(value)); return *this;}
    inline ListTrialComponentsResult& AddTrialComponentSummaries(const TrialComponentSummary& value) { m_trialComponentSummaries.push_back(value); return *this; }
    inline ListTrialComponentsResult& AddTrialComponentSummaries(TrialComponentSummary&& value) { m_trialComponentSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of components, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTrialComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTrialComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTrialComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTrialComponentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTrialComponentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTrialComponentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TrialComponentSummary> m_trialComponentSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

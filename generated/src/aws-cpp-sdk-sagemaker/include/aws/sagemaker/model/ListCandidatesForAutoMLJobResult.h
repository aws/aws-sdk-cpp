﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AutoMLCandidate.h>
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
  class ListCandidatesForAutoMLJobResult
  {
  public:
    AWS_SAGEMAKER_API ListCandidatesForAutoMLJobResult();
    AWS_SAGEMAKER_API ListCandidatesForAutoMLJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListCandidatesForAutoMLJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summaries about the <code>AutoMLCandidates</code>.</p>
     */
    inline const Aws::Vector<AutoMLCandidate>& GetCandidates() const{ return m_candidates; }
    inline void SetCandidates(const Aws::Vector<AutoMLCandidate>& value) { m_candidates = value; }
    inline void SetCandidates(Aws::Vector<AutoMLCandidate>&& value) { m_candidates = std::move(value); }
    inline ListCandidatesForAutoMLJobResult& WithCandidates(const Aws::Vector<AutoMLCandidate>& value) { SetCandidates(value); return *this;}
    inline ListCandidatesForAutoMLJobResult& WithCandidates(Aws::Vector<AutoMLCandidate>&& value) { SetCandidates(std::move(value)); return *this;}
    inline ListCandidatesForAutoMLJobResult& AddCandidates(const AutoMLCandidate& value) { m_candidates.push_back(value); return *this; }
    inline ListCandidatesForAutoMLJobResult& AddCandidates(AutoMLCandidate&& value) { m_candidates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCandidatesForAutoMLJobResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCandidatesForAutoMLJobResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCandidatesForAutoMLJobResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCandidatesForAutoMLJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCandidatesForAutoMLJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCandidatesForAutoMLJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AutoMLCandidate> m_candidates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ArtifactSummary.h>
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
  class ListArtifactsResult
  {
  public:
    AWS_SAGEMAKER_API ListArtifactsResult();
    AWS_SAGEMAKER_API ListArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of artifacts and their properties.</p>
     */
    inline const Aws::Vector<ArtifactSummary>& GetArtifactSummaries() const{ return m_artifactSummaries; }
    inline void SetArtifactSummaries(const Aws::Vector<ArtifactSummary>& value) { m_artifactSummaries = value; }
    inline void SetArtifactSummaries(Aws::Vector<ArtifactSummary>&& value) { m_artifactSummaries = std::move(value); }
    inline ListArtifactsResult& WithArtifactSummaries(const Aws::Vector<ArtifactSummary>& value) { SetArtifactSummaries(value); return *this;}
    inline ListArtifactsResult& WithArtifactSummaries(Aws::Vector<ArtifactSummary>&& value) { SetArtifactSummaries(std::move(value)); return *this;}
    inline ListArtifactsResult& AddArtifactSummaries(const ArtifactSummary& value) { m_artifactSummaries.push_back(value); return *this; }
    inline ListArtifactsResult& AddArtifactSummaries(ArtifactSummary&& value) { m_artifactSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of artifacts, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListArtifactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListArtifactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListArtifactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListArtifactsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListArtifactsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListArtifactsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ArtifactSummary> m_artifactSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

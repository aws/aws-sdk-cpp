/**
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
    AWS_SAGEMAKER_API ListArtifactsResult() = default;
    AWS_SAGEMAKER_API ListArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of artifacts and their properties.</p>
     */
    inline const Aws::Vector<ArtifactSummary>& GetArtifactSummaries() const { return m_artifactSummaries; }
    template<typename ArtifactSummariesT = Aws::Vector<ArtifactSummary>>
    void SetArtifactSummaries(ArtifactSummariesT&& value) { m_artifactSummariesHasBeenSet = true; m_artifactSummaries = std::forward<ArtifactSummariesT>(value); }
    template<typename ArtifactSummariesT = Aws::Vector<ArtifactSummary>>
    ListArtifactsResult& WithArtifactSummaries(ArtifactSummariesT&& value) { SetArtifactSummaries(std::forward<ArtifactSummariesT>(value)); return *this;}
    template<typename ArtifactSummariesT = ArtifactSummary>
    ListArtifactsResult& AddArtifactSummaries(ArtifactSummariesT&& value) { m_artifactSummariesHasBeenSet = true; m_artifactSummaries.emplace_back(std::forward<ArtifactSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of artifacts, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListArtifactsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListArtifactsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ArtifactSummary> m_artifactSummaries;
    bool m_artifactSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

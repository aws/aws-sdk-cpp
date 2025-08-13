/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ResourceSnapshotJobSummary.h>
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
namespace PartnerCentralSelling
{
namespace Model
{
  class ListResourceSnapshotJobsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotJobsResult() = default;
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An array of resource snapshot job summary objects. </p>
     */
    inline const Aws::Vector<ResourceSnapshotJobSummary>& GetResourceSnapshotJobSummaries() const { return m_resourceSnapshotJobSummaries; }
    template<typename ResourceSnapshotJobSummariesT = Aws::Vector<ResourceSnapshotJobSummary>>
    void SetResourceSnapshotJobSummaries(ResourceSnapshotJobSummariesT&& value) { m_resourceSnapshotJobSummariesHasBeenSet = true; m_resourceSnapshotJobSummaries = std::forward<ResourceSnapshotJobSummariesT>(value); }
    template<typename ResourceSnapshotJobSummariesT = Aws::Vector<ResourceSnapshotJobSummary>>
    ListResourceSnapshotJobsResult& WithResourceSnapshotJobSummaries(ResourceSnapshotJobSummariesT&& value) { SetResourceSnapshotJobSummaries(std::forward<ResourceSnapshotJobSummariesT>(value)); return *this;}
    template<typename ResourceSnapshotJobSummariesT = ResourceSnapshotJobSummary>
    ListResourceSnapshotJobsResult& AddResourceSnapshotJobSummaries(ResourceSnapshotJobSummariesT&& value) { m_resourceSnapshotJobSummariesHasBeenSet = true; m_resourceSnapshotJobSummaries.emplace_back(std::forward<ResourceSnapshotJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results. If there are no additional
     * results, this value is null. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceSnapshotJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceSnapshotJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceSnapshotJobSummary> m_resourceSnapshotJobSummaries;
    bool m_resourceSnapshotJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

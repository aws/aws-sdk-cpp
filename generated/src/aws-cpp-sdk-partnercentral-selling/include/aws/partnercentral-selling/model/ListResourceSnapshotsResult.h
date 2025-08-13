/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ResourceSnapshotSummary.h>
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
  class ListResourceSnapshotsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotsResult() = default;
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An array of resource snapshot summary objects. </p>
     */
    inline const Aws::Vector<ResourceSnapshotSummary>& GetResourceSnapshotSummaries() const { return m_resourceSnapshotSummaries; }
    template<typename ResourceSnapshotSummariesT = Aws::Vector<ResourceSnapshotSummary>>
    void SetResourceSnapshotSummaries(ResourceSnapshotSummariesT&& value) { m_resourceSnapshotSummariesHasBeenSet = true; m_resourceSnapshotSummaries = std::forward<ResourceSnapshotSummariesT>(value); }
    template<typename ResourceSnapshotSummariesT = Aws::Vector<ResourceSnapshotSummary>>
    ListResourceSnapshotsResult& WithResourceSnapshotSummaries(ResourceSnapshotSummariesT&& value) { SetResourceSnapshotSummaries(std::forward<ResourceSnapshotSummariesT>(value)); return *this;}
    template<typename ResourceSnapshotSummariesT = ResourceSnapshotSummary>
    ListResourceSnapshotsResult& AddResourceSnapshotSummaries(ResourceSnapshotSummariesT&& value) { m_resourceSnapshotSummariesHasBeenSet = true; m_resourceSnapshotSummaries.emplace_back(std::forward<ResourceSnapshotSummariesT>(value)); return *this; }
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
    ListResourceSnapshotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceSnapshotSummary> m_resourceSnapshotSummaries;
    bool m_resourceSnapshotSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

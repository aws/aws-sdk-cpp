/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/HarvestJob.h>
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
namespace MediaPackage
{
namespace Model
{
  class ListHarvestJobsResult
  {
  public:
    AWS_MEDIAPACKAGE_API ListHarvestJobsResult() = default;
    AWS_MEDIAPACKAGE_API ListHarvestJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGE_API ListHarvestJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of HarvestJob records.
     */
    inline const Aws::Vector<HarvestJob>& GetHarvestJobs() const { return m_harvestJobs; }
    template<typename HarvestJobsT = Aws::Vector<HarvestJob>>
    void SetHarvestJobs(HarvestJobsT&& value) { m_harvestJobsHasBeenSet = true; m_harvestJobs = std::forward<HarvestJobsT>(value); }
    template<typename HarvestJobsT = Aws::Vector<HarvestJob>>
    ListHarvestJobsResult& WithHarvestJobs(HarvestJobsT&& value) { SetHarvestJobs(std::forward<HarvestJobsT>(value)); return *this;}
    template<typename HarvestJobsT = HarvestJob>
    ListHarvestJobsResult& AddHarvestJobs(HarvestJobsT&& value) { m_harvestJobsHasBeenSet = true; m_harvestJobs.emplace_back(std::forward<HarvestJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHarvestJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHarvestJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HarvestJob> m_harvestJobs;
    bool m_harvestJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws

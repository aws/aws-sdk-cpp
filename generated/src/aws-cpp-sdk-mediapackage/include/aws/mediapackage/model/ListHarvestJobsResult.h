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
    AWS_MEDIAPACKAGE_API ListHarvestJobsResult();
    AWS_MEDIAPACKAGE_API ListHarvestJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGE_API ListHarvestJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of HarvestJob records.
     */
    inline const Aws::Vector<HarvestJob>& GetHarvestJobs() const{ return m_harvestJobs; }
    inline void SetHarvestJobs(const Aws::Vector<HarvestJob>& value) { m_harvestJobs = value; }
    inline void SetHarvestJobs(Aws::Vector<HarvestJob>&& value) { m_harvestJobs = std::move(value); }
    inline ListHarvestJobsResult& WithHarvestJobs(const Aws::Vector<HarvestJob>& value) { SetHarvestJobs(value); return *this;}
    inline ListHarvestJobsResult& WithHarvestJobs(Aws::Vector<HarvestJob>&& value) { SetHarvestJobs(std::move(value)); return *this;}
    inline ListHarvestJobsResult& AddHarvestJobs(const HarvestJob& value) { m_harvestJobs.push_back(value); return *this; }
    inline ListHarvestJobsResult& AddHarvestJobs(HarvestJob&& value) { m_harvestJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListHarvestJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHarvestJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHarvestJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListHarvestJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListHarvestJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListHarvestJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<HarvestJob> m_harvestJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws

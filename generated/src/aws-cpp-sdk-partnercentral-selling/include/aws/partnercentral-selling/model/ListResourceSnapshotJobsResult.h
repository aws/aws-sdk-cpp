/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotJobsResult();
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token to retrieve the next set of results. If there are no additional
     * results, this value is null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourceSnapshotJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceSnapshotJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceSnapshotJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of resource snapshot job summary objects. </p>
     */
    inline const Aws::Vector<ResourceSnapshotJobSummary>& GetResourceSnapshotJobSummaries() const{ return m_resourceSnapshotJobSummaries; }
    inline void SetResourceSnapshotJobSummaries(const Aws::Vector<ResourceSnapshotJobSummary>& value) { m_resourceSnapshotJobSummaries = value; }
    inline void SetResourceSnapshotJobSummaries(Aws::Vector<ResourceSnapshotJobSummary>&& value) { m_resourceSnapshotJobSummaries = std::move(value); }
    inline ListResourceSnapshotJobsResult& WithResourceSnapshotJobSummaries(const Aws::Vector<ResourceSnapshotJobSummary>& value) { SetResourceSnapshotJobSummaries(value); return *this;}
    inline ListResourceSnapshotJobsResult& WithResourceSnapshotJobSummaries(Aws::Vector<ResourceSnapshotJobSummary>&& value) { SetResourceSnapshotJobSummaries(std::move(value)); return *this;}
    inline ListResourceSnapshotJobsResult& AddResourceSnapshotJobSummaries(const ResourceSnapshotJobSummary& value) { m_resourceSnapshotJobSummaries.push_back(value); return *this; }
    inline ListResourceSnapshotJobsResult& AddResourceSnapshotJobSummaries(ResourceSnapshotJobSummary&& value) { m_resourceSnapshotJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourceSnapshotJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourceSnapshotJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourceSnapshotJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ResourceSnapshotJobSummary> m_resourceSnapshotJobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

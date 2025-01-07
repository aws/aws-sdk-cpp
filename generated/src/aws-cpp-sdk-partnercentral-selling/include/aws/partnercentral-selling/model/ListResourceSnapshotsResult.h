/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotsResult();
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token to retrieve the next set of results. If there are no additional
     * results, this value is null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourceSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of resource snapshot summary objects. </p>
     */
    inline const Aws::Vector<ResourceSnapshotSummary>& GetResourceSnapshotSummaries() const{ return m_resourceSnapshotSummaries; }
    inline void SetResourceSnapshotSummaries(const Aws::Vector<ResourceSnapshotSummary>& value) { m_resourceSnapshotSummaries = value; }
    inline void SetResourceSnapshotSummaries(Aws::Vector<ResourceSnapshotSummary>&& value) { m_resourceSnapshotSummaries = std::move(value); }
    inline ListResourceSnapshotsResult& WithResourceSnapshotSummaries(const Aws::Vector<ResourceSnapshotSummary>& value) { SetResourceSnapshotSummaries(value); return *this;}
    inline ListResourceSnapshotsResult& WithResourceSnapshotSummaries(Aws::Vector<ResourceSnapshotSummary>&& value) { SetResourceSnapshotSummaries(std::move(value)); return *this;}
    inline ListResourceSnapshotsResult& AddResourceSnapshotSummaries(const ResourceSnapshotSummary& value) { m_resourceSnapshotSummaries.push_back(value); return *this; }
    inline ListResourceSnapshotsResult& AddResourceSnapshotSummaries(ResourceSnapshotSummary&& value) { m_resourceSnapshotSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourceSnapshotsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourceSnapshotsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourceSnapshotsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ResourceSnapshotSummary> m_resourceSnapshotSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

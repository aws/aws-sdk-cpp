﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/LaunchPathSummary.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListLaunchPathsResult
  {
  public:
    AWS_SERVICECATALOG_API ListLaunchPathsResult();
    AWS_SERVICECATALOG_API ListLaunchPathsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListLaunchPathsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the launch path.</p>
     */
    inline const Aws::Vector<LaunchPathSummary>& GetLaunchPathSummaries() const{ return m_launchPathSummaries; }
    inline void SetLaunchPathSummaries(const Aws::Vector<LaunchPathSummary>& value) { m_launchPathSummaries = value; }
    inline void SetLaunchPathSummaries(Aws::Vector<LaunchPathSummary>&& value) { m_launchPathSummaries = std::move(value); }
    inline ListLaunchPathsResult& WithLaunchPathSummaries(const Aws::Vector<LaunchPathSummary>& value) { SetLaunchPathSummaries(value); return *this;}
    inline ListLaunchPathsResult& WithLaunchPathSummaries(Aws::Vector<LaunchPathSummary>&& value) { SetLaunchPathSummaries(std::move(value)); return *this;}
    inline ListLaunchPathsResult& AddLaunchPathSummaries(const LaunchPathSummary& value) { m_launchPathSummaries.push_back(value); return *this; }
    inline ListLaunchPathsResult& AddLaunchPathSummaries(LaunchPathSummary&& value) { m_launchPathSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ListLaunchPathsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListLaunchPathsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListLaunchPathsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLaunchPathsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLaunchPathsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLaunchPathsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LaunchPathSummary> m_launchPathSummaries;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

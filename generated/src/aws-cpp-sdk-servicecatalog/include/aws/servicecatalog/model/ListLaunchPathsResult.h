/**
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


    /**
     * <p>Information about the launch path.</p>
     */
    inline const Aws::Vector<LaunchPathSummary>& GetLaunchPathSummaries() const{ return m_launchPathSummaries; }

    /**
     * <p>Information about the launch path.</p>
     */
    inline void SetLaunchPathSummaries(const Aws::Vector<LaunchPathSummary>& value) { m_launchPathSummaries = value; }

    /**
     * <p>Information about the launch path.</p>
     */
    inline void SetLaunchPathSummaries(Aws::Vector<LaunchPathSummary>&& value) { m_launchPathSummaries = std::move(value); }

    /**
     * <p>Information about the launch path.</p>
     */
    inline ListLaunchPathsResult& WithLaunchPathSummaries(const Aws::Vector<LaunchPathSummary>& value) { SetLaunchPathSummaries(value); return *this;}

    /**
     * <p>Information about the launch path.</p>
     */
    inline ListLaunchPathsResult& WithLaunchPathSummaries(Aws::Vector<LaunchPathSummary>&& value) { SetLaunchPathSummaries(std::move(value)); return *this;}

    /**
     * <p>Information about the launch path.</p>
     */
    inline ListLaunchPathsResult& AddLaunchPathSummaries(const LaunchPathSummary& value) { m_launchPathSummaries.push_back(value); return *this; }

    /**
     * <p>Information about the launch path.</p>
     */
    inline ListLaunchPathsResult& AddLaunchPathSummaries(LaunchPathSummary&& value) { m_launchPathSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListLaunchPathsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListLaunchPathsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListLaunchPathsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<LaunchPathSummary> m_launchPathSummaries;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

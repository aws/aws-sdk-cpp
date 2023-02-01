/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhub-config/model/HomeRegionControl.h>
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
namespace MigrationHubConfig
{
namespace Model
{
  class DescribeHomeRegionControlsResult
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API DescribeHomeRegionControlsResult();
    AWS_MIGRATIONHUBCONFIG_API DescribeHomeRegionControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBCONFIG_API DescribeHomeRegionControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that contains your <code>HomeRegionControl</code> objects.</p>
     */
    inline const Aws::Vector<HomeRegionControl>& GetHomeRegionControls() const{ return m_homeRegionControls; }

    /**
     * <p>An array that contains your <code>HomeRegionControl</code> objects.</p>
     */
    inline void SetHomeRegionControls(const Aws::Vector<HomeRegionControl>& value) { m_homeRegionControls = value; }

    /**
     * <p>An array that contains your <code>HomeRegionControl</code> objects.</p>
     */
    inline void SetHomeRegionControls(Aws::Vector<HomeRegionControl>&& value) { m_homeRegionControls = std::move(value); }

    /**
     * <p>An array that contains your <code>HomeRegionControl</code> objects.</p>
     */
    inline DescribeHomeRegionControlsResult& WithHomeRegionControls(const Aws::Vector<HomeRegionControl>& value) { SetHomeRegionControls(value); return *this;}

    /**
     * <p>An array that contains your <code>HomeRegionControl</code> objects.</p>
     */
    inline DescribeHomeRegionControlsResult& WithHomeRegionControls(Aws::Vector<HomeRegionControl>&& value) { SetHomeRegionControls(std::move(value)); return *this;}

    /**
     * <p>An array that contains your <code>HomeRegionControl</code> objects.</p>
     */
    inline DescribeHomeRegionControlsResult& AddHomeRegionControls(const HomeRegionControl& value) { m_homeRegionControls.push_back(value); return *this; }

    /**
     * <p>An array that contains your <code>HomeRegionControl</code> objects.</p>
     */
    inline DescribeHomeRegionControlsResult& AddHomeRegionControls(HomeRegionControl&& value) { m_homeRegionControls.push_back(std::move(value)); return *this; }


    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline DescribeHomeRegionControlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline DescribeHomeRegionControlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline DescribeHomeRegionControlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<HomeRegionControl> m_homeRegionControls;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws

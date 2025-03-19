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
    AWS_MIGRATIONHUBCONFIG_API DescribeHomeRegionControlsResult() = default;
    AWS_MIGRATIONHUBCONFIG_API DescribeHomeRegionControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBCONFIG_API DescribeHomeRegionControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains your <code>HomeRegionControl</code> objects.</p>
     */
    inline const Aws::Vector<HomeRegionControl>& GetHomeRegionControls() const { return m_homeRegionControls; }
    template<typename HomeRegionControlsT = Aws::Vector<HomeRegionControl>>
    void SetHomeRegionControls(HomeRegionControlsT&& value) { m_homeRegionControlsHasBeenSet = true; m_homeRegionControls = std::forward<HomeRegionControlsT>(value); }
    template<typename HomeRegionControlsT = Aws::Vector<HomeRegionControl>>
    DescribeHomeRegionControlsResult& WithHomeRegionControls(HomeRegionControlsT&& value) { SetHomeRegionControls(std::forward<HomeRegionControlsT>(value)); return *this;}
    template<typename HomeRegionControlsT = HomeRegionControl>
    DescribeHomeRegionControlsResult& AddHomeRegionControls(HomeRegionControlsT&& value) { m_homeRegionControlsHasBeenSet = true; m_homeRegionControls.emplace_back(std::forward<HomeRegionControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeHomeRegionControlsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHomeRegionControlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HomeRegionControl> m_homeRegionControls;
    bool m_homeRegionControlsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws

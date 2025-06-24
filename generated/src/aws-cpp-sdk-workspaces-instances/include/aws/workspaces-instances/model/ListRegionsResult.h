/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/Region.h>
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
namespace WorkspacesInstances
{
namespace Model
{
  /**
   * <p>Contains the list of supported AWS regions for WorkSpaces
   * Instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ListRegionsResponse">AWS
   * API Reference</a></p>
   */
  class ListRegionsResult
  {
  public:
    AWS_WORKSPACESINSTANCES_API ListRegionsResult() = default;
    AWS_WORKSPACESINSTANCES_API ListRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESINSTANCES_API ListRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Collection of AWS regions supported by WorkSpaces Instances.</p>
     */
    inline const Aws::Vector<Region>& GetRegions() const { return m_regions; }
    template<typename RegionsT = Aws::Vector<Region>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Region>>
    ListRegionsResult& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Region>
    ListRegionsResult& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for retrieving additional regions if the result set is paginated.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRegionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRegionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Region> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class ListServiceIndexesRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API ListServiceIndexesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceIndexes"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of Amazon Web Services Regions to include in the search for indexes.
     * If not specified, indexes from all Regions are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    ListServiceIndexesRequest& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    ListServiceIndexesRequest& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of index results to return in a single response. Valid
     * values are between <code>1</code> and <code>100</code>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServiceIndexesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token from a previous <code>ListServiceIndexes</code>
     * response. Use this token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceIndexesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws

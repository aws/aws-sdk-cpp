/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>Information about the number of results that match the query. At this time,
   * Amazon Web Services Resource Explorer doesn't count more than 1,000 matches for
   * any query. This structure provides information about whether the query exceeded
   * this limit.</p> <p>This field is included in every page when you paginate the
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ResourceCount">AWS
   * API Reference</a></p>
   */
  class ResourceCount
  {
  public:
    AWS_RESOURCEEXPLORER2_API ResourceCount();
    AWS_RESOURCEEXPLORER2_API ResourceCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API ResourceCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the <code>TotalResources</code> value represents an
     * exhaustive count of search results.</p> <ul> <li> <p>If <code>True</code>, it
     * indicates that the search was exhaustive. Every resource that matches the query
     * was counted.</p> </li> <li> <p>If <code>False</code>, then the search reached
     * the limit of 1,000 matching results, and stopped counting.</p> </li> </ul>
     */
    inline bool GetComplete() const{ return m_complete; }

    /**
     * <p>Indicates whether the <code>TotalResources</code> value represents an
     * exhaustive count of search results.</p> <ul> <li> <p>If <code>True</code>, it
     * indicates that the search was exhaustive. Every resource that matches the query
     * was counted.</p> </li> <li> <p>If <code>False</code>, then the search reached
     * the limit of 1,000 matching results, and stopped counting.</p> </li> </ul>
     */
    inline bool CompleteHasBeenSet() const { return m_completeHasBeenSet; }

    /**
     * <p>Indicates whether the <code>TotalResources</code> value represents an
     * exhaustive count of search results.</p> <ul> <li> <p>If <code>True</code>, it
     * indicates that the search was exhaustive. Every resource that matches the query
     * was counted.</p> </li> <li> <p>If <code>False</code>, then the search reached
     * the limit of 1,000 matching results, and stopped counting.</p> </li> </ul>
     */
    inline void SetComplete(bool value) { m_completeHasBeenSet = true; m_complete = value; }

    /**
     * <p>Indicates whether the <code>TotalResources</code> value represents an
     * exhaustive count of search results.</p> <ul> <li> <p>If <code>True</code>, it
     * indicates that the search was exhaustive. Every resource that matches the query
     * was counted.</p> </li> <li> <p>If <code>False</code>, then the search reached
     * the limit of 1,000 matching results, and stopped counting.</p> </li> </ul>
     */
    inline ResourceCount& WithComplete(bool value) { SetComplete(value); return *this;}


    /**
     * <p>The number of resources that match the search query. This value can't exceed
     * 1,000. If there are more than 1,000 resources that match the query, then only
     * 1,000 are counted and the <code>Complete</code> field is set to false. We
     * recommend that you refine your query to return a smaller number of results.</p>
     */
    inline long long GetTotalResources() const{ return m_totalResources; }

    /**
     * <p>The number of resources that match the search query. This value can't exceed
     * 1,000. If there are more than 1,000 resources that match the query, then only
     * 1,000 are counted and the <code>Complete</code> field is set to false. We
     * recommend that you refine your query to return a smaller number of results.</p>
     */
    inline bool TotalResourcesHasBeenSet() const { return m_totalResourcesHasBeenSet; }

    /**
     * <p>The number of resources that match the search query. This value can't exceed
     * 1,000. If there are more than 1,000 resources that match the query, then only
     * 1,000 are counted and the <code>Complete</code> field is set to false. We
     * recommend that you refine your query to return a smaller number of results.</p>
     */
    inline void SetTotalResources(long long value) { m_totalResourcesHasBeenSet = true; m_totalResources = value; }

    /**
     * <p>The number of resources that match the search query. This value can't exceed
     * 1,000. If there are more than 1,000 resources that match the query, then only
     * 1,000 are counted and the <code>Complete</code> field is set to false. We
     * recommend that you refine your query to return a smaller number of results.</p>
     */
    inline ResourceCount& WithTotalResources(long long value) { SetTotalResources(value); return *this;}

  private:

    bool m_complete;
    bool m_completeHasBeenSet = false;

    long long m_totalResources;
    bool m_totalResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws

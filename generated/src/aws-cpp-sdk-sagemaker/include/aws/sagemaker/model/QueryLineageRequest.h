/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Direction.h>
#include <aws/sagemaker/model/QueryFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class QueryLineageRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API QueryLineageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryLineage"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of resource Amazon Resource Name (ARN) that represent the starting
     * point for your lineage query.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStartArns() const { return m_startArns; }
    inline bool StartArnsHasBeenSet() const { return m_startArnsHasBeenSet; }
    template<typename StartArnsT = Aws::Vector<Aws::String>>
    void SetStartArns(StartArnsT&& value) { m_startArnsHasBeenSet = true; m_startArns = std::forward<StartArnsT>(value); }
    template<typename StartArnsT = Aws::Vector<Aws::String>>
    QueryLineageRequest& WithStartArns(StartArnsT&& value) { SetStartArns(std::forward<StartArnsT>(value)); return *this;}
    template<typename StartArnsT = Aws::String>
    QueryLineageRequest& AddStartArns(StartArnsT&& value) { m_startArnsHasBeenSet = true; m_startArns.emplace_back(std::forward<StartArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Associations between lineage entities have a direction. This parameter
     * determines the direction from the StartArn(s) that the query traverses.</p>
     */
    inline Direction GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(Direction value) { m_directionHasBeenSet = true; m_direction = value; }
    inline QueryLineageRequest& WithDirection(Direction value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Setting this value to <code>True</code> retrieves not only the entities of
     * interest but also the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking-entities.html">Associations</a>
     * and lineage entities on the path. Set to <code>False</code> to only return
     * lineage entities that match your query.</p>
     */
    inline bool GetIncludeEdges() const { return m_includeEdges; }
    inline bool IncludeEdgesHasBeenSet() const { return m_includeEdgesHasBeenSet; }
    inline void SetIncludeEdges(bool value) { m_includeEdgesHasBeenSet = true; m_includeEdges = value; }
    inline QueryLineageRequest& WithIncludeEdges(bool value) { SetIncludeEdges(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of filtering parameters that allow you to specify which entities should
     * be returned.</p> <ul> <li> <p>Properties - Key-value pairs to match on the
     * lineage entities' properties.</p> </li> <li> <p>LineageTypes - A set of lineage
     * entity types to match on. For example: <code>TrialComponent</code>,
     * <code>Artifact</code>, or <code>Context</code>.</p> </li> <li> <p>CreatedBefore
     * - Filter entities created before this date.</p> </li> <li> <p>ModifiedBefore -
     * Filter entities modified before this date.</p> </li> <li> <p>ModifiedAfter -
     * Filter entities modified after this date.</p> </li> </ul>
     */
    inline const QueryFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = QueryFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = QueryFilters>
    QueryLineageRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum depth in lineage relationships from the <code>StartArns</code>
     * that are traversed. Depth is a measure of the number of
     * <code>Associations</code> from the <code>StartArn</code> entity to the matched
     * results.</p>
     */
    inline int GetMaxDepth() const { return m_maxDepth; }
    inline bool MaxDepthHasBeenSet() const { return m_maxDepthHasBeenSet; }
    inline void SetMaxDepth(int value) { m_maxDepthHasBeenSet = true; m_maxDepth = value; }
    inline QueryLineageRequest& WithMaxDepth(int value) { SetMaxDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the number of vertices in the results. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline QueryLineageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the number of vertices in the request. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    QueryLineageRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_startArns;
    bool m_startArnsHasBeenSet = false;

    Direction m_direction{Direction::NOT_SET};
    bool m_directionHasBeenSet = false;

    bool m_includeEdges{false};
    bool m_includeEdgesHasBeenSet = false;

    QueryFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxDepth{0};
    bool m_maxDepthHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

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
    AWS_SAGEMAKER_API QueryLineageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryLineage"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of resource Amazon Resource Name (ARN) that represent the starting
     * point for your lineage query.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStartArns() const{ return m_startArns; }

    /**
     * <p>A list of resource Amazon Resource Name (ARN) that represent the starting
     * point for your lineage query.</p>
     */
    inline bool StartArnsHasBeenSet() const { return m_startArnsHasBeenSet; }

    /**
     * <p>A list of resource Amazon Resource Name (ARN) that represent the starting
     * point for your lineage query.</p>
     */
    inline void SetStartArns(const Aws::Vector<Aws::String>& value) { m_startArnsHasBeenSet = true; m_startArns = value; }

    /**
     * <p>A list of resource Amazon Resource Name (ARN) that represent the starting
     * point for your lineage query.</p>
     */
    inline void SetStartArns(Aws::Vector<Aws::String>&& value) { m_startArnsHasBeenSet = true; m_startArns = std::move(value); }

    /**
     * <p>A list of resource Amazon Resource Name (ARN) that represent the starting
     * point for your lineage query.</p>
     */
    inline QueryLineageRequest& WithStartArns(const Aws::Vector<Aws::String>& value) { SetStartArns(value); return *this;}

    /**
     * <p>A list of resource Amazon Resource Name (ARN) that represent the starting
     * point for your lineage query.</p>
     */
    inline QueryLineageRequest& WithStartArns(Aws::Vector<Aws::String>&& value) { SetStartArns(std::move(value)); return *this;}

    /**
     * <p>A list of resource Amazon Resource Name (ARN) that represent the starting
     * point for your lineage query.</p>
     */
    inline QueryLineageRequest& AddStartArns(const Aws::String& value) { m_startArnsHasBeenSet = true; m_startArns.push_back(value); return *this; }

    /**
     * <p>A list of resource Amazon Resource Name (ARN) that represent the starting
     * point for your lineage query.</p>
     */
    inline QueryLineageRequest& AddStartArns(Aws::String&& value) { m_startArnsHasBeenSet = true; m_startArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of resource Amazon Resource Name (ARN) that represent the starting
     * point for your lineage query.</p>
     */
    inline QueryLineageRequest& AddStartArns(const char* value) { m_startArnsHasBeenSet = true; m_startArns.push_back(value); return *this; }


    /**
     * <p>Associations between lineage entities have a direction. This parameter
     * determines the direction from the StartArn(s) that the query traverses.</p>
     */
    inline const Direction& GetDirection() const{ return m_direction; }

    /**
     * <p>Associations between lineage entities have a direction. This parameter
     * determines the direction from the StartArn(s) that the query traverses.</p>
     */
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }

    /**
     * <p>Associations between lineage entities have a direction. This parameter
     * determines the direction from the StartArn(s) that the query traverses.</p>
     */
    inline void SetDirection(const Direction& value) { m_directionHasBeenSet = true; m_direction = value; }

    /**
     * <p>Associations between lineage entities have a direction. This parameter
     * determines the direction from the StartArn(s) that the query traverses.</p>
     */
    inline void SetDirection(Direction&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }

    /**
     * <p>Associations between lineage entities have a direction. This parameter
     * determines the direction from the StartArn(s) that the query traverses.</p>
     */
    inline QueryLineageRequest& WithDirection(const Direction& value) { SetDirection(value); return *this;}

    /**
     * <p>Associations between lineage entities have a direction. This parameter
     * determines the direction from the StartArn(s) that the query traverses.</p>
     */
    inline QueryLineageRequest& WithDirection(Direction&& value) { SetDirection(std::move(value)); return *this;}


    /**
     * <p> Setting this value to <code>True</code> retrieves not only the entities of
     * interest but also the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking-entities.html">Associations</a>
     * and lineage entities on the path. Set to <code>False</code> to only return
     * lineage entities that match your query.</p>
     */
    inline bool GetIncludeEdges() const{ return m_includeEdges; }

    /**
     * <p> Setting this value to <code>True</code> retrieves not only the entities of
     * interest but also the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking-entities.html">Associations</a>
     * and lineage entities on the path. Set to <code>False</code> to only return
     * lineage entities that match your query.</p>
     */
    inline bool IncludeEdgesHasBeenSet() const { return m_includeEdgesHasBeenSet; }

    /**
     * <p> Setting this value to <code>True</code> retrieves not only the entities of
     * interest but also the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking-entities.html">Associations</a>
     * and lineage entities on the path. Set to <code>False</code> to only return
     * lineage entities that match your query.</p>
     */
    inline void SetIncludeEdges(bool value) { m_includeEdgesHasBeenSet = true; m_includeEdges = value; }

    /**
     * <p> Setting this value to <code>True</code> retrieves not only the entities of
     * interest but also the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking-entities.html">Associations</a>
     * and lineage entities on the path. Set to <code>False</code> to only return
     * lineage entities that match your query.</p>
     */
    inline QueryLineageRequest& WithIncludeEdges(bool value) { SetIncludeEdges(value); return *this;}


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
    inline const QueryFilters& GetFilters() const{ return m_filters; }

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
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

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
    inline void SetFilters(const QueryFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

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
    inline void SetFilters(QueryFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

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
    inline QueryLineageRequest& WithFilters(const QueryFilters& value) { SetFilters(value); return *this;}

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
    inline QueryLineageRequest& WithFilters(QueryFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The maximum depth in lineage relationships from the <code>StartArns</code>
     * that are traversed. Depth is a measure of the number of
     * <code>Associations</code> from the <code>StartArn</code> entity to the matched
     * results.</p>
     */
    inline int GetMaxDepth() const{ return m_maxDepth; }

    /**
     * <p>The maximum depth in lineage relationships from the <code>StartArns</code>
     * that are traversed. Depth is a measure of the number of
     * <code>Associations</code> from the <code>StartArn</code> entity to the matched
     * results.</p>
     */
    inline bool MaxDepthHasBeenSet() const { return m_maxDepthHasBeenSet; }

    /**
     * <p>The maximum depth in lineage relationships from the <code>StartArns</code>
     * that are traversed. Depth is a measure of the number of
     * <code>Associations</code> from the <code>StartArn</code> entity to the matched
     * results.</p>
     */
    inline void SetMaxDepth(int value) { m_maxDepthHasBeenSet = true; m_maxDepth = value; }

    /**
     * <p>The maximum depth in lineage relationships from the <code>StartArns</code>
     * that are traversed. Depth is a measure of the number of
     * <code>Associations</code> from the <code>StartArn</code> entity to the matched
     * results.</p>
     */
    inline QueryLineageRequest& WithMaxDepth(int value) { SetMaxDepth(value); return *this;}


    /**
     * <p>Limits the number of vertices in the results. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Limits the number of vertices in the results. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Limits the number of vertices in the results. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Limits the number of vertices in the results. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline QueryLineageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Limits the number of vertices in the request. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Limits the number of vertices in the request. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Limits the number of vertices in the request. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Limits the number of vertices in the request. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Limits the number of vertices in the request. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Limits the number of vertices in the request. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline QueryLineageRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Limits the number of vertices in the request. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline QueryLineageRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Limits the number of vertices in the request. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline QueryLineageRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_startArns;
    bool m_startArnsHasBeenSet = false;

    Direction m_direction;
    bool m_directionHasBeenSet = false;

    bool m_includeEdges;
    bool m_includeEdgesHasBeenSet = false;

    QueryFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxDepth;
    bool m_maxDepthHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

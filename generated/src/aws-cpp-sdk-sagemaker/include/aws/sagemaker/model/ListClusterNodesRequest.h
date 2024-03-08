/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ClusterSortBy.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListClusterNodesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListClusterNodesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusterNodes"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which you want to retrieve the list of nodes.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which you want to retrieve the list of nodes.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which you want to retrieve the list of nodes.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which you want to retrieve the list of nodes.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which you want to retrieve the list of nodes.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which you want to retrieve the list of nodes.</p>
     */
    inline ListClusterNodesRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which you want to retrieve the list of nodes.</p>
     */
    inline ListClusterNodesRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which you want to retrieve the list of nodes.</p>
     */
    inline ListClusterNodesRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created after the
     * specified time. Timestamps are formatted according to the ISO 8601 standard.
     * </p> <p>Acceptable formats include:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (UTC), for example,
     * <code>2014-10-01T20:30:00.000Z</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (with offset), for example,
     * <code>2014-10-01T12:30:00.000-08:00</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DD</code>, for example, <code>2014-10-01</code> </p> </li> <li>
     * <p>Unix time in seconds, for example, <code>1412195400</code>. This is also
     * referred to as Unix Epoch time and represents the number of seconds since
     * midnight, January 1, 1970 UTC.</p> </li> </ul> <p>For more information about the
     * timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created after the
     * specified time. Timestamps are formatted according to the ISO 8601 standard.
     * </p> <p>Acceptable formats include:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (UTC), for example,
     * <code>2014-10-01T20:30:00.000Z</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (with offset), for example,
     * <code>2014-10-01T12:30:00.000-08:00</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DD</code>, for example, <code>2014-10-01</code> </p> </li> <li>
     * <p>Unix time in seconds, for example, <code>1412195400</code>. This is also
     * referred to as Unix Epoch time and represents the number of seconds since
     * midnight, January 1, 1970 UTC.</p> </li> </ul> <p>For more information about the
     * timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created after the
     * specified time. Timestamps are formatted according to the ISO 8601 standard.
     * </p> <p>Acceptable formats include:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (UTC), for example,
     * <code>2014-10-01T20:30:00.000Z</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (with offset), for example,
     * <code>2014-10-01T12:30:00.000-08:00</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DD</code>, for example, <code>2014-10-01</code> </p> </li> <li>
     * <p>Unix time in seconds, for example, <code>1412195400</code>. This is also
     * referred to as Unix Epoch time and represents the number of seconds since
     * midnight, January 1, 1970 UTC.</p> </li> </ul> <p>For more information about the
     * timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created after the
     * specified time. Timestamps are formatted according to the ISO 8601 standard.
     * </p> <p>Acceptable formats include:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (UTC), for example,
     * <code>2014-10-01T20:30:00.000Z</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (with offset), for example,
     * <code>2014-10-01T12:30:00.000-08:00</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DD</code>, for example, <code>2014-10-01</code> </p> </li> <li>
     * <p>Unix time in seconds, for example, <code>1412195400</code>. This is also
     * referred to as Unix Epoch time and represents the number of seconds since
     * midnight, January 1, 1970 UTC.</p> </li> </ul> <p>For more information about the
     * timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created after the
     * specified time. Timestamps are formatted according to the ISO 8601 standard.
     * </p> <p>Acceptable formats include:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (UTC), for example,
     * <code>2014-10-01T20:30:00.000Z</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (with offset), for example,
     * <code>2014-10-01T12:30:00.000-08:00</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DD</code>, for example, <code>2014-10-01</code> </p> </li> <li>
     * <p>Unix time in seconds, for example, <code>1412195400</code>. This is also
     * referred to as Unix Epoch time and represents the number of seconds since
     * midnight, January 1, 1970 UTC.</p> </li> </ul> <p>For more information about the
     * timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline ListClusterNodesRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created after the
     * specified time. Timestamps are formatted according to the ISO 8601 standard.
     * </p> <p>Acceptable formats include:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (UTC), for example,
     * <code>2014-10-01T20:30:00.000Z</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (with offset), for example,
     * <code>2014-10-01T12:30:00.000-08:00</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DD</code>, for example, <code>2014-10-01</code> </p> </li> <li>
     * <p>Unix time in seconds, for example, <code>1412195400</code>. This is also
     * referred to as Unix Epoch time and represents the number of seconds since
     * midnight, January 1, 1970 UTC.</p> </li> </ul> <p>For more information about the
     * timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline ListClusterNodesRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created before
     * the specified time. The acceptable formats are the same as the timestamp formats
     * for <code>CreationTimeAfter</code>. For more information about the timestamp
     * format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created before
     * the specified time. The acceptable formats are the same as the timestamp formats
     * for <code>CreationTimeAfter</code>. For more information about the timestamp
     * format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created before
     * the specified time. The acceptable formats are the same as the timestamp formats
     * for <code>CreationTimeAfter</code>. For more information about the timestamp
     * format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created before
     * the specified time. The acceptable formats are the same as the timestamp formats
     * for <code>CreationTimeAfter</code>. For more information about the timestamp
     * format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created before
     * the specified time. The acceptable formats are the same as the timestamp formats
     * for <code>CreationTimeAfter</code>. For more information about the timestamp
     * format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline ListClusterNodesRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created before
     * the specified time. The acceptable formats are the same as the timestamp formats
     * for <code>CreationTimeAfter</code>. For more information about the timestamp
     * format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline ListClusterNodesRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns the instance groups whose name contain a specified
     * string.</p>
     */
    inline const Aws::String& GetInstanceGroupNameContains() const{ return m_instanceGroupNameContains; }

    /**
     * <p>A filter that returns the instance groups whose name contain a specified
     * string.</p>
     */
    inline bool InstanceGroupNameContainsHasBeenSet() const { return m_instanceGroupNameContainsHasBeenSet; }

    /**
     * <p>A filter that returns the instance groups whose name contain a specified
     * string.</p>
     */
    inline void SetInstanceGroupNameContains(const Aws::String& value) { m_instanceGroupNameContainsHasBeenSet = true; m_instanceGroupNameContains = value; }

    /**
     * <p>A filter that returns the instance groups whose name contain a specified
     * string.</p>
     */
    inline void SetInstanceGroupNameContains(Aws::String&& value) { m_instanceGroupNameContainsHasBeenSet = true; m_instanceGroupNameContains = std::move(value); }

    /**
     * <p>A filter that returns the instance groups whose name contain a specified
     * string.</p>
     */
    inline void SetInstanceGroupNameContains(const char* value) { m_instanceGroupNameContainsHasBeenSet = true; m_instanceGroupNameContains.assign(value); }

    /**
     * <p>A filter that returns the instance groups whose name contain a specified
     * string.</p>
     */
    inline ListClusterNodesRequest& WithInstanceGroupNameContains(const Aws::String& value) { SetInstanceGroupNameContains(value); return *this;}

    /**
     * <p>A filter that returns the instance groups whose name contain a specified
     * string.</p>
     */
    inline ListClusterNodesRequest& WithInstanceGroupNameContains(Aws::String&& value) { SetInstanceGroupNameContains(std::move(value)); return *this;}

    /**
     * <p>A filter that returns the instance groups whose name contain a specified
     * string.</p>
     */
    inline ListClusterNodesRequest& WithInstanceGroupNameContains(const char* value) { SetInstanceGroupNameContains(value); return *this;}


    /**
     * <p>The maximum number of nodes to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of nodes to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of nodes to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of nodes to return in the response.</p>
     */
    inline ListClusterNodesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the result of the previous <code>ListClusterNodes</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of cluster nodes, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListClusterNodes</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of cluster nodes, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListClusterNodes</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of cluster nodes, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListClusterNodes</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of cluster nodes, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListClusterNodes</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of cluster nodes, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListClusterNodes</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of cluster nodes, use the token in the next request.</p>
     */
    inline ListClusterNodesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListClusterNodes</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of cluster nodes, use the token in the next request.</p>
     */
    inline ListClusterNodesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListClusterNodes</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of cluster nodes, use the token in the next request.</p>
     */
    inline ListClusterNodesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The field by which to sort results. The default value is
     * <code>CREATION_TIME</code>.</p>
     */
    inline const ClusterSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field by which to sort results. The default value is
     * <code>CREATION_TIME</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field by which to sort results. The default value is
     * <code>CREATION_TIME</code>.</p>
     */
    inline void SetSortBy(const ClusterSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field by which to sort results. The default value is
     * <code>CREATION_TIME</code>.</p>
     */
    inline void SetSortBy(ClusterSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field by which to sort results. The default value is
     * <code>CREATION_TIME</code>.</p>
     */
    inline ListClusterNodesRequest& WithSortBy(const ClusterSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field by which to sort results. The default value is
     * <code>CREATION_TIME</code>.</p>
     */
    inline ListClusterNodesRequest& WithSortBy(ClusterSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for results. The default value is <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for results. The default value is <code>Ascending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for results. The default value is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for results. The default value is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for results. The default value is <code>Ascending</code>.</p>
     */
    inline ListClusterNodesRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default value is <code>Ascending</code>.</p>
     */
    inline ListClusterNodesRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::String m_instanceGroupNameContains;
    bool m_instanceGroupNameContainsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ClusterSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

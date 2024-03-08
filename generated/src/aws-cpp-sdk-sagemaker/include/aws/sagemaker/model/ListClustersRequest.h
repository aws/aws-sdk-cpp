/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListClustersRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusters"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Set a start time for the time range during which you want to list SageMaker
     * HyperPod clusters. Timestamps are formatted according to the ISO 8601 standard.
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
     * <p>Set a start time for the time range during which you want to list SageMaker
     * HyperPod clusters. Timestamps are formatted according to the ISO 8601 standard.
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
     * <p>Set a start time for the time range during which you want to list SageMaker
     * HyperPod clusters. Timestamps are formatted according to the ISO 8601 standard.
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
     * <p>Set a start time for the time range during which you want to list SageMaker
     * HyperPod clusters. Timestamps are formatted according to the ISO 8601 standard.
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
     * <p>Set a start time for the time range during which you want to list SageMaker
     * HyperPod clusters. Timestamps are formatted according to the ISO 8601 standard.
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
    inline ListClustersRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Set a start time for the time range during which you want to list SageMaker
     * HyperPod clusters. Timestamps are formatted according to the ISO 8601 standard.
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
    inline ListClustersRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Set an end time for the time range during which you want to list SageMaker
     * HyperPod clusters. A filter that returns nodes in a SageMaker HyperPod cluster
     * created before the specified time. The acceptable formats are the same as the
     * timestamp formats for <code>CreationTimeAfter</code>. For more information about
     * the timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Set an end time for the time range during which you want to list SageMaker
     * HyperPod clusters. A filter that returns nodes in a SageMaker HyperPod cluster
     * created before the specified time. The acceptable formats are the same as the
     * timestamp formats for <code>CreationTimeAfter</code>. For more information about
     * the timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Set an end time for the time range during which you want to list SageMaker
     * HyperPod clusters. A filter that returns nodes in a SageMaker HyperPod cluster
     * created before the specified time. The acceptable formats are the same as the
     * timestamp formats for <code>CreationTimeAfter</code>. For more information about
     * the timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Set an end time for the time range during which you want to list SageMaker
     * HyperPod clusters. A filter that returns nodes in a SageMaker HyperPod cluster
     * created before the specified time. The acceptable formats are the same as the
     * timestamp formats for <code>CreationTimeAfter</code>. For more information about
     * the timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Set an end time for the time range during which you want to list SageMaker
     * HyperPod clusters. A filter that returns nodes in a SageMaker HyperPod cluster
     * created before the specified time. The acceptable formats are the same as the
     * timestamp formats for <code>CreationTimeAfter</code>. For more information about
     * the timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline ListClustersRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Set an end time for the time range during which you want to list SageMaker
     * HyperPod clusters. A filter that returns nodes in a SageMaker HyperPod cluster
     * created before the specified time. The acceptable formats are the same as the
     * timestamp formats for <code>CreationTimeAfter</code>. For more information about
     * the timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline ListClustersRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Set the maximum number of SageMaker HyperPod clusters to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Set the maximum number of SageMaker HyperPod clusters to list.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Set the maximum number of SageMaker HyperPod clusters to list.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Set the maximum number of SageMaker HyperPod clusters to list.</p>
     */
    inline ListClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Set the maximum number of instances to print in the list.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Set the maximum number of instances to print in the list.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Set the maximum number of instances to print in the list.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Set the maximum number of instances to print in the list.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Set the maximum number of instances to print in the list.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Set the maximum number of instances to print in the list.</p>
     */
    inline ListClustersRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Set the maximum number of instances to print in the list.</p>
     */
    inline ListClustersRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Set the maximum number of instances to print in the list.</p>
     */
    inline ListClustersRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>Set the next token to retrieve the list of SageMaker HyperPod clusters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Set the next token to retrieve the list of SageMaker HyperPod clusters.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Set the next token to retrieve the list of SageMaker HyperPod clusters.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Set the next token to retrieve the list of SageMaker HyperPod clusters.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Set the next token to retrieve the list of SageMaker HyperPod clusters.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Set the next token to retrieve the list of SageMaker HyperPod clusters.</p>
     */
    inline ListClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Set the next token to retrieve the list of SageMaker HyperPod clusters.</p>
     */
    inline ListClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Set the next token to retrieve the list of SageMaker HyperPod clusters.</p>
     */
    inline ListClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListClustersRequest& WithSortBy(const ClusterSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field by which to sort results. The default value is
     * <code>CREATION_TIME</code>.</p>
     */
    inline ListClustersRequest& WithSortBy(ClusterSortBy&& value) { SetSortBy(std::move(value)); return *this;}


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
    inline ListClustersRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default value is <code>Ascending</code>.</p>
     */
    inline ListClustersRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

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

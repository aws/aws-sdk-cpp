/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {
namespace Model {

/**
 */
class ListRecordsRequest : public SageMakerFeatureStoreRuntimeRequest {
 public:
  AWS_SAGEMAKERFEATURESTORERUNTIME_API ListRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRecords"; }

  AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the feature group to list records
   * from.</p>
   */
  inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
  inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
  template <typename FeatureGroupNameT = Aws::String>
  void SetFeatureGroupName(FeatureGroupNameT&& value) {
    m_featureGroupNameHasBeenSet = true;
    m_featureGroupName = std::forward<FeatureGroupNameT>(value);
  }
  template <typename FeatureGroupNameT = Aws::String>
  ListRecordsRequest& WithFeatureGroupName(FeatureGroupNameT&& value) {
    SetFeatureGroupName(std::forward<FeatureGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of record identifiers to return in a single page of
   * results. For the <code>InMemory</code> tier, this value is a hint and not a
   * strict requirement. The response may contain more or fewer results than the
   * specified <code>MaxResults</code>.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListRecordsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to resume pagination of <code>ListRecords</code> results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRecordsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If set to <code>true</code>, the result includes records that have been soft
   * deleted.</p>
   */
  inline bool GetIncludeSoftDeletedRecords() const { return m_includeSoftDeletedRecords; }
  inline bool IncludeSoftDeletedRecordsHasBeenSet() const { return m_includeSoftDeletedRecordsHasBeenSet; }
  inline void SetIncludeSoftDeletedRecords(bool value) {
    m_includeSoftDeletedRecordsHasBeenSet = true;
    m_includeSoftDeletedRecords = value;
  }
  inline ListRecordsRequest& WithIncludeSoftDeletedRecords(bool value) {
    SetIncludeSoftDeletedRecords(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_featureGroupName;

  int m_maxResults{0};

  Aws::String m_nextToken;

  bool m_includeSoftDeletedRecords{false};
  bool m_featureGroupNameHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_includeSoftDeletedRecordsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws

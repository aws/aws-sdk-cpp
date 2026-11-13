/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class ListClusterExtensionsRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API ListClusterExtensionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListClusterExtensions"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster whose
   * extensions you want to list.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  ListClusterExtensionsRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of extensions to return in the response. If you don't
   * specify a value, SageMaker HyperPod returns up to 100 extensions.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListClusterExtensionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the result of the previous <code>ListClusterExtensions</code> request was
   * truncated, the response includes a <code>NextToken</code>. To retrieve the next
   * set of extensions, use the token in the next request. When you use the
   * <code>CreationTimeAfter</code> or <code>CreationTimeBefore</code> filters, a
   * response can contain fewer extensions than <code>MaxResults</code>, or none, and
   * still include a <code>NextToken</code>. Continue until the response doesn't
   * include a <code>NextToken</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListClusterExtensionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns extensions created at or after the specified time.
   * Timestamps are formatted according to the ISO 8601 standard.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
  inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
  template <typename CreationTimeAfterT = Aws::Utils::DateTime>
  void SetCreationTimeAfter(CreationTimeAfterT&& value) {
    m_creationTimeAfterHasBeenSet = true;
    m_creationTimeAfter = std::forward<CreationTimeAfterT>(value);
  }
  template <typename CreationTimeAfterT = Aws::Utils::DateTime>
  ListClusterExtensionsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) {
    SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns extensions created at or before the specified time. The
   * acceptable formats are the same as the timestamp formats for
   * <code>CreationTimeAfter</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
  inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
  template <typename CreationTimeBeforeT = Aws::Utils::DateTime>
  void SetCreationTimeBefore(CreationTimeBeforeT&& value) {
    m_creationTimeBeforeHasBeenSet = true;
    m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value);
  }
  template <typename CreationTimeBeforeT = Aws::Utils::DateTime>
  ListClusterExtensionsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) {
    SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::Utils::DateTime m_creationTimeAfter{};

  Aws::Utils::DateTime m_creationTimeBefore{};
  bool m_clusterArnHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_creationTimeAfterHasBeenSet = false;
  bool m_creationTimeBeforeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

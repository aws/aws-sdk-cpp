/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class BatchDeleteKnowledgeBaseRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API BatchDeleteKnowledgeBaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteKnowledgeBase"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the knowledge
   * base.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  BatchDeleteKnowledgeBaseRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of knowledge base identifiers to delete.</p>
   */
  inline const Aws::Vector<Aws::String>& GetKnowledgeBaseIds() const { return m_knowledgeBaseIds; }
  inline bool KnowledgeBaseIdsHasBeenSet() const { return m_knowledgeBaseIdsHasBeenSet; }
  template <typename KnowledgeBaseIdsT = Aws::Vector<Aws::String>>
  void SetKnowledgeBaseIds(KnowledgeBaseIdsT&& value) {
    m_knowledgeBaseIdsHasBeenSet = true;
    m_knowledgeBaseIds = std::forward<KnowledgeBaseIdsT>(value);
  }
  template <typename KnowledgeBaseIdsT = Aws::Vector<Aws::String>>
  BatchDeleteKnowledgeBaseRequest& WithKnowledgeBaseIds(KnowledgeBaseIdsT&& value) {
    SetKnowledgeBaseIds(std::forward<KnowledgeBaseIdsT>(value));
    return *this;
  }
  template <typename KnowledgeBaseIdsT = Aws::String>
  BatchDeleteKnowledgeBaseRequest& AddKnowledgeBaseIds(KnowledgeBaseIdsT&& value) {
    m_knowledgeBaseIdsHasBeenSet = true;
    m_knowledgeBaseIds.emplace_back(std::forward<KnowledgeBaseIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::Vector<Aws::String> m_knowledgeBaseIds;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_knowledgeBaseIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>Information about a knowledge base that was successfully deleted in a batch
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BatchDeleteKnowledgeBaseSuccess">AWS
 * API Reference</a></p>
 */
class BatchDeleteKnowledgeBaseSuccess {
 public:
  AWS_QUICKSIGHT_API BatchDeleteKnowledgeBaseSuccess() = default;
  AWS_QUICKSIGHT_API BatchDeleteKnowledgeBaseSuccess(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BatchDeleteKnowledgeBaseSuccess& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the successfully deleted knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  BatchDeleteKnowledgeBaseSuccess& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the successfully deleted knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
  inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
  template <typename KnowledgeBaseArnT = Aws::String>
  void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    m_knowledgeBaseArnHasBeenSet = true;
    m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value);
  }
  template <typename KnowledgeBaseArnT = Aws::String>
  BatchDeleteKnowledgeBaseSuccess& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_knowledgeBaseId;

  Aws::String m_knowledgeBaseArn;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_knowledgeBaseArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

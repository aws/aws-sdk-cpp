/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>The connection parameters for a fully managed knowledge base data source.
 * Provide these parameters in the <code>DataSourceParameters</code> object when
 * you create or update a data source that uses a fully managed knowledge
 * base.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FMKBParameters">AWS
 * API Reference</a></p>
 */
class FMKBParameters {
 public:
  AWS_QUICKSIGHT_API FMKBParameters() = default;
  AWS_QUICKSIGHT_API FMKBParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API FMKBParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Bedrock knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
  inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
  template <typename KnowledgeBaseArnT = Aws::String>
  void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    m_knowledgeBaseArnHasBeenSet = true;
    m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value);
  }
  template <typename KnowledgeBaseArnT = Aws::String>
  FMKBParameters& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the linked data sources.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLinkedDataSourceIds() const { return m_linkedDataSourceIds; }
  inline bool LinkedDataSourceIdsHasBeenSet() const { return m_linkedDataSourceIdsHasBeenSet; }
  template <typename LinkedDataSourceIdsT = Aws::Vector<Aws::String>>
  void SetLinkedDataSourceIds(LinkedDataSourceIdsT&& value) {
    m_linkedDataSourceIdsHasBeenSet = true;
    m_linkedDataSourceIds = std::forward<LinkedDataSourceIdsT>(value);
  }
  template <typename LinkedDataSourceIdsT = Aws::Vector<Aws::String>>
  FMKBParameters& WithLinkedDataSourceIds(LinkedDataSourceIdsT&& value) {
    SetLinkedDataSourceIds(std::forward<LinkedDataSourceIdsT>(value));
    return *this;
  }
  template <typename LinkedDataSourceIdsT = Aws::String>
  FMKBParameters& AddLinkedDataSourceIds(LinkedDataSourceIdsT&& value) {
    m_linkedDataSourceIdsHasBeenSet = true;
    m_linkedDataSourceIds.emplace_back(std::forward<LinkedDataSourceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_knowledgeBaseArn;

  Aws::Vector<Aws::String> m_linkedDataSourceIds;
  bool m_knowledgeBaseArnHasBeenSet = false;
  bool m_linkedDataSourceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>A knowledge source that provides content for recommendations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/KnowledgeSource">AWS
 * API Reference</a></p>
 */
class KnowledgeSource {
 public:
  AWS_QCONNECT_API KnowledgeSource() = default;
  AWS_QCONNECT_API KnowledgeSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API KnowledgeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of assistant association identifiers for the knowledge source.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssistantAssociationIds() const { return m_assistantAssociationIds; }
  inline bool AssistantAssociationIdsHasBeenSet() const { return m_assistantAssociationIdsHasBeenSet; }
  template <typename AssistantAssociationIdsT = Aws::Vector<Aws::String>>
  void SetAssistantAssociationIds(AssistantAssociationIdsT&& value) {
    m_assistantAssociationIdsHasBeenSet = true;
    m_assistantAssociationIds = std::forward<AssistantAssociationIdsT>(value);
  }
  template <typename AssistantAssociationIdsT = Aws::Vector<Aws::String>>
  KnowledgeSource& WithAssistantAssociationIds(AssistantAssociationIdsT&& value) {
    SetAssistantAssociationIds(std::forward<AssistantAssociationIdsT>(value));
    return *this;
  }
  template <typename AssistantAssociationIdsT = Aws::String>
  KnowledgeSource& AddAssistantAssociationIds(AssistantAssociationIdsT&& value) {
    m_assistantAssociationIdsHasBeenSet = true;
    m_assistantAssociationIds.emplace_back(std::forward<AssistantAssociationIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_assistantAssociationIds;
  bool m_assistantAssociationIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws

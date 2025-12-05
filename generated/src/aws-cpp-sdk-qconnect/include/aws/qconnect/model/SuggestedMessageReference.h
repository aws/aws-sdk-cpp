/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Reference information for a suggested message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SuggestedMessageReference">AWS
 * API Reference</a></p>
 */
class SuggestedMessageReference {
 public:
  AWS_QCONNECT_API SuggestedMessageReference() = default;
  AWS_QCONNECT_API SuggestedMessageReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API SuggestedMessageReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the AI Agent that generated the suggested message.</p>
   */
  inline const Aws::String& GetAiAgentId() const { return m_aiAgentId; }
  inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
  template <typename AiAgentIdT = Aws::String>
  void SetAiAgentId(AiAgentIdT&& value) {
    m_aiAgentIdHasBeenSet = true;
    m_aiAgentId = std::forward<AiAgentIdT>(value);
  }
  template <typename AiAgentIdT = Aws::String>
  SuggestedMessageReference& WithAiAgentId(AiAgentIdT&& value) {
    SetAiAgentId(std::forward<AiAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AI Agent that generated the suggested
   * message.</p>
   */
  inline const Aws::String& GetAiAgentArn() const { return m_aiAgentArn; }
  inline bool AiAgentArnHasBeenSet() const { return m_aiAgentArnHasBeenSet; }
  template <typename AiAgentArnT = Aws::String>
  void SetAiAgentArn(AiAgentArnT&& value) {
    m_aiAgentArnHasBeenSet = true;
    m_aiAgentArn = std::forward<AiAgentArnT>(value);
  }
  template <typename AiAgentArnT = Aws::String>
  SuggestedMessageReference& WithAiAgentArn(AiAgentArnT&& value) {
    SetAiAgentArn(std::forward<AiAgentArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aiAgentId;

  Aws::String m_aiAgentArn;
  bool m_aiAgentIdHasBeenSet = false;
  bool m_aiAgentArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws

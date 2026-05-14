/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIPromptType.h>
#include <aws/qconnect/model/ModelLifecycle.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace QConnect {
namespace Model {

/**
 */
class ListModelsRequest : public QConnectRequest {
 public:
  AWS_QCONNECT_API ListModelsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListModels"; }

  AWS_QCONNECT_API Aws::String SerializePayload() const override;

  AWS_QCONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
   * the ARN. URLs cannot contain the ARN. The assistant's region determines which
   * models are available.</p>
   */
  inline const Aws::String& GetAssistantId() const { return m_assistantId; }
  inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
  template <typename AssistantIdT = Aws::String>
  void SetAssistantId(AssistantIdT&& value) {
    m_assistantIdHasBeenSet = true;
    m_assistantId = std::forward<AssistantIdT>(value);
  }
  template <typename AssistantIdT = Aws::String>
  ListModelsRequest& WithAssistantId(AssistantIdT&& value) {
    SetAssistantId(std::forward<AssistantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the AI Prompt to filter models by. When specified, only models
   * that support the given AI Prompt type are returned.</p>
   */
  inline AIPromptType GetAiPromptType() const { return m_aiPromptType; }
  inline bool AiPromptTypeHasBeenSet() const { return m_aiPromptTypeHasBeenSet; }
  inline void SetAiPromptType(AIPromptType value) {
    m_aiPromptTypeHasBeenSet = true;
    m_aiPromptType = value;
  }
  inline ListModelsRequest& WithAiPromptType(AIPromptType value) {
    SetAiPromptType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle status of models to filter by. When specified, only models with
   * the given lifecycle status are returned.</p>
   */
  inline ModelLifecycle GetModelLifecycle() const { return m_modelLifecycle; }
  inline bool ModelLifecycleHasBeenSet() const { return m_modelLifecycleHasBeenSet; }
  inline void SetModelLifecycle(ModelLifecycle value) {
    m_modelLifecycleHasBeenSet = true;
    m_modelLifecycle = value;
  }
  inline ListModelsRequest& WithModelLifecycle(ModelLifecycle value) {
    SetModelLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. Use the value returned in the previous
   * response in the next request to retrieve the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListModelsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListModelsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_assistantId;

  AIPromptType m_aiPromptType{AIPromptType::NOT_SET};

  ModelLifecycle m_modelLifecycle{ModelLifecycle::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_assistantIdHasBeenSet = false;
  bool m_aiPromptTypeHasBeenSet = false;
  bool m_modelLifecycleHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws

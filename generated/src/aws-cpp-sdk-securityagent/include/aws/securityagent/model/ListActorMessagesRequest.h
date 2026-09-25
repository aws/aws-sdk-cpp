/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 */
class ListActorMessagesRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API ListActorMessagesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListActorMessages"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The maximum number of results to return in a single call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListActorMessagesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to use for paginating results that are returned in the response. Set
   * the value of this parameter to null for the first request. For subsequent calls,
   * use the nextToken value returned from the previous request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListActorMessagesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space that owns the pentest.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  ListActorMessagesRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the pentest that the actor belongs to.</p>
   */
  inline const Aws::String& GetPentestId() const { return m_pentestId; }
  inline bool PentestIdHasBeenSet() const { return m_pentestIdHasBeenSet; }
  template <typename PentestIdT = Aws::String>
  void SetPentestId(PentestIdT&& value) {
    m_pentestIdHasBeenSet = true;
    m_pentestId = std::forward<PentestIdT>(value);
  }
  template <typename PentestIdT = Aws::String>
  ListActorMessagesRequest& WithPentestId(PentestIdT&& value) {
    SetPentestId(std::forward<PentestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the actor whose messages to list. The identifier is
   * case-insensitive.</p>
   */
  inline const Aws::String& GetActorIdentifier() const { return m_actorIdentifier; }
  inline bool ActorIdentifierHasBeenSet() const { return m_actorIdentifierHasBeenSet; }
  template <typename ActorIdentifierT = Aws::String>
  void SetActorIdentifier(ActorIdentifierT&& value) {
    m_actorIdentifierHasBeenSet = true;
    m_actorIdentifier = std::forward<ActorIdentifierT>(value);
  }
  template <typename ActorIdentifierT = Aws::String>
  ListActorMessagesRequest& WithActorIdentifier(ActorIdentifierT&& value) {
    SetActorIdentifier(std::forward<ActorIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_agentSpaceId;

  Aws::String m_pentestId;

  Aws::String m_actorIdentifier;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_pentestIdHasBeenSet = false;
  bool m_actorIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>A message received at an actor's server-generated email MFA
 * address.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ActorMessage">AWS
 * API Reference</a></p>
 */
class ActorMessage {
 public:
  AWS_SECURITYAGENT_API ActorMessage() = default;
  AWS_SECURITYAGENT_API ActorMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ActorMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The address the message was sent from.</p>
   */
  inline const Aws::String& GetSender() const { return m_sender; }
  inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }
  template <typename SenderT = Aws::String>
  void SetSender(SenderT&& value) {
    m_senderHasBeenSet = true;
    m_sender = std::forward<SenderT>(value);
  }
  template <typename SenderT = Aws::String>
  ActorMessage& WithSender(SenderT&& value) {
    SetSender(std::forward<SenderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subject line of the message.</p>
   */
  inline const Aws::String& GetSubject() const { return m_subject; }
  inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
  template <typename SubjectT = Aws::String>
  void SetSubject(SubjectT&& value) {
    m_subjectHasBeenSet = true;
    m_subject = std::forward<SubjectT>(value);
  }
  template <typename SubjectT = Aws::String>
  ActorMessage& WithSubject(SubjectT&& value) {
    SetSubject(std::forward<SubjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The plain-text body of the message, containing the MFA code or verification
   * link.</p>
   */
  inline const Aws::String& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = Aws::String>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = Aws::String>
  ActorMessage& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the message was received.</p>
   */
  inline const Aws::Utils::DateTime& GetReceivedAt() const { return m_receivedAt; }
  inline bool ReceivedAtHasBeenSet() const { return m_receivedAtHasBeenSet; }
  template <typename ReceivedAtT = Aws::Utils::DateTime>
  void SetReceivedAt(ReceivedAtT&& value) {
    m_receivedAtHasBeenSet = true;
    m_receivedAt = std::forward<ReceivedAtT>(value);
  }
  template <typename ReceivedAtT = Aws::Utils::DateTime>
  ActorMessage& WithReceivedAt(ReceivedAtT&& value) {
    SetReceivedAt(std::forward<ReceivedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sender;

  Aws::String m_subject;

  Aws::String m_body;

  Aws::Utils::DateTime m_receivedAt{};
  bool m_senderHasBeenSet = false;
  bool m_subjectHasBeenSet = false;
  bool m_bodyHasBeenSet = false;
  bool m_receivedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ReplicaKmsKey.h>

#include <utility>

namespace Aws {
namespace QConnect {
namespace Model {

/**
 */
class RegisterAssistantReplicaKeyRequest : public QConnectRequest {
 public:
  AWS_QCONNECT_API RegisterAssistantReplicaKeyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RegisterAssistantReplicaKey"; }

  AWS_QCONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Q in Connect assistant.</p>
   */
  inline const Aws::String& GetAssistantId() const { return m_assistantId; }
  inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
  template <typename AssistantIdT = Aws::String>
  void SetAssistantId(AssistantIdT&& value) {
    m_assistantIdHasBeenSet = true;
    m_assistantId = std::forward<AssistantIdT>(value);
  }
  template <typename AssistantIdT = Aws::String>
  RegisterAssistantReplicaKeyRequest& WithAssistantId(AssistantIdT&& value) {
    SetAssistantId(std::forward<AssistantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replica Region KMS key to register for the assistant.</p>
   */
  inline const ReplicaKmsKey& GetReplicaKmsKey() const { return m_replicaKmsKey; }
  inline bool ReplicaKmsKeyHasBeenSet() const { return m_replicaKmsKeyHasBeenSet; }
  template <typename ReplicaKmsKeyT = ReplicaKmsKey>
  void SetReplicaKmsKey(ReplicaKmsKeyT&& value) {
    m_replicaKmsKeyHasBeenSet = true;
    m_replicaKmsKey = std::forward<ReplicaKmsKeyT>(value);
  }
  template <typename ReplicaKmsKeyT = ReplicaKmsKey>
  RegisterAssistantReplicaKeyRequest& WithReplicaKmsKey(ReplicaKmsKeyT&& value) {
    SetReplicaKmsKey(std::forward<ReplicaKmsKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field. For more information about idempotency, see <a
   * href="http://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>..</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  RegisterAssistantReplicaKeyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assistantId;

  ReplicaKmsKey m_replicaKmsKey;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_assistantIdHasBeenSet = false;
  bool m_replicaKmsKeyHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws

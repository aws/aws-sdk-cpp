/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/AliasState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace VerifiedPermissions {
namespace Model {
class GetPolicyStoreAliasResult {
 public:
  AWS_VERIFIEDPERMISSIONS_API GetPolicyStoreAliasResult() = default;
  AWS_VERIFIEDPERMISSIONS_API GetPolicyStoreAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_VERIFIEDPERMISSIONS_API GetPolicyStoreAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the policy store alias.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  GetPolicyStoreAliasResult& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the policy store associated with the alias.</p>
   */
  inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
  template <typename PolicyStoreIdT = Aws::String>
  void SetPolicyStoreId(PolicyStoreIdT&& value) {
    m_policyStoreIdHasBeenSet = true;
    m_policyStoreId = std::forward<PolicyStoreIdT>(value);
  }
  template <typename PolicyStoreIdT = Aws::String>
  GetPolicyStoreAliasResult& WithPolicyStoreId(PolicyStoreIdT&& value) {
    SetPolicyStoreId(std::forward<PolicyStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the policy store alias.</p>
   */
  inline const Aws::String& GetAliasArn() const { return m_aliasArn; }
  template <typename AliasArnT = Aws::String>
  void SetAliasArn(AliasArnT&& value) {
    m_aliasArnHasBeenSet = true;
    m_aliasArn = std::forward<AliasArnT>(value);
  }
  template <typename AliasArnT = Aws::String>
  GetPolicyStoreAliasResult& WithAliasArn(AliasArnT&& value) {
    SetAliasArn(std::forward<AliasArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the policy store alias was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetPolicyStoreAliasResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the policy store alias. Policy Store Aliases in the Active state
   * can be used normally. When a policy store alias is deleted, it enters the
   * PendingDeletion state. Policy Store Aliases in the PendingDeletion cannot be
   * used, and creating a policy store alias with the same alias name will fail.</p>
   */
  inline AliasState GetState() const { return m_state; }
  inline void SetState(AliasState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetPolicyStoreAliasResult& WithState(AliasState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetPolicyStoreAliasResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_aliasName;

  Aws::String m_policyStoreId;

  Aws::String m_aliasArn;

  Aws::Utils::DateTime m_createdAt{};

  AliasState m_state{AliasState::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aliasNameHasBeenSet = false;
  bool m_policyStoreIdHasBeenSet = false;
  bool m_aliasArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws

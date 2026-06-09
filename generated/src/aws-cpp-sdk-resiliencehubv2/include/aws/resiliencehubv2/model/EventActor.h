/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ActorType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Identifies the actor that triggered an event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/EventActor">AWS
 * API Reference</a></p>
 */
class EventActor {
 public:
  AWS_RESILIENCEHUBV2_API EventActor() = default;
  AWS_RESILIENCEHUBV2_API EventActor(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API EventActor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of actor, either USER or SYSTEM.</p>
   */
  inline ActorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ActorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EventActor& WithType(ActorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal ID of the actor.</p>
   */
  inline const Aws::String& GetPrincipalId() const { return m_principalId; }
  inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
  template <typename PrincipalIdT = Aws::String>
  void SetPrincipalId(PrincipalIdT&& value) {
    m_principalIdHasBeenSet = true;
    m_principalId = std::forward<PrincipalIdT>(value);
  }
  template <typename PrincipalIdT = Aws::String>
  EventActor& WithPrincipalId(PrincipalIdT&& value) {
    SetPrincipalId(std::forward<PrincipalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the actor.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  EventActor& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user name of the actor.</p>
   */
  inline const Aws::String& GetUserName() const { return m_userName; }
  inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
  template <typename UserNameT = Aws::String>
  void SetUserName(UserNameT&& value) {
    m_userNameHasBeenSet = true;
    m_userName = std::forward<UserNameT>(value);
  }
  template <typename UserNameT = Aws::String>
  EventActor& WithUserName(UserNameT&& value) {
    SetUserName(std::forward<UserNameT>(value));
    return *this;
  }
  ///@}
 private:
  ActorType m_type{ActorType::NOT_SET};

  Aws::String m_principalId;

  Aws::String m_accountId;

  Aws::String m_userName;
  bool m_typeHasBeenSet = false;
  bool m_principalIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_userNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

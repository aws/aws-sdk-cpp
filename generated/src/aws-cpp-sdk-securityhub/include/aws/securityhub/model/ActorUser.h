/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/UserAccount.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Contains information about the credentials used by the threat actor
   * identified in an Amazon GuardDuty Extended Threat Detection attack sequence.
   * GuardDuty generates an attack sequence finding when multiple events align to a
   * potentially suspicious activity. To receive GuardDuty attack sequence findings
   * in Security Hub, you must have GuardDuty enabled. For more information, see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ActorUser">AWS
   * API Reference</a></p>
   */
  class ActorUser
  {
  public:
    AWS_SECURITYHUB_API ActorUser() = default;
    AWS_SECURITYHUB_API ActorUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActorUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the threat actor. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ActorUser& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the threat actor. </p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    ActorUser& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of user. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ActorUser& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique identifier of the threat actor’s user credentials. </p>
     */
    inline const Aws::String& GetCredentialUid() const { return m_credentialUid; }
    inline bool CredentialUidHasBeenSet() const { return m_credentialUidHasBeenSet; }
    template<typename CredentialUidT = Aws::String>
    void SetCredentialUid(CredentialUidT&& value) { m_credentialUidHasBeenSet = true; m_credentialUid = std::forward<CredentialUidT>(value); }
    template<typename CredentialUidT = Aws::String>
    ActorUser& WithCredentialUid(CredentialUidT&& value) { SetCredentialUid(std::forward<CredentialUidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account of the threat actor. </p>
     */
    inline const UserAccount& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = UserAccount>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = UserAccount>
    ActorUser& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_credentialUid;
    bool m_credentialUidHasBeenSet = false;

    UserAccount m_account;
    bool m_accountHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

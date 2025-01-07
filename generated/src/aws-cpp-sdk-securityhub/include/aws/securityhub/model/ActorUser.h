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
    AWS_SECURITYHUB_API ActorUser();
    AWS_SECURITYHUB_API ActorUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActorUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the threat actor. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ActorUser& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ActorUser& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ActorUser& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the threat actor. </p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline ActorUser& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline ActorUser& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline ActorUser& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of user. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ActorUser& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ActorUser& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ActorUser& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique identifier of the threat actor’s user credentials. </p>
     */
    inline const Aws::String& GetCredentialUid() const{ return m_credentialUid; }
    inline bool CredentialUidHasBeenSet() const { return m_credentialUidHasBeenSet; }
    inline void SetCredentialUid(const Aws::String& value) { m_credentialUidHasBeenSet = true; m_credentialUid = value; }
    inline void SetCredentialUid(Aws::String&& value) { m_credentialUidHasBeenSet = true; m_credentialUid = std::move(value); }
    inline void SetCredentialUid(const char* value) { m_credentialUidHasBeenSet = true; m_credentialUid.assign(value); }
    inline ActorUser& WithCredentialUid(const Aws::String& value) { SetCredentialUid(value); return *this;}
    inline ActorUser& WithCredentialUid(Aws::String&& value) { SetCredentialUid(std::move(value)); return *this;}
    inline ActorUser& WithCredentialUid(const char* value) { SetCredentialUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account of the threat actor. </p>
     */
    inline const UserAccount& GetAccount() const{ return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    inline void SetAccount(const UserAccount& value) { m_accountHasBeenSet = true; m_account = value; }
    inline void SetAccount(UserAccount&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }
    inline ActorUser& WithAccount(const UserAccount& value) { SetAccount(value); return *this;}
    inline ActorUser& WithAccount(UserAccount&& value) { SetAccount(std::move(value)); return *this;}
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

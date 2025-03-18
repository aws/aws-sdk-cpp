/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MemberType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/PermissionType.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>Permission granted to a user, group, or resource to access a certain aspect
   * of another user, group, or resource mailbox.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/Permission">AWS
   * API Reference</a></p>
   */
  class Permission
  {
  public:
    AWS_WORKMAIL_API Permission() = default;
    AWS_WORKMAIL_API Permission(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Permission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the user, group, or resource to which the permissions are
     * granted.</p>
     */
    inline const Aws::String& GetGranteeId() const { return m_granteeId; }
    inline bool GranteeIdHasBeenSet() const { return m_granteeIdHasBeenSet; }
    template<typename GranteeIdT = Aws::String>
    void SetGranteeId(GranteeIdT&& value) { m_granteeIdHasBeenSet = true; m_granteeId = std::forward<GranteeIdT>(value); }
    template<typename GranteeIdT = Aws::String>
    Permission& WithGranteeId(GranteeIdT&& value) { SetGranteeId(std::forward<GranteeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of user, group, or resource referred to in GranteeId.</p>
     */
    inline MemberType GetGranteeType() const { return m_granteeType; }
    inline bool GranteeTypeHasBeenSet() const { return m_granteeTypeHasBeenSet; }
    inline void SetGranteeType(MemberType value) { m_granteeTypeHasBeenSet = true; m_granteeType = value; }
    inline Permission& WithGranteeType(MemberType value) { SetGranteeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline const Aws::Vector<PermissionType>& GetPermissionValues() const { return m_permissionValues; }
    inline bool PermissionValuesHasBeenSet() const { return m_permissionValuesHasBeenSet; }
    template<typename PermissionValuesT = Aws::Vector<PermissionType>>
    void SetPermissionValues(PermissionValuesT&& value) { m_permissionValuesHasBeenSet = true; m_permissionValues = std::forward<PermissionValuesT>(value); }
    template<typename PermissionValuesT = Aws::Vector<PermissionType>>
    Permission& WithPermissionValues(PermissionValuesT&& value) { SetPermissionValues(std::forward<PermissionValuesT>(value)); return *this;}
    inline Permission& AddPermissionValues(PermissionType value) { m_permissionValuesHasBeenSet = true; m_permissionValues.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_granteeId;
    bool m_granteeIdHasBeenSet = false;

    MemberType m_granteeType{MemberType::NOT_SET};
    bool m_granteeTypeHasBeenSet = false;

    Aws::Vector<PermissionType> m_permissionValues;
    bool m_permissionValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws

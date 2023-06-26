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
    AWS_WORKMAIL_API Permission();
    AWS_WORKMAIL_API Permission(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Permission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the user, group, or resource to which the permissions are
     * granted.</p>
     */
    inline const Aws::String& GetGranteeId() const{ return m_granteeId; }

    /**
     * <p>The identifier of the user, group, or resource to which the permissions are
     * granted.</p>
     */
    inline bool GranteeIdHasBeenSet() const { return m_granteeIdHasBeenSet; }

    /**
     * <p>The identifier of the user, group, or resource to which the permissions are
     * granted.</p>
     */
    inline void SetGranteeId(const Aws::String& value) { m_granteeIdHasBeenSet = true; m_granteeId = value; }

    /**
     * <p>The identifier of the user, group, or resource to which the permissions are
     * granted.</p>
     */
    inline void SetGranteeId(Aws::String&& value) { m_granteeIdHasBeenSet = true; m_granteeId = std::move(value); }

    /**
     * <p>The identifier of the user, group, or resource to which the permissions are
     * granted.</p>
     */
    inline void SetGranteeId(const char* value) { m_granteeIdHasBeenSet = true; m_granteeId.assign(value); }

    /**
     * <p>The identifier of the user, group, or resource to which the permissions are
     * granted.</p>
     */
    inline Permission& WithGranteeId(const Aws::String& value) { SetGranteeId(value); return *this;}

    /**
     * <p>The identifier of the user, group, or resource to which the permissions are
     * granted.</p>
     */
    inline Permission& WithGranteeId(Aws::String&& value) { SetGranteeId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user, group, or resource to which the permissions are
     * granted.</p>
     */
    inline Permission& WithGranteeId(const char* value) { SetGranteeId(value); return *this;}


    /**
     * <p>The type of user, group, or resource referred to in GranteeId.</p>
     */
    inline const MemberType& GetGranteeType() const{ return m_granteeType; }

    /**
     * <p>The type of user, group, or resource referred to in GranteeId.</p>
     */
    inline bool GranteeTypeHasBeenSet() const { return m_granteeTypeHasBeenSet; }

    /**
     * <p>The type of user, group, or resource referred to in GranteeId.</p>
     */
    inline void SetGranteeType(const MemberType& value) { m_granteeTypeHasBeenSet = true; m_granteeType = value; }

    /**
     * <p>The type of user, group, or resource referred to in GranteeId.</p>
     */
    inline void SetGranteeType(MemberType&& value) { m_granteeTypeHasBeenSet = true; m_granteeType = std::move(value); }

    /**
     * <p>The type of user, group, or resource referred to in GranteeId.</p>
     */
    inline Permission& WithGranteeType(const MemberType& value) { SetGranteeType(value); return *this;}

    /**
     * <p>The type of user, group, or resource referred to in GranteeId.</p>
     */
    inline Permission& WithGranteeType(MemberType&& value) { SetGranteeType(std::move(value)); return *this;}


    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline const Aws::Vector<PermissionType>& GetPermissionValues() const{ return m_permissionValues; }

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline bool PermissionValuesHasBeenSet() const { return m_permissionValuesHasBeenSet; }

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline void SetPermissionValues(const Aws::Vector<PermissionType>& value) { m_permissionValuesHasBeenSet = true; m_permissionValues = value; }

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline void SetPermissionValues(Aws::Vector<PermissionType>&& value) { m_permissionValuesHasBeenSet = true; m_permissionValues = std::move(value); }

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline Permission& WithPermissionValues(const Aws::Vector<PermissionType>& value) { SetPermissionValues(value); return *this;}

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline Permission& WithPermissionValues(Aws::Vector<PermissionType>&& value) { SetPermissionValues(std::move(value)); return *this;}

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline Permission& AddPermissionValues(const PermissionType& value) { m_permissionValuesHasBeenSet = true; m_permissionValues.push_back(value); return *this; }

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline Permission& AddPermissionValues(PermissionType&& value) { m_permissionValuesHasBeenSet = true; m_permissionValues.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_granteeId;
    bool m_granteeIdHasBeenSet = false;

    MemberType m_granteeType;
    bool m_granteeTypeHasBeenSet = false;

    Aws::Vector<PermissionType> m_permissionValues;
    bool m_permissionValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws

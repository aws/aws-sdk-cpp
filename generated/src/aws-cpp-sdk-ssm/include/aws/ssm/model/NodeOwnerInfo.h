/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about ownership of a managed node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/NodeOwnerInfo">AWS
   * API Reference</a></p>
   */
  class NodeOwnerInfo
  {
  public:
    AWS_SSM_API NodeOwnerInfo();
    AWS_SSM_API NodeOwnerInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API NodeOwnerInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the managed node.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline NodeOwnerInfo& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline NodeOwnerInfo& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline NodeOwnerInfo& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the organization unit (OU) that the account is part of.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::move(value); }
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }
    inline NodeOwnerInfo& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}
    inline NodeOwnerInfo& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}
    inline NodeOwnerInfo& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path for the organizational unit (OU) that owns the managed node. The
     * path for the OU is built using the IDs of the organization, root, and all OUs in
     * the path down to and including the OU. For example:</p> <p>
     * <code>o-a1b2c3d4e5/r-f6g7h8i9j0example/ou-ghi0-awsccccc/ou-jkl0-awsddddd/</code>
     * </p>
     */
    inline const Aws::String& GetOrganizationalUnitPath() const{ return m_organizationalUnitPath; }
    inline bool OrganizationalUnitPathHasBeenSet() const { return m_organizationalUnitPathHasBeenSet; }
    inline void SetOrganizationalUnitPath(const Aws::String& value) { m_organizationalUnitPathHasBeenSet = true; m_organizationalUnitPath = value; }
    inline void SetOrganizationalUnitPath(Aws::String&& value) { m_organizationalUnitPathHasBeenSet = true; m_organizationalUnitPath = std::move(value); }
    inline void SetOrganizationalUnitPath(const char* value) { m_organizationalUnitPathHasBeenSet = true; m_organizationalUnitPath.assign(value); }
    inline NodeOwnerInfo& WithOrganizationalUnitPath(const Aws::String& value) { SetOrganizationalUnitPath(value); return *this;}
    inline NodeOwnerInfo& WithOrganizationalUnitPath(Aws::String&& value) { SetOrganizationalUnitPath(std::move(value)); return *this;}
    inline NodeOwnerInfo& WithOrganizationalUnitPath(const char* value) { SetOrganizationalUnitPath(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;

    Aws::String m_organizationalUnitPath;
    bool m_organizationalUnitPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

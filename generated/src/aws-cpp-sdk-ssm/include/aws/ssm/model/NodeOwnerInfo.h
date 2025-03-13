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
    AWS_SSM_API NodeOwnerInfo() = default;
    AWS_SSM_API NodeOwnerInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API NodeOwnerInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the managed node.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    NodeOwnerInfo& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the organization unit (OU) that the account is part of.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    NodeOwnerInfo& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path for the organizational unit (OU) that owns the managed node. The
     * path for the OU is built using the IDs of the organization, root, and all OUs in
     * the path down to and including the OU. For example:</p> <p>
     * <code>o-a1b2c3d4e5/r-f6g7h8i9j0example/ou-ghi0-awsccccc/ou-jkl0-awsddddd/</code>
     * </p>
     */
    inline const Aws::String& GetOrganizationalUnitPath() const { return m_organizationalUnitPath; }
    inline bool OrganizationalUnitPathHasBeenSet() const { return m_organizationalUnitPathHasBeenSet; }
    template<typename OrganizationalUnitPathT = Aws::String>
    void SetOrganizationalUnitPath(OrganizationalUnitPathT&& value) { m_organizationalUnitPathHasBeenSet = true; m_organizationalUnitPath = std::forward<OrganizationalUnitPathT>(value); }
    template<typename OrganizationalUnitPathT = Aws::String>
    NodeOwnerInfo& WithOrganizationalUnitPath(OrganizationalUnitPathT&& value) { SetOrganizationalUnitPath(std::forward<OrganizationalUnitPathT>(value)); return *this;}
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

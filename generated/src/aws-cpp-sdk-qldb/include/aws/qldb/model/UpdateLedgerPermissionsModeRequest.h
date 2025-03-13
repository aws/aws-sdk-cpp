/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/PermissionsMode.h>
#include <utility>

namespace Aws
{
namespace QLDB
{
namespace Model
{

  /**
   */
  class UpdateLedgerPermissionsModeRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API UpdateLedgerPermissionsModeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLedgerPermissionsMode"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateLedgerPermissionsModeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions mode to assign to the ledger. This parameter can have one of
     * the following values:</p> <ul> <li> <p> <code>ALLOW_ALL</code>: A legacy
     * permissions mode that enables access control with API-level granularity for
     * ledgers.</p> <p>This mode allows users who have the <code>SendCommand</code> API
     * permission for this ledger to run all PartiQL commands (hence,
     * <code>ALLOW_ALL</code>) on any tables in the specified ledger. This mode
     * disregards any table-level or command-level IAM permissions policies that you
     * create for the ledger.</p> </li> <li> <p> <code>STANDARD</code>:
     * (<i>Recommended</i>) A permissions mode that enables access control with finer
     * granularity for ledgers, tables, and PartiQL commands.</p> <p>By default, this
     * mode denies all user requests to run any PartiQL commands on any tables in this
     * ledger. To allow PartiQL commands to run, you must create IAM permissions
     * policies for specific table resources and PartiQL actions, in addition to the
     * <code>SendCommand</code> API permission for the ledger. For information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-standard-mode.html">Getting
     * started with the standard permissions mode</a> in the <i>Amazon QLDB Developer
     * Guide</i>.</p> </li> </ul>  <p>We strongly recommend using the
     * <code>STANDARD</code> permissions mode to maximize the security of your ledger
     * data.</p> 
     */
    inline PermissionsMode GetPermissionsMode() const { return m_permissionsMode; }
    inline bool PermissionsModeHasBeenSet() const { return m_permissionsModeHasBeenSet; }
    inline void SetPermissionsMode(PermissionsMode value) { m_permissionsModeHasBeenSet = true; m_permissionsMode = value; }
    inline UpdateLedgerPermissionsModeRequest& WithPermissionsMode(PermissionsMode value) { SetPermissionsMode(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PermissionsMode m_permissionsMode{PermissionsMode::NOT_SET};
    bool m_permissionsModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws

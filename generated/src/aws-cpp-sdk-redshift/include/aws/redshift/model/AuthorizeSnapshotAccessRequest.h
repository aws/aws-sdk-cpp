/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AuthorizeSnapshotAccessMessage">AWS
   * API Reference</a></p>
   */
  class AuthorizeSnapshotAccessRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API AuthorizeSnapshotAccessRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeSnapshotAccess"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const { return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    template<typename SnapshotIdentifierT = Aws::String>
    void SetSnapshotIdentifier(SnapshotIdentifierT&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::forward<SnapshotIdentifierT>(value); }
    template<typename SnapshotIdentifierT = Aws::String>
    AuthorizeSnapshotAccessRequest& WithSnapshotIdentifier(SnapshotIdentifierT&& value) { SetSnapshotIdentifier(std::forward<SnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to authorize access to.</p>
     */
    inline const Aws::String& GetSnapshotArn() const { return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    template<typename SnapshotArnT = Aws::String>
    void SetSnapshotArn(SnapshotArnT&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::forward<SnapshotArnT>(value); }
    template<typename SnapshotArnT = Aws::String>
    AuthorizeSnapshotAccessRequest& WithSnapshotArn(SnapshotArnT&& value) { SetSnapshotArn(std::forward<SnapshotArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cluster the snapshot was created from.</p> <ul> <li>
     * <p> <i>If the snapshot to access doesn't exist and the associated IAM policy
     * doesn't allow access to all (*) snapshots</i> - This parameter is required.
     * Otherwise, permissions aren't available to check if the snapshot exists.</p>
     * </li> <li> <p> <i>If the snapshot to access exists</i> - This parameter isn't
     * required. Redshift can retrieve the cluster identifier and use it to validate
     * snapshot authorization.</p> </li> </ul>
     */
    inline const Aws::String& GetSnapshotClusterIdentifier() const { return m_snapshotClusterIdentifier; }
    inline bool SnapshotClusterIdentifierHasBeenSet() const { return m_snapshotClusterIdentifierHasBeenSet; }
    template<typename SnapshotClusterIdentifierT = Aws::String>
    void SetSnapshotClusterIdentifier(SnapshotClusterIdentifierT&& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = std::forward<SnapshotClusterIdentifierT>(value); }
    template<typename SnapshotClusterIdentifierT = Aws::String>
    AuthorizeSnapshotAccessRequest& WithSnapshotClusterIdentifier(SnapshotClusterIdentifierT&& value) { SetSnapshotClusterIdentifier(std::forward<SnapshotClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account authorized to restore the
     * specified snapshot.</p> <p>To share a snapshot with Amazon Web Services Support,
     * specify amazon-redshift-support.</p>
     */
    inline const Aws::String& GetAccountWithRestoreAccess() const { return m_accountWithRestoreAccess; }
    inline bool AccountWithRestoreAccessHasBeenSet() const { return m_accountWithRestoreAccessHasBeenSet; }
    template<typename AccountWithRestoreAccessT = Aws::String>
    void SetAccountWithRestoreAccess(AccountWithRestoreAccessT&& value) { m_accountWithRestoreAccessHasBeenSet = true; m_accountWithRestoreAccess = std::forward<AccountWithRestoreAccessT>(value); }
    template<typename AccountWithRestoreAccessT = Aws::String>
    AuthorizeSnapshotAccessRequest& WithAccountWithRestoreAccess(AccountWithRestoreAccessT&& value) { SetAccountWithRestoreAccess(std::forward<AccountWithRestoreAccessT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::String m_snapshotClusterIdentifier;
    bool m_snapshotClusterIdentifierHasBeenSet = false;

    Aws::String m_accountWithRestoreAccess;
    bool m_accountWithRestoreAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

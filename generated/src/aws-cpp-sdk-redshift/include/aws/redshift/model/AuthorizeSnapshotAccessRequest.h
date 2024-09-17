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
    AWS_REDSHIFT_API AuthorizeSnapshotAccessRequest();

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
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }
    inline AuthorizeSnapshotAccessRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}
    inline AuthorizeSnapshotAccessRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}
    inline AuthorizeSnapshotAccessRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to authorize access to.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }
    inline AuthorizeSnapshotAccessRequest& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}
    inline AuthorizeSnapshotAccessRequest& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}
    inline AuthorizeSnapshotAccessRequest& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}
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
    inline const Aws::String& GetSnapshotClusterIdentifier() const{ return m_snapshotClusterIdentifier; }
    inline bool SnapshotClusterIdentifierHasBeenSet() const { return m_snapshotClusterIdentifierHasBeenSet; }
    inline void SetSnapshotClusterIdentifier(const Aws::String& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = value; }
    inline void SetSnapshotClusterIdentifier(Aws::String&& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = std::move(value); }
    inline void SetSnapshotClusterIdentifier(const char* value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier.assign(value); }
    inline AuthorizeSnapshotAccessRequest& WithSnapshotClusterIdentifier(const Aws::String& value) { SetSnapshotClusterIdentifier(value); return *this;}
    inline AuthorizeSnapshotAccessRequest& WithSnapshotClusterIdentifier(Aws::String&& value) { SetSnapshotClusterIdentifier(std::move(value)); return *this;}
    inline AuthorizeSnapshotAccessRequest& WithSnapshotClusterIdentifier(const char* value) { SetSnapshotClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account authorized to restore the
     * specified snapshot.</p> <p>To share a snapshot with Amazon Web Services Support,
     * specify amazon-redshift-support.</p>
     */
    inline const Aws::String& GetAccountWithRestoreAccess() const{ return m_accountWithRestoreAccess; }
    inline bool AccountWithRestoreAccessHasBeenSet() const { return m_accountWithRestoreAccessHasBeenSet; }
    inline void SetAccountWithRestoreAccess(const Aws::String& value) { m_accountWithRestoreAccessHasBeenSet = true; m_accountWithRestoreAccess = value; }
    inline void SetAccountWithRestoreAccess(Aws::String&& value) { m_accountWithRestoreAccessHasBeenSet = true; m_accountWithRestoreAccess = std::move(value); }
    inline void SetAccountWithRestoreAccess(const char* value) { m_accountWithRestoreAccessHasBeenSet = true; m_accountWithRestoreAccess.assign(value); }
    inline AuthorizeSnapshotAccessRequest& WithAccountWithRestoreAccess(const Aws::String& value) { SetAccountWithRestoreAccess(value); return *this;}
    inline AuthorizeSnapshotAccessRequest& WithAccountWithRestoreAccess(Aws::String&& value) { SetAccountWithRestoreAccess(std::move(value)); return *this;}
    inline AuthorizeSnapshotAccessRequest& WithAccountWithRestoreAccess(const char* value) { SetAccountWithRestoreAccess(value); return *this;}
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

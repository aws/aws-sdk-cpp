/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DeleteDBClusterAutomatedBackupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteDBClusterAutomatedBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBClusterAutomatedBackup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier for the source DB cluster, which can't be changed and which is
     * unique to an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const{ return m_dbClusterResourceId; }

    /**
     * <p>The identifier for the source DB cluster, which can't be changed and which is
     * unique to an Amazon Web Services Region.</p>
     */
    inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }

    /**
     * <p>The identifier for the source DB cluster, which can't be changed and which is
     * unique to an Amazon Web Services Region.</p>
     */
    inline void SetDbClusterResourceId(const Aws::String& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = value; }

    /**
     * <p>The identifier for the source DB cluster, which can't be changed and which is
     * unique to an Amazon Web Services Region.</p>
     */
    inline void SetDbClusterResourceId(Aws::String&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::move(value); }

    /**
     * <p>The identifier for the source DB cluster, which can't be changed and which is
     * unique to an Amazon Web Services Region.</p>
     */
    inline void SetDbClusterResourceId(const char* value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId.assign(value); }

    /**
     * <p>The identifier for the source DB cluster, which can't be changed and which is
     * unique to an Amazon Web Services Region.</p>
     */
    inline DeleteDBClusterAutomatedBackupRequest& WithDbClusterResourceId(const Aws::String& value) { SetDbClusterResourceId(value); return *this;}

    /**
     * <p>The identifier for the source DB cluster, which can't be changed and which is
     * unique to an Amazon Web Services Region.</p>
     */
    inline DeleteDBClusterAutomatedBackupRequest& WithDbClusterResourceId(Aws::String&& value) { SetDbClusterResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the source DB cluster, which can't be changed and which is
     * unique to an Amazon Web Services Region.</p>
     */
    inline DeleteDBClusterAutomatedBackupRequest& WithDbClusterResourceId(const char* value) { SetDbClusterResourceId(value); return *this;}

  private:

    Aws::String m_dbClusterResourceId;
    bool m_dbClusterResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

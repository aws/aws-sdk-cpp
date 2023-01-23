/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/PartnerIntegrationStatus.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class UpdatePartnerStatusRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API UpdatePartnerStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePartnerStatus"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline UpdatePartnerStatusRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline UpdatePartnerStatusRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline UpdatePartnerStatusRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The cluster identifier of the cluster whose partner integration status is
     * being updated.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier of the cluster whose partner integration status is
     * being updated.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier of the cluster whose partner integration status is
     * being updated.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier of the cluster whose partner integration status is
     * being updated.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier of the cluster whose partner integration status is
     * being updated.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier of the cluster whose partner integration status is
     * being updated.</p>
     */
    inline UpdatePartnerStatusRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier of the cluster whose partner integration status is
     * being updated.</p>
     */
    inline UpdatePartnerStatusRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier of the cluster whose partner integration status is
     * being updated.</p>
     */
    inline UpdatePartnerStatusRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the database whose partner integration status is being
     * updated.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database whose partner integration status is being
     * updated.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database whose partner integration status is being
     * updated.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database whose partner integration status is being
     * updated.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database whose partner integration status is being
     * updated.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database whose partner integration status is being
     * updated.</p>
     */
    inline UpdatePartnerStatusRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database whose partner integration status is being
     * updated.</p>
     */
    inline UpdatePartnerStatusRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database whose partner integration status is being
     * updated.</p>
     */
    inline UpdatePartnerStatusRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the partner whose integration status is being updated.</p>
     */
    inline const Aws::String& GetPartnerName() const{ return m_partnerName; }

    /**
     * <p>The name of the partner whose integration status is being updated.</p>
     */
    inline bool PartnerNameHasBeenSet() const { return m_partnerNameHasBeenSet; }

    /**
     * <p>The name of the partner whose integration status is being updated.</p>
     */
    inline void SetPartnerName(const Aws::String& value) { m_partnerNameHasBeenSet = true; m_partnerName = value; }

    /**
     * <p>The name of the partner whose integration status is being updated.</p>
     */
    inline void SetPartnerName(Aws::String&& value) { m_partnerNameHasBeenSet = true; m_partnerName = std::move(value); }

    /**
     * <p>The name of the partner whose integration status is being updated.</p>
     */
    inline void SetPartnerName(const char* value) { m_partnerNameHasBeenSet = true; m_partnerName.assign(value); }

    /**
     * <p>The name of the partner whose integration status is being updated.</p>
     */
    inline UpdatePartnerStatusRequest& WithPartnerName(const Aws::String& value) { SetPartnerName(value); return *this;}

    /**
     * <p>The name of the partner whose integration status is being updated.</p>
     */
    inline UpdatePartnerStatusRequest& WithPartnerName(Aws::String&& value) { SetPartnerName(std::move(value)); return *this;}

    /**
     * <p>The name of the partner whose integration status is being updated.</p>
     */
    inline UpdatePartnerStatusRequest& WithPartnerName(const char* value) { SetPartnerName(value); return *this;}


    /**
     * <p>The value of the updated status.</p>
     */
    inline const PartnerIntegrationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The value of the updated status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The value of the updated status.</p>
     */
    inline void SetStatus(const PartnerIntegrationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The value of the updated status.</p>
     */
    inline void SetStatus(PartnerIntegrationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The value of the updated status.</p>
     */
    inline UpdatePartnerStatusRequest& WithStatus(const PartnerIntegrationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The value of the updated status.</p>
     */
    inline UpdatePartnerStatusRequest& WithStatus(PartnerIntegrationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message provided by the partner.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline UpdatePartnerStatusRequest& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline UpdatePartnerStatusRequest& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline UpdatePartnerStatusRequest& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_partnerName;
    bool m_partnerNameHasBeenSet = false;

    PartnerIntegrationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

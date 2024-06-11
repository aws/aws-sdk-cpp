﻿/**
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
   */
  class AddPartnerRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API AddPartnerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddPartner"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AddPartnerRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AddPartnerRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AddPartnerRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster identifier of the cluster that receives data from the
     * partner.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline AddPartnerRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline AddPartnerRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline AddPartnerRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database that receives data from the partner.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline AddPartnerRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline AddPartnerRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline AddPartnerRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partner that is authorized to send data.</p>
     */
    inline const Aws::String& GetPartnerName() const{ return m_partnerName; }
    inline bool PartnerNameHasBeenSet() const { return m_partnerNameHasBeenSet; }
    inline void SetPartnerName(const Aws::String& value) { m_partnerNameHasBeenSet = true; m_partnerName = value; }
    inline void SetPartnerName(Aws::String&& value) { m_partnerNameHasBeenSet = true; m_partnerName = std::move(value); }
    inline void SetPartnerName(const char* value) { m_partnerNameHasBeenSet = true; m_partnerName.assign(value); }
    inline AddPartnerRequest& WithPartnerName(const Aws::String& value) { SetPartnerName(value); return *this;}
    inline AddPartnerRequest& WithPartnerName(Aws::String&& value) { SetPartnerName(std::move(value)); return *this;}
    inline AddPartnerRequest& WithPartnerName(const char* value) { SetPartnerName(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_partnerName;
    bool m_partnerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

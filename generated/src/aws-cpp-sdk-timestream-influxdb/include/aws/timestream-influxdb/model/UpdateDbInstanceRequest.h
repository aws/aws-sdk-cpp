/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/LogDeliveryConfiguration.h>
#include <utility>

namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   */
  class UpdateDbInstanceRequest : public TimestreamInfluxDBRequest
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API UpdateDbInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDbInstance"; }

    AWS_TIMESTREAMINFLUXDB_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMINFLUXDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The id of the DB instance.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateDbInstanceRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateDbInstanceRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateDbInstanceRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for sending InfluxDB engine logs to send to specified S3
     * bucket.</p>
     */
    inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const{ return m_logDeliveryConfiguration; }
    inline bool LogDeliveryConfigurationHasBeenSet() const { return m_logDeliveryConfigurationHasBeenSet; }
    inline void SetLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { m_logDeliveryConfigurationHasBeenSet = true; m_logDeliveryConfiguration = value; }
    inline void SetLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { m_logDeliveryConfigurationHasBeenSet = true; m_logDeliveryConfiguration = std::move(value); }
    inline UpdateDbInstanceRequest& WithLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { SetLogDeliveryConfiguration(value); return *this;}
    inline UpdateDbInstanceRequest& WithLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { SetLogDeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the DB parameter group to assign to your DB instance. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline const Aws::String& GetDbParameterGroupIdentifier() const{ return m_dbParameterGroupIdentifier; }
    inline bool DbParameterGroupIdentifierHasBeenSet() const { return m_dbParameterGroupIdentifierHasBeenSet; }
    inline void SetDbParameterGroupIdentifier(const Aws::String& value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier = value; }
    inline void SetDbParameterGroupIdentifier(Aws::String&& value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier = std::move(value); }
    inline void SetDbParameterGroupIdentifier(const char* value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier.assign(value); }
    inline UpdateDbInstanceRequest& WithDbParameterGroupIdentifier(const Aws::String& value) { SetDbParameterGroupIdentifier(value); return *this;}
    inline UpdateDbInstanceRequest& WithDbParameterGroupIdentifier(Aws::String&& value) { SetDbParameterGroupIdentifier(std::move(value)); return *this;}
    inline UpdateDbInstanceRequest& WithDbParameterGroupIdentifier(const char* value) { SetDbParameterGroupIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    LogDeliveryConfiguration m_logDeliveryConfiguration;
    bool m_logDeliveryConfigurationHasBeenSet = false;

    Aws::String m_dbParameterGroupIdentifier;
    bool m_dbParameterGroupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws

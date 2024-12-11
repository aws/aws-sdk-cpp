/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/Status.h>
#include <aws/timestream-influxdb/model/NetworkType.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <aws/timestream-influxdb/model/DeploymentType.h>
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
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   * <p>Contains a summary of a DB instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/DbInstanceSummary">AWS
   * API Reference</a></p>
   */
  class DbInstanceSummary
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API DbInstanceSummary();
    AWS_TIMESTREAMINFLUXDB_API DbInstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API DbInstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service-generated unique identifier of the DB instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DbInstanceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DbInstanceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DbInstanceSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This customer-supplied name uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and Amazon Web Services
     * CLI commands.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DbInstanceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DbInstanceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DbInstanceSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DbInstanceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DbInstanceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DbInstanceSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB instance.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DbInstanceSummary& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline DbInstanceSummary& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline DbInstanceSummary& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline DbInstanceSummary& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline DbInstanceSummary& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which InfluxDB accepts connections.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DbInstanceSummary& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the networkType of the Timestream for InfluxDB instance is
     * IPV4, which can communicate over IPv4 protocol only, or DUAL, which can
     * communicate over both IPv4 and IPv6 protocols.</p>
     */
    inline const NetworkType& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const NetworkType& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(NetworkType&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline DbInstanceSummary& WithNetworkType(const NetworkType& value) { SetNetworkType(value); return *this;}
    inline DbInstanceSummary& WithNetworkType(NetworkType&& value) { SetNetworkType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB instance type to run InfluxDB on.</p>
     */
    inline const DbInstanceType& GetDbInstanceType() const{ return m_dbInstanceType; }
    inline bool DbInstanceTypeHasBeenSet() const { return m_dbInstanceTypeHasBeenSet; }
    inline void SetDbInstanceType(const DbInstanceType& value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = value; }
    inline void SetDbInstanceType(DbInstanceType&& value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = std::move(value); }
    inline DbInstanceSummary& WithDbInstanceType(const DbInstanceType& value) { SetDbInstanceType(value); return *this;}
    inline DbInstanceSummary& WithDbInstanceType(DbInstanceType&& value) { SetDbInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type for your DB instance.</p>
     */
    inline const DbStorageType& GetDbStorageType() const{ return m_dbStorageType; }
    inline bool DbStorageTypeHasBeenSet() const { return m_dbStorageTypeHasBeenSet; }
    inline void SetDbStorageType(const DbStorageType& value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = value; }
    inline void SetDbStorageType(DbStorageType&& value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = std::move(value); }
    inline DbInstanceSummary& WithDbStorageType(const DbStorageType& value) { SetDbStorageType(value); return *this;}
    inline DbInstanceSummary& WithDbStorageType(DbStorageType&& value) { SetDbStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage to allocate for your DbStorageType in GiB
     * (gibibytes).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DbInstanceSummary& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Single-Instance or with a MultiAZ Standby for High availability.</p>
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }
    inline DbInstanceSummary& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}
    inline DbInstanceSummary& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    NetworkType m_networkType;
    bool m_networkTypeHasBeenSet = false;

    DbInstanceType m_dbInstanceType;
    bool m_dbInstanceTypeHasBeenSet = false;

    DbStorageType m_dbStorageType;
    bool m_dbStorageTypeHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    DeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws

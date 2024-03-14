/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/Status.h>
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


    /**
     * <p>The service-generated unique identifier of the DB instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The service-generated unique identifier of the DB instance.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The service-generated unique identifier of the DB instance.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The service-generated unique identifier of the DB instance.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The service-generated unique identifier of the DB instance.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The service-generated unique identifier of the DB instance.</p>
     */
    inline DbInstanceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The service-generated unique identifier of the DB instance.</p>
     */
    inline DbInstanceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The service-generated unique identifier of the DB instance.</p>
     */
    inline DbInstanceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>This customer-supplied name uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and AWS CLI
     * commands.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>This customer-supplied name uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and AWS CLI
     * commands.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>This customer-supplied name uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and AWS CLI
     * commands.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>This customer-supplied name uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and AWS CLI
     * commands.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>This customer-supplied name uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and AWS CLI
     * commands.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>This customer-supplied name uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and AWS CLI
     * commands.</p>
     */
    inline DbInstanceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>This customer-supplied name uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and AWS CLI
     * commands.</p>
     */
    inline DbInstanceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>This customer-supplied name uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and AWS CLI
     * commands.</p>
     */
    inline DbInstanceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline DbInstanceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline DbInstanceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline DbInstanceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the DB instance.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DB instance.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the DB instance.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the DB instance.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the DB instance.</p>
     */
    inline DbInstanceSummary& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DB instance.</p>
     */
    inline DbInstanceSummary& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline DbInstanceSummary& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline DbInstanceSummary& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline DbInstanceSummary& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The Timestream for InfluxDB instance type to run InfluxDB on.</p>
     */
    inline const DbInstanceType& GetDbInstanceType() const{ return m_dbInstanceType; }

    /**
     * <p>The Timestream for InfluxDB instance type to run InfluxDB on.</p>
     */
    inline bool DbInstanceTypeHasBeenSet() const { return m_dbInstanceTypeHasBeenSet; }

    /**
     * <p>The Timestream for InfluxDB instance type to run InfluxDB on.</p>
     */
    inline void SetDbInstanceType(const DbInstanceType& value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = value; }

    /**
     * <p>The Timestream for InfluxDB instance type to run InfluxDB on.</p>
     */
    inline void SetDbInstanceType(DbInstanceType&& value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = std::move(value); }

    /**
     * <p>The Timestream for InfluxDB instance type to run InfluxDB on.</p>
     */
    inline DbInstanceSummary& WithDbInstanceType(const DbInstanceType& value) { SetDbInstanceType(value); return *this;}

    /**
     * <p>The Timestream for InfluxDB instance type to run InfluxDB on.</p>
     */
    inline DbInstanceSummary& WithDbInstanceType(DbInstanceType&& value) { SetDbInstanceType(std::move(value)); return *this;}


    /**
     * <p>The storage type for your DB instance.</p>
     */
    inline const DbStorageType& GetDbStorageType() const{ return m_dbStorageType; }

    /**
     * <p>The storage type for your DB instance.</p>
     */
    inline bool DbStorageTypeHasBeenSet() const { return m_dbStorageTypeHasBeenSet; }

    /**
     * <p>The storage type for your DB instance.</p>
     */
    inline void SetDbStorageType(const DbStorageType& value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = value; }

    /**
     * <p>The storage type for your DB instance.</p>
     */
    inline void SetDbStorageType(DbStorageType&& value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = std::move(value); }

    /**
     * <p>The storage type for your DB instance.</p>
     */
    inline DbInstanceSummary& WithDbStorageType(const DbStorageType& value) { SetDbStorageType(value); return *this;}

    /**
     * <p>The storage type for your DB instance.</p>
     */
    inline DbInstanceSummary& WithDbStorageType(DbStorageType&& value) { SetDbStorageType(std::move(value)); return *this;}


    /**
     * <p>The amount of storage to allocate for your DbStorageType in GiB
     * (gibibytes).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage to allocate for your DbStorageType in GiB
     * (gibibytes).</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage to allocate for your DbStorageType in GiB
     * (gibibytes).</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage to allocate for your DbStorageType in GiB
     * (gibibytes).</p>
     */
    inline DbInstanceSummary& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Single-Instance or with a MultiAZ Standby for High availability.</p>
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Single-Instance or with a MultiAZ Standby for High availability.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>Single-Instance or with a MultiAZ Standby for High availability.</p>
     */
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Single-Instance or with a MultiAZ Standby for High availability.</p>
     */
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>Single-Instance or with a MultiAZ Standby for High availability.</p>
     */
    inline DbInstanceSummary& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Single-Instance or with a MultiAZ Standby for High availability.</p>
     */
    inline DbInstanceSummary& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}

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

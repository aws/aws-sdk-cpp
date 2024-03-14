/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <aws/timestream-influxdb/model/DeploymentType.h>
#include <aws/timestream-influxdb/model/LogDeliveryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   */
  class CreateDbInstanceRequest : public TimestreamInfluxDBRequest
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API CreateDbInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDbInstance"; }

    AWS_TIMESTREAMINFLUXDB_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMINFLUXDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that uniquely identifies the DB instance when interacting with the
     * Amazon Timestream for InfluxDB API and CLI commands. This name will also be a
     * prefix included in the endpoint. DB instance names must be unique per customer
     * and per region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that uniquely identifies the DB instance when interacting with the
     * Amazon Timestream for InfluxDB API and CLI commands. This name will also be a
     * prefix included in the endpoint. DB instance names must be unique per customer
     * and per region.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that uniquely identifies the DB instance when interacting with the
     * Amazon Timestream for InfluxDB API and CLI commands. This name will also be a
     * prefix included in the endpoint. DB instance names must be unique per customer
     * and per region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that uniquely identifies the DB instance when interacting with the
     * Amazon Timestream for InfluxDB API and CLI commands. This name will also be a
     * prefix included in the endpoint. DB instance names must be unique per customer
     * and per region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that uniquely identifies the DB instance when interacting with the
     * Amazon Timestream for InfluxDB API and CLI commands. This name will also be a
     * prefix included in the endpoint. DB instance names must be unique per customer
     * and per region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that uniquely identifies the DB instance when interacting with the
     * Amazon Timestream for InfluxDB API and CLI commands. This name will also be a
     * prefix included in the endpoint. DB instance names must be unique per customer
     * and per region.</p>
     */
    inline CreateDbInstanceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that uniquely identifies the DB instance when interacting with the
     * Amazon Timestream for InfluxDB API and CLI commands. This name will also be a
     * prefix included in the endpoint. DB instance names must be unique per customer
     * and per region.</p>
     */
    inline CreateDbInstanceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that uniquely identifies the DB instance when interacting with the
     * Amazon Timestream for InfluxDB API and CLI commands. This name will also be a
     * prefix included in the endpoint. DB instance names must be unique per customer
     * and per region.</p>
     */
    inline CreateDbInstanceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The username of the initial admin user created in InfluxDB. Must start with a
     * letter and can't end with a hyphen or contain two consecutive hyphens. For
     * example, my-user1. This username will allow you to access the InfluxDB UI to
     * perform various administrative tasks and also use the InfluxDB CLI to create an
     * operator token. These attributes will be stored in a Secret created in Amazon
     * Secrets Manager in your account.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The username of the initial admin user created in InfluxDB. Must start with a
     * letter and can't end with a hyphen or contain two consecutive hyphens. For
     * example, my-user1. This username will allow you to access the InfluxDB UI to
     * perform various administrative tasks and also use the InfluxDB CLI to create an
     * operator token. These attributes will be stored in a Secret created in Amazon
     * Secrets Manager in your account.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The username of the initial admin user created in InfluxDB. Must start with a
     * letter and can't end with a hyphen or contain two consecutive hyphens. For
     * example, my-user1. This username will allow you to access the InfluxDB UI to
     * perform various administrative tasks and also use the InfluxDB CLI to create an
     * operator token. These attributes will be stored in a Secret created in Amazon
     * Secrets Manager in your account.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The username of the initial admin user created in InfluxDB. Must start with a
     * letter and can't end with a hyphen or contain two consecutive hyphens. For
     * example, my-user1. This username will allow you to access the InfluxDB UI to
     * perform various administrative tasks and also use the InfluxDB CLI to create an
     * operator token. These attributes will be stored in a Secret created in Amazon
     * Secrets Manager in your account.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The username of the initial admin user created in InfluxDB. Must start with a
     * letter and can't end with a hyphen or contain two consecutive hyphens. For
     * example, my-user1. This username will allow you to access the InfluxDB UI to
     * perform various administrative tasks and also use the InfluxDB CLI to create an
     * operator token. These attributes will be stored in a Secret created in Amazon
     * Secrets Manager in your account.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The username of the initial admin user created in InfluxDB. Must start with a
     * letter and can't end with a hyphen or contain two consecutive hyphens. For
     * example, my-user1. This username will allow you to access the InfluxDB UI to
     * perform various administrative tasks and also use the InfluxDB CLI to create an
     * operator token. These attributes will be stored in a Secret created in Amazon
     * Secrets Manager in your account.</p>
     */
    inline CreateDbInstanceRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The username of the initial admin user created in InfluxDB. Must start with a
     * letter and can't end with a hyphen or contain two consecutive hyphens. For
     * example, my-user1. This username will allow you to access the InfluxDB UI to
     * perform various administrative tasks and also use the InfluxDB CLI to create an
     * operator token. These attributes will be stored in a Secret created in Amazon
     * Secrets Manager in your account.</p>
     */
    inline CreateDbInstanceRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The username of the initial admin user created in InfluxDB. Must start with a
     * letter and can't end with a hyphen or contain two consecutive hyphens. For
     * example, my-user1. This username will allow you to access the InfluxDB UI to
     * perform various administrative tasks and also use the InfluxDB CLI to create an
     * operator token. These attributes will be stored in a Secret created in Amazon
     * Secrets Manager in your account.</p>
     */
    inline CreateDbInstanceRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The password of the initial admin user created in InfluxDB. This password
     * will allow you to access the InfluxDB UI to perform various administrative tasks
     * and also use the InfluxDB CLI to create an operator token. These attributes will
     * be stored in a Secret created in AWS SecretManager in your account.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password of the initial admin user created in InfluxDB. This password
     * will allow you to access the InfluxDB UI to perform various administrative tasks
     * and also use the InfluxDB CLI to create an operator token. These attributes will
     * be stored in a Secret created in AWS SecretManager in your account.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password of the initial admin user created in InfluxDB. This password
     * will allow you to access the InfluxDB UI to perform various administrative tasks
     * and also use the InfluxDB CLI to create an operator token. These attributes will
     * be stored in a Secret created in AWS SecretManager in your account.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password of the initial admin user created in InfluxDB. This password
     * will allow you to access the InfluxDB UI to perform various administrative tasks
     * and also use the InfluxDB CLI to create an operator token. These attributes will
     * be stored in a Secret created in AWS SecretManager in your account.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password of the initial admin user created in InfluxDB. This password
     * will allow you to access the InfluxDB UI to perform various administrative tasks
     * and also use the InfluxDB CLI to create an operator token. These attributes will
     * be stored in a Secret created in AWS SecretManager in your account.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password of the initial admin user created in InfluxDB. This password
     * will allow you to access the InfluxDB UI to perform various administrative tasks
     * and also use the InfluxDB CLI to create an operator token. These attributes will
     * be stored in a Secret created in AWS SecretManager in your account.</p>
     */
    inline CreateDbInstanceRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password of the initial admin user created in InfluxDB. This password
     * will allow you to access the InfluxDB UI to perform various administrative tasks
     * and also use the InfluxDB CLI to create an operator token. These attributes will
     * be stored in a Secret created in AWS SecretManager in your account.</p>
     */
    inline CreateDbInstanceRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password of the initial admin user created in InfluxDB. This password
     * will allow you to access the InfluxDB UI to perform various administrative tasks
     * and also use the InfluxDB CLI to create an operator token. These attributes will
     * be stored in a Secret created in AWS SecretManager in your account.</p>
     */
    inline CreateDbInstanceRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The name of the initial organization for the initial admin user in InfluxDB.
     * An InfluxDB organization is a workspace for a group of users.</p>
     */
    inline const Aws::String& GetOrganization() const{ return m_organization; }

    /**
     * <p>The name of the initial organization for the initial admin user in InfluxDB.
     * An InfluxDB organization is a workspace for a group of users.</p>
     */
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }

    /**
     * <p>The name of the initial organization for the initial admin user in InfluxDB.
     * An InfluxDB organization is a workspace for a group of users.</p>
     */
    inline void SetOrganization(const Aws::String& value) { m_organizationHasBeenSet = true; m_organization = value; }

    /**
     * <p>The name of the initial organization for the initial admin user in InfluxDB.
     * An InfluxDB organization is a workspace for a group of users.</p>
     */
    inline void SetOrganization(Aws::String&& value) { m_organizationHasBeenSet = true; m_organization = std::move(value); }

    /**
     * <p>The name of the initial organization for the initial admin user in InfluxDB.
     * An InfluxDB organization is a workspace for a group of users.</p>
     */
    inline void SetOrganization(const char* value) { m_organizationHasBeenSet = true; m_organization.assign(value); }

    /**
     * <p>The name of the initial organization for the initial admin user in InfluxDB.
     * An InfluxDB organization is a workspace for a group of users.</p>
     */
    inline CreateDbInstanceRequest& WithOrganization(const Aws::String& value) { SetOrganization(value); return *this;}

    /**
     * <p>The name of the initial organization for the initial admin user in InfluxDB.
     * An InfluxDB organization is a workspace for a group of users.</p>
     */
    inline CreateDbInstanceRequest& WithOrganization(Aws::String&& value) { SetOrganization(std::move(value)); return *this;}

    /**
     * <p>The name of the initial organization for the initial admin user in InfluxDB.
     * An InfluxDB organization is a workspace for a group of users.</p>
     */
    inline CreateDbInstanceRequest& WithOrganization(const char* value) { SetOrganization(value); return *this;}


    /**
     * <p>The name of the initial InfluxDB bucket. All InfluxDB data is stored in a
     * bucket. A bucket combines the concept of a database and a retention period (the
     * duration of time that each data point persists). A bucket belongs to an
     * organization.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the initial InfluxDB bucket. All InfluxDB data is stored in a
     * bucket. A bucket combines the concept of a database and a retention period (the
     * duration of time that each data point persists). A bucket belongs to an
     * organization.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the initial InfluxDB bucket. All InfluxDB data is stored in a
     * bucket. A bucket combines the concept of a database and a retention period (the
     * duration of time that each data point persists). A bucket belongs to an
     * organization.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the initial InfluxDB bucket. All InfluxDB data is stored in a
     * bucket. A bucket combines the concept of a database and a retention period (the
     * duration of time that each data point persists). A bucket belongs to an
     * organization.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the initial InfluxDB bucket. All InfluxDB data is stored in a
     * bucket. A bucket combines the concept of a database and a retention period (the
     * duration of time that each data point persists). A bucket belongs to an
     * organization.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the initial InfluxDB bucket. All InfluxDB data is stored in a
     * bucket. A bucket combines the concept of a database and a retention period (the
     * duration of time that each data point persists). A bucket belongs to an
     * organization.</p>
     */
    inline CreateDbInstanceRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the initial InfluxDB bucket. All InfluxDB data is stored in a
     * bucket. A bucket combines the concept of a database and a retention period (the
     * duration of time that each data point persists). A bucket belongs to an
     * organization.</p>
     */
    inline CreateDbInstanceRequest& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the initial InfluxDB bucket. All InfluxDB data is stored in a
     * bucket. A bucket combines the concept of a database and a retention period (the
     * duration of time that each data point persists). A bucket belongs to an
     * organization.</p>
     */
    inline CreateDbInstanceRequest& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The Timestream for InfluxDB DB instance type to run InfluxDB on.</p>
     */
    inline const DbInstanceType& GetDbInstanceType() const{ return m_dbInstanceType; }

    /**
     * <p>The Timestream for InfluxDB DB instance type to run InfluxDB on.</p>
     */
    inline bool DbInstanceTypeHasBeenSet() const { return m_dbInstanceTypeHasBeenSet; }

    /**
     * <p>The Timestream for InfluxDB DB instance type to run InfluxDB on.</p>
     */
    inline void SetDbInstanceType(const DbInstanceType& value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = value; }

    /**
     * <p>The Timestream for InfluxDB DB instance type to run InfluxDB on.</p>
     */
    inline void SetDbInstanceType(DbInstanceType&& value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = std::move(value); }

    /**
     * <p>The Timestream for InfluxDB DB instance type to run InfluxDB on.</p>
     */
    inline CreateDbInstanceRequest& WithDbInstanceType(const DbInstanceType& value) { SetDbInstanceType(value); return *this;}

    /**
     * <p>The Timestream for InfluxDB DB instance type to run InfluxDB on.</p>
     */
    inline CreateDbInstanceRequest& WithDbInstanceType(DbInstanceType&& value) { SetDbInstanceType(std::move(value)); return *this;}


    /**
     * <p>A list of VPC subnet IDs to associate with the DB instance. Provide at least
     * two VPC subnet IDs in different availability zones when deploying with a
     * Multi-AZ standby.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const{ return m_vpcSubnetIds; }

    /**
     * <p>A list of VPC subnet IDs to associate with the DB instance. Provide at least
     * two VPC subnet IDs in different availability zones when deploying with a
     * Multi-AZ standby.</p>
     */
    inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }

    /**
     * <p>A list of VPC subnet IDs to associate with the DB instance. Provide at least
     * two VPC subnet IDs in different availability zones when deploying with a
     * Multi-AZ standby.</p>
     */
    inline void SetVpcSubnetIds(const Aws::Vector<Aws::String>& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = value; }

    /**
     * <p>A list of VPC subnet IDs to associate with the DB instance. Provide at least
     * two VPC subnet IDs in different availability zones when deploying with a
     * Multi-AZ standby.</p>
     */
    inline void SetVpcSubnetIds(Aws::Vector<Aws::String>&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::move(value); }

    /**
     * <p>A list of VPC subnet IDs to associate with the DB instance. Provide at least
     * two VPC subnet IDs in different availability zones when deploying with a
     * Multi-AZ standby.</p>
     */
    inline CreateDbInstanceRequest& WithVpcSubnetIds(const Aws::Vector<Aws::String>& value) { SetVpcSubnetIds(value); return *this;}

    /**
     * <p>A list of VPC subnet IDs to associate with the DB instance. Provide at least
     * two VPC subnet IDs in different availability zones when deploying with a
     * Multi-AZ standby.</p>
     */
    inline CreateDbInstanceRequest& WithVpcSubnetIds(Aws::Vector<Aws::String>&& value) { SetVpcSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC subnet IDs to associate with the DB instance. Provide at least
     * two VPC subnet IDs in different availability zones when deploying with a
     * Multi-AZ standby.</p>
     */
    inline CreateDbInstanceRequest& AddVpcSubnetIds(const Aws::String& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC subnet IDs to associate with the DB instance. Provide at least
     * two VPC subnet IDs in different availability zones when deploying with a
     * Multi-AZ standby.</p>
     */
    inline CreateDbInstanceRequest& AddVpcSubnetIds(Aws::String&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC subnet IDs to associate with the DB instance. Provide at least
     * two VPC subnet IDs in different availability zones when deploying with a
     * Multi-AZ standby.</p>
     */
    inline CreateDbInstanceRequest& AddVpcSubnetIds(const char* value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }


    /**
     * <p>A list of VPC security group IDs to associate with the DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of VPC security group IDs to associate with the DB instance.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of VPC security group IDs to associate with the DB instance.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of VPC security group IDs to associate with the DB instance.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of VPC security group IDs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of VPC security group IDs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC security group IDs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC security group IDs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC security group IDs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>Configures the DB instance with a public IP to facilitate access.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Configures the DB instance with a public IP to facilitate access.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Configures the DB instance with a public IP to facilitate access.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Configures the DB instance with a public IP to facilitate access.</p>
     */
    inline CreateDbInstanceRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The Timestream for InfluxDB DB storage type to read and write InfluxDB
     * data.</p> <p>You can choose between 3 different types of provisioned Influx IOPS
     * included storage according to your workloads requirements:</p> <ul> <li>
     * <p>Influx IO Included 3000 IOPS</p> </li> <li> <p>Influx IO Included 12000
     * IOPS</p> </li> <li> <p>Influx IO Included 16000 IOPS</p> </li> </ul>
     */
    inline const DbStorageType& GetDbStorageType() const{ return m_dbStorageType; }

    /**
     * <p>The Timestream for InfluxDB DB storage type to read and write InfluxDB
     * data.</p> <p>You can choose between 3 different types of provisioned Influx IOPS
     * included storage according to your workloads requirements:</p> <ul> <li>
     * <p>Influx IO Included 3000 IOPS</p> </li> <li> <p>Influx IO Included 12000
     * IOPS</p> </li> <li> <p>Influx IO Included 16000 IOPS</p> </li> </ul>
     */
    inline bool DbStorageTypeHasBeenSet() const { return m_dbStorageTypeHasBeenSet; }

    /**
     * <p>The Timestream for InfluxDB DB storage type to read and write InfluxDB
     * data.</p> <p>You can choose between 3 different types of provisioned Influx IOPS
     * included storage according to your workloads requirements:</p> <ul> <li>
     * <p>Influx IO Included 3000 IOPS</p> </li> <li> <p>Influx IO Included 12000
     * IOPS</p> </li> <li> <p>Influx IO Included 16000 IOPS</p> </li> </ul>
     */
    inline void SetDbStorageType(const DbStorageType& value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = value; }

    /**
     * <p>The Timestream for InfluxDB DB storage type to read and write InfluxDB
     * data.</p> <p>You can choose between 3 different types of provisioned Influx IOPS
     * included storage according to your workloads requirements:</p> <ul> <li>
     * <p>Influx IO Included 3000 IOPS</p> </li> <li> <p>Influx IO Included 12000
     * IOPS</p> </li> <li> <p>Influx IO Included 16000 IOPS</p> </li> </ul>
     */
    inline void SetDbStorageType(DbStorageType&& value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = std::move(value); }

    /**
     * <p>The Timestream for InfluxDB DB storage type to read and write InfluxDB
     * data.</p> <p>You can choose between 3 different types of provisioned Influx IOPS
     * included storage according to your workloads requirements:</p> <ul> <li>
     * <p>Influx IO Included 3000 IOPS</p> </li> <li> <p>Influx IO Included 12000
     * IOPS</p> </li> <li> <p>Influx IO Included 16000 IOPS</p> </li> </ul>
     */
    inline CreateDbInstanceRequest& WithDbStorageType(const DbStorageType& value) { SetDbStorageType(value); return *this;}

    /**
     * <p>The Timestream for InfluxDB DB storage type to read and write InfluxDB
     * data.</p> <p>You can choose between 3 different types of provisioned Influx IOPS
     * included storage according to your workloads requirements:</p> <ul> <li>
     * <p>Influx IO Included 3000 IOPS</p> </li> <li> <p>Influx IO Included 12000
     * IOPS</p> </li> <li> <p>Influx IO Included 16000 IOPS</p> </li> </ul>
     */
    inline CreateDbInstanceRequest& WithDbStorageType(DbStorageType&& value) { SetDbStorageType(std::move(value)); return *this;}


    /**
     * <p>The amount of storage to allocate for your DB storage type in GiB
     * (gibibytes).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage to allocate for your DB storage type in GiB
     * (gibibytes).</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage to allocate for your DB storage type in GiB
     * (gibibytes).</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage to allocate for your DB storage type in GiB
     * (gibibytes).</p>
     */
    inline CreateDbInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>The id of the DB parameter group to assign to your DB instance. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline const Aws::String& GetDbParameterGroupIdentifier() const{ return m_dbParameterGroupIdentifier; }

    /**
     * <p>The id of the DB parameter group to assign to your DB instance. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline bool DbParameterGroupIdentifierHasBeenSet() const { return m_dbParameterGroupIdentifierHasBeenSet; }

    /**
     * <p>The id of the DB parameter group to assign to your DB instance. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline void SetDbParameterGroupIdentifier(const Aws::String& value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier = value; }

    /**
     * <p>The id of the DB parameter group to assign to your DB instance. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline void SetDbParameterGroupIdentifier(Aws::String&& value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier = std::move(value); }

    /**
     * <p>The id of the DB parameter group to assign to your DB instance. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline void SetDbParameterGroupIdentifier(const char* value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier.assign(value); }

    /**
     * <p>The id of the DB parameter group to assign to your DB instance. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline CreateDbInstanceRequest& WithDbParameterGroupIdentifier(const Aws::String& value) { SetDbParameterGroupIdentifier(value); return *this;}

    /**
     * <p>The id of the DB parameter group to assign to your DB instance. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline CreateDbInstanceRequest& WithDbParameterGroupIdentifier(Aws::String&& value) { SetDbParameterGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The id of the DB parameter group to assign to your DB instance. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline CreateDbInstanceRequest& WithDbParameterGroupIdentifier(const char* value) { SetDbParameterGroupIdentifier(value); return *this;}


    /**
     * <p>Specifies whether the DB instance will be deployed as a standalone instance
     * or with a Multi-AZ standby for high availability.</p>
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Specifies whether the DB instance will be deployed as a standalone instance
     * or with a Multi-AZ standby for high availability.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>Specifies whether the DB instance will be deployed as a standalone instance
     * or with a Multi-AZ standby for high availability.</p>
     */
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Specifies whether the DB instance will be deployed as a standalone instance
     * or with a Multi-AZ standby for high availability.</p>
     */
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>Specifies whether the DB instance will be deployed as a standalone instance
     * or with a Multi-AZ standby for high availability.</p>
     */
    inline CreateDbInstanceRequest& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Specifies whether the DB instance will be deployed as a standalone instance
     * or with a Multi-AZ standby for high availability.</p>
     */
    inline CreateDbInstanceRequest& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>Configuration for sending InfluxDB engine logs to a specified S3 bucket.</p>
     */
    inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const{ return m_logDeliveryConfiguration; }

    /**
     * <p>Configuration for sending InfluxDB engine logs to a specified S3 bucket.</p>
     */
    inline bool LogDeliveryConfigurationHasBeenSet() const { return m_logDeliveryConfigurationHasBeenSet; }

    /**
     * <p>Configuration for sending InfluxDB engine logs to a specified S3 bucket.</p>
     */
    inline void SetLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { m_logDeliveryConfigurationHasBeenSet = true; m_logDeliveryConfiguration = value; }

    /**
     * <p>Configuration for sending InfluxDB engine logs to a specified S3 bucket.</p>
     */
    inline void SetLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { m_logDeliveryConfigurationHasBeenSet = true; m_logDeliveryConfiguration = std::move(value); }

    /**
     * <p>Configuration for sending InfluxDB engine logs to a specified S3 bucket.</p>
     */
    inline CreateDbInstanceRequest& WithLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { SetLogDeliveryConfiguration(value); return *this;}

    /**
     * <p>Configuration for sending InfluxDB engine logs to a specified S3 bucket.</p>
     */
    inline CreateDbInstanceRequest& WithLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { SetLogDeliveryConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline CreateDbInstanceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_organization;
    bool m_organizationHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    DbInstanceType m_dbInstanceType;
    bool m_dbInstanceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    DbStorageType m_dbStorageType;
    bool m_dbStorageTypeHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_dbParameterGroupIdentifier;
    bool m_dbParameterGroupIdentifierHasBeenSet = false;

    DeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    LogDeliveryConfiguration m_logDeliveryConfiguration;
    bool m_logDeliveryConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws

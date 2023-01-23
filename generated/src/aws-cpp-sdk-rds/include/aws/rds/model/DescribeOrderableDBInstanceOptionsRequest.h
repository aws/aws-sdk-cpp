/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOrderableDBInstanceOptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeOrderableDBInstanceOptionsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeOrderableDBInstanceOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrderableDBInstanceOptions"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the engine to retrieve DB instance options for.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the engine to retrieve DB instance options for.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the engine to retrieve DB instance options for.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the engine to retrieve DB instance options for.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the engine to retrieve DB instance options for.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the engine to retrieve DB instance options for.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the engine to retrieve DB instance options for.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the engine to retrieve DB instance options for.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The engine version filter value. Specify this parameter to show only the
     * available offerings matching the specified engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version filter value. Specify this parameter to show only the
     * available offerings matching the specified engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version filter value. Specify this parameter to show only the
     * available offerings matching the specified engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version filter value. Specify this parameter to show only the
     * available offerings matching the specified engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version filter value. Specify this parameter to show only the
     * available offerings matching the specified engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version filter value. Specify this parameter to show only the
     * available offerings matching the specified engine version.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version filter value. Specify this parameter to show only the
     * available offerings matching the specified engine version.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version filter value. Specify this parameter to show only the
     * available offerings matching the specified engine version.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The DB instance class filter value. Specify this parameter to show only the
     * available offerings matching the specified DB instance class.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only the
     * available offerings matching the specified DB instance class.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only the
     * available offerings matching the specified DB instance class.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only the
     * available offerings matching the specified DB instance class.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only the
     * available offerings matching the specified DB instance class.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only the
     * available offerings matching the specified DB instance class.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only the
     * available offerings matching the specified DB instance class.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only the
     * available offerings matching the specified DB instance class.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The license model filter value. Specify this parameter to show only the
     * available offerings matching the specified license model.</p> <p>RDS Custom
     * supports only the BYOL licensing model.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>The license model filter value. Specify this parameter to show only the
     * available offerings matching the specified license model.</p> <p>RDS Custom
     * supports only the BYOL licensing model.</p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>The license model filter value. Specify this parameter to show only the
     * available offerings matching the specified license model.</p> <p>RDS Custom
     * supports only the BYOL licensing model.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>The license model filter value. Specify this parameter to show only the
     * available offerings matching the specified license model.</p> <p>RDS Custom
     * supports only the BYOL licensing model.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>The license model filter value. Specify this parameter to show only the
     * available offerings matching the specified license model.</p> <p>RDS Custom
     * supports only the BYOL licensing model.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>The license model filter value. Specify this parameter to show only the
     * available offerings matching the specified license model.</p> <p>RDS Custom
     * supports only the BYOL licensing model.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model filter value. Specify this parameter to show only the
     * available offerings matching the specified license model.</p> <p>RDS Custom
     * supports only the BYOL licensing model.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>The license model filter value. Specify this parameter to show only the
     * available offerings matching the specified license model.</p> <p>RDS Custom
     * supports only the BYOL licensing model.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>The Availability Zone group associated with a Local Zone. Specify this
     * parameter to retrieve available offerings for the Local Zones in the group.</p>
     * <p>Omit this parameter to show the available offerings in the specified Amazon
     * Web Services Region.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetAvailabilityZoneGroup() const{ return m_availabilityZoneGroup; }

    /**
     * <p>The Availability Zone group associated with a Local Zone. Specify this
     * parameter to retrieve available offerings for the Local Zones in the group.</p>
     * <p>Omit this parameter to show the available offerings in the specified Amazon
     * Web Services Region.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool AvailabilityZoneGroupHasBeenSet() const { return m_availabilityZoneGroupHasBeenSet; }

    /**
     * <p>The Availability Zone group associated with a Local Zone. Specify this
     * parameter to retrieve available offerings for the Local Zones in the group.</p>
     * <p>Omit this parameter to show the available offerings in the specified Amazon
     * Web Services Region.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetAvailabilityZoneGroup(const Aws::String& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = value; }

    /**
     * <p>The Availability Zone group associated with a Local Zone. Specify this
     * parameter to retrieve available offerings for the Local Zones in the group.</p>
     * <p>Omit this parameter to show the available offerings in the specified Amazon
     * Web Services Region.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetAvailabilityZoneGroup(Aws::String&& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = std::move(value); }

    /**
     * <p>The Availability Zone group associated with a Local Zone. Specify this
     * parameter to retrieve available offerings for the Local Zones in the group.</p>
     * <p>Omit this parameter to show the available offerings in the specified Amazon
     * Web Services Region.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetAvailabilityZoneGroup(const char* value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup.assign(value); }

    /**
     * <p>The Availability Zone group associated with a Local Zone. Specify this
     * parameter to retrieve available offerings for the Local Zones in the group.</p>
     * <p>Omit this parameter to show the available offerings in the specified Amazon
     * Web Services Region.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithAvailabilityZoneGroup(const Aws::String& value) { SetAvailabilityZoneGroup(value); return *this;}

    /**
     * <p>The Availability Zone group associated with a Local Zone. Specify this
     * parameter to retrieve available offerings for the Local Zones in the group.</p>
     * <p>Omit this parameter to show the available offerings in the specified Amazon
     * Web Services Region.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithAvailabilityZoneGroup(Aws::String&& value) { SetAvailabilityZoneGroup(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone group associated with a Local Zone. Specify this
     * parameter to retrieve available offerings for the Local Zones in the group.</p>
     * <p>Omit this parameter to show the available offerings in the specified Amazon
     * Web Services Region.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithAvailabilityZoneGroup(const char* value) { SetAvailabilityZoneGroup(value); return *this;}


    /**
     * <p>A value that indicates whether to show only VPC or non-VPC offerings. RDS
     * Custom supports only VPC offerings.</p> <p>RDS Custom supports only VPC
     * offerings. If you describe non-VPC offerings for RDS Custom, the output shows
     * VPC offerings.</p>
     */
    inline bool GetVpc() const{ return m_vpc; }

    /**
     * <p>A value that indicates whether to show only VPC or non-VPC offerings. RDS
     * Custom supports only VPC offerings.</p> <p>RDS Custom supports only VPC
     * offerings. If you describe non-VPC offerings for RDS Custom, the output shows
     * VPC offerings.</p>
     */
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }

    /**
     * <p>A value that indicates whether to show only VPC or non-VPC offerings. RDS
     * Custom supports only VPC offerings.</p> <p>RDS Custom supports only VPC
     * offerings. If you describe non-VPC offerings for RDS Custom, the output shows
     * VPC offerings.</p>
     */
    inline void SetVpc(bool value) { m_vpcHasBeenSet = true; m_vpc = value; }

    /**
     * <p>A value that indicates whether to show only VPC or non-VPC offerings. RDS
     * Custom supports only VPC offerings.</p> <p>RDS Custom supports only VPC
     * offerings. If you describe non-VPC offerings for RDS Custom, the output shows
     * VPC offerings.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithVpc(bool value) { SetVpc(value); return *this;}


    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 10000.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 10000.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 10000.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 10000.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeOrderableDBInstanceOptionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_availabilityZoneGroup;
    bool m_availabilityZoneGroupHasBeenSet = false;

    bool m_vpc;
    bool m_vpcHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

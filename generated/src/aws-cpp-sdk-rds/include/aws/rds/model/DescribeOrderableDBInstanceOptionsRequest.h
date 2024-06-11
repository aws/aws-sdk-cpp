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

    ///@{
    /**
     * <p>The name of the database engine to describe DB instance options for.</p>
     * <p>Valid Values:</p> <ul> <li> <p> <code>aurora-mysql</code> </p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>custom-oracle-ee</code>
     * </p> </li> <li> <p> <code>custom-oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>custom-oracle-se2</code> </p> </li> <li> <p>
     * <code>custom-oracle-se2-cdb</code> </p> </li> <li> <p> <code>db2-ae</code> </p>
     * </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to include only the available options for the specified engine
     * version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to include only the available options for the specified DB instance
     * class.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline DescribeOrderableDBInstanceOptionsRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to include only the available options for the specified license
     * model.</p> <p>RDS Custom supports only the BYOL licensing model.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline DescribeOrderableDBInstanceOptionsRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone group associated with a Local Zone. Specify this
     * parameter to retrieve available options for the Local Zones in the group.</p>
     * <p>Omit this parameter to show the available options in the specified Amazon Web
     * Services Region.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p>
     */
    inline const Aws::String& GetAvailabilityZoneGroup() const{ return m_availabilityZoneGroup; }
    inline bool AvailabilityZoneGroupHasBeenSet() const { return m_availabilityZoneGroupHasBeenSet; }
    inline void SetAvailabilityZoneGroup(const Aws::String& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = value; }
    inline void SetAvailabilityZoneGroup(Aws::String&& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = std::move(value); }
    inline void SetAvailabilityZoneGroup(const char* value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup.assign(value); }
    inline DescribeOrderableDBInstanceOptionsRequest& WithAvailabilityZoneGroup(const Aws::String& value) { SetAvailabilityZoneGroup(value); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithAvailabilityZoneGroup(Aws::String&& value) { SetAvailabilityZoneGroup(std::move(value)); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithAvailabilityZoneGroup(const char* value) { SetAvailabilityZoneGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to show only VPC or non-VPC offerings. RDS Custom supports
     * only VPC offerings.</p> <p>RDS Custom supports only VPC offerings. If you
     * describe non-VPC offerings for RDS Custom, the output shows VPC offerings.</p>
     */
    inline bool GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(bool value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline DescribeOrderableDBInstanceOptionsRequest& WithVpc(bool value) { SetVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeOrderableDBInstanceOptionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeOrderableDBInstanceOptionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 1000.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeOrderableDBInstanceOptionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeOrderableDBInstanceOptionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeOrderableDBInstanceOptionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDSRequest.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/Tag.h>

#include <utility>

namespace Aws {
namespace RDS {
namespace Model {

/**
 */
class CreateDBCapacityReservationRequest : public RDSRequest {
 public:
  AWS_RDS_API CreateDBCapacityReservationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDBCapacityReservation"; }

  AWS_RDS_API Aws::String SerializePayload() const override;

 protected:
  AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The name of the DB capacity reservation. This name must be unique for your
   * Amazon Web Services account in the Amazon Web Services Region.</p>
   * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 lowercase letters,
   * digits, or hyphens.</p> </li> <li> <p>First character must be a lowercase
   * letter.</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
   * hyphens.</p> </li> <li> <p>Can't contain more than 16 groups of characters
   * separated by hyphens.</p> </li> <li> <p>Can't begin with <code>dbcr-</code>.</p>
   * </li> </ul>
   */
  inline const Aws::String& GetDBCapacityReservationName() const { return m_dBCapacityReservationName; }
  inline bool DBCapacityReservationNameHasBeenSet() const { return m_dBCapacityReservationNameHasBeenSet; }
  template <typename DBCapacityReservationNameT = Aws::String>
  void SetDBCapacityReservationName(DBCapacityReservationNameT&& value) {
    m_dBCapacityReservationNameHasBeenSet = true;
    m_dBCapacityReservationName = std::forward<DBCapacityReservationNameT>(value);
  }
  template <typename DBCapacityReservationNameT = Aws::String>
  CreateDBCapacityReservationRequest& WithDBCapacityReservationName(DBCapacityReservationNameT&& value) {
    SetDBCapacityReservationName(std::forward<DBCapacityReservationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute and memory capacity to reserve, for example
   * <code>db.m5.large</code>. Not all DB instance classes are available in all
   * Amazon Web Services Regions, or for all database engines. For the full list of
   * DB instance classes, and availability for your engine, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
   * instance classes</a> in the <i>Amazon RDS User Guide</i>.</p>
   * <p>Constraints:</p> <ul> <li> <p>Must be a DB instance class that the specified
   * <code>Engine</code> supports.</p> </li> <li> <p>For RDS for Oracle with
   * <code>LicenseModel</code> set to <code>license-included</code>, some DB instance
   * classes aren't supported. Either choose a supported DB instance class, or set
   * <code>LicenseModel</code> to <code>bring-your-own-license</code>.</p> </li>
   * </ul>
   */
  inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
  inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
  template <typename DBInstanceClassT = Aws::String>
  void SetDBInstanceClass(DBInstanceClassT&& value) {
    m_dBInstanceClassHasBeenSet = true;
    m_dBInstanceClass = std::forward<DBInstanceClassT>(value);
  }
  template <typename DBInstanceClassT = Aws::String>
  CreateDBCapacityReservationRequest& WithDBInstanceClass(DBInstanceClassT&& value) {
    SetDBInstanceClass(std::forward<DBInstanceClassT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The database engine to reserve capacity for.</p> <p>Valid Values:
   * <code>aurora-mysql</code> | <code>aurora-postgresql</code> | <code>mysql</code>
   * | <code>postgres</code> | <code>mariadb</code> | <code>oracle-ee</code> |
   * <code>oracle-ee-cdb</code> | <code>oracle-se2</code> |
   * <code>oracle-se2-cdb</code> | <code>sqlserver-ee</code> |
   * <code>sqlserver-se</code> | <code>sqlserver-web</code> |
   * <code>sqlserver-ex</code> | <code>sqlserver-dev-ee</code> |
   * <code>sqlserver-dev-se</code> | <code>db2-ae</code> | <code>db2-ce</code> |
   * <code>db2-se</code> </p>  <p>The Developer Edition engines
   * <code>sqlserver-dev-ee</code> and <code>sqlserver-dev-se</code> support no
   * Multi-AZ DB instance and no read replica. Therefore, a reservation for either
   * engine serves Single-AZ DB instances only.</p>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  CreateDBCapacityReservationRequest& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of DB instances to reserve in each Availability Zone that you list
   * in <code>AvailabilityZones</code>. Amazon RDS reserves this number of DB
   * instances in every listed Availability Zone.</p> <p>A Single-AZ DB instance uses
   * one unit of reserved capacity, in one Availability Zone. A Multi-AZ DB instance
   * is one DB instance, and it uses one unit of reserved capacity in each of two
   * Availability Zones. Therefore, a Multi-AZ DB instance uses two units in total. A
   * read replica uses one unit of reserved capacity, in the same way as any other DB
   * instance.</p> <p>Amazon RDS reserves capacity in each Availability Zone
   * separately. Reserved capacity in one Availability Zone can't serve a DB instance
   * in another Availability Zone. A request for a DB instance fails when the
   * Availability Zone of the DB instance has no available capacity.</p>
   * <p>Therefore, set this value to the number of DB instances that you want to run
   * at the same time in one Availability Zone. Don't set it to the number that you
   * want in total.</p> <p>This value multiplied by the number of Availability Zones
   * counts against the DB instances quota for your Amazon Web Services account in
   * the Amazon Web Services Region. Your existing DB instances, and the unused
   * capacity of your other reservations, count against the same quota.</p> <p>To
   * find the value of the DB instances quota, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Limits.html">Quotas
   * and constraints for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>.</p>
   * <p>Constraints:</p> <ul> <li> <p>Minimum 1.</p> </li> </ul>
   */
  inline int GetCapacityPerAvailabilityZone() const { return m_capacityPerAvailabilityZone; }
  inline bool CapacityPerAvailabilityZoneHasBeenSet() const { return m_capacityPerAvailabilityZoneHasBeenSet; }
  inline void SetCapacityPerAvailabilityZone(int value) {
    m_capacityPerAvailabilityZoneHasBeenSet = true;
    m_capacityPerAvailabilityZone = value;
  }
  inline CreateDBCapacityReservationRequest& WithCapacityPerAvailabilityZone(int value) {
    SetCapacityPerAvailabilityZone(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of Availability Zones for the reservation.</p> <p>You can't change the
   * Availability Zones of a reservation after you create it. Reserved capacity in an
   * Availability Zone that no DB instance uses stays unused.</p> <p>Constraints:</p>
   * <ul> <li> <p>Must specify one or more Availability Zones.</p> </li> <li> <p>Each
   * Availability Zone can appear only once.</p> </li> <li> <p>Each Availability Zone
   * must be in the Amazon Web Services Region of the request.</p> </li> <li> <p>Each
   * Availability Zone must have capacity for the requested DB instance class.</p>
   * </li> <li> <p>Must include two or more Availability Zones to use the reservation
   * for a Multi-AZ DB instance.</p> </li> <li> <p>A DB instance can use reserved
   * capacity only in an Availability Zone that its DB subnet group covers.</p> </li>
   * </ul> <p>Example: <code>us-east-1a</code> </p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  CreateDBCapacityReservationRequest& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  CreateDBCapacityReservationRequest& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the reservation expires, in Universal Coordinated Time
   * (UTC). If you don't specify a value, the reservation doesn't expire.</p> <p>To
   * change the expiration of an existing reservation, use
   * <code>ModifyDBCapacityReservation</code>. That operation takes
   * <code>EndDateType</code> along with <code>EndDate</code>.</p>
   * <p>Constraints:</p> <ul> <li> <p>Must be a date and time in the future.</p>
   * </li> <li> <p>For a future-dated reservation, must be at or after
   * <code>StartDate</code> plus <code>CommitmentDuration</code>. For example, a
   * reservation that starts on 2026-12-01 with a 30-day commitment can't expire
   * before 2026-12-31. To reserve capacity for one calendar month, set
   * <code>CommitmentDuration</code> to 30 days or fewer, not to the length of the
   * month.</p> </li> </ul> <p>Example: <code>2026-12-31T23:59:59Z</code> </p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  CreateDBCapacityReservationRequest& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the reservation starts, in Universal Coordinated Time
   * (UTC). Specify this parameter to create a future-dated reservation. If you don't
   * specify a value, the reservation starts immediately.</p> <p>A reservation that
   * starts later always carries a capacity commitment. Therefore, a request that
   * specifies <code>StartDate</code> must also meet every constraint of a
   * future-dated reservation, including the minimum reserved capacity in each
   * Availability Zone.</p> <p>Constraints:</p> <ul> <li> <p>Must be from 5 to 120
   * days in the future.</p> </li> <li> <p>You must also specify
   * <code>CommitmentDuration</code>.</p> </li> </ul> <p>Example:
   * <code>2026-12-01T00:00:00Z</code> </p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  CreateDBCapacityReservationRequest& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The length of the capacity commitment that you request for a future-dated
   * reservation, in seconds. Amazon RDS measures this length from
   * <code>StartDate</code>.</p>  <p>Amazon RDS can grant a shorter capacity
   * commitment than you request. Therefore, read <code>CommitmentEndDate</code> in
   * <code>CommitmentInfo</code> for the commitment that Amazon RDS granted.</p>
   *  <p>The commitment doesn't end the reservation. Specify
   * <code>EndDate</code> to set an expiration date. You can't cancel a reservation
   * in the <code>active</code> state during the commitment.</p> <p>Constraints:</p>
   * <ul> <li> <p>Minimum 1209600, which is 14 days. For a <code>db.x</code> DB
   * instance class, such as <code>db.x2g.xlarge</code>, the minimum is 7257600,
   * which is 84 days.</p> </li> <li> <p>Must be less than 315576000, which is 10
   * years.</p> </li> <li> <p>You must also specify <code>StartDate</code>.</p> </li>
   * </ul> <p>Example: <code>2592000</code> </p>
   */
  inline long long GetCommitmentDuration() const { return m_commitmentDuration; }
  inline bool CommitmentDurationHasBeenSet() const { return m_commitmentDurationHasBeenSet; }
  inline void SetCommitmentDuration(long long value) {
    m_commitmentDurationHasBeenSet = true;
    m_commitmentDuration = value;
  }
  inline CreateDBCapacityReservationRequest& WithCommitmentDuration(long long value) {
    SetCommitmentDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The license model to reserve capacity for. Specify this parameter only for
   * RDS for Microsoft SQL Server Enterprise Edition, Standard Edition, and Developer
   * Edition, for RDS for Oracle, or for RDS for Db2 Standard Edition and Advanced
   * Edition. Amazon RDS rejects the request for any other engine. This includes
   * Amazon Aurora, the Web and Express editions of RDS for Microsoft SQL Server, and
   * RDS for Db2 Community Edition.</p> <p>Valid Values:</p> <ul> <li> <p>RDS for
   * Microsoft SQL Server Enterprise Edition and Standard Edition -
   * <code>license-included | bring-your-own-media</code> </p> </li> <li> <p>RDS for
   * Microsoft SQL Server Developer Edition - <code>bring-your-own-license</code>
   * </p> </li> <li> <p>RDS for Oracle - <code>bring-your-own-license |
   * license-included</code> </p> </li> <li> <p>RDS for Db2 Standard Edition and
   * Advanced Edition - <code>bring-your-own-license | marketplace-license</code>
   * </p> </li> </ul> <p>A DB instance launches into the reservation only when the
   * license model of the DB instance matches the license model of the reservation.
   * For a reservation that holds no license model, Amazon RDS applies no license
   * model check at launch.</p> <p>For RDS for Microsoft SQL Server Enterprise
   * Edition and Standard Edition, if you don't specify a value, Amazon RDS uses
   * <code>license-included</code>.</p> <p>For RDS for Microsoft SQL Server Developer
   * Edition, if you don't specify a value, Amazon RDS uses
   * <code>bring-your-own-license</code>. That is the only license model that these
   * engines accept, and Amazon RDS rejects any other value.</p> <p>For RDS for
   * Oracle, if you don't specify a value, Amazon RDS uses the only orderable license
   * model for the DB instance class. If more than one license model is orderable,
   * you must specify one.</p> <p>For RDS for Db2 Standard Edition and Advanced
   * Edition, if you don't specify a value, Amazon RDS uses
   * <code>bring-your-own-license</code>. To reserve capacity for Db2 DB instances
   * that you license through Amazon Web Services Marketplace, specify
   * <code>marketplace-license</code>.</p>  <p>For RDS for Oracle, the license
   * models that you can reserve depend on the engine and the DB instance class. RDS
   * for Oracle Enterprise Edition doesn't support <code>license-included</code>.</p>
   *
   */
  inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  template <typename LicenseModelT = Aws::String>
  void SetLicenseModel(LicenseModelT&& value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = std::forward<LicenseModelT>(value);
  }
  template <typename LicenseModelT = Aws::String>
  CreateDBCapacityReservationRequest& WithLicenseModel(LicenseModelT&& value) {
    SetLicenseModel(std::forward<LicenseModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to assign to the DB capacity reservation.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateDBCapacityReservationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateDBCapacityReservationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dBCapacityReservationName;

  Aws::String m_dBInstanceClass;

  Aws::String m_engine;

  int m_capacityPerAvailabilityZone{0};

  Aws::Vector<Aws::String> m_availabilityZones;

  Aws::Utils::DateTime m_endDate{};

  Aws::Utils::DateTime m_startDate{};

  long long m_commitmentDuration{0};

  Aws::String m_licenseModel;

  Aws::Vector<Tag> m_tags;
  bool m_dBCapacityReservationNameHasBeenSet = false;
  bool m_dBInstanceClassHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_capacityPerAvailabilityZoneHasBeenSet = false;
  bool m_availabilityZonesHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_commitmentDurationHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/AvailableCapacityPerAvailabilityZone.h>
#include <aws/rds/model/DBCapacityReservationCommitmentInfo.h>
#include <aws/rds/model/DBCapacityReservationState.h>
#include <aws/rds/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>Contains the details of a DB capacity reservation.</p> <p>This data type is
 * used as a response element in the following operations:</p> <ul> <li> <p>
 * <code>CancelDBCapacityReservation</code> </p> </li> <li> <p>
 * <code>CreateDBCapacityReservation</code> </p> </li> <li> <p>
 * <code>DescribeDBCapacityReservations</code> </p> </li> <li> <p>
 * <code>ModifyDBCapacityReservation</code> </p> </li> </ul><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBCapacityReservation">AWS
 * API Reference</a></p>
 */
class DBCapacityReservation {
 public:
  AWS_RDS_API DBCapacityReservation() = default;
  AWS_RDS_API DBCapacityReservation(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API DBCapacityReservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The name that you specified for the DB capacity reservation.</p>
   */
  inline const Aws::String& GetDBCapacityReservationName() const { return m_dBCapacityReservationName; }
  inline bool DBCapacityReservationNameHasBeenSet() const { return m_dBCapacityReservationNameHasBeenSet; }
  template <typename DBCapacityReservationNameT = Aws::String>
  void SetDBCapacityReservationName(DBCapacityReservationNameT&& value) {
    m_dBCapacityReservationNameHasBeenSet = true;
    m_dBCapacityReservationName = std::forward<DBCapacityReservationNameT>(value);
  }
  template <typename DBCapacityReservationNameT = Aws::String>
  DBCapacityReservation& WithDBCapacityReservationName(DBCapacityReservationNameT&& value) {
    SetDBCapacityReservationName(std::forward<DBCapacityReservationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DB instance class for the reserved capacity. You specify this value when
   * you create the reservation, and you can't change it afterward.</p>
   */
  inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
  inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
  template <typename DBInstanceClassT = Aws::String>
  void SetDBInstanceClass(DBInstanceClassT&& value) {
    m_dBInstanceClassHasBeenSet = true;
    m_dBInstanceClass = std::forward<DBInstanceClassT>(value);
  }
  template <typename DBInstanceClassT = Aws::String>
  DBCapacityReservation& WithDBInstanceClass(DBInstanceClassT&& value) {
    SetDBInstanceClass(std::forward<DBInstanceClassT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The database engine for the reserved capacity. You specify this value when
   * you create the reservation, and you can't change it afterward.</p>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  DBCapacityReservation& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The license model for the reserved capacity. Amazon RDS returns this value
   * only for a reservation that reserves capacity for a specific license model.
   * Amazon RDS doesn't return this value for a reservation whose database engine
   * doesn't support a license model.</p> <p>A DB instance launches into the
   * reservation only when the license model of the DB instance matches this value.
   * For a reservation that holds no license model, Amazon RDS applies no license
   * model check at launch.</p> <p>Valid Values:</p> <ul> <li> <p>RDS for Microsoft
   * SQL Server Enterprise Edition and Standard Edition - <code>license-included |
   * bring-your-own-media</code> </p> </li> <li> <p>RDS for Microsoft SQL Server
   * Developer Edition - <code>bring-your-own-license</code> </p> </li> <li> <p>RDS
   * for Oracle - <code>bring-your-own-license | license-included</code> </p> </li>
   * <li> <p>RDS for Db2 Standard Edition and Advanced Edition -
   * <code>bring-your-own-license | marketplace-license</code> </p> </li> </ul>
   * <p>For RDS for Db2 Standard Edition and Advanced Edition, a reservation created
   * without a license model holds <code>bring-your-own-license</code>.</p>
   */
  inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  template <typename LicenseModelT = Aws::String>
  void SetLicenseModel(LicenseModelT&& value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = std::forward<LicenseModelT>(value);
  }
  template <typename LicenseModelT = Aws::String>
  DBCapacityReservation& WithLicenseModel(LicenseModelT&& value) {
    SetLicenseModel(std::forward<LicenseModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of DB instances that Amazon RDS reserves in each Availability Zone
   * of the reservation. This value matches the
   * <code>CapacityPerAvailabilityZone</code> parameter of the request. The total
   * reserved capacity is this value multiplied by the number of Availability Zones
   * of the reservation.</p>
   */
  inline int GetReservedCapacityPerAvailabilityZone() const { return m_reservedCapacityPerAvailabilityZone; }
  inline bool ReservedCapacityPerAvailabilityZoneHasBeenSet() const { return m_reservedCapacityPerAvailabilityZoneHasBeenSet; }
  inline void SetReservedCapacityPerAvailabilityZone(int value) {
    m_reservedCapacityPerAvailabilityZoneHasBeenSet = true;
    m_reservedCapacityPerAvailabilityZone = value;
  }
  inline DBCapacityReservation& WithReservedCapacityPerAvailabilityZone(int value) {
    SetReservedCapacityPerAvailabilityZone(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unused capacity of the reservation, reported for each Availability Zone
   * of the reservation. Each entry names one Availability Zone, and it reports the
   * number of DB instances that remain available in that Availability Zone.</p>
   * <p>Amazon RDS reports available capacity only for a reservation that is in the
   * <code>active</code> state and not past its end date. Otherwise, each entry
   * reports an available capacity of <code>0</code>. A future-dated reservation that
   * hasn't started reports <code>0</code>, and a reservation that Amazon RDS is
   * modifying reports <code>0</code>.</p> <p>A reservation reports the
   * <code>pending</code> state while Amazon RDS modifies it. Therefore, a
   * reservation in the <code>active</code> state that reports no available capacity
   * has no unused capacity.</p>
   */
  inline const Aws::Vector<AvailableCapacityPerAvailabilityZone>& GetAvailableCapacityPerAvailabilityZoneList() const {
    return m_availableCapacityPerAvailabilityZoneList;
  }
  inline bool AvailableCapacityPerAvailabilityZoneListHasBeenSet() const { return m_availableCapacityPerAvailabilityZoneListHasBeenSet; }
  template <typename AvailableCapacityPerAvailabilityZoneListT = Aws::Vector<AvailableCapacityPerAvailabilityZone>>
  void SetAvailableCapacityPerAvailabilityZoneList(AvailableCapacityPerAvailabilityZoneListT&& value) {
    m_availableCapacityPerAvailabilityZoneListHasBeenSet = true;
    m_availableCapacityPerAvailabilityZoneList = std::forward<AvailableCapacityPerAvailabilityZoneListT>(value);
  }
  template <typename AvailableCapacityPerAvailabilityZoneListT = Aws::Vector<AvailableCapacityPerAvailabilityZone>>
  DBCapacityReservation& WithAvailableCapacityPerAvailabilityZoneList(AvailableCapacityPerAvailabilityZoneListT&& value) {
    SetAvailableCapacityPerAvailabilityZoneList(std::forward<AvailableCapacityPerAvailabilityZoneListT>(value));
    return *this;
  }
  template <typename AvailableCapacityPerAvailabilityZoneListT = AvailableCapacityPerAvailabilityZone>
  DBCapacityReservation& AddAvailableCapacityPerAvailabilityZoneList(AvailableCapacityPerAvailabilityZoneListT&& value) {
    m_availableCapacityPerAvailabilityZoneListHasBeenSet = true;
    m_availableCapacityPerAvailabilityZoneList.emplace_back(std::forward<AvailableCapacityPerAvailabilityZoneListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the reservation expires, in Universal Coordinated Time
   * (UTC). Amazon RDS doesn't return this value if the reservation doesn't
   * expire.</p>  <p>A DB instance that uses the reservation keeps running
   * after the reservation expires. It continues on unreserved capacity, and Amazon
   * RDS doesn't stop it or modify it. However, Amazon RDS no longer reserves
   * capacity for the DB instance. Amazon RDS might later move the DB instance to
   * different hardware, for example during hardware maintenance. That move can fail
   * when the Amazon Web Services Region has insufficient capacity for the DB
   * instance class.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  DBCapacityReservation& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the reservation was created, in Universal Coordinated
   * Time (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
  inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
  template <typename CreateDateT = Aws::Utils::DateTime>
  void SetCreateDate(CreateDateT&& value) {
    m_createDateHasBeenSet = true;
    m_createDate = std::forward<CreateDateT>(value);
  }
  template <typename CreateDateT = Aws::Utils::DateTime>
  DBCapacityReservation& WithCreateDate(CreateDateT&& value) {
    SetCreateDate(std::forward<CreateDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when a future-dated reservation starts, in Universal
   * Coordinated Time (UTC). Amazon RDS doesn't return this value for a reservation
   * that started immediately.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  DBCapacityReservation& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity commitment of the reservation. Amazon RDS returns this object
   * only for a future-dated reservation.</p>
   */
  inline const DBCapacityReservationCommitmentInfo& GetCommitmentInfo() const { return m_commitmentInfo; }
  inline bool CommitmentInfoHasBeenSet() const { return m_commitmentInfoHasBeenSet; }
  template <typename CommitmentInfoT = DBCapacityReservationCommitmentInfo>
  void SetCommitmentInfo(CommitmentInfoT&& value) {
    m_commitmentInfoHasBeenSet = true;
    m_commitmentInfo = std::forward<CommitmentInfoT>(value);
  }
  template <typename CommitmentInfoT = DBCapacityReservationCommitmentInfo>
  DBCapacityReservation& WithCommitmentInfo(CommitmentInfoT&& value) {
    SetCommitmentInfo(std::forward<CommitmentInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the DB capacity reservation. A DB instance can use the
   * reservation in the <code>active</code> state only.</p> <p>Valid Values:</p> <ul>
   * <li> <p> <code>active</code> - Amazon RDS holds the reserved capacity, and a DB
   * instance can use it.</p> </li> <li> <p> <code>pending</code> - The reservation
   * isn't ready to use yet. Amazon RDS is creating the reserved capacity, or it is
   * applying a requested modification.</p> </li> <li> <p> <code>assessing</code> -
   * Amazon RDS is evaluating the request for a future-dated reservation.</p> </li>
   * <li> <p> <code>scheduled</code> - Amazon RDS accepted a future-dated
   * reservation, and the reservation is waiting for its start date.</p> </li> <li>
   * <p> <code>delayed</code> - Amazon RDS couldn't provide the reserved capacity of
   * a future-dated reservation by its start date.</p> </li> <li> <p>
   * <code>unsupported</code> - Amazon RDS can't fulfill the future-dated reservation
   * as requested.</p> </li> <li> <p> <code>expired</code> - The reservation passed
   * its end date. Amazon RDS releases the reserved capacity.</p> </li> <li> <p>
   * <code>cancelled</code> - You cancelled the reservation, and Amazon RDS released
   * the reserved capacity.</p> </li> <li> <p> <code>failed</code> - Amazon RDS
   * couldn't reserve the capacity.</p> </li> </ul> <p>The values
   * <code>assessing</code>, <code>scheduled</code>, <code>delayed</code>, and
   * <code>unsupported</code> apply to a future-dated reservation only.</p>
   */
  inline DBCapacityReservationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(DBCapacityReservationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline DBCapacityReservation& WithState(DBCapacityReservationState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the DB capacity reservation.</p>
   */
  inline const Aws::String& GetDBCapacityReservationArn() const { return m_dBCapacityReservationArn; }
  inline bool DBCapacityReservationArnHasBeenSet() const { return m_dBCapacityReservationArnHasBeenSet; }
  template <typename DBCapacityReservationArnT = Aws::String>
  void SetDBCapacityReservationArn(DBCapacityReservationArnT&& value) {
    m_dBCapacityReservationArnHasBeenSet = true;
    m_dBCapacityReservationArn = std::forward<DBCapacityReservationArnT>(value);
  }
  template <typename DBCapacityReservationArnT = Aws::String>
  DBCapacityReservation& WithDBCapacityReservationArn(DBCapacityReservationArnT&& value) {
    SetDBCapacityReservationArn(std::forward<DBCapacityReservationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the DB capacity reservation. The identifier has the
   * prefix <code>dbcr-</code>. Every other DB capacity reservation operation takes
   * this identifier.</p>
   */
  inline const Aws::String& GetDBCapacityReservationIdentifier() const { return m_dBCapacityReservationIdentifier; }
  inline bool DBCapacityReservationIdentifierHasBeenSet() const { return m_dBCapacityReservationIdentifierHasBeenSet; }
  template <typename DBCapacityReservationIdentifierT = Aws::String>
  void SetDBCapacityReservationIdentifier(DBCapacityReservationIdentifierT&& value) {
    m_dBCapacityReservationIdentifierHasBeenSet = true;
    m_dBCapacityReservationIdentifier = std::forward<DBCapacityReservationIdentifierT>(value);
  }
  template <typename DBCapacityReservationIdentifierT = Aws::String>
  DBCapacityReservation& WithDBCapacityReservationIdentifier(DBCapacityReservationIdentifierT&& value) {
    SetDBCapacityReservationIdentifier(std::forward<DBCapacityReservationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the DB capacity reservation.</p>
   */
  inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
  inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
  template <typename TagListT = Aws::Vector<Tag>>
  void SetTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList = std::forward<TagListT>(value);
  }
  template <typename TagListT = Aws::Vector<Tag>>
  DBCapacityReservation& WithTagList(TagListT&& value) {
    SetTagList(std::forward<TagListT>(value));
    return *this;
  }
  template <typename TagListT = Tag>
  DBCapacityReservation& AddTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList.emplace_back(std::forward<TagListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dBCapacityReservationName;

  Aws::String m_dBInstanceClass;

  Aws::String m_engine;

  Aws::String m_licenseModel;

  int m_reservedCapacityPerAvailabilityZone{0};

  Aws::Vector<AvailableCapacityPerAvailabilityZone> m_availableCapacityPerAvailabilityZoneList;

  Aws::Utils::DateTime m_endDate{};

  Aws::Utils::DateTime m_createDate{};

  Aws::Utils::DateTime m_startDate{};

  DBCapacityReservationCommitmentInfo m_commitmentInfo;

  DBCapacityReservationState m_state{DBCapacityReservationState::NOT_SET};

  Aws::String m_dBCapacityReservationArn;

  Aws::String m_dBCapacityReservationIdentifier;

  Aws::Vector<Tag> m_tagList;
  bool m_dBCapacityReservationNameHasBeenSet = false;
  bool m_dBInstanceClassHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_reservedCapacityPerAvailabilityZoneHasBeenSet = false;
  bool m_availableCapacityPerAvailabilityZoneListHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_createDateHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_commitmentInfoHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_dBCapacityReservationArnHasBeenSet = false;
  bool m_dBCapacityReservationIdentifierHasBeenSet = false;
  bool m_tagListHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws

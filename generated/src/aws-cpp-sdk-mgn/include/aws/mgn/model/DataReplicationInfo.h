/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/DataReplicationError.h>
#include <aws/mgn/model/DataReplicationInitiation.h>
#include <aws/mgn/model/DataReplicationState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/DataReplicationInfoReplicatedDisk.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Request data replication info.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DataReplicationInfo">AWS
   * API Reference</a></p>
   */
  class DataReplicationInfo
  {
  public:
    AWS_MGN_API DataReplicationInfo() = default;
    AWS_MGN_API DataReplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API DataReplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Error in obtaining data replication info.</p>
     */
    inline const DataReplicationError& GetDataReplicationError() const { return m_dataReplicationError; }
    inline bool DataReplicationErrorHasBeenSet() const { return m_dataReplicationErrorHasBeenSet; }
    template<typename DataReplicationErrorT = DataReplicationError>
    void SetDataReplicationError(DataReplicationErrorT&& value) { m_dataReplicationErrorHasBeenSet = true; m_dataReplicationError = std::forward<DataReplicationErrorT>(value); }
    template<typename DataReplicationErrorT = DataReplicationError>
    DataReplicationInfo& WithDataReplicationError(DataReplicationErrorT&& value) { SetDataReplicationError(std::forward<DataReplicationErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query whether data replication has been initiated.</p>
     */
    inline const DataReplicationInitiation& GetDataReplicationInitiation() const { return m_dataReplicationInitiation; }
    inline bool DataReplicationInitiationHasBeenSet() const { return m_dataReplicationInitiationHasBeenSet; }
    template<typename DataReplicationInitiationT = DataReplicationInitiation>
    void SetDataReplicationInitiation(DataReplicationInitiationT&& value) { m_dataReplicationInitiationHasBeenSet = true; m_dataReplicationInitiation = std::forward<DataReplicationInitiationT>(value); }
    template<typename DataReplicationInitiationT = DataReplicationInitiation>
    DataReplicationInfo& WithDataReplicationInitiation(DataReplicationInitiationT&& value) { SetDataReplicationInitiation(std::forward<DataReplicationInitiationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query the data replication state.</p>
     */
    inline DataReplicationState GetDataReplicationState() const { return m_dataReplicationState; }
    inline bool DataReplicationStateHasBeenSet() const { return m_dataReplicationStateHasBeenSet; }
    inline void SetDataReplicationState(DataReplicationState value) { m_dataReplicationStateHasBeenSet = true; m_dataReplicationState = value; }
    inline DataReplicationInfo& WithDataReplicationState(DataReplicationState value) { SetDataReplicationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query the time when data replication will be complete.</p>
     */
    inline const Aws::String& GetEtaDateTime() const { return m_etaDateTime; }
    inline bool EtaDateTimeHasBeenSet() const { return m_etaDateTimeHasBeenSet; }
    template<typename EtaDateTimeT = Aws::String>
    void SetEtaDateTime(EtaDateTimeT&& value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime = std::forward<EtaDateTimeT>(value); }
    template<typename EtaDateTimeT = Aws::String>
    DataReplicationInfo& WithEtaDateTime(EtaDateTimeT&& value) { SetEtaDateTime(std::forward<EtaDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query data replication lag duration.</p>
     */
    inline const Aws::String& GetLagDuration() const { return m_lagDuration; }
    inline bool LagDurationHasBeenSet() const { return m_lagDurationHasBeenSet; }
    template<typename LagDurationT = Aws::String>
    void SetLagDuration(LagDurationT&& value) { m_lagDurationHasBeenSet = true; m_lagDuration = std::forward<LagDurationT>(value); }
    template<typename LagDurationT = Aws::String>
    DataReplicationInfo& WithLagDuration(LagDurationT&& value) { SetLagDuration(std::forward<LagDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query data replication last snapshot time.</p>
     */
    inline const Aws::String& GetLastSnapshotDateTime() const { return m_lastSnapshotDateTime; }
    inline bool LastSnapshotDateTimeHasBeenSet() const { return m_lastSnapshotDateTimeHasBeenSet; }
    template<typename LastSnapshotDateTimeT = Aws::String>
    void SetLastSnapshotDateTime(LastSnapshotDateTimeT&& value) { m_lastSnapshotDateTimeHasBeenSet = true; m_lastSnapshotDateTime = std::forward<LastSnapshotDateTimeT>(value); }
    template<typename LastSnapshotDateTimeT = Aws::String>
    DataReplicationInfo& WithLastSnapshotDateTime(LastSnapshotDateTimeT&& value) { SetLastSnapshotDateTime(std::forward<LastSnapshotDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query disks replicated.</p>
     */
    inline const Aws::Vector<DataReplicationInfoReplicatedDisk>& GetReplicatedDisks() const { return m_replicatedDisks; }
    inline bool ReplicatedDisksHasBeenSet() const { return m_replicatedDisksHasBeenSet; }
    template<typename ReplicatedDisksT = Aws::Vector<DataReplicationInfoReplicatedDisk>>
    void SetReplicatedDisks(ReplicatedDisksT&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = std::forward<ReplicatedDisksT>(value); }
    template<typename ReplicatedDisksT = Aws::Vector<DataReplicationInfoReplicatedDisk>>
    DataReplicationInfo& WithReplicatedDisks(ReplicatedDisksT&& value) { SetReplicatedDisks(std::forward<ReplicatedDisksT>(value)); return *this;}
    template<typename ReplicatedDisksT = DataReplicationInfoReplicatedDisk>
    DataReplicationInfo& AddReplicatedDisks(ReplicatedDisksT&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.emplace_back(std::forward<ReplicatedDisksT>(value)); return *this; }
    ///@}
  private:

    DataReplicationError m_dataReplicationError;
    bool m_dataReplicationErrorHasBeenSet = false;

    DataReplicationInitiation m_dataReplicationInitiation;
    bool m_dataReplicationInitiationHasBeenSet = false;

    DataReplicationState m_dataReplicationState{DataReplicationState::NOT_SET};
    bool m_dataReplicationStateHasBeenSet = false;

    Aws::String m_etaDateTime;
    bool m_etaDateTimeHasBeenSet = false;

    Aws::String m_lagDuration;
    bool m_lagDurationHasBeenSet = false;

    Aws::String m_lastSnapshotDateTime;
    bool m_lastSnapshotDateTimeHasBeenSet = false;

    Aws::Vector<DataReplicationInfoReplicatedDisk> m_replicatedDisks;
    bool m_replicatedDisksHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws

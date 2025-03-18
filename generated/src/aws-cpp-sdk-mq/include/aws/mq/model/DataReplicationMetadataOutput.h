/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/DataReplicationCounterpart.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>The replication details of the data replication-enabled broker. Only returned
   * if dataReplicationMode or pendingDataReplicationMode is set to
   * CRDR.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DataReplicationMetadataOutput">AWS
   * API Reference</a></p>
   */
  class DataReplicationMetadataOutput
  {
  public:
    AWS_MQ_API DataReplicationMetadataOutput() = default;
    AWS_MQ_API DataReplicationMetadataOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API DataReplicationMetadataOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the replica/primary broker. Only returned if this broker is
     * currently set as a primary or replica in the broker's dataReplicationRole
     * property.</p>
     */
    inline const DataReplicationCounterpart& GetDataReplicationCounterpart() const { return m_dataReplicationCounterpart; }
    inline bool DataReplicationCounterpartHasBeenSet() const { return m_dataReplicationCounterpartHasBeenSet; }
    template<typename DataReplicationCounterpartT = DataReplicationCounterpart>
    void SetDataReplicationCounterpart(DataReplicationCounterpartT&& value) { m_dataReplicationCounterpartHasBeenSet = true; m_dataReplicationCounterpart = std::forward<DataReplicationCounterpartT>(value); }
    template<typename DataReplicationCounterpartT = DataReplicationCounterpart>
    DataReplicationMetadataOutput& WithDataReplicationCounterpart(DataReplicationCounterpartT&& value) { SetDataReplicationCounterpart(std::forward<DataReplicationCounterpartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the role of this broker in a data replication pair. When a replica
     * broker is promoted to primary, this role is interchanged.</p>
     */
    inline const Aws::String& GetDataReplicationRole() const { return m_dataReplicationRole; }
    inline bool DataReplicationRoleHasBeenSet() const { return m_dataReplicationRoleHasBeenSet; }
    template<typename DataReplicationRoleT = Aws::String>
    void SetDataReplicationRole(DataReplicationRoleT&& value) { m_dataReplicationRoleHasBeenSet = true; m_dataReplicationRole = std::forward<DataReplicationRoleT>(value); }
    template<typename DataReplicationRoleT = Aws::String>
    DataReplicationMetadataOutput& WithDataReplicationRole(DataReplicationRoleT&& value) { SetDataReplicationRole(std::forward<DataReplicationRoleT>(value)); return *this;}
    ///@}
  private:

    DataReplicationCounterpart m_dataReplicationCounterpart;
    bool m_dataReplicationCounterpartHasBeenSet = false;

    Aws::String m_dataReplicationRole;
    bool m_dataReplicationRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws

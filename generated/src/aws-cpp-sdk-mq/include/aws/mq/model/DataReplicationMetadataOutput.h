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
    AWS_MQ_API DataReplicationMetadataOutput();
    AWS_MQ_API DataReplicationMetadataOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API DataReplicationMetadataOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the replica/primary broker. Only returned if this broker is
     * currently set as a primary or replica in the broker's dataReplicationRole
     * property.</p>
     */
    inline const DataReplicationCounterpart& GetDataReplicationCounterpart() const{ return m_dataReplicationCounterpart; }

    /**
     * <p>Describes the replica/primary broker. Only returned if this broker is
     * currently set as a primary or replica in the broker's dataReplicationRole
     * property.</p>
     */
    inline bool DataReplicationCounterpartHasBeenSet() const { return m_dataReplicationCounterpartHasBeenSet; }

    /**
     * <p>Describes the replica/primary broker. Only returned if this broker is
     * currently set as a primary or replica in the broker's dataReplicationRole
     * property.</p>
     */
    inline void SetDataReplicationCounterpart(const DataReplicationCounterpart& value) { m_dataReplicationCounterpartHasBeenSet = true; m_dataReplicationCounterpart = value; }

    /**
     * <p>Describes the replica/primary broker. Only returned if this broker is
     * currently set as a primary or replica in the broker's dataReplicationRole
     * property.</p>
     */
    inline void SetDataReplicationCounterpart(DataReplicationCounterpart&& value) { m_dataReplicationCounterpartHasBeenSet = true; m_dataReplicationCounterpart = std::move(value); }

    /**
     * <p>Describes the replica/primary broker. Only returned if this broker is
     * currently set as a primary or replica in the broker's dataReplicationRole
     * property.</p>
     */
    inline DataReplicationMetadataOutput& WithDataReplicationCounterpart(const DataReplicationCounterpart& value) { SetDataReplicationCounterpart(value); return *this;}

    /**
     * <p>Describes the replica/primary broker. Only returned if this broker is
     * currently set as a primary or replica in the broker's dataReplicationRole
     * property.</p>
     */
    inline DataReplicationMetadataOutput& WithDataReplicationCounterpart(DataReplicationCounterpart&& value) { SetDataReplicationCounterpart(std::move(value)); return *this;}


    /**
     * <p>Defines the role of this broker in a data replication pair. When a replica
     * broker is promoted to primary, this role is interchanged.</p>
     */
    inline const Aws::String& GetDataReplicationRole() const{ return m_dataReplicationRole; }

    /**
     * <p>Defines the role of this broker in a data replication pair. When a replica
     * broker is promoted to primary, this role is interchanged.</p>
     */
    inline bool DataReplicationRoleHasBeenSet() const { return m_dataReplicationRoleHasBeenSet; }

    /**
     * <p>Defines the role of this broker in a data replication pair. When a replica
     * broker is promoted to primary, this role is interchanged.</p>
     */
    inline void SetDataReplicationRole(const Aws::String& value) { m_dataReplicationRoleHasBeenSet = true; m_dataReplicationRole = value; }

    /**
     * <p>Defines the role of this broker in a data replication pair. When a replica
     * broker is promoted to primary, this role is interchanged.</p>
     */
    inline void SetDataReplicationRole(Aws::String&& value) { m_dataReplicationRoleHasBeenSet = true; m_dataReplicationRole = std::move(value); }

    /**
     * <p>Defines the role of this broker in a data replication pair. When a replica
     * broker is promoted to primary, this role is interchanged.</p>
     */
    inline void SetDataReplicationRole(const char* value) { m_dataReplicationRoleHasBeenSet = true; m_dataReplicationRole.assign(value); }

    /**
     * <p>Defines the role of this broker in a data replication pair. When a replica
     * broker is promoted to primary, this role is interchanged.</p>
     */
    inline DataReplicationMetadataOutput& WithDataReplicationRole(const Aws::String& value) { SetDataReplicationRole(value); return *this;}

    /**
     * <p>Defines the role of this broker in a data replication pair. When a replica
     * broker is promoted to primary, this role is interchanged.</p>
     */
    inline DataReplicationMetadataOutput& WithDataReplicationRole(Aws::String&& value) { SetDataReplicationRole(std::move(value)); return *this;}

    /**
     * <p>Defines the role of this broker in a data replication pair. When a replica
     * broker is promoted to primary, this role is interchanged.</p>
     */
    inline DataReplicationMetadataOutput& WithDataReplicationRole(const char* value) { SetDataReplicationRole(value); return *this;}

  private:

    DataReplicationCounterpart m_dataReplicationCounterpart;
    bool m_dataReplicationCounterpartHasBeenSet = false;

    Aws::String m_dataReplicationRole;
    bool m_dataReplicationRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws

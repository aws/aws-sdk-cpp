/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ReplicationMode.h>
#include <aws/ssm-sap/model/OperationMode.h>
#include <aws/ssm-sap/model/ClusterStatus.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>Details of the SAP HANA system replication for the instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/Resilience">AWS
   * API Reference</a></p>
   */
  class Resilience
  {
  public:
    AWS_SSMSAP_API Resilience();
    AWS_SSMSAP_API Resilience(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Resilience& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tier of the component.</p>
     */
    inline const Aws::String& GetHsrTier() const{ return m_hsrTier; }

    /**
     * <p>The tier of the component.</p>
     */
    inline bool HsrTierHasBeenSet() const { return m_hsrTierHasBeenSet; }

    /**
     * <p>The tier of the component.</p>
     */
    inline void SetHsrTier(const Aws::String& value) { m_hsrTierHasBeenSet = true; m_hsrTier = value; }

    /**
     * <p>The tier of the component.</p>
     */
    inline void SetHsrTier(Aws::String&& value) { m_hsrTierHasBeenSet = true; m_hsrTier = std::move(value); }

    /**
     * <p>The tier of the component.</p>
     */
    inline void SetHsrTier(const char* value) { m_hsrTierHasBeenSet = true; m_hsrTier.assign(value); }

    /**
     * <p>The tier of the component.</p>
     */
    inline Resilience& WithHsrTier(const Aws::String& value) { SetHsrTier(value); return *this;}

    /**
     * <p>The tier of the component.</p>
     */
    inline Resilience& WithHsrTier(Aws::String&& value) { SetHsrTier(std::move(value)); return *this;}

    /**
     * <p>The tier of the component.</p>
     */
    inline Resilience& WithHsrTier(const char* value) { SetHsrTier(value); return *this;}


    /**
     * <p>The replication mode of the component.</p>
     */
    inline const ReplicationMode& GetHsrReplicationMode() const{ return m_hsrReplicationMode; }

    /**
     * <p>The replication mode of the component.</p>
     */
    inline bool HsrReplicationModeHasBeenSet() const { return m_hsrReplicationModeHasBeenSet; }

    /**
     * <p>The replication mode of the component.</p>
     */
    inline void SetHsrReplicationMode(const ReplicationMode& value) { m_hsrReplicationModeHasBeenSet = true; m_hsrReplicationMode = value; }

    /**
     * <p>The replication mode of the component.</p>
     */
    inline void SetHsrReplicationMode(ReplicationMode&& value) { m_hsrReplicationModeHasBeenSet = true; m_hsrReplicationMode = std::move(value); }

    /**
     * <p>The replication mode of the component.</p>
     */
    inline Resilience& WithHsrReplicationMode(const ReplicationMode& value) { SetHsrReplicationMode(value); return *this;}

    /**
     * <p>The replication mode of the component.</p>
     */
    inline Resilience& WithHsrReplicationMode(ReplicationMode&& value) { SetHsrReplicationMode(std::move(value)); return *this;}


    /**
     * <p>The operation mode of the component.</p>
     */
    inline const OperationMode& GetHsrOperationMode() const{ return m_hsrOperationMode; }

    /**
     * <p>The operation mode of the component.</p>
     */
    inline bool HsrOperationModeHasBeenSet() const { return m_hsrOperationModeHasBeenSet; }

    /**
     * <p>The operation mode of the component.</p>
     */
    inline void SetHsrOperationMode(const OperationMode& value) { m_hsrOperationModeHasBeenSet = true; m_hsrOperationMode = value; }

    /**
     * <p>The operation mode of the component.</p>
     */
    inline void SetHsrOperationMode(OperationMode&& value) { m_hsrOperationModeHasBeenSet = true; m_hsrOperationMode = std::move(value); }

    /**
     * <p>The operation mode of the component.</p>
     */
    inline Resilience& WithHsrOperationMode(const OperationMode& value) { SetHsrOperationMode(value); return *this;}

    /**
     * <p>The operation mode of the component.</p>
     */
    inline Resilience& WithHsrOperationMode(OperationMode&& value) { SetHsrOperationMode(std::move(value)); return *this;}


    /**
     * <p>The cluster status of the component.</p>
     */
    inline const ClusterStatus& GetClusterStatus() const{ return m_clusterStatus; }

    /**
     * <p>The cluster status of the component.</p>
     */
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }

    /**
     * <p>The cluster status of the component.</p>
     */
    inline void SetClusterStatus(const ClusterStatus& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }

    /**
     * <p>The cluster status of the component.</p>
     */
    inline void SetClusterStatus(ClusterStatus&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::move(value); }

    /**
     * <p>The cluster status of the component.</p>
     */
    inline Resilience& WithClusterStatus(const ClusterStatus& value) { SetClusterStatus(value); return *this;}

    /**
     * <p>The cluster status of the component.</p>
     */
    inline Resilience& WithClusterStatus(ClusterStatus&& value) { SetClusterStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates if or not enqueue replication is enabled for the ASCS
     * component.</p>
     */
    inline bool GetEnqueueReplication() const{ return m_enqueueReplication; }

    /**
     * <p>Indicates if or not enqueue replication is enabled for the ASCS
     * component.</p>
     */
    inline bool EnqueueReplicationHasBeenSet() const { return m_enqueueReplicationHasBeenSet; }

    /**
     * <p>Indicates if or not enqueue replication is enabled for the ASCS
     * component.</p>
     */
    inline void SetEnqueueReplication(bool value) { m_enqueueReplicationHasBeenSet = true; m_enqueueReplication = value; }

    /**
     * <p>Indicates if or not enqueue replication is enabled for the ASCS
     * component.</p>
     */
    inline Resilience& WithEnqueueReplication(bool value) { SetEnqueueReplication(value); return *this;}

  private:

    Aws::String m_hsrTier;
    bool m_hsrTierHasBeenSet = false;

    ReplicationMode m_hsrReplicationMode;
    bool m_hsrReplicationModeHasBeenSet = false;

    OperationMode m_hsrOperationMode;
    bool m_hsrOperationModeHasBeenSet = false;

    ClusterStatus m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;

    bool m_enqueueReplication;
    bool m_enqueueReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

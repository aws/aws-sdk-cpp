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
    AWS_SSMSAP_API Resilience() = default;
    AWS_SSMSAP_API Resilience(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Resilience& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tier of the component.</p>
     */
    inline const Aws::String& GetHsrTier() const { return m_hsrTier; }
    inline bool HsrTierHasBeenSet() const { return m_hsrTierHasBeenSet; }
    template<typename HsrTierT = Aws::String>
    void SetHsrTier(HsrTierT&& value) { m_hsrTierHasBeenSet = true; m_hsrTier = std::forward<HsrTierT>(value); }
    template<typename HsrTierT = Aws::String>
    Resilience& WithHsrTier(HsrTierT&& value) { SetHsrTier(std::forward<HsrTierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication mode of the component.</p>
     */
    inline ReplicationMode GetHsrReplicationMode() const { return m_hsrReplicationMode; }
    inline bool HsrReplicationModeHasBeenSet() const { return m_hsrReplicationModeHasBeenSet; }
    inline void SetHsrReplicationMode(ReplicationMode value) { m_hsrReplicationModeHasBeenSet = true; m_hsrReplicationMode = value; }
    inline Resilience& WithHsrReplicationMode(ReplicationMode value) { SetHsrReplicationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation mode of the component.</p>
     */
    inline OperationMode GetHsrOperationMode() const { return m_hsrOperationMode; }
    inline bool HsrOperationModeHasBeenSet() const { return m_hsrOperationModeHasBeenSet; }
    inline void SetHsrOperationMode(OperationMode value) { m_hsrOperationModeHasBeenSet = true; m_hsrOperationMode = value; }
    inline Resilience& WithHsrOperationMode(OperationMode value) { SetHsrOperationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster status of the component.</p>
     */
    inline ClusterStatus GetClusterStatus() const { return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    inline void SetClusterStatus(ClusterStatus value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }
    inline Resilience& WithClusterStatus(ClusterStatus value) { SetClusterStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if or not enqueue replication is enabled for the ASCS
     * component.</p>
     */
    inline bool GetEnqueueReplication() const { return m_enqueueReplication; }
    inline bool EnqueueReplicationHasBeenSet() const { return m_enqueueReplicationHasBeenSet; }
    inline void SetEnqueueReplication(bool value) { m_enqueueReplicationHasBeenSet = true; m_enqueueReplication = value; }
    inline Resilience& WithEnqueueReplication(bool value) { SetEnqueueReplication(value); return *this;}
    ///@}
  private:

    Aws::String m_hsrTier;
    bool m_hsrTierHasBeenSet = false;

    ReplicationMode m_hsrReplicationMode{ReplicationMode::NOT_SET};
    bool m_hsrReplicationModeHasBeenSet = false;

    OperationMode m_hsrOperationMode{OperationMode::NOT_SET};
    bool m_hsrOperationModeHasBeenSet = false;

    ClusterStatus m_clusterStatus{ClusterStatus::NOT_SET};
    bool m_clusterStatusHasBeenSet = false;

    bool m_enqueueReplication{false};
    bool m_enqueueReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

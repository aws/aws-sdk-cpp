/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class ModifyClusterSnapshotScheduleRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifyClusterSnapshotScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClusterSnapshotSchedule"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A unique identifier for the cluster whose snapshot schedule you want to
     * modify. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    ModifyClusterSnapshotScheduleRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique alphanumeric identifier for the schedule that you want to associate
     * with the cluster.</p>
     */
    inline const Aws::String& GetScheduleIdentifier() const { return m_scheduleIdentifier; }
    inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }
    template<typename ScheduleIdentifierT = Aws::String>
    void SetScheduleIdentifier(ScheduleIdentifierT&& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = std::forward<ScheduleIdentifierT>(value); }
    template<typename ScheduleIdentifierT = Aws::String>
    ModifyClusterSnapshotScheduleRequest& WithScheduleIdentifier(ScheduleIdentifierT&& value) { SetScheduleIdentifier(std::forward<ScheduleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean to indicate whether to remove the assoiciation between the cluster
     * and the schedule.</p>
     */
    inline bool GetDisassociateSchedule() const { return m_disassociateSchedule; }
    inline bool DisassociateScheduleHasBeenSet() const { return m_disassociateScheduleHasBeenSet; }
    inline void SetDisassociateSchedule(bool value) { m_disassociateScheduleHasBeenSet = true; m_disassociateSchedule = value; }
    inline ModifyClusterSnapshotScheduleRequest& WithDisassociateSchedule(bool value) { SetDisassociateSchedule(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_scheduleIdentifier;
    bool m_scheduleIdentifierHasBeenSet = false;

    bool m_disassociateSchedule{false};
    bool m_disassociateScheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

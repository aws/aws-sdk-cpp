/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/StatePersistenceConfigurations.h>
#include <aws/quicksight/model/SharedViewConfigurations.h>
#include <aws/quicksight/model/BookmarksConfigurations.h>
#include <aws/quicksight/model/AmazonQInQuickSightDashboardConfigurations.h>
#include <aws/quicksight/model/SchedulesConfigurations.h>
#include <aws/quicksight/model/RecentSnapshotsConfigurations.h>
#include <aws/quicksight/model/ThresholdAlertsConfigurations.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The feature configuration for an embedded dashboard.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserDashboardFeatureConfigurations">AWS
   * API Reference</a></p>
   */
  class RegisteredUserDashboardFeatureConfigurations
  {
  public:
    AWS_QUICKSIGHT_API RegisteredUserDashboardFeatureConfigurations() = default;
    AWS_QUICKSIGHT_API RegisteredUserDashboardFeatureConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredUserDashboardFeatureConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state persistence settings of an embedded dashboard.</p>
     */
    inline const StatePersistenceConfigurations& GetStatePersistence() const { return m_statePersistence; }
    inline bool StatePersistenceHasBeenSet() const { return m_statePersistenceHasBeenSet; }
    template<typename StatePersistenceT = StatePersistenceConfigurations>
    void SetStatePersistence(StatePersistenceT&& value) { m_statePersistenceHasBeenSet = true; m_statePersistence = std::forward<StatePersistenceT>(value); }
    template<typename StatePersistenceT = StatePersistenceConfigurations>
    RegisteredUserDashboardFeatureConfigurations& WithStatePersistence(StatePersistenceT&& value) { SetStatePersistence(std::forward<StatePersistenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shared view settings of an embedded dashboard.</p>
     */
    inline const SharedViewConfigurations& GetSharedView() const { return m_sharedView; }
    inline bool SharedViewHasBeenSet() const { return m_sharedViewHasBeenSet; }
    template<typename SharedViewT = SharedViewConfigurations>
    void SetSharedView(SharedViewT&& value) { m_sharedViewHasBeenSet = true; m_sharedView = std::forward<SharedViewT>(value); }
    template<typename SharedViewT = SharedViewConfigurations>
    RegisteredUserDashboardFeatureConfigurations& WithSharedView(SharedViewT&& value) { SetSharedView(std::forward<SharedViewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bookmarks configuration for an embedded dashboard in QuickSight.</p>
     */
    inline const BookmarksConfigurations& GetBookmarks() const { return m_bookmarks; }
    inline bool BookmarksHasBeenSet() const { return m_bookmarksHasBeenSet; }
    template<typename BookmarksT = BookmarksConfigurations>
    void SetBookmarks(BookmarksT&& value) { m_bookmarksHasBeenSet = true; m_bookmarks = std::forward<BookmarksT>(value); }
    template<typename BookmarksT = BookmarksConfigurations>
    RegisteredUserDashboardFeatureConfigurations& WithBookmarks(BookmarksT&& value) { SetBookmarks(std::forward<BookmarksT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Q configurations of an embedded QuickSight dashboard.</p>
     */
    inline const AmazonQInQuickSightDashboardConfigurations& GetAmazonQInQuickSight() const { return m_amazonQInQuickSight; }
    inline bool AmazonQInQuickSightHasBeenSet() const { return m_amazonQInQuickSightHasBeenSet; }
    template<typename AmazonQInQuickSightT = AmazonQInQuickSightDashboardConfigurations>
    void SetAmazonQInQuickSight(AmazonQInQuickSightT&& value) { m_amazonQInQuickSightHasBeenSet = true; m_amazonQInQuickSight = std::forward<AmazonQInQuickSightT>(value); }
    template<typename AmazonQInQuickSightT = AmazonQInQuickSightDashboardConfigurations>
    RegisteredUserDashboardFeatureConfigurations& WithAmazonQInQuickSight(AmazonQInQuickSightT&& value) { SetAmazonQInQuickSight(std::forward<AmazonQInQuickSightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedules configuration for an embedded QuickSight dashboard.</p>
     */
    inline const SchedulesConfigurations& GetSchedules() const { return m_schedules; }
    inline bool SchedulesHasBeenSet() const { return m_schedulesHasBeenSet; }
    template<typename SchedulesT = SchedulesConfigurations>
    void SetSchedules(SchedulesT&& value) { m_schedulesHasBeenSet = true; m_schedules = std::forward<SchedulesT>(value); }
    template<typename SchedulesT = SchedulesConfigurations>
    RegisteredUserDashboardFeatureConfigurations& WithSchedules(SchedulesT&& value) { SetSchedules(std::forward<SchedulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recent snapshots configuration for an QuickSight embedded dashboard</p>
     */
    inline const RecentSnapshotsConfigurations& GetRecentSnapshots() const { return m_recentSnapshots; }
    inline bool RecentSnapshotsHasBeenSet() const { return m_recentSnapshotsHasBeenSet; }
    template<typename RecentSnapshotsT = RecentSnapshotsConfigurations>
    void SetRecentSnapshots(RecentSnapshotsT&& value) { m_recentSnapshotsHasBeenSet = true; m_recentSnapshots = std::forward<RecentSnapshotsT>(value); }
    template<typename RecentSnapshotsT = RecentSnapshotsConfigurations>
    RegisteredUserDashboardFeatureConfigurations& WithRecentSnapshots(RecentSnapshotsT&& value) { SetRecentSnapshots(std::forward<RecentSnapshotsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold alerts configuration for an QuickSight embedded dashboard.</p>
     */
    inline const ThresholdAlertsConfigurations& GetThresholdAlerts() const { return m_thresholdAlerts; }
    inline bool ThresholdAlertsHasBeenSet() const { return m_thresholdAlertsHasBeenSet; }
    template<typename ThresholdAlertsT = ThresholdAlertsConfigurations>
    void SetThresholdAlerts(ThresholdAlertsT&& value) { m_thresholdAlertsHasBeenSet = true; m_thresholdAlerts = std::forward<ThresholdAlertsT>(value); }
    template<typename ThresholdAlertsT = ThresholdAlertsConfigurations>
    RegisteredUserDashboardFeatureConfigurations& WithThresholdAlerts(ThresholdAlertsT&& value) { SetThresholdAlerts(std::forward<ThresholdAlertsT>(value)); return *this;}
    ///@}
  private:

    StatePersistenceConfigurations m_statePersistence;
    bool m_statePersistenceHasBeenSet = false;

    SharedViewConfigurations m_sharedView;
    bool m_sharedViewHasBeenSet = false;

    BookmarksConfigurations m_bookmarks;
    bool m_bookmarksHasBeenSet = false;

    AmazonQInQuickSightDashboardConfigurations m_amazonQInQuickSight;
    bool m_amazonQInQuickSightHasBeenSet = false;

    SchedulesConfigurations m_schedules;
    bool m_schedulesHasBeenSet = false;

    RecentSnapshotsConfigurations m_recentSnapshots;
    bool m_recentSnapshotsHasBeenSet = false;

    ThresholdAlertsConfigurations m_thresholdAlerts;
    bool m_thresholdAlertsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

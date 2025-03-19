/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DashboardVersion.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Dashboard">AWS
   * API Reference</a></p>
   */
  class Dashboard
  {
  public:
    AWS_QUICKSIGHT_API Dashboard() = default;
    AWS_QUICKSIGHT_API Dashboard(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Dashboard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dashboard ID.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    Dashboard& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Dashboard& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for the dashboard.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Dashboard& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version.</p>
     */
    inline const DashboardVersion& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = DashboardVersion>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = DashboardVersion>
    Dashboard& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this dashboard was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Dashboard& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that this dashboard was published.</p>
     */
    inline const Aws::Utils::DateTime& GetLastPublishedTime() const { return m_lastPublishedTime; }
    inline bool LastPublishedTimeHasBeenSet() const { return m_lastPublishedTimeHasBeenSet; }
    template<typename LastPublishedTimeT = Aws::Utils::DateTime>
    void SetLastPublishedTime(LastPublishedTimeT&& value) { m_lastPublishedTimeHasBeenSet = true; m_lastPublishedTime = std::forward<LastPublishedTimeT>(value); }
    template<typename LastPublishedTimeT = Aws::Utils::DateTime>
    Dashboard& WithLastPublishedTime(LastPublishedTimeT&& value) { SetLastPublishedTime(std::forward<LastPublishedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that this dashboard was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Dashboard& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkEntities() const { return m_linkEntities; }
    inline bool LinkEntitiesHasBeenSet() const { return m_linkEntitiesHasBeenSet; }
    template<typename LinkEntitiesT = Aws::Vector<Aws::String>>
    void SetLinkEntities(LinkEntitiesT&& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities = std::forward<LinkEntitiesT>(value); }
    template<typename LinkEntitiesT = Aws::Vector<Aws::String>>
    Dashboard& WithLinkEntities(LinkEntitiesT&& value) { SetLinkEntities(std::forward<LinkEntitiesT>(value)); return *this;}
    template<typename LinkEntitiesT = Aws::String>
    Dashboard& AddLinkEntities(LinkEntitiesT&& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities.emplace_back(std::forward<LinkEntitiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DashboardVersion m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastPublishedTime{};
    bool m_lastPublishedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkEntities;
    bool m_linkEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

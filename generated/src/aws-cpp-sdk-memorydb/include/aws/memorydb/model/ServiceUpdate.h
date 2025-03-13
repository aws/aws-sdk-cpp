/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/memorydb/model/ServiceUpdateStatus.h>
#include <aws/memorydb/model/ServiceUpdateType.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>An update that you can apply to your MemoryDB clusters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ServiceUpdate">AWS
   * API Reference</a></p>
   */
  class ServiceUpdate
  {
  public:
    AWS_MEMORYDB_API ServiceUpdate() = default;
    AWS_MEMORYDB_API ServiceUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ServiceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the cluster to which the service update applies</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    ServiceUpdate& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const { return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    template<typename ServiceUpdateNameT = Aws::String>
    void SetServiceUpdateName(ServiceUpdateNameT&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::forward<ServiceUpdateNameT>(value); }
    template<typename ServiceUpdateNameT = Aws::String>
    ServiceUpdate& WithServiceUpdateName(ServiceUpdateNameT&& value) { SetServiceUpdateName(std::forward<ServiceUpdateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the service update is initially available</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseDate() const { return m_releaseDate; }
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }
    template<typename ReleaseDateT = Aws::Utils::DateTime>
    void SetReleaseDate(ReleaseDateT&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::forward<ReleaseDateT>(value); }
    template<typename ReleaseDateT = Aws::Utils::DateTime>
    ServiceUpdate& WithReleaseDate(ReleaseDateT&& value) { SetReleaseDate(std::forward<ReleaseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details of the service update</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ServiceUpdate& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update</p>
     */
    inline ServiceUpdateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceUpdateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceUpdate& WithStatus(ServiceUpdateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline ServiceUpdateType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ServiceUpdateType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ServiceUpdate& WithType(ServiceUpdateType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the engine for which a service update is available.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    ServiceUpdate& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of nodes updated by the service update</p>
     */
    inline const Aws::String& GetNodesUpdated() const { return m_nodesUpdated; }
    inline bool NodesUpdatedHasBeenSet() const { return m_nodesUpdatedHasBeenSet; }
    template<typename NodesUpdatedT = Aws::String>
    void SetNodesUpdated(NodesUpdatedT&& value) { m_nodesUpdatedHasBeenSet = true; m_nodesUpdated = std::forward<NodesUpdatedT>(value); }
    template<typename NodesUpdatedT = Aws::String>
    ServiceUpdate& WithNodesUpdated(NodesUpdatedT&& value) { SetNodesUpdated(std::forward<NodesUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date at which the service update will be automatically applied</p>
     */
    inline const Aws::Utils::DateTime& GetAutoUpdateStartDate() const { return m_autoUpdateStartDate; }
    inline bool AutoUpdateStartDateHasBeenSet() const { return m_autoUpdateStartDateHasBeenSet; }
    template<typename AutoUpdateStartDateT = Aws::Utils::DateTime>
    void SetAutoUpdateStartDate(AutoUpdateStartDateT&& value) { m_autoUpdateStartDateHasBeenSet = true; m_autoUpdateStartDate = std::forward<AutoUpdateStartDateT>(value); }
    template<typename AutoUpdateStartDateT = Aws::Utils::DateTime>
    ServiceUpdate& WithAutoUpdateStartDate(AutoUpdateStartDateT&& value) { SetAutoUpdateStartDate(std::forward<AutoUpdateStartDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::Utils::DateTime m_releaseDate{};
    bool m_releaseDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServiceUpdateStatus m_status{ServiceUpdateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ServiceUpdateType m_type{ServiceUpdateType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_nodesUpdated;
    bool m_nodesUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_autoUpdateStartDate{};
    bool m_autoUpdateStartDateHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/UpdateTarget.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Defines a maintenance track that determines which Amazon Redshift version to
   * apply during a maintenance window. If the value for
   * <code>MaintenanceTrack</code> is <code>current</code>, the cluster is updated to
   * the most recently certified maintenance release. If the value is
   * <code>trailing</code>, the cluster is updated to the previously certified
   * maintenance release. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/MaintenanceTrack">AWS
   * API Reference</a></p>
   */
  class MaintenanceTrack
  {
  public:
    AWS_REDSHIFT_API MaintenanceTrack() = default;
    AWS_REDSHIFT_API MaintenanceTrack(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API MaintenanceTrack& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the maintenance track. Possible values are <code>current</code>
     * and <code>trailing</code>.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const { return m_maintenanceTrackName; }
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }
    template<typename MaintenanceTrackNameT = Aws::String>
    void SetMaintenanceTrackName(MaintenanceTrackNameT&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::forward<MaintenanceTrackNameT>(value); }
    template<typename MaintenanceTrackNameT = Aws::String>
    MaintenanceTrack& WithMaintenanceTrackName(MaintenanceTrackNameT&& value) { SetMaintenanceTrackName(std::forward<MaintenanceTrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number for the cluster release.</p>
     */
    inline const Aws::String& GetDatabaseVersion() const { return m_databaseVersion; }
    inline bool DatabaseVersionHasBeenSet() const { return m_databaseVersionHasBeenSet; }
    template<typename DatabaseVersionT = Aws::String>
    void SetDatabaseVersion(DatabaseVersionT&& value) { m_databaseVersionHasBeenSet = true; m_databaseVersion = std::forward<DatabaseVersionT>(value); }
    template<typename DatabaseVersionT = Aws::String>
    MaintenanceTrack& WithDatabaseVersion(DatabaseVersionT&& value) { SetDatabaseVersion(std::forward<DatabaseVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>UpdateTarget</a> objects to update with the maintenance track.
     * </p>
     */
    inline const Aws::Vector<UpdateTarget>& GetUpdateTargets() const { return m_updateTargets; }
    inline bool UpdateTargetsHasBeenSet() const { return m_updateTargetsHasBeenSet; }
    template<typename UpdateTargetsT = Aws::Vector<UpdateTarget>>
    void SetUpdateTargets(UpdateTargetsT&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets = std::forward<UpdateTargetsT>(value); }
    template<typename UpdateTargetsT = Aws::Vector<UpdateTarget>>
    MaintenanceTrack& WithUpdateTargets(UpdateTargetsT&& value) { SetUpdateTargets(std::forward<UpdateTargetsT>(value)); return *this;}
    template<typename UpdateTargetsT = UpdateTarget>
    MaintenanceTrack& AddUpdateTargets(UpdateTargetsT&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets.emplace_back(std::forward<UpdateTargetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    Aws::String m_databaseVersion;
    bool m_databaseVersionHasBeenSet = false;

    Aws::Vector<UpdateTarget> m_updateTargets;
    bool m_updateTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

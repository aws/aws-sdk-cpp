/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/SupportedOperation.h>
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
   * <p>A maintenance track that you can switch the current track to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/UpdateTarget">AWS
   * API Reference</a></p>
   */
  class UpdateTarget
  {
  public:
    AWS_REDSHIFT_API UpdateTarget() = default;
    AWS_REDSHIFT_API UpdateTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API UpdateTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the new maintenance track.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const { return m_maintenanceTrackName; }
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }
    template<typename MaintenanceTrackNameT = Aws::String>
    void SetMaintenanceTrackName(MaintenanceTrackNameT&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::forward<MaintenanceTrackNameT>(value); }
    template<typename MaintenanceTrackNameT = Aws::String>
    UpdateTarget& WithMaintenanceTrackName(MaintenanceTrackNameT&& value) { SetMaintenanceTrackName(std::forward<MaintenanceTrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster version for the new maintenance track.</p>
     */
    inline const Aws::String& GetDatabaseVersion() const { return m_databaseVersion; }
    inline bool DatabaseVersionHasBeenSet() const { return m_databaseVersionHasBeenSet; }
    template<typename DatabaseVersionT = Aws::String>
    void SetDatabaseVersion(DatabaseVersionT&& value) { m_databaseVersionHasBeenSet = true; m_databaseVersion = std::forward<DatabaseVersionT>(value); }
    template<typename DatabaseVersionT = Aws::String>
    UpdateTarget& WithDatabaseVersion(DatabaseVersionT&& value) { SetDatabaseVersion(std::forward<DatabaseVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of operations supported by the maintenance track.</p>
     */
    inline const Aws::Vector<SupportedOperation>& GetSupportedOperations() const { return m_supportedOperations; }
    inline bool SupportedOperationsHasBeenSet() const { return m_supportedOperationsHasBeenSet; }
    template<typename SupportedOperationsT = Aws::Vector<SupportedOperation>>
    void SetSupportedOperations(SupportedOperationsT&& value) { m_supportedOperationsHasBeenSet = true; m_supportedOperations = std::forward<SupportedOperationsT>(value); }
    template<typename SupportedOperationsT = Aws::Vector<SupportedOperation>>
    UpdateTarget& WithSupportedOperations(SupportedOperationsT&& value) { SetSupportedOperations(std::forward<SupportedOperationsT>(value)); return *this;}
    template<typename SupportedOperationsT = SupportedOperation>
    UpdateTarget& AddSupportedOperations(SupportedOperationsT&& value) { m_supportedOperationsHasBeenSet = true; m_supportedOperations.emplace_back(std::forward<SupportedOperationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    Aws::String m_databaseVersion;
    bool m_databaseVersionHasBeenSet = false;

    Aws::Vector<SupportedOperation> m_supportedOperations;
    bool m_supportedOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

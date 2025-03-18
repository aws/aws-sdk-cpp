/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/RevisionTarget.h>
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
   * <p>Describes a <code>ClusterDbRevision</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterDbRevision">AWS
   * API Reference</a></p>
   */
  class ClusterDbRevision
  {
  public:
    AWS_REDSHIFT_API ClusterDbRevision() = default;
    AWS_REDSHIFT_API ClusterDbRevision(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterDbRevision& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    ClusterDbRevision& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string representing the current cluster version.</p>
     */
    inline const Aws::String& GetCurrentDatabaseRevision() const { return m_currentDatabaseRevision; }
    inline bool CurrentDatabaseRevisionHasBeenSet() const { return m_currentDatabaseRevisionHasBeenSet; }
    template<typename CurrentDatabaseRevisionT = Aws::String>
    void SetCurrentDatabaseRevision(CurrentDatabaseRevisionT&& value) { m_currentDatabaseRevisionHasBeenSet = true; m_currentDatabaseRevision = std::forward<CurrentDatabaseRevisionT>(value); }
    template<typename CurrentDatabaseRevisionT = Aws::String>
    ClusterDbRevision& WithCurrentDatabaseRevision(CurrentDatabaseRevisionT&& value) { SetCurrentDatabaseRevision(std::forward<CurrentDatabaseRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the database revision was released.</p>
     */
    inline const Aws::Utils::DateTime& GetDatabaseRevisionReleaseDate() const { return m_databaseRevisionReleaseDate; }
    inline bool DatabaseRevisionReleaseDateHasBeenSet() const { return m_databaseRevisionReleaseDateHasBeenSet; }
    template<typename DatabaseRevisionReleaseDateT = Aws::Utils::DateTime>
    void SetDatabaseRevisionReleaseDate(DatabaseRevisionReleaseDateT&& value) { m_databaseRevisionReleaseDateHasBeenSet = true; m_databaseRevisionReleaseDate = std::forward<DatabaseRevisionReleaseDateT>(value); }
    template<typename DatabaseRevisionReleaseDateT = Aws::Utils::DateTime>
    ClusterDbRevision& WithDatabaseRevisionReleaseDate(DatabaseRevisionReleaseDateT&& value) { SetDatabaseRevisionReleaseDate(std::forward<DatabaseRevisionReleaseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>RevisionTarget</code> objects, where each object describes
     * the database revision that a cluster can be updated to.</p>
     */
    inline const Aws::Vector<RevisionTarget>& GetRevisionTargets() const { return m_revisionTargets; }
    inline bool RevisionTargetsHasBeenSet() const { return m_revisionTargetsHasBeenSet; }
    template<typename RevisionTargetsT = Aws::Vector<RevisionTarget>>
    void SetRevisionTargets(RevisionTargetsT&& value) { m_revisionTargetsHasBeenSet = true; m_revisionTargets = std::forward<RevisionTargetsT>(value); }
    template<typename RevisionTargetsT = Aws::Vector<RevisionTarget>>
    ClusterDbRevision& WithRevisionTargets(RevisionTargetsT&& value) { SetRevisionTargets(std::forward<RevisionTargetsT>(value)); return *this;}
    template<typename RevisionTargetsT = RevisionTarget>
    ClusterDbRevision& AddRevisionTargets(RevisionTargetsT&& value) { m_revisionTargetsHasBeenSet = true; m_revisionTargets.emplace_back(std::forward<RevisionTargetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_currentDatabaseRevision;
    bool m_currentDatabaseRevisionHasBeenSet = false;

    Aws::Utils::DateTime m_databaseRevisionReleaseDate{};
    bool m_databaseRevisionReleaseDateHasBeenSet = false;

    Aws::Vector<RevisionTarget> m_revisionTargets;
    bool m_revisionTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

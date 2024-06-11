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
    AWS_REDSHIFT_API ClusterDbRevision();
    AWS_REDSHIFT_API ClusterDbRevision(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterDbRevision& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline ClusterDbRevision& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline ClusterDbRevision& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline ClusterDbRevision& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string representing the current cluster version.</p>
     */
    inline const Aws::String& GetCurrentDatabaseRevision() const{ return m_currentDatabaseRevision; }
    inline bool CurrentDatabaseRevisionHasBeenSet() const { return m_currentDatabaseRevisionHasBeenSet; }
    inline void SetCurrentDatabaseRevision(const Aws::String& value) { m_currentDatabaseRevisionHasBeenSet = true; m_currentDatabaseRevision = value; }
    inline void SetCurrentDatabaseRevision(Aws::String&& value) { m_currentDatabaseRevisionHasBeenSet = true; m_currentDatabaseRevision = std::move(value); }
    inline void SetCurrentDatabaseRevision(const char* value) { m_currentDatabaseRevisionHasBeenSet = true; m_currentDatabaseRevision.assign(value); }
    inline ClusterDbRevision& WithCurrentDatabaseRevision(const Aws::String& value) { SetCurrentDatabaseRevision(value); return *this;}
    inline ClusterDbRevision& WithCurrentDatabaseRevision(Aws::String&& value) { SetCurrentDatabaseRevision(std::move(value)); return *this;}
    inline ClusterDbRevision& WithCurrentDatabaseRevision(const char* value) { SetCurrentDatabaseRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the database revision was released.</p>
     */
    inline const Aws::Utils::DateTime& GetDatabaseRevisionReleaseDate() const{ return m_databaseRevisionReleaseDate; }
    inline bool DatabaseRevisionReleaseDateHasBeenSet() const { return m_databaseRevisionReleaseDateHasBeenSet; }
    inline void SetDatabaseRevisionReleaseDate(const Aws::Utils::DateTime& value) { m_databaseRevisionReleaseDateHasBeenSet = true; m_databaseRevisionReleaseDate = value; }
    inline void SetDatabaseRevisionReleaseDate(Aws::Utils::DateTime&& value) { m_databaseRevisionReleaseDateHasBeenSet = true; m_databaseRevisionReleaseDate = std::move(value); }
    inline ClusterDbRevision& WithDatabaseRevisionReleaseDate(const Aws::Utils::DateTime& value) { SetDatabaseRevisionReleaseDate(value); return *this;}
    inline ClusterDbRevision& WithDatabaseRevisionReleaseDate(Aws::Utils::DateTime&& value) { SetDatabaseRevisionReleaseDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>RevisionTarget</code> objects, where each object describes
     * the database revision that a cluster can be updated to.</p>
     */
    inline const Aws::Vector<RevisionTarget>& GetRevisionTargets() const{ return m_revisionTargets; }
    inline bool RevisionTargetsHasBeenSet() const { return m_revisionTargetsHasBeenSet; }
    inline void SetRevisionTargets(const Aws::Vector<RevisionTarget>& value) { m_revisionTargetsHasBeenSet = true; m_revisionTargets = value; }
    inline void SetRevisionTargets(Aws::Vector<RevisionTarget>&& value) { m_revisionTargetsHasBeenSet = true; m_revisionTargets = std::move(value); }
    inline ClusterDbRevision& WithRevisionTargets(const Aws::Vector<RevisionTarget>& value) { SetRevisionTargets(value); return *this;}
    inline ClusterDbRevision& WithRevisionTargets(Aws::Vector<RevisionTarget>&& value) { SetRevisionTargets(std::move(value)); return *this;}
    inline ClusterDbRevision& AddRevisionTargets(const RevisionTarget& value) { m_revisionTargetsHasBeenSet = true; m_revisionTargets.push_back(value); return *this; }
    inline ClusterDbRevision& AddRevisionTargets(RevisionTarget&& value) { m_revisionTargetsHasBeenSet = true; m_revisionTargets.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_currentDatabaseRevision;
    bool m_currentDatabaseRevisionHasBeenSet = false;

    Aws::Utils::DateTime m_databaseRevisionReleaseDate;
    bool m_databaseRevisionReleaseDateHasBeenSet = false;

    Aws::Vector<RevisionTarget> m_revisionTargets;
    bool m_revisionTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes a <code>RevisionTarget</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RevisionTarget">AWS
   * API Reference</a></p>
   */
  class RevisionTarget
  {
  public:
    AWS_REDSHIFT_API RevisionTarget();
    AWS_REDSHIFT_API RevisionTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API RevisionTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique string that identifies the version to update the cluster to. You can
     * use this value in <a>ModifyClusterDbRevision</a>.</p>
     */
    inline const Aws::String& GetDatabaseRevision() const{ return m_databaseRevision; }
    inline bool DatabaseRevisionHasBeenSet() const { return m_databaseRevisionHasBeenSet; }
    inline void SetDatabaseRevision(const Aws::String& value) { m_databaseRevisionHasBeenSet = true; m_databaseRevision = value; }
    inline void SetDatabaseRevision(Aws::String&& value) { m_databaseRevisionHasBeenSet = true; m_databaseRevision = std::move(value); }
    inline void SetDatabaseRevision(const char* value) { m_databaseRevisionHasBeenSet = true; m_databaseRevision.assign(value); }
    inline RevisionTarget& WithDatabaseRevision(const Aws::String& value) { SetDatabaseRevision(value); return *this;}
    inline RevisionTarget& WithDatabaseRevision(Aws::String&& value) { SetDatabaseRevision(std::move(value)); return *this;}
    inline RevisionTarget& WithDatabaseRevision(const char* value) { SetDatabaseRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes the changes and features that will be applied to the
     * cluster when it is updated to the corresponding <a>ClusterDbRevision</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RevisionTarget& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RevisionTarget& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RevisionTarget& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the database revision was released.</p>
     */
    inline const Aws::Utils::DateTime& GetDatabaseRevisionReleaseDate() const{ return m_databaseRevisionReleaseDate; }
    inline bool DatabaseRevisionReleaseDateHasBeenSet() const { return m_databaseRevisionReleaseDateHasBeenSet; }
    inline void SetDatabaseRevisionReleaseDate(const Aws::Utils::DateTime& value) { m_databaseRevisionReleaseDateHasBeenSet = true; m_databaseRevisionReleaseDate = value; }
    inline void SetDatabaseRevisionReleaseDate(Aws::Utils::DateTime&& value) { m_databaseRevisionReleaseDateHasBeenSet = true; m_databaseRevisionReleaseDate = std::move(value); }
    inline RevisionTarget& WithDatabaseRevisionReleaseDate(const Aws::Utils::DateTime& value) { SetDatabaseRevisionReleaseDate(value); return *this;}
    inline RevisionTarget& WithDatabaseRevisionReleaseDate(Aws::Utils::DateTime&& value) { SetDatabaseRevisionReleaseDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseRevision;
    bool m_databaseRevisionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_databaseRevisionReleaseDate;
    bool m_databaseRevisionReleaseDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

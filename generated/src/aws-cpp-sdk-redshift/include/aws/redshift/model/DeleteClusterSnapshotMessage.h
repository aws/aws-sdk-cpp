/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class DeleteClusterSnapshotMessage
  {
  public:
    AWS_REDSHIFT_API DeleteClusterSnapshotMessage();
    AWS_REDSHIFT_API DeleteClusterSnapshotMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API DeleteClusterSnapshotMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline DeleteClusterSnapshotMessage& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline DeleteClusterSnapshotMessage& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline DeleteClusterSnapshotMessage& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline const Aws::String& GetSnapshotClusterIdentifier() const{ return m_snapshotClusterIdentifier; }

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline bool SnapshotClusterIdentifierHasBeenSet() const { return m_snapshotClusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline void SetSnapshotClusterIdentifier(const Aws::String& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline void SetSnapshotClusterIdentifier(Aws::String&& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline void SetSnapshotClusterIdentifier(const char* value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline DeleteClusterSnapshotMessage& WithSnapshotClusterIdentifier(const Aws::String& value) { SetSnapshotClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline DeleteClusterSnapshotMessage& WithSnapshotClusterIdentifier(Aws::String&& value) { SetSnapshotClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline DeleteClusterSnapshotMessage& WithSnapshotClusterIdentifier(const char* value) { SetSnapshotClusterIdentifier(value); return *this;}

  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_snapshotClusterIdentifier;
    bool m_snapshotClusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

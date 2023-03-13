/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/DeleteMarkerReplicationStatus.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>Specifies whether S3 on Outposts replicates delete markers. If you specify a
   * <code>Filter</code> element in your replication configuration, you must also
   * include a <code>DeleteMarkerReplication</code> element. If your
   * <code>Filter</code> includes a <code>Tag</code> element, the
   * <code>DeleteMarkerReplication</code> element's <code>Status</code> child element
   * must be set to <code>Disabled</code>, because S3 on Outposts does not support
   * replicating delete markers for tag-based rules.</p> <p>For more information
   * about delete marker replication, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsReplication.html#outposts-replication-what-is-replicated">How
   * delete operations affect replication</a> in the <i>Amazon S3 User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteMarkerReplication">AWS
   * API Reference</a></p>
   */
  class DeleteMarkerReplication
  {
  public:
    AWS_S3CONTROL_API DeleteMarkerReplication();
    AWS_S3CONTROL_API DeleteMarkerReplication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API DeleteMarkerReplication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Indicates whether to replicate delete markers.</p>
     */
    inline const DeleteMarkerReplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates whether to replicate delete markers.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates whether to replicate delete markers.</p>
     */
    inline void SetStatus(const DeleteMarkerReplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates whether to replicate delete markers.</p>
     */
    inline void SetStatus(DeleteMarkerReplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates whether to replicate delete markers.</p>
     */
    inline DeleteMarkerReplication& WithStatus(const DeleteMarkerReplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates whether to replicate delete markers.</p>
     */
    inline DeleteMarkerReplication& WithStatus(DeleteMarkerReplicationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    DeleteMarkerReplicationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

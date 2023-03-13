/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ReplicaModificationsStatus.h>
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
   * <p>A filter that you can use to specify whether replica modification sync is
   * enabled. S3 on Outposts replica modification sync can help you keep object
   * metadata synchronized between replicas and source objects. By default, S3 on
   * Outposts replicates metadata from the source objects to the replicas only. When
   * replica modification sync is enabled, S3 on Outposts replicates metadata changes
   * made to the replica copies back to the source object, making the replication
   * bidirectional.</p> <p>To replicate object metadata modifications on replicas,
   * you can specify this element and set the <code>Status</code> of this element to
   * <code>Enabled</code>.</p>  <p>You must enable replica modification sync on
   * the source and destination buckets to replicate replica metadata changes between
   * the source and the replicas.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ReplicaModifications">AWS
   * API Reference</a></p>
   */
  class ReplicaModifications
  {
  public:
    AWS_S3CONTROL_API ReplicaModifications();
    AWS_S3CONTROL_API ReplicaModifications(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ReplicaModifications& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies whether S3 on Outposts replicates modifications to object metadata
     * on replicas.</p>
     */
    inline const ReplicaModificationsStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies whether S3 on Outposts replicates modifications to object metadata
     * on replicas.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies whether S3 on Outposts replicates modifications to object metadata
     * on replicas.</p>
     */
    inline void SetStatus(const ReplicaModificationsStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies whether S3 on Outposts replicates modifications to object metadata
     * on replicas.</p>
     */
    inline void SetStatus(ReplicaModificationsStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies whether S3 on Outposts replicates modifications to object metadata
     * on replicas.</p>
     */
    inline ReplicaModifications& WithStatus(const ReplicaModificationsStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies whether S3 on Outposts replicates modifications to object metadata
     * on replicas.</p>
     */
    inline ReplicaModifications& WithStatus(ReplicaModificationsStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ReplicaModificationsStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

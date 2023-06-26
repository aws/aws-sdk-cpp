/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ExistingObjectReplicationStatus.h>
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
   * <p>An optional configuration to replicate existing source bucket objects. </p>
   *  <p>This is not supported by Amazon S3 on Outposts buckets.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ExistingObjectReplication">AWS
   * API Reference</a></p>
   */
  class ExistingObjectReplication
  {
  public:
    AWS_S3CONTROL_API ExistingObjectReplication();
    AWS_S3CONTROL_API ExistingObjectReplication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ExistingObjectReplication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies whether Amazon S3 replicates existing source bucket objects. </p>
     */
    inline const ExistingObjectReplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies whether Amazon S3 replicates existing source bucket objects. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 replicates existing source bucket objects. </p>
     */
    inline void SetStatus(const ExistingObjectReplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies whether Amazon S3 replicates existing source bucket objects. </p>
     */
    inline void SetStatus(ExistingObjectReplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies whether Amazon S3 replicates existing source bucket objects. </p>
     */
    inline ExistingObjectReplication& WithStatus(const ExistingObjectReplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies whether Amazon S3 replicates existing source bucket objects. </p>
     */
    inline ExistingObjectReplication& WithStatus(ExistingObjectReplicationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ExistingObjectReplicationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3ObjectLockLegalHoldStatus.h>
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
   * <p>Whether S3 Object Lock legal hold will be applied to objects in an S3 Batch
   * Operations job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3ObjectLockLegalHold">AWS
   * API Reference</a></p>
   */
  class S3ObjectLockLegalHold
  {
  public:
    AWS_S3CONTROL_API S3ObjectLockLegalHold();
    AWS_S3CONTROL_API S3ObjectLockLegalHold(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3ObjectLockLegalHold& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Object Lock legal hold status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline const S3ObjectLockLegalHoldStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The Object Lock legal hold status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The Object Lock legal hold status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline void SetStatus(const S3ObjectLockLegalHoldStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The Object Lock legal hold status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline void SetStatus(S3ObjectLockLegalHoldStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The Object Lock legal hold status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline S3ObjectLockLegalHold& WithStatus(const S3ObjectLockLegalHoldStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The Object Lock legal hold status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline S3ObjectLockLegalHold& WithStatus(S3ObjectLockLegalHoldStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    S3ObjectLockLegalHoldStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

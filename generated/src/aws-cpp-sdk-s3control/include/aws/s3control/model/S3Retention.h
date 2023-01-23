/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/S3ObjectLockRetentionMode.h>
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
   * <p>Contains the S3 Object Lock retention mode to be applied to all objects in
   * the S3 Batch Operations job. If you don't provide <code>Mode</code> and
   * <code>RetainUntilDate</code> data types in your operation, you will remove the
   * retention from your objects. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-retention-date.html">Using
   * S3 Object Lock retention with S3 Batch Operations</a> in the <i>Amazon S3 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3Retention">AWS
   * API Reference</a></p>
   */
  class S3Retention
  {
  public:
    AWS_S3CONTROL_API S3Retention();
    AWS_S3CONTROL_API S3Retention(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3Retention& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The date when the applied Object Lock retention will expire on all objects
     * set by the Batch Operations job.</p>
     */
    inline const Aws::Utils::DateTime& GetRetainUntilDate() const{ return m_retainUntilDate; }

    /**
     * <p>The date when the applied Object Lock retention will expire on all objects
     * set by the Batch Operations job.</p>
     */
    inline bool RetainUntilDateHasBeenSet() const { return m_retainUntilDateHasBeenSet; }

    /**
     * <p>The date when the applied Object Lock retention will expire on all objects
     * set by the Batch Operations job.</p>
     */
    inline void SetRetainUntilDate(const Aws::Utils::DateTime& value) { m_retainUntilDateHasBeenSet = true; m_retainUntilDate = value; }

    /**
     * <p>The date when the applied Object Lock retention will expire on all objects
     * set by the Batch Operations job.</p>
     */
    inline void SetRetainUntilDate(Aws::Utils::DateTime&& value) { m_retainUntilDateHasBeenSet = true; m_retainUntilDate = std::move(value); }

    /**
     * <p>The date when the applied Object Lock retention will expire on all objects
     * set by the Batch Operations job.</p>
     */
    inline S3Retention& WithRetainUntilDate(const Aws::Utils::DateTime& value) { SetRetainUntilDate(value); return *this;}

    /**
     * <p>The date when the applied Object Lock retention will expire on all objects
     * set by the Batch Operations job.</p>
     */
    inline S3Retention& WithRetainUntilDate(Aws::Utils::DateTime&& value) { SetRetainUntilDate(std::move(value)); return *this;}


    /**
     * <p>The Object Lock retention mode to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline const S3ObjectLockRetentionMode& GetMode() const{ return m_mode; }

    /**
     * <p>The Object Lock retention mode to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The Object Lock retention mode to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline void SetMode(const S3ObjectLockRetentionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The Object Lock retention mode to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline void SetMode(S3ObjectLockRetentionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The Object Lock retention mode to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline S3Retention& WithMode(const S3ObjectLockRetentionMode& value) { SetMode(value); return *this;}

    /**
     * <p>The Object Lock retention mode to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline S3Retention& WithMode(S3ObjectLockRetentionMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_retainUntilDate;
    bool m_retainUntilDateHasBeenSet = false;

    S3ObjectLockRetentionMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

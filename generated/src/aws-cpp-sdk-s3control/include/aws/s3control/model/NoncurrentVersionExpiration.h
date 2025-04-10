﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

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
   * <p>The container of the noncurrent version expiration.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/NoncurrentVersionExpiration">AWS
   * API Reference</a></p>
   */
  class NoncurrentVersionExpiration
  {
  public:
    AWS_S3CONTROL_API NoncurrentVersionExpiration() = default;
    AWS_S3CONTROL_API NoncurrentVersionExpiration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API NoncurrentVersionExpiration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the number of days an object is noncurrent before Amazon S3 can
     * perform the associated action. For information about the noncurrent days
     * calculations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#non-current-days-calculations">How
     * Amazon S3 Calculates When an Object Became Noncurrent</a> in the <i>Amazon S3
     * User Guide</i>.</p>
     */
    inline int GetNoncurrentDays() const { return m_noncurrentDays; }
    inline bool NoncurrentDaysHasBeenSet() const { return m_noncurrentDaysHasBeenSet; }
    inline void SetNoncurrentDays(int value) { m_noncurrentDaysHasBeenSet = true; m_noncurrentDays = value; }
    inline NoncurrentVersionExpiration& WithNoncurrentDays(int value) { SetNoncurrentDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how many noncurrent versions S3 on Outposts will retain. If there
     * are this many more recent noncurrent versions, S3 on Outposts will take the
     * associated action. For more information about noncurrent versions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/intro-lifecycle-rules.html">Lifecycle
     * configuration elements</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline int GetNewerNoncurrentVersions() const { return m_newerNoncurrentVersions; }
    inline bool NewerNoncurrentVersionsHasBeenSet() const { return m_newerNoncurrentVersionsHasBeenSet; }
    inline void SetNewerNoncurrentVersions(int value) { m_newerNoncurrentVersionsHasBeenSet = true; m_newerNoncurrentVersions = value; }
    inline NoncurrentVersionExpiration& WithNewerNoncurrentVersions(int value) { SetNewerNoncurrentVersions(value); return *this;}
    ///@}
  private:

    int m_noncurrentDays{0};
    bool m_noncurrentDaysHasBeenSet = false;

    int m_newerNoncurrentVersions{0};
    bool m_newerNoncurrentVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

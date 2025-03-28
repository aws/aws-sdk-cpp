﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/TransitionStorageClass.h>
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
   * <p>The container for the noncurrent version transition.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/NoncurrentVersionTransition">AWS
   * API Reference</a></p>
   */
  class NoncurrentVersionTransition
  {
  public:
    AWS_S3CONTROL_API NoncurrentVersionTransition() = default;
    AWS_S3CONTROL_API NoncurrentVersionTransition(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API NoncurrentVersionTransition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the number of days an object is noncurrent before Amazon S3 can
     * perform the associated action. For information about the noncurrent days
     * calculations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#non-current-days-calculations">
     * How Amazon S3 Calculates How Long an Object Has Been Noncurrent</a> in the
     * <i>Amazon S3 User Guide</i>.</p>
     */
    inline int GetNoncurrentDays() const { return m_noncurrentDays; }
    inline bool NoncurrentDaysHasBeenSet() const { return m_noncurrentDaysHasBeenSet; }
    inline void SetNoncurrentDays(int value) { m_noncurrentDaysHasBeenSet = true; m_noncurrentDays = value; }
    inline NoncurrentVersionTransition& WithNoncurrentDays(int value) { SetNoncurrentDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The class of storage used to store the object.</p>
     */
    inline TransitionStorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(TransitionStorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline NoncurrentVersionTransition& WithStorageClass(TransitionStorageClass value) { SetStorageClass(value); return *this;}
    ///@}
  private:

    int m_noncurrentDays{0};
    bool m_noncurrentDaysHasBeenSet = false;

    TransitionStorageClass m_storageClass{TransitionStorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

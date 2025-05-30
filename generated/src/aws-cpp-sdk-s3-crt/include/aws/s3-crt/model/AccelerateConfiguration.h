﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/BucketAccelerateStatus.h>
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
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Configures the transfer acceleration state for an Amazon S3 bucket. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Amazon
   * S3 Transfer Acceleration</a> in the <i>Amazon S3 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AccelerateConfiguration">AWS
   * API Reference</a></p>
   */
  class AccelerateConfiguration
  {
  public:
    AWS_S3CRT_API AccelerateConfiguration() = default;
    AWS_S3CRT_API AccelerateConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API AccelerateConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the transfer acceleration status of the bucket.</p>
     */
    inline BucketAccelerateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BucketAccelerateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AccelerateConfiguration& WithStatus(BucketAccelerateStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    BucketAccelerateStatus m_status{BucketAccelerateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws

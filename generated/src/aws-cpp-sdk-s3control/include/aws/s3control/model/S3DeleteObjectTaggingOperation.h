/**
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
   * <p>Contains no configuration parameters because the DELETE Object tagging API
   * only accepts the bucket name and key name as parameters, which are defined in
   * the job's manifest.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3DeleteObjectTaggingOperation">AWS
   * API Reference</a></p>
   */
  class S3DeleteObjectTaggingOperation
  {
  public:
    AWS_S3CONTROL_API S3DeleteObjectTaggingOperation();
    AWS_S3CONTROL_API S3DeleteObjectTaggingOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3DeleteObjectTaggingOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

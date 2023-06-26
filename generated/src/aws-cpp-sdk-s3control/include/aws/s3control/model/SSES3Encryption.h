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
   * <p>Configuration for the use of SSE-S3 to encrypt generated manifest
   * objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/SSES3Encryption">AWS
   * API Reference</a></p>
   */
  class SSES3Encryption
  {
  public:
    AWS_S3CONTROL_API SSES3Encryption();
    AWS_S3CONTROL_API SSES3Encryption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API SSES3Encryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

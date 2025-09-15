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
   * <p>A filter that returns objects that are encrypted by server-side encryption
   * with customer-provided keys (SSE-C).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/SSECFilter">AWS
   * API Reference</a></p>
   */
  class SSECFilter
  {
  public:
    AWS_S3CONTROL_API SSECFilter() = default;
    AWS_S3CONTROL_API SSECFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API SSECFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

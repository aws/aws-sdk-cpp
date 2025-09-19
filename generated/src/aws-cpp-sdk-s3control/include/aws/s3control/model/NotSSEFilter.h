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
   * <p>A filter that returns objects that aren't server-side
   * encrypted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/NotSSEFilter">AWS
   * API Reference</a></p>
   */
  class NotSSEFilter
  {
  public:
    AWS_S3CONTROL_API NotSSEFilter() = default;
    AWS_S3CONTROL_API NotSSEFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API NotSSEFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

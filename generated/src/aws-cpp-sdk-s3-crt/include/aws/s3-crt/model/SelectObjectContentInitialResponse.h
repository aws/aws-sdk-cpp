/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>

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

  class SelectObjectContentInitialResponse
  {
  public:
    AWS_S3CRT_API SelectObjectContentInitialResponse();
    AWS_S3CRT_API SelectObjectContentInitialResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API SelectObjectContentInitialResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws

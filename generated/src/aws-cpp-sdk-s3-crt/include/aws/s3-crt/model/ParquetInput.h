﻿/**
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

  /**
   * <p>Container for Parquet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ParquetInput">AWS API
   * Reference</a></p>
   */
  class ParquetInput
  {
  public:
    AWS_S3CRT_API ParquetInput() = default;
    AWS_S3CRT_API ParquetInput(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API ParquetInput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws

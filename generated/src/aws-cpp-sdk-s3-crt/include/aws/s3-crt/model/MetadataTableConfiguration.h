﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/S3TablesDestination.h>
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
   * <p> The metadata table configuration for a general purpose bucket.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/MetadataTableConfiguration">AWS
   * API Reference</a></p>
   */
  class MetadataTableConfiguration
  {
  public:
    AWS_S3CRT_API MetadataTableConfiguration() = default;
    AWS_S3CRT_API MetadataTableConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API MetadataTableConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The destination information for the metadata table configuration. The
     * destination table bucket must be in the same Region and Amazon Web Services
     * account as the general purpose bucket. The specified metadata table name must be
     * unique within the <code>aws_s3_metadata</code> namespace in the destination
     * table bucket. </p>
     */
    inline const S3TablesDestination& GetS3TablesDestination() const { return m_s3TablesDestination; }
    inline bool S3TablesDestinationHasBeenSet() const { return m_s3TablesDestinationHasBeenSet; }
    template<typename S3TablesDestinationT = S3TablesDestination>
    void SetS3TablesDestination(S3TablesDestinationT&& value) { m_s3TablesDestinationHasBeenSet = true; m_s3TablesDestination = std::forward<S3TablesDestinationT>(value); }
    template<typename S3TablesDestinationT = S3TablesDestination>
    MetadataTableConfiguration& WithS3TablesDestination(S3TablesDestinationT&& value) { SetS3TablesDestination(std::forward<S3TablesDestinationT>(value)); return *this;}
    ///@}
  private:

    S3TablesDestination m_s3TablesDestination;
    bool m_s3TablesDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws

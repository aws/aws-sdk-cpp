﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/S3TablesDestinationResult.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3Crt {
namespace Model {

/**
 * <p> The V1 S3 Metadata configuration for a general purpose bucket. The
 * destination table bucket must be in the same Region and Amazon Web Services
 * account as the general purpose bucket. The specified metadata table name must be
 * unique within the <code>aws_s3_metadata</code> namespace in the destination
 * table bucket. </p>  <p>If you created your S3 Metadata configuration
 * before July 15, 2025, we recommend that you delete and re-create your
 * configuration by using <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucketMetadataConfiguration.html">CreateBucketMetadataConfiguration</a>
 * so that you can expire journal table records and create a live inventory
 * table.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/MetadataTableConfigurationResult">AWS
 * API Reference</a></p>
 */
class MetadataTableConfigurationResult {
 public:
  AWS_S3CRT_API MetadataTableConfigurationResult() = default;
  AWS_S3CRT_API MetadataTableConfigurationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CRT_API MetadataTableConfigurationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p> The destination information for the metadata table configuration. The
   * destination table bucket must be in the same Region and Amazon Web Services
   * account as the general purpose bucket. The specified metadata table name must be
   * unique within the <code>aws_s3_metadata</code> namespace in the destination
   * table bucket. </p>
   */
  inline const S3TablesDestinationResult& GetS3TablesDestinationResult() const { return m_s3TablesDestinationResult; }
  inline bool S3TablesDestinationResultHasBeenSet() const { return m_s3TablesDestinationResultHasBeenSet; }
  template <typename S3TablesDestinationResultT = S3TablesDestinationResult>
  void SetS3TablesDestinationResult(S3TablesDestinationResultT&& value) {
    m_s3TablesDestinationResultHasBeenSet = true;
    m_s3TablesDestinationResult = std::forward<S3TablesDestinationResultT>(value);
  }
  template <typename S3TablesDestinationResultT = S3TablesDestinationResult>
  MetadataTableConfigurationResult& WithS3TablesDestinationResult(S3TablesDestinationResultT&& value) {
    SetS3TablesDestinationResult(std::forward<S3TablesDestinationResultT>(value));
    return *this;
  }
  ///@}
 private:
  S3TablesDestinationResult m_s3TablesDestinationResult;
  bool m_s3TablesDestinationResultHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws

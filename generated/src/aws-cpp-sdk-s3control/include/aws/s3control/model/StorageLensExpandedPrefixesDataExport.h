/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3BucketDestination.h>
#include <aws/s3control/model/StorageLensTableDestination.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3Control {
namespace Model {

/**
 * <p>A container for your S3 Storage Lens expanded prefix metrics report
 * configuration. Unlike the default Storage Lens metrics report, the enhanced
 * prefix metrics report includes all S3 Storage Lens storage and activity data
 * related to the full list of prefixes in your Storage Lens
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensExpandedPrefixesDataExport">AWS
 * API Reference</a></p>
 */
class StorageLensExpandedPrefixesDataExport {
 public:
  AWS_S3CONTROL_API StorageLensExpandedPrefixesDataExport() = default;
  AWS_S3CONTROL_API StorageLensExpandedPrefixesDataExport(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CONTROL_API StorageLensExpandedPrefixesDataExport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{

  inline const S3BucketDestination& GetS3BucketDestination() const { return m_s3BucketDestination; }
  inline bool S3BucketDestinationHasBeenSet() const { return m_s3BucketDestinationHasBeenSet; }
  template <typename S3BucketDestinationT = S3BucketDestination>
  void SetS3BucketDestination(S3BucketDestinationT&& value) {
    m_s3BucketDestinationHasBeenSet = true;
    m_s3BucketDestination = std::forward<S3BucketDestinationT>(value);
  }
  template <typename S3BucketDestinationT = S3BucketDestination>
  StorageLensExpandedPrefixesDataExport& WithS3BucketDestination(S3BucketDestinationT&& value) {
    SetS3BucketDestination(std::forward<S3BucketDestinationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container for the bucket where the S3 Storage Lens metric export files are
   * located. At least one export destination must be specified.</p>
   */
  inline const StorageLensTableDestination& GetStorageLensTableDestination() const { return m_storageLensTableDestination; }
  inline bool StorageLensTableDestinationHasBeenSet() const { return m_storageLensTableDestinationHasBeenSet; }
  template <typename StorageLensTableDestinationT = StorageLensTableDestination>
  void SetStorageLensTableDestination(StorageLensTableDestinationT&& value) {
    m_storageLensTableDestinationHasBeenSet = true;
    m_storageLensTableDestination = std::forward<StorageLensTableDestinationT>(value);
  }
  template <typename StorageLensTableDestinationT = StorageLensTableDestination>
  StorageLensExpandedPrefixesDataExport& WithStorageLensTableDestination(StorageLensTableDestinationT&& value) {
    SetStorageLensTableDestination(std::forward<StorageLensTableDestinationT>(value));
    return *this;
  }
  ///@}
 private:
  S3BucketDestination m_s3BucketDestination;
  bool m_s3BucketDestinationHasBeenSet = false;

  StorageLensTableDestination m_storageLensTableDestination;
  bool m_storageLensTableDestinationHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws

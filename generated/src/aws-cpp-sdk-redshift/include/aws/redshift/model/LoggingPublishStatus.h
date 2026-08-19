/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/S3TablePublishStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Redshift {
namespace Model {

/**
 * <p>Describes the system table publishing status for a cluster.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/LoggingPublishStatus">AWS
 * API Reference</a></p>
 */
class LoggingPublishStatus {
 public:
  AWS_REDSHIFT_API LoggingPublishStatus() = default;
  AWS_REDSHIFT_API LoggingPublishStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_REDSHIFT_API LoggingPublishStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The status of system table publishing to S3 Tables.</p>
   */
  inline const S3TablePublishStatus& GetS3Tables() const { return m_s3Tables; }
  inline bool S3TablesHasBeenSet() const { return m_s3TablesHasBeenSet; }
  template <typename S3TablesT = S3TablePublishStatus>
  void SetS3Tables(S3TablesT&& value) {
    m_s3TablesHasBeenSet = true;
    m_s3Tables = std::forward<S3TablesT>(value);
  }
  template <typename S3TablesT = S3TablePublishStatus>
  LoggingPublishStatus& WithS3Tables(S3TablesT&& value) {
    SetS3Tables(std::forward<S3TablesT>(value));
    return *this;
  }
  ///@}
 private:
  S3TablePublishStatus m_s3Tables;
  bool m_s3TablesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws

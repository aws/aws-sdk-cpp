/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/LoggingEnabled.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {

/**
 * <p>The server access logging status of a table bucket. To enable logging,
 * specify <code>loggingEnabled</code>. To disable logging, specify an empty
 * <code>TableBucketLoggingStatus</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableBucketLoggingStatus">AWS
 * API Reference</a></p>
 */
class TableBucketLoggingStatus {
 public:
  AWS_S3TABLES_API TableBucketLoggingStatus() = default;
  AWS_S3TABLES_API TableBucketLoggingStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API TableBucketLoggingStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Where logs for the table bucket are delivered and how the log objects are
   * named. Must be populated to enable logging.</p>
   */
  inline const LoggingEnabled& GetLoggingEnabled() const { return m_loggingEnabled; }
  inline bool LoggingEnabledHasBeenSet() const { return m_loggingEnabledHasBeenSet; }
  template <typename LoggingEnabledT = LoggingEnabled>
  void SetLoggingEnabled(LoggingEnabledT&& value) {
    m_loggingEnabledHasBeenSet = true;
    m_loggingEnabled = std::forward<LoggingEnabledT>(value);
  }
  template <typename LoggingEnabledT = LoggingEnabled>
  TableBucketLoggingStatus& WithLoggingEnabled(LoggingEnabledT&& value) {
    SetLoggingEnabled(std::forward<LoggingEnabledT>(value));
    return *this;
  }
  ///@}
 private:
  LoggingEnabled m_loggingEnabled;
  bool m_loggingEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws

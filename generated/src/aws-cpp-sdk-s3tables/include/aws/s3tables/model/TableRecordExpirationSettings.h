/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>

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
 * <p>The record expiration setting that specifies when records expire and are
 * automatically removed from a table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableRecordExpirationSettings">AWS
 * API Reference</a></p>
 */
class TableRecordExpirationSettings {
 public:
  AWS_S3TABLES_API TableRecordExpirationSettings() = default;
  AWS_S3TABLES_API TableRecordExpirationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API TableRecordExpirationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>If you enable record expiration for a table, you can specify the number of
   * days to retain your table records. For example, to retain your table records for
   * one year, set this value to <code>365</code>.</p>
   */
  inline int GetDays() const { return m_days; }
  inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
  inline void SetDays(int value) {
    m_daysHasBeenSet = true;
    m_days = value;
  }
  inline TableRecordExpirationSettings& WithDays(int value) {
    SetDays(value);
    return *this;
  }
  ///@}
 private:
  int m_days{0};
  bool m_daysHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws

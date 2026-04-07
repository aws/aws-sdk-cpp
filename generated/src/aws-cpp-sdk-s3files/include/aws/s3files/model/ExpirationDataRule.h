/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3files/S3Files_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Files {
namespace Model {

/**
 * <p>Specifies a rule that controls when cached data expires from the file system
 * based on last access time.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/ExpirationDataRule">AWS
 * API Reference</a></p>
 */
class ExpirationDataRule {
 public:
  AWS_S3FILES_API ExpirationDataRule() = default;
  AWS_S3FILES_API ExpirationDataRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API ExpirationDataRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of days after last access before cached data expires from the file
   * system.</p>
   */
  inline int GetDaysAfterLastAccess() const { return m_daysAfterLastAccess; }
  inline bool DaysAfterLastAccessHasBeenSet() const { return m_daysAfterLastAccessHasBeenSet; }
  inline void SetDaysAfterLastAccess(int value) {
    m_daysAfterLastAccessHasBeenSet = true;
    m_daysAfterLastAccess = value;
  }
  inline ExpirationDataRule& WithDaysAfterLastAccess(int value) {
    SetDaysAfterLastAccess(value);
    return *this;
  }
  ///@}
 private:
  int m_daysAfterLastAccess{0};
  bool m_daysAfterLastAccessHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws

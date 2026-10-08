/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/S3ExportDestination.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Specifies where Security Hub writes the export output. This is a union: you
 * must specify exactly one member. Currently, the only supported member is
 * <code>S3</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ExportDestination">AWS
 * API Reference</a></p>
 */
class ExportDestination {
 public:
  AWS_SECURITYHUB_API ExportDestination() = default;
  AWS_SECURITYHUB_API ExportDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ExportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Simple Storage Service (Amazon S3) bucket and Amazon Web Services
   * Key Management Service (Amazon Web Services KMS) key that Security Hub uses to
   * write the export.</p>
   */
  inline const S3ExportDestination& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = S3ExportDestination>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = S3ExportDestination>
  ExportDestination& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}
 private:
  S3ExportDestination m_s3;
  bool m_s3HasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/S3Location.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>Specifies the Amazon S3 location of code artifacts that workflows use during
 * execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/Code">AWS
 * API Reference</a></p>
 */
class Code {
 public:
  AWS_MWAASERVERLESS_API Code() = default;
  AWS_MWAASERVERLESS_API Code(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Code& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 location of the code artifacts that your workflow tasks use
   * during execution.</p>
   */
  inline const S3Location& GetS3Location() const { return m_s3Location; }
  inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
  template <typename S3LocationT = S3Location>
  void SetS3Location(S3LocationT&& value) {
    m_s3LocationHasBeenSet = true;
    m_s3Location = std::forward<S3LocationT>(value);
  }
  template <typename S3LocationT = S3Location>
  Code& WithS3Location(S3LocationT&& value) {
    SetS3Location(std::forward<S3LocationT>(value));
    return *this;
  }
  ///@}
 private:
  S3Location m_s3Location;
  bool m_s3LocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws

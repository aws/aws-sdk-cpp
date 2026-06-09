/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AwsEncryptionKeyConfigurationInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>The configuration of the encryption key to use for an Autonomous Database.
 * This is a union, so only one of the following members can be
 * specified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/EncryptionKeyConfigurationInput">AWS
 * API Reference</a></p>
 */
class EncryptionKeyConfigurationInput {
 public:
  AWS_ODB_API EncryptionKeyConfigurationInput() = default;
  AWS_ODB_API EncryptionKeyConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API EncryptionKeyConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration of the Amazon Web Services Key Management Service (KMS)
   * encryption key to use.</p>
   */
  inline const AwsEncryptionKeyConfigurationInput& GetAwsEncryptionKey() const { return m_awsEncryptionKey; }
  inline bool AwsEncryptionKeyHasBeenSet() const { return m_awsEncryptionKeyHasBeenSet; }
  template <typename AwsEncryptionKeyT = AwsEncryptionKeyConfigurationInput>
  void SetAwsEncryptionKey(AwsEncryptionKeyT&& value) {
    m_awsEncryptionKeyHasBeenSet = true;
    m_awsEncryptionKey = std::forward<AwsEncryptionKeyT>(value);
  }
  template <typename AwsEncryptionKeyT = AwsEncryptionKeyConfigurationInput>
  EncryptionKeyConfigurationInput& WithAwsEncryptionKey(AwsEncryptionKeyT&& value) {
    SetAwsEncryptionKey(std::forward<AwsEncryptionKeyT>(value));
    return *this;
  }
  ///@}
 private:
  AwsEncryptionKeyConfigurationInput m_awsEncryptionKey;
  bool m_awsEncryptionKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

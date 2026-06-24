/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/EncryptionKeyConfiguration.h>
#include <aws/odb/model/EncryptionKeyProvider.h>

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
 * <p>The encryption configuration for an Autonomous Database.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/EncryptionSummary">AWS
 * API Reference</a></p>
 */
class EncryptionSummary {
 public:
  AWS_ODB_API EncryptionSummary() = default;
  AWS_ODB_API EncryptionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API EncryptionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The provider of the encryption key used for the Autonomous Database.</p>
   */
  inline EncryptionKeyProvider GetEncryptionKeyProvider() const { return m_encryptionKeyProvider; }
  inline bool EncryptionKeyProviderHasBeenSet() const { return m_encryptionKeyProviderHasBeenSet; }
  inline void SetEncryptionKeyProvider(EncryptionKeyProvider value) {
    m_encryptionKeyProviderHasBeenSet = true;
    m_encryptionKeyProvider = value;
  }
  inline EncryptionSummary& WithEncryptionKeyProvider(EncryptionKeyProvider value) {
    SetEncryptionKeyProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the encryption key used for the Autonomous Database.</p>
   */
  inline const EncryptionKeyConfiguration& GetEncryptionKeyConfiguration() const { return m_encryptionKeyConfiguration; }
  inline bool EncryptionKeyConfigurationHasBeenSet() const { return m_encryptionKeyConfigurationHasBeenSet; }
  template <typename EncryptionKeyConfigurationT = EncryptionKeyConfiguration>
  void SetEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    m_encryptionKeyConfigurationHasBeenSet = true;
    m_encryptionKeyConfiguration = std::forward<EncryptionKeyConfigurationT>(value);
  }
  template <typename EncryptionKeyConfigurationT = EncryptionKeyConfiguration>
  EncryptionSummary& WithEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    SetEncryptionKeyConfiguration(std::forward<EncryptionKeyConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  EncryptionKeyProvider m_encryptionKeyProvider{EncryptionKeyProvider::NOT_SET};

  EncryptionKeyConfiguration m_encryptionKeyConfiguration;
  bool m_encryptionKeyProviderHasBeenSet = false;
  bool m_encryptionKeyConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AwsEncryptionKeyConfiguration.h>
#include <aws/odb/model/OciEncryptionKeyConfiguration.h>
#include <aws/odb/model/OkvEncryptionKeyConfiguration.h>

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
 * <p>The configuration of the encryption key used for an Autonomous Database. This
 * is a union, so only one of the following members can be specified.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/EncryptionKeyConfiguration">AWS
 * API Reference</a></p>
 */
class EncryptionKeyConfiguration {
 public:
  AWS_ODB_API EncryptionKeyConfiguration() = default;
  AWS_ODB_API EncryptionKeyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API EncryptionKeyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration of the Amazon Web Services Key Management Service (KMS)
   * encryption key.</p>
   */
  inline const AwsEncryptionKeyConfiguration& GetAwsEncryptionKey() const { return m_awsEncryptionKey; }
  inline bool AwsEncryptionKeyHasBeenSet() const { return m_awsEncryptionKeyHasBeenSet; }
  template <typename AwsEncryptionKeyT = AwsEncryptionKeyConfiguration>
  void SetAwsEncryptionKey(AwsEncryptionKeyT&& value) {
    m_awsEncryptionKeyHasBeenSet = true;
    m_awsEncryptionKey = std::forward<AwsEncryptionKeyT>(value);
  }
  template <typename AwsEncryptionKeyT = AwsEncryptionKeyConfiguration>
  EncryptionKeyConfiguration& WithAwsEncryptionKey(AwsEncryptionKeyT&& value) {
    SetAwsEncryptionKey(std::forward<AwsEncryptionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the Oracle Cloud Infrastructure (OCI) Vault encryption
   * key.</p>
   */
  inline const OciEncryptionKeyConfiguration& GetOciEncryptionKey() const { return m_ociEncryptionKey; }
  inline bool OciEncryptionKeyHasBeenSet() const { return m_ociEncryptionKeyHasBeenSet; }
  template <typename OciEncryptionKeyT = OciEncryptionKeyConfiguration>
  void SetOciEncryptionKey(OciEncryptionKeyT&& value) {
    m_ociEncryptionKeyHasBeenSet = true;
    m_ociEncryptionKey = std::forward<OciEncryptionKeyT>(value);
  }
  template <typename OciEncryptionKeyT = OciEncryptionKeyConfiguration>
  EncryptionKeyConfiguration& WithOciEncryptionKey(OciEncryptionKeyT&& value) {
    SetOciEncryptionKey(std::forward<OciEncryptionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the Oracle Key Vault (OKV) encryption key.</p>
   */
  inline const OkvEncryptionKeyConfiguration& GetOkvEncryptionKey() const { return m_okvEncryptionKey; }
  inline bool OkvEncryptionKeyHasBeenSet() const { return m_okvEncryptionKeyHasBeenSet; }
  template <typename OkvEncryptionKeyT = OkvEncryptionKeyConfiguration>
  void SetOkvEncryptionKey(OkvEncryptionKeyT&& value) {
    m_okvEncryptionKeyHasBeenSet = true;
    m_okvEncryptionKey = std::forward<OkvEncryptionKeyT>(value);
  }
  template <typename OkvEncryptionKeyT = OkvEncryptionKeyConfiguration>
  EncryptionKeyConfiguration& WithOkvEncryptionKey(OkvEncryptionKeyT&& value) {
    SetOkvEncryptionKey(std::forward<OkvEncryptionKeyT>(value));
    return *this;
  }
  ///@}
 private:
  AwsEncryptionKeyConfiguration m_awsEncryptionKey;

  OciEncryptionKeyConfiguration m_ociEncryptionKey;

  OkvEncryptionKeyConfiguration m_okvEncryptionKey;
  bool m_awsEncryptionKeyHasBeenSet = false;
  bool m_ociEncryptionKeyHasBeenSet = false;
  bool m_okvEncryptionKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

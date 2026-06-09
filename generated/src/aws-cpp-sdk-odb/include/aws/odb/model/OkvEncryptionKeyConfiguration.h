/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

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
 * <p>The configuration of the Oracle Key Vault (OKV) encryption key used for an
 * Autonomous Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/OkvEncryptionKeyConfiguration">AWS
 * API Reference</a></p>
 */
class OkvEncryptionKeyConfiguration {
 public:
  AWS_ODB_API OkvEncryptionKeyConfiguration() = default;
  AWS_ODB_API OkvEncryptionKeyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API OkvEncryptionKeyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the directory that contains the Oracle Key Vault (OKV)
   * certificate.</p>
   */
  inline const Aws::String& GetCertificateDirectoryName() const { return m_certificateDirectoryName; }
  inline bool CertificateDirectoryNameHasBeenSet() const { return m_certificateDirectoryNameHasBeenSet; }
  template <typename CertificateDirectoryNameT = Aws::String>
  void SetCertificateDirectoryName(CertificateDirectoryNameT&& value) {
    m_certificateDirectoryNameHasBeenSet = true;
    m_certificateDirectoryName = std::forward<CertificateDirectoryNameT>(value);
  }
  template <typename CertificateDirectoryNameT = Aws::String>
  OkvEncryptionKeyConfiguration& WithCertificateDirectoryName(CertificateDirectoryNameT&& value) {
    SetCertificateDirectoryName(std::forward<CertificateDirectoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Oracle Key Vault (OKV) certificate.</p>
   */
  inline const Aws::String& GetCertificateId() const { return m_certificateId; }
  inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
  template <typename CertificateIdT = Aws::String>
  void SetCertificateId(CertificateIdT&& value) {
    m_certificateIdHasBeenSet = true;
    m_certificateId = std::forward<CertificateIdT>(value);
  }
  template <typename CertificateIdT = Aws::String>
  OkvEncryptionKeyConfiguration& WithCertificateId(CertificateIdT&& value) {
    SetCertificateId(std::forward<CertificateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the directory where the Oracle Key Vault (OKV) configuration is
   * stored.</p>
   */
  inline const Aws::String& GetDirectoryName() const { return m_directoryName; }
  inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }
  template <typename DirectoryNameT = Aws::String>
  void SetDirectoryName(DirectoryNameT&& value) {
    m_directoryNameHasBeenSet = true;
    m_directoryName = std::forward<DirectoryNameT>(value);
  }
  template <typename DirectoryNameT = Aws::String>
  OkvEncryptionKeyConfiguration& WithDirectoryName(DirectoryNameT&& value) {
    SetDirectoryName(std::forward<DirectoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Oracle Key Vault (OKV) key to use for encryption.</p>
   */
  inline const Aws::String& GetOkvKmsKey() const { return m_okvKmsKey; }
  inline bool OkvKmsKeyHasBeenSet() const { return m_okvKmsKeyHasBeenSet; }
  template <typename OkvKmsKeyT = Aws::String>
  void SetOkvKmsKey(OkvKmsKeyT&& value) {
    m_okvKmsKeyHasBeenSet = true;
    m_okvKmsKey = std::forward<OkvKmsKeyT>(value);
  }
  template <typename OkvKmsKeyT = Aws::String>
  OkvEncryptionKeyConfiguration& WithOkvKmsKey(OkvKmsKeyT&& value) {
    SetOkvKmsKey(std::forward<OkvKmsKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URI of the Oracle Key Vault (OKV) server.</p>
   */
  inline const Aws::String& GetOkvUri() const { return m_okvUri; }
  inline bool OkvUriHasBeenSet() const { return m_okvUriHasBeenSet; }
  template <typename OkvUriT = Aws::String>
  void SetOkvUri(OkvUriT&& value) {
    m_okvUriHasBeenSet = true;
    m_okvUri = std::forward<OkvUriT>(value);
  }
  template <typename OkvUriT = Aws::String>
  OkvEncryptionKeyConfiguration& WithOkvUri(OkvUriT&& value) {
    SetOkvUri(std::forward<OkvUriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_certificateDirectoryName;

  Aws::String m_certificateId;

  Aws::String m_directoryName;

  Aws::String m_okvKmsKey;

  Aws::String m_okvUri;
  bool m_certificateDirectoryNameHasBeenSet = false;
  bool m_certificateIdHasBeenSet = false;
  bool m_directoryNameHasBeenSet = false;
  bool m_okvKmsKeyHasBeenSet = false;
  bool m_okvUriHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

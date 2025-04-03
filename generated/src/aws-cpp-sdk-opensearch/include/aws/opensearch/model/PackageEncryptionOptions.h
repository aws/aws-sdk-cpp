/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Encryption options for a package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PackageEncryptionOptions">AWS
   * API Reference</a></p>
   */
  class PackageEncryptionOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API PackageEncryptionOptions() = default;
    AWS_OPENSEARCHSERVICE_API PackageEncryptionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageEncryptionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>KMS key ID for encrypting the package.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    PackageEncryptionOptions& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether encryption is enabled for the package.</p>
     */
    inline bool GetEncryptionEnabled() const { return m_encryptionEnabled; }
    inline bool EncryptionEnabledHasBeenSet() const { return m_encryptionEnabledHasBeenSet; }
    inline void SetEncryptionEnabled(bool value) { m_encryptionEnabledHasBeenSet = true; m_encryptionEnabled = value; }
    inline PackageEncryptionOptions& WithEncryptionEnabled(bool value) { SetEncryptionEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    bool m_encryptionEnabled{false};
    bool m_encryptionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

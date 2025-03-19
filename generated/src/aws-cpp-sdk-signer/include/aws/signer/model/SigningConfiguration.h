/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/EncryptionAlgorithmOptions.h>
#include <aws/signer/model/HashAlgorithmOptions.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>The configuration of a signing operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningConfiguration">AWS
   * API Reference</a></p>
   */
  class SigningConfiguration
  {
  public:
    AWS_SIGNER_API SigningConfiguration() = default;
    AWS_SIGNER_API SigningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption algorithm options that are available for a code-signing
     * job.</p>
     */
    inline const EncryptionAlgorithmOptions& GetEncryptionAlgorithmOptions() const { return m_encryptionAlgorithmOptions; }
    inline bool EncryptionAlgorithmOptionsHasBeenSet() const { return m_encryptionAlgorithmOptionsHasBeenSet; }
    template<typename EncryptionAlgorithmOptionsT = EncryptionAlgorithmOptions>
    void SetEncryptionAlgorithmOptions(EncryptionAlgorithmOptionsT&& value) { m_encryptionAlgorithmOptionsHasBeenSet = true; m_encryptionAlgorithmOptions = std::forward<EncryptionAlgorithmOptionsT>(value); }
    template<typename EncryptionAlgorithmOptionsT = EncryptionAlgorithmOptions>
    SigningConfiguration& WithEncryptionAlgorithmOptions(EncryptionAlgorithmOptionsT&& value) { SetEncryptionAlgorithmOptions(std::forward<EncryptionAlgorithmOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash algorithm options that are available for a code-signing job.</p>
     */
    inline const HashAlgorithmOptions& GetHashAlgorithmOptions() const { return m_hashAlgorithmOptions; }
    inline bool HashAlgorithmOptionsHasBeenSet() const { return m_hashAlgorithmOptionsHasBeenSet; }
    template<typename HashAlgorithmOptionsT = HashAlgorithmOptions>
    void SetHashAlgorithmOptions(HashAlgorithmOptionsT&& value) { m_hashAlgorithmOptionsHasBeenSet = true; m_hashAlgorithmOptions = std::forward<HashAlgorithmOptionsT>(value); }
    template<typename HashAlgorithmOptionsT = HashAlgorithmOptions>
    SigningConfiguration& WithHashAlgorithmOptions(HashAlgorithmOptionsT&& value) { SetHashAlgorithmOptions(std::forward<HashAlgorithmOptionsT>(value)); return *this;}
    ///@}
  private:

    EncryptionAlgorithmOptions m_encryptionAlgorithmOptions;
    bool m_encryptionAlgorithmOptionsHasBeenSet = false;

    HashAlgorithmOptions m_hashAlgorithmOptions;
    bool m_hashAlgorithmOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws

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
   * <p>The configuration of a code signing operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningConfiguration">AWS
   * API Reference</a></p>
   */
  class SigningConfiguration
  {
  public:
    AWS_SIGNER_API SigningConfiguration();
    AWS_SIGNER_API SigningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption algorithm options that are available for a code signing
     * job.</p>
     */
    inline const EncryptionAlgorithmOptions& GetEncryptionAlgorithmOptions() const{ return m_encryptionAlgorithmOptions; }

    /**
     * <p>The encryption algorithm options that are available for a code signing
     * job.</p>
     */
    inline bool EncryptionAlgorithmOptionsHasBeenSet() const { return m_encryptionAlgorithmOptionsHasBeenSet; }

    /**
     * <p>The encryption algorithm options that are available for a code signing
     * job.</p>
     */
    inline void SetEncryptionAlgorithmOptions(const EncryptionAlgorithmOptions& value) { m_encryptionAlgorithmOptionsHasBeenSet = true; m_encryptionAlgorithmOptions = value; }

    /**
     * <p>The encryption algorithm options that are available for a code signing
     * job.</p>
     */
    inline void SetEncryptionAlgorithmOptions(EncryptionAlgorithmOptions&& value) { m_encryptionAlgorithmOptionsHasBeenSet = true; m_encryptionAlgorithmOptions = std::move(value); }

    /**
     * <p>The encryption algorithm options that are available for a code signing
     * job.</p>
     */
    inline SigningConfiguration& WithEncryptionAlgorithmOptions(const EncryptionAlgorithmOptions& value) { SetEncryptionAlgorithmOptions(value); return *this;}

    /**
     * <p>The encryption algorithm options that are available for a code signing
     * job.</p>
     */
    inline SigningConfiguration& WithEncryptionAlgorithmOptions(EncryptionAlgorithmOptions&& value) { SetEncryptionAlgorithmOptions(std::move(value)); return *this;}


    /**
     * <p>The hash algorithm options that are available for a code signing job.</p>
     */
    inline const HashAlgorithmOptions& GetHashAlgorithmOptions() const{ return m_hashAlgorithmOptions; }

    /**
     * <p>The hash algorithm options that are available for a code signing job.</p>
     */
    inline bool HashAlgorithmOptionsHasBeenSet() const { return m_hashAlgorithmOptionsHasBeenSet; }

    /**
     * <p>The hash algorithm options that are available for a code signing job.</p>
     */
    inline void SetHashAlgorithmOptions(const HashAlgorithmOptions& value) { m_hashAlgorithmOptionsHasBeenSet = true; m_hashAlgorithmOptions = value; }

    /**
     * <p>The hash algorithm options that are available for a code signing job.</p>
     */
    inline void SetHashAlgorithmOptions(HashAlgorithmOptions&& value) { m_hashAlgorithmOptionsHasBeenSet = true; m_hashAlgorithmOptions = std::move(value); }

    /**
     * <p>The hash algorithm options that are available for a code signing job.</p>
     */
    inline SigningConfiguration& WithHashAlgorithmOptions(const HashAlgorithmOptions& value) { SetHashAlgorithmOptions(value); return *this;}

    /**
     * <p>The hash algorithm options that are available for a code signing job.</p>
     */
    inline SigningConfiguration& WithHashAlgorithmOptions(HashAlgorithmOptions&& value) { SetHashAlgorithmOptions(std::move(value)); return *this;}

  private:

    EncryptionAlgorithmOptions m_encryptionAlgorithmOptions;
    bool m_encryptionAlgorithmOptionsHasBeenSet = false;

    HashAlgorithmOptions m_hashAlgorithmOptions;
    bool m_hashAlgorithmOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws

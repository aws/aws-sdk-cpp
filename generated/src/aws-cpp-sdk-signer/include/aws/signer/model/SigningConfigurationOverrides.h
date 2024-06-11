﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/EncryptionAlgorithm.h>
#include <aws/signer/model/HashAlgorithm.h>
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
   * <p>A signing configuration that overrides the default encryption or hash
   * algorithm of a signing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningConfigurationOverrides">AWS
   * API Reference</a></p>
   */
  class SigningConfigurationOverrides
  {
  public:
    AWS_SIGNER_API SigningConfigurationOverrides();
    AWS_SIGNER_API SigningConfigurationOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningConfigurationOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A specified override of the default encryption algorithm that is used in a
     * code-signing job.</p>
     */
    inline const EncryptionAlgorithm& GetEncryptionAlgorithm() const{ return m_encryptionAlgorithm; }
    inline bool EncryptionAlgorithmHasBeenSet() const { return m_encryptionAlgorithmHasBeenSet; }
    inline void SetEncryptionAlgorithm(const EncryptionAlgorithm& value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = value; }
    inline void SetEncryptionAlgorithm(EncryptionAlgorithm&& value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = std::move(value); }
    inline SigningConfigurationOverrides& WithEncryptionAlgorithm(const EncryptionAlgorithm& value) { SetEncryptionAlgorithm(value); return *this;}
    inline SigningConfigurationOverrides& WithEncryptionAlgorithm(EncryptionAlgorithm&& value) { SetEncryptionAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specified override of the default hash algorithm that is used in a
     * code-signing job.</p>
     */
    inline const HashAlgorithm& GetHashAlgorithm() const{ return m_hashAlgorithm; }
    inline bool HashAlgorithmHasBeenSet() const { return m_hashAlgorithmHasBeenSet; }
    inline void SetHashAlgorithm(const HashAlgorithm& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = value; }
    inline void SetHashAlgorithm(HashAlgorithm&& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = std::move(value); }
    inline SigningConfigurationOverrides& WithHashAlgorithm(const HashAlgorithm& value) { SetHashAlgorithm(value); return *this;}
    inline SigningConfigurationOverrides& WithHashAlgorithm(HashAlgorithm&& value) { SetHashAlgorithm(std::move(value)); return *this;}
    ///@}
  private:

    EncryptionAlgorithm m_encryptionAlgorithm;
    bool m_encryptionAlgorithmHasBeenSet = false;

    HashAlgorithm m_hashAlgorithm;
    bool m_hashAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws

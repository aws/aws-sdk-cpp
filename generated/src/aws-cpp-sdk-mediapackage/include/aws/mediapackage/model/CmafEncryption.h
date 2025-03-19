/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/CmafEncryptionMethod.h>
#include <aws/mediapackage/model/SpekeKeyProvider.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A Common Media Application Format (CMAF) encryption configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CmafEncryption">AWS
   * API Reference</a></p>
   */
  class CmafEncryption
  {
  public:
    AWS_MEDIAPACKAGE_API CmafEncryption() = default;
    AWS_MEDIAPACKAGE_API CmafEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API CmafEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * An optional 128-bit, 16-byte hex value represented by a 32-character string,
     * used in conjunction with the key for encrypting blocks. If you don't specify a
     * value, then MediaPackage creates the constant initialization vector (IV).
     */
    inline const Aws::String& GetConstantInitializationVector() const { return m_constantInitializationVector; }
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }
    template<typename ConstantInitializationVectorT = Aws::String>
    void SetConstantInitializationVector(ConstantInitializationVectorT&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::forward<ConstantInitializationVectorT>(value); }
    template<typename ConstantInitializationVectorT = Aws::String>
    CmafEncryption& WithConstantInitializationVector(ConstantInitializationVectorT&& value) { SetConstantInitializationVector(std::forward<ConstantInitializationVectorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline CmafEncryptionMethod GetEncryptionMethod() const { return m_encryptionMethod; }
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }
    inline void SetEncryptionMethod(CmafEncryptionMethod value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }
    inline CmafEncryption& WithEncryptionMethod(CmafEncryptionMethod value) { SetEncryptionMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * Time (in seconds) between each encryption key rotation.
     */
    inline int GetKeyRotationIntervalSeconds() const { return m_keyRotationIntervalSeconds; }
    inline bool KeyRotationIntervalSecondsHasBeenSet() const { return m_keyRotationIntervalSecondsHasBeenSet; }
    inline void SetKeyRotationIntervalSeconds(int value) { m_keyRotationIntervalSecondsHasBeenSet = true; m_keyRotationIntervalSeconds = value; }
    inline CmafEncryption& WithKeyRotationIntervalSeconds(int value) { SetKeyRotationIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const { return m_spekeKeyProvider; }
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    void SetSpekeKeyProvider(SpekeKeyProviderT&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::forward<SpekeKeyProviderT>(value); }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    CmafEncryption& WithSpekeKeyProvider(SpekeKeyProviderT&& value) { SetSpekeKeyProvider(std::forward<SpekeKeyProviderT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet = false;

    CmafEncryptionMethod m_encryptionMethod{CmafEncryptionMethod::NOT_SET};
    bool m_encryptionMethodHasBeenSet = false;

    int m_keyRotationIntervalSeconds{0};
    bool m_keyRotationIntervalSecondsHasBeenSet = false;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws

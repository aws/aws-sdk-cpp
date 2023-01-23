/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/EncryptionMethod.h>
#include <aws/mediapackage-vod/model/SpekeKeyProvider.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * An HTTP Live Streaming (HLS) encryption configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/HlsEncryption">AWS
   * API Reference</a></p>
   */
  class HlsEncryption
  {
  public:
    AWS_MEDIAPACKAGEVOD_API HlsEncryption();
    AWS_MEDIAPACKAGEVOD_API HlsEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API HlsEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline const Aws::String& GetConstantInitializationVector() const{ return m_constantInitializationVector; }

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline void SetConstantInitializationVector(const Aws::String& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = value; }

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline void SetConstantInitializationVector(Aws::String&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::move(value); }

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline void SetConstantInitializationVector(const char* value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector.assign(value); }

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline HlsEncryption& WithConstantInitializationVector(const Aws::String& value) { SetConstantInitializationVector(value); return *this;}

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline HlsEncryption& WithConstantInitializationVector(Aws::String&& value) { SetConstantInitializationVector(std::move(value)); return *this;}

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline HlsEncryption& WithConstantInitializationVector(const char* value) { SetConstantInitializationVector(value); return *this;}


    /**
     * The encryption method to use.
     */
    inline const EncryptionMethod& GetEncryptionMethod() const{ return m_encryptionMethod; }

    /**
     * The encryption method to use.
     */
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }

    /**
     * The encryption method to use.
     */
    inline void SetEncryptionMethod(const EncryptionMethod& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }

    /**
     * The encryption method to use.
     */
    inline void SetEncryptionMethod(EncryptionMethod&& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = std::move(value); }

    /**
     * The encryption method to use.
     */
    inline HlsEncryption& WithEncryptionMethod(const EncryptionMethod& value) { SetEncryptionMethod(value); return *this;}

    /**
     * The encryption method to use.
     */
    inline HlsEncryption& WithEncryptionMethod(EncryptionMethod&& value) { SetEncryptionMethod(std::move(value)); return *this;}


    
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }

    
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }

    
    inline void SetSpekeKeyProvider(const SpekeKeyProvider& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }

    
    inline void SetSpekeKeyProvider(SpekeKeyProvider&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }

    
    inline HlsEncryption& WithSpekeKeyProvider(const SpekeKeyProvider& value) { SetSpekeKeyProvider(value); return *this;}

    
    inline HlsEncryption& WithSpekeKeyProvider(SpekeKeyProvider&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}

  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet = false;

    EncryptionMethod m_encryptionMethod;
    bool m_encryptionMethodHasBeenSet = false;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws

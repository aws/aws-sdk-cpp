/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * A CMAF encryption configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CmafEncryption">AWS
   * API Reference</a></p>
   */
  class CmafEncryption
  {
  public:
    AWS_MEDIAPACKAGEVOD_API CmafEncryption();
    AWS_MEDIAPACKAGEVOD_API CmafEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API CmafEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An optional 128-bit, 16-byte hex value represented by a 32-character string,
     * used in conjunction with the key for encrypting blocks. If you don't specify a
     * value, then MediaPackage creates the constant initialization vector (IV).
     */
    inline const Aws::String& GetConstantInitializationVector() const{ return m_constantInitializationVector; }

    /**
     * An optional 128-bit, 16-byte hex value represented by a 32-character string,
     * used in conjunction with the key for encrypting blocks. If you don't specify a
     * value, then MediaPackage creates the constant initialization vector (IV).
     */
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }

    /**
     * An optional 128-bit, 16-byte hex value represented by a 32-character string,
     * used in conjunction with the key for encrypting blocks. If you don't specify a
     * value, then MediaPackage creates the constant initialization vector (IV).
     */
    inline void SetConstantInitializationVector(const Aws::String& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = value; }

    /**
     * An optional 128-bit, 16-byte hex value represented by a 32-character string,
     * used in conjunction with the key for encrypting blocks. If you don't specify a
     * value, then MediaPackage creates the constant initialization vector (IV).
     */
    inline void SetConstantInitializationVector(Aws::String&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::move(value); }

    /**
     * An optional 128-bit, 16-byte hex value represented by a 32-character string,
     * used in conjunction with the key for encrypting blocks. If you don't specify a
     * value, then MediaPackage creates the constant initialization vector (IV).
     */
    inline void SetConstantInitializationVector(const char* value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector.assign(value); }

    /**
     * An optional 128-bit, 16-byte hex value represented by a 32-character string,
     * used in conjunction with the key for encrypting blocks. If you don't specify a
     * value, then MediaPackage creates the constant initialization vector (IV).
     */
    inline CmafEncryption& WithConstantInitializationVector(const Aws::String& value) { SetConstantInitializationVector(value); return *this;}

    /**
     * An optional 128-bit, 16-byte hex value represented by a 32-character string,
     * used in conjunction with the key for encrypting blocks. If you don't specify a
     * value, then MediaPackage creates the constant initialization vector (IV).
     */
    inline CmafEncryption& WithConstantInitializationVector(Aws::String&& value) { SetConstantInitializationVector(std::move(value)); return *this;}

    /**
     * An optional 128-bit, 16-byte hex value represented by a 32-character string,
     * used in conjunction with the key for encrypting blocks. If you don't specify a
     * value, then MediaPackage creates the constant initialization vector (IV).
     */
    inline CmafEncryption& WithConstantInitializationVector(const char* value) { SetConstantInitializationVector(value); return *this;}


    
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }

    
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }

    
    inline void SetSpekeKeyProvider(const SpekeKeyProvider& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }

    
    inline void SetSpekeKeyProvider(SpekeKeyProvider&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }

    
    inline CmafEncryption& WithSpekeKeyProvider(const SpekeKeyProvider& value) { SetSpekeKeyProvider(value); return *this;}

    
    inline CmafEncryption& WithSpekeKeyProvider(SpekeKeyProvider&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}

  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet = false;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws

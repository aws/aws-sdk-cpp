/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/EncryptionMethod.h>
#include <aws/mediapackagev2/model/SpekeKeyProvider.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The parameters for encrypting content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/Encryption">AWS
   * API Reference</a></p>
   */
  class Encryption
  {
  public:
    AWS_MEDIAPACKAGEV2_API Encryption();
    AWS_MEDIAPACKAGEV2_API Encryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Encryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A 128-bit, 16-byte hex value represented by a 32-character string, used in
     * conjunction with the key for encrypting content. If you don't specify a value,
     * then MediaPackage creates the constant initialization vector (IV).</p>
     */
    inline const Aws::String& GetConstantInitializationVector() const{ return m_constantInitializationVector; }

    /**
     * <p>A 128-bit, 16-byte hex value represented by a 32-character string, used in
     * conjunction with the key for encrypting content. If you don't specify a value,
     * then MediaPackage creates the constant initialization vector (IV).</p>
     */
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }

    /**
     * <p>A 128-bit, 16-byte hex value represented by a 32-character string, used in
     * conjunction with the key for encrypting content. If you don't specify a value,
     * then MediaPackage creates the constant initialization vector (IV).</p>
     */
    inline void SetConstantInitializationVector(const Aws::String& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = value; }

    /**
     * <p>A 128-bit, 16-byte hex value represented by a 32-character string, used in
     * conjunction with the key for encrypting content. If you don't specify a value,
     * then MediaPackage creates the constant initialization vector (IV).</p>
     */
    inline void SetConstantInitializationVector(Aws::String&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::move(value); }

    /**
     * <p>A 128-bit, 16-byte hex value represented by a 32-character string, used in
     * conjunction with the key for encrypting content. If you don't specify a value,
     * then MediaPackage creates the constant initialization vector (IV).</p>
     */
    inline void SetConstantInitializationVector(const char* value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector.assign(value); }

    /**
     * <p>A 128-bit, 16-byte hex value represented by a 32-character string, used in
     * conjunction with the key for encrypting content. If you don't specify a value,
     * then MediaPackage creates the constant initialization vector (IV).</p>
     */
    inline Encryption& WithConstantInitializationVector(const Aws::String& value) { SetConstantInitializationVector(value); return *this;}

    /**
     * <p>A 128-bit, 16-byte hex value represented by a 32-character string, used in
     * conjunction with the key for encrypting content. If you don't specify a value,
     * then MediaPackage creates the constant initialization vector (IV).</p>
     */
    inline Encryption& WithConstantInitializationVector(Aws::String&& value) { SetConstantInitializationVector(std::move(value)); return *this;}

    /**
     * <p>A 128-bit, 16-byte hex value represented by a 32-character string, used in
     * conjunction with the key for encrypting content. If you don't specify a value,
     * then MediaPackage creates the constant initialization vector (IV).</p>
     */
    inline Encryption& WithConstantInitializationVector(const char* value) { SetConstantInitializationVector(value); return *this;}


    /**
     * <p>The encryption method to use.</p>
     */
    inline const EncryptionMethod& GetEncryptionMethod() const{ return m_encryptionMethod; }

    /**
     * <p>The encryption method to use.</p>
     */
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }

    /**
     * <p>The encryption method to use.</p>
     */
    inline void SetEncryptionMethod(const EncryptionMethod& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }

    /**
     * <p>The encryption method to use.</p>
     */
    inline void SetEncryptionMethod(EncryptionMethod&& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = std::move(value); }

    /**
     * <p>The encryption method to use.</p>
     */
    inline Encryption& WithEncryptionMethod(const EncryptionMethod& value) { SetEncryptionMethod(value); return *this;}

    /**
     * <p>The encryption method to use.</p>
     */
    inline Encryption& WithEncryptionMethod(EncryptionMethod&& value) { SetEncryptionMethod(std::move(value)); return *this;}


    /**
     * <p>The frequency (in seconds) of key changes for live workflows, in which
     * content is streamed real time. The service retrieves content keys before the
     * live content begins streaming, and then retrieves them as needed over the
     * lifetime of the workflow. By default, key rotation is set to 300 seconds (5
     * minutes), the minimum rotation interval, which is equivalent to setting it to
     * 300. If you don't enter an interval, content keys aren't rotated.</p> <p>The
     * following example setting causes the service to rotate keys every thirty
     * minutes: <code>1800</code> </p>
     */
    inline int GetKeyRotationIntervalSeconds() const{ return m_keyRotationIntervalSeconds; }

    /**
     * <p>The frequency (in seconds) of key changes for live workflows, in which
     * content is streamed real time. The service retrieves content keys before the
     * live content begins streaming, and then retrieves them as needed over the
     * lifetime of the workflow. By default, key rotation is set to 300 seconds (5
     * minutes), the minimum rotation interval, which is equivalent to setting it to
     * 300. If you don't enter an interval, content keys aren't rotated.</p> <p>The
     * following example setting causes the service to rotate keys every thirty
     * minutes: <code>1800</code> </p>
     */
    inline bool KeyRotationIntervalSecondsHasBeenSet() const { return m_keyRotationIntervalSecondsHasBeenSet; }

    /**
     * <p>The frequency (in seconds) of key changes for live workflows, in which
     * content is streamed real time. The service retrieves content keys before the
     * live content begins streaming, and then retrieves them as needed over the
     * lifetime of the workflow. By default, key rotation is set to 300 seconds (5
     * minutes), the minimum rotation interval, which is equivalent to setting it to
     * 300. If you don't enter an interval, content keys aren't rotated.</p> <p>The
     * following example setting causes the service to rotate keys every thirty
     * minutes: <code>1800</code> </p>
     */
    inline void SetKeyRotationIntervalSeconds(int value) { m_keyRotationIntervalSecondsHasBeenSet = true; m_keyRotationIntervalSeconds = value; }

    /**
     * <p>The frequency (in seconds) of key changes for live workflows, in which
     * content is streamed real time. The service retrieves content keys before the
     * live content begins streaming, and then retrieves them as needed over the
     * lifetime of the workflow. By default, key rotation is set to 300 seconds (5
     * minutes), the minimum rotation interval, which is equivalent to setting it to
     * 300. If you don't enter an interval, content keys aren't rotated.</p> <p>The
     * following example setting causes the service to rotate keys every thirty
     * minutes: <code>1800</code> </p>
     */
    inline Encryption& WithKeyRotationIntervalSeconds(int value) { SetKeyRotationIntervalSeconds(value); return *this;}


    /**
     * <p>The parameters for the SPEKE key provider.</p>
     */
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }

    /**
     * <p>The parameters for the SPEKE key provider.</p>
     */
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }

    /**
     * <p>The parameters for the SPEKE key provider.</p>
     */
    inline void SetSpekeKeyProvider(const SpekeKeyProvider& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }

    /**
     * <p>The parameters for the SPEKE key provider.</p>
     */
    inline void SetSpekeKeyProvider(SpekeKeyProvider&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }

    /**
     * <p>The parameters for the SPEKE key provider.</p>
     */
    inline Encryption& WithSpekeKeyProvider(const SpekeKeyProvider& value) { SetSpekeKeyProvider(value); return *this;}

    /**
     * <p>The parameters for the SPEKE key provider.</p>
     */
    inline Encryption& WithSpekeKeyProvider(SpekeKeyProvider&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}

  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet = false;

    EncryptionMethod m_encryptionMethod;
    bool m_encryptionMethodHasBeenSet = false;

    int m_keyRotationIntervalSeconds;
    bool m_keyRotationIntervalSecondsHasBeenSet = false;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws

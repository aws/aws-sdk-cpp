/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>

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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Specifies key usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/KeyUsagePropertyFlags">AWS
   * API Reference</a></p>
   */
  class KeyUsagePropertyFlags
  {
  public:
    AWS_PCACONNECTORAD_API KeyUsagePropertyFlags();
    AWS_PCACONNECTORAD_API KeyUsagePropertyFlags(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API KeyUsagePropertyFlags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows key for encryption and decryption.</p>
     */
    inline bool GetDecrypt() const{ return m_decrypt; }

    /**
     * <p>Allows key for encryption and decryption.</p>
     */
    inline bool DecryptHasBeenSet() const { return m_decryptHasBeenSet; }

    /**
     * <p>Allows key for encryption and decryption.</p>
     */
    inline void SetDecrypt(bool value) { m_decryptHasBeenSet = true; m_decrypt = value; }

    /**
     * <p>Allows key for encryption and decryption.</p>
     */
    inline KeyUsagePropertyFlags& WithDecrypt(bool value) { SetDecrypt(value); return *this;}


    /**
     * <p>Allows key exchange without encryption.</p>
     */
    inline bool GetKeyAgreement() const{ return m_keyAgreement; }

    /**
     * <p>Allows key exchange without encryption.</p>
     */
    inline bool KeyAgreementHasBeenSet() const { return m_keyAgreementHasBeenSet; }

    /**
     * <p>Allows key exchange without encryption.</p>
     */
    inline void SetKeyAgreement(bool value) { m_keyAgreementHasBeenSet = true; m_keyAgreement = value; }

    /**
     * <p>Allows key exchange without encryption.</p>
     */
    inline KeyUsagePropertyFlags& WithKeyAgreement(bool value) { SetKeyAgreement(value); return *this;}


    /**
     * <p>Allow key use for digital signature.</p>
     */
    inline bool GetSign() const{ return m_sign; }

    /**
     * <p>Allow key use for digital signature.</p>
     */
    inline bool SignHasBeenSet() const { return m_signHasBeenSet; }

    /**
     * <p>Allow key use for digital signature.</p>
     */
    inline void SetSign(bool value) { m_signHasBeenSet = true; m_sign = value; }

    /**
     * <p>Allow key use for digital signature.</p>
     */
    inline KeyUsagePropertyFlags& WithSign(bool value) { SetSign(value); return *this;}

  private:

    bool m_decrypt;
    bool m_decryptHasBeenSet = false;

    bool m_keyAgreement;
    bool m_keyAgreementHasBeenSet = false;

    bool m_sign;
    bool m_signHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws

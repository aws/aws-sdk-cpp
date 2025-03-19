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
   * <p>The key usage flags represent the purpose (e.g., encipherment, signature) of
   * the key contained in the certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/KeyUsageFlags">AWS
   * API Reference</a></p>
   */
  class KeyUsageFlags
  {
  public:
    AWS_PCACONNECTORAD_API KeyUsageFlags() = default;
    AWS_PCACONNECTORAD_API KeyUsageFlags(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API KeyUsageFlags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>DataEncipherment is asserted when the subject public key is used for directly
     * enciphering raw user data without the use of an intermediate symmetric
     * cipher.</p>
     */
    inline bool GetDataEncipherment() const { return m_dataEncipherment; }
    inline bool DataEnciphermentHasBeenSet() const { return m_dataEnciphermentHasBeenSet; }
    inline void SetDataEncipherment(bool value) { m_dataEnciphermentHasBeenSet = true; m_dataEncipherment = value; }
    inline KeyUsageFlags& WithDataEncipherment(bool value) { SetDataEncipherment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The digitalSignature is asserted when the subject public key is used for
     * verifying digital signatures.</p>
     */
    inline bool GetDigitalSignature() const { return m_digitalSignature; }
    inline bool DigitalSignatureHasBeenSet() const { return m_digitalSignatureHasBeenSet; }
    inline void SetDigitalSignature(bool value) { m_digitalSignatureHasBeenSet = true; m_digitalSignature = value; }
    inline KeyUsageFlags& WithDigitalSignature(bool value) { SetDigitalSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>KeyAgreement is asserted when the subject public key is used for key
     * agreement.</p>
     */
    inline bool GetKeyAgreement() const { return m_keyAgreement; }
    inline bool KeyAgreementHasBeenSet() const { return m_keyAgreementHasBeenSet; }
    inline void SetKeyAgreement(bool value) { m_keyAgreementHasBeenSet = true; m_keyAgreement = value; }
    inline KeyUsageFlags& WithKeyAgreement(bool value) { SetKeyAgreement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>KeyEncipherment is asserted when the subject public key is used for
     * enciphering private or secret keys, i.e., for key transport.</p>
     */
    inline bool GetKeyEncipherment() const { return m_keyEncipherment; }
    inline bool KeyEnciphermentHasBeenSet() const { return m_keyEnciphermentHasBeenSet; }
    inline void SetKeyEncipherment(bool value) { m_keyEnciphermentHasBeenSet = true; m_keyEncipherment = value; }
    inline KeyUsageFlags& WithKeyEncipherment(bool value) { SetKeyEncipherment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>NonRepudiation is asserted when the subject public key is used to verify
     * digital signatures.</p>
     */
    inline bool GetNonRepudiation() const { return m_nonRepudiation; }
    inline bool NonRepudiationHasBeenSet() const { return m_nonRepudiationHasBeenSet; }
    inline void SetNonRepudiation(bool value) { m_nonRepudiationHasBeenSet = true; m_nonRepudiation = value; }
    inline KeyUsageFlags& WithNonRepudiation(bool value) { SetNonRepudiation(value); return *this;}
    ///@}
  private:

    bool m_dataEncipherment{false};
    bool m_dataEnciphermentHasBeenSet = false;

    bool m_digitalSignature{false};
    bool m_digitalSignatureHasBeenSet = false;

    bool m_keyAgreement{false};
    bool m_keyAgreementHasBeenSet = false;

    bool m_keyEncipherment{false};
    bool m_keyEnciphermentHasBeenSet = false;

    bool m_nonRepudiation{false};
    bool m_nonRepudiationHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws

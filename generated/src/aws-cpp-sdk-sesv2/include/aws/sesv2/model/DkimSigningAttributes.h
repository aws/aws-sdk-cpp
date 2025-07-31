/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DkimSigningKeyLength.h>
#include <aws/sesv2/model/DkimSigningAttributesOrigin.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains configuration for Bring Your Own DKIM (BYODKIM), or,
   * for Easy DKIM</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DkimSigningAttributes">AWS
   * API Reference</a></p>
   */
  class DkimSigningAttributes
  {
  public:
    AWS_SESV2_API DkimSigningAttributes() = default;
    AWS_SESV2_API DkimSigningAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DkimSigningAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>[Bring Your Own DKIM] A string that's used to identify a public key in the
     * DNS configuration for a domain.</p>
     */
    inline const Aws::String& GetDomainSigningSelector() const { return m_domainSigningSelector; }
    inline bool DomainSigningSelectorHasBeenSet() const { return m_domainSigningSelectorHasBeenSet; }
    template<typename DomainSigningSelectorT = Aws::String>
    void SetDomainSigningSelector(DomainSigningSelectorT&& value) { m_domainSigningSelectorHasBeenSet = true; m_domainSigningSelector = std::forward<DomainSigningSelectorT>(value); }
    template<typename DomainSigningSelectorT = Aws::String>
    DkimSigningAttributes& WithDomainSigningSelector(DomainSigningSelectorT&& value) { SetDomainSigningSelector(std::forward<DomainSigningSelectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Bring Your Own DKIM] A private key that's used to generate a DKIM
     * signature.</p> <p>The private key must use 1024 or 2048-bit RSA encryption, and
     * must be encoded using base64 encoding.</p>
     */
    inline const Aws::String& GetDomainSigningPrivateKey() const { return m_domainSigningPrivateKey; }
    inline bool DomainSigningPrivateKeyHasBeenSet() const { return m_domainSigningPrivateKeyHasBeenSet; }
    template<typename DomainSigningPrivateKeyT = Aws::String>
    void SetDomainSigningPrivateKey(DomainSigningPrivateKeyT&& value) { m_domainSigningPrivateKeyHasBeenSet = true; m_domainSigningPrivateKey = std::forward<DomainSigningPrivateKeyT>(value); }
    template<typename DomainSigningPrivateKeyT = Aws::String>
    DkimSigningAttributes& WithDomainSigningPrivateKey(DomainSigningPrivateKeyT&& value) { SetDomainSigningPrivateKey(std::forward<DomainSigningPrivateKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Easy DKIM] The key length of the future DKIM key pair to be generated. This
     * can be changed at most once per day.</p>
     */
    inline DkimSigningKeyLength GetNextSigningKeyLength() const { return m_nextSigningKeyLength; }
    inline bool NextSigningKeyLengthHasBeenSet() const { return m_nextSigningKeyLengthHasBeenSet; }
    inline void SetNextSigningKeyLength(DkimSigningKeyLength value) { m_nextSigningKeyLengthHasBeenSet = true; m_nextSigningKeyLength = value; }
    inline DkimSigningAttributes& WithNextSigningKeyLength(DkimSigningKeyLength value) { SetNextSigningKeyLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute to use for configuring DKIM for the identity depends on the
     * operation: </p> <ol> <li> <p>For
     * <code>PutEmailIdentityDkimSigningAttributes</code>: </p> <ul> <li> <p>None of
     * the values are allowed - use the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference-V2/API_PutEmailIdentityDkimSigningAttributes.html#SES-PutEmailIdentityDkimSigningAttributes-request-SigningAttributesOrigin">
     * <code>SigningAttributesOrigin</code> </a> parameter instead </p> </li> </ul>
     * </li> <li> <p>For <code>CreateEmailIdentity</code> when replicating a parent
     * identity's DKIM configuration: </p> <ul> <li> <p>Allowed values: All values
     * except <code>AWS_SES</code> and <code>EXTERNAL</code> </p> </li> </ul> </li>
     * </ol> <ul> <li> <p> <code>AWS_SES</code> – Configure DKIM for the identity by
     * using Easy DKIM. </p> </li> <li> <p> <code>EXTERNAL</code> – Configure DKIM for
     * the identity by using Bring Your Own DKIM (BYODKIM). </p> </li> <li> <p>
     * <code>AWS_SES_AF_SOUTH_1</code> – Configure DKIM for the identity by replicating
     * from a parent identity in Africa (Cape Town) region using Deterministic
     * Easy-DKIM (DEED). </p> </li> <li> <p> <code>AWS_SES_EU_NORTH_1</code> –
     * Configure DKIM for the identity by replicating from a parent identity in Europe
     * (Stockholm) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_SOUTH_1</code> – Configure DKIM for the identity by replicating
     * from a parent identity in Asia Pacific (Mumbai) region using Deterministic
     * Easy-DKIM (DEED). </p> </li> <li> <p> <code>AWS_SES_AP_SOUTH_2</code> –
     * Configure DKIM for the identity by replicating from a parent identity in Asia
     * Pacific (Hyderabad) region using Deterministic Easy-DKIM (DEED). </p> </li> <li>
     * <p> <code>AWS_SES_EU_WEST_3</code> – Configure DKIM for the identity by
     * replicating from a parent identity in Europe (Paris) region using Deterministic
     * Easy-DKIM (DEED). </p> </li> <li> <p> <code>AWS_SES_EU_WEST_2</code> – Configure
     * DKIM for the identity by replicating from a parent identity in Europe (London)
     * region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_EU_SOUTH_1</code> – Configure DKIM for the identity by replicating
     * from a parent identity in Europe (Milan) region using Deterministic Easy-DKIM
     * (DEED). </p> </li> <li> <p> <code>AWS_SES_EU_WEST_1</code> – Configure DKIM for
     * the identity by replicating from a parent identity in Europe (Ireland) region
     * using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_NORTHEAST_3</code> – Configure DKIM for the identity by
     * replicating from a parent identity in Asia Pacific (Osaka) region using
     * Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_NORTHEAST_2</code> – Configure DKIM for the identity by
     * replicating from a parent identity in Asia Pacific (Seoul) region using
     * Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_ME_CENTRAL_1</code> – Configure DKIM for the identity by
     * replicating from a parent identity in Middle East (UAE) region using
     * Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_ME_SOUTH_1</code> – Configure DKIM for the identity by replicating
     * from a parent identity in Middle East (Bahrain) region using Deterministic
     * Easy-DKIM (DEED). </p> </li> <li> <p> <code>AWS_SES_AP_NORTHEAST_1</code> –
     * Configure DKIM for the identity by replicating from a parent identity in Asia
     * Pacific (Tokyo) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_IL_CENTRAL_1</code> – Configure DKIM for the identity by
     * replicating from a parent identity in Israel (Tel Aviv) region using
     * Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_SA_EAST_1</code> – Configure DKIM for the identity by replicating
     * from a parent identity in South America (São Paulo) region using Deterministic
     * Easy-DKIM (DEED). </p> </li> <li> <p> <code>AWS_SES_CA_CENTRAL_1</code> –
     * Configure DKIM for the identity by replicating from a parent identity in Canada
     * (Central) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_SOUTHEAST_1</code> – Configure DKIM for the identity by
     * replicating from a parent identity in Asia Pacific (Singapore) region using
     * Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_SOUTHEAST_2</code> – Configure DKIM for the identity by
     * replicating from a parent identity in Asia Pacific (Sydney) region using
     * Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_SOUTHEAST_3</code> – Configure DKIM for the identity by
     * replicating from a parent identity in Asia Pacific (Jakarta) region using
     * Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_EU_CENTRAL_1</code> – Configure DKIM for the identity by
     * replicating from a parent identity in Europe (Frankfurt) region using
     * Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_EU_CENTRAL_2</code> – Configure DKIM for the identity by
     * replicating from a parent identity in Europe (Zurich) region using Deterministic
     * Easy-DKIM (DEED). </p> </li> <li> <p> <code>AWS_SES_US_EAST_1</code> – Configure
     * DKIM for the identity by replicating from a parent identity in US East (N.
     * Virginia) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_US_EAST_2</code> – Configure DKIM for the identity by replicating
     * from a parent identity in US East (Ohio) region using Deterministic Easy-DKIM
     * (DEED). </p> </li> <li> <p> <code>AWS_SES_US_WEST_1</code> – Configure DKIM for
     * the identity by replicating from a parent identity in US West (N. California)
     * region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_US_WEST_2</code> – Configure DKIM for the identity by replicating
     * from a parent identity in US West (Oregon) region using Deterministic Easy-DKIM
     * (DEED). </p> </li> </ul>
     */
    inline DkimSigningAttributesOrigin GetDomainSigningAttributesOrigin() const { return m_domainSigningAttributesOrigin; }
    inline bool DomainSigningAttributesOriginHasBeenSet() const { return m_domainSigningAttributesOriginHasBeenSet; }
    inline void SetDomainSigningAttributesOrigin(DkimSigningAttributesOrigin value) { m_domainSigningAttributesOriginHasBeenSet = true; m_domainSigningAttributesOrigin = value; }
    inline DkimSigningAttributes& WithDomainSigningAttributesOrigin(DkimSigningAttributesOrigin value) { SetDomainSigningAttributesOrigin(value); return *this;}
    ///@}
  private:

    Aws::String m_domainSigningSelector;
    bool m_domainSigningSelectorHasBeenSet = false;

    Aws::String m_domainSigningPrivateKey;
    bool m_domainSigningPrivateKeyHasBeenSet = false;

    DkimSigningKeyLength m_nextSigningKeyLength{DkimSigningKeyLength::NOT_SET};
    bool m_nextSigningKeyLengthHasBeenSet = false;

    DkimSigningAttributesOrigin m_domainSigningAttributesOrigin{DkimSigningAttributesOrigin::NOT_SET};
    bool m_domainSigningAttributesOriginHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

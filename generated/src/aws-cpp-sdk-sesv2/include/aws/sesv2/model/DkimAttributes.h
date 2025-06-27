/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DkimStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/DkimSigningAttributesOrigin.h>
#include <aws/sesv2/model/DkimSigningKeyLength.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object that contains information about the DKIM authentication status for
   * an email identity.</p> <p>Amazon SES determines the authentication status by
   * searching for specific records in the DNS configuration for the domain. If you
   * used <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
   * DKIM</a> to set up DKIM authentication, Amazon SES tries to find three unique
   * CNAME records in the DNS configuration for your domain. If you provided a public
   * key to perform DKIM authentication, Amazon SES tries to find a TXT record that
   * uses the selector that you specified. The value of the TXT record must be a
   * public key that's paired with the private key that you specified in the process
   * of creating the identity</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DkimAttributes">AWS
   * API Reference</a></p>
   */
  class DkimAttributes
  {
  public:
    AWS_SESV2_API DkimAttributes() = default;
    AWS_SESV2_API DkimAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DkimAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the value is <code>true</code>, then the messages that you send from the
     * identity are signed using DKIM. If the value is <code>false</code>, then the
     * messages that you send from the identity aren't DKIM-signed.</p>
     */
    inline bool GetSigningEnabled() const { return m_signingEnabled; }
    inline bool SigningEnabledHasBeenSet() const { return m_signingEnabledHasBeenSet; }
    inline void SetSigningEnabled(bool value) { m_signingEnabledHasBeenSet = true; m_signingEnabled = value; }
    inline DkimAttributes& WithSigningEnabled(bool value) { SetSigningEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – The verification process was initiated, but
     * Amazon SES hasn't yet detected the DKIM records in the DNS configuration for the
     * domain.</p> </li> <li> <p> <code>SUCCESS</code> – The verification process
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code> – The
     * verification process failed. This typically occurs when Amazon SES fails to find
     * the DKIM records in the DNS configuration of the domain.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue is preventing Amazon SES from
     * determining the DKIM authentication status of the domain.</p> </li> <li> <p>
     * <code>NOT_STARTED</code> – The DKIM verification process hasn't been initiated
     * for the domain.</p> </li> </ul>
     */
    inline DkimStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DkimStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DkimAttributes& WithStatus(DkimStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector for the public key.</p> <p>Regardless of the DKIM authentication method
     * you use, Amazon SES searches for the appropriate records in the DNS
     * configuration of the domain for up to 72 hours.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokens() const { return m_tokens; }
    inline bool TokensHasBeenSet() const { return m_tokensHasBeenSet; }
    template<typename TokensT = Aws::Vector<Aws::String>>
    void SetTokens(TokensT&& value) { m_tokensHasBeenSet = true; m_tokens = std::forward<TokensT>(value); }
    template<typename TokensT = Aws::Vector<Aws::String>>
    DkimAttributes& WithTokens(TokensT&& value) { SetTokens(std::forward<TokensT>(value)); return *this;}
    template<typename TokensT = Aws::String>
    DkimAttributes& AddTokens(TokensT&& value) { m_tokensHasBeenSet = true; m_tokens.emplace_back(std::forward<TokensT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that indicates how DKIM was configured for the identity. These are
     * the possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Indicates that
     * DKIM was configured for the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Indicates that DKIM was
     * configured for the identity by using Bring Your Own DKIM (BYODKIM).</p> </li>
     * <li> <p> <code>AWS_SES_AF_SOUTH_1</code> – Indicates that DKIM was configured
     * for the identity by replicating signing attributes from a parent identity in
     * Africa (Cape Town) region using Deterministic Easy-DKIM (DEED). </p> </li> <li>
     * <p> <code>AWS_SES_EU_NORTH_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Europe
     * (Stockholm) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_SOUTH_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Asia
     * Pacific (Mumbai) region using Deterministic Easy-DKIM (DEED). </p> </li> <li>
     * <p> <code>AWS_SES_AP_SOUTH_2</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Asia
     * Pacific (Hyderabad) region using Deterministic Easy-DKIM (DEED). </p> </li> <li>
     * <p> <code>AWS_SES_EU_WEST_3</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Europe
     * (Paris) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_EU_WEST_2</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Europe
     * (London) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_EU_SOUTH_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Europe
     * (Milan) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_EU_WEST_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Europe
     * (Ireland) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_NORTHEAST_3</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Asia
     * Pacific (Osaka) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_NORTHEAST_2</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Asia
     * Pacific (Seoul) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_ME_CENTRAL_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Middle East
     * (UAE) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_ME_SOUTH_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Middle East
     * (Bahrain) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_NORTHEAST_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Asia
     * Pacific (Tokyo) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_IL_CENTRAL_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Israel (Tel
     * Aviv) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_SA_EAST_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in South
     * America (São Paulo) region using Deterministic Easy-DKIM (DEED). </p> </li> <li>
     * <p> <code>AWS_SES_CA_CENTRAL_1</code> – Indicates that DKIM was configured for
     * the identity by replicating signing attributes from a parent identity in Canada
     * (Central) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_AP_SOUTHEAST_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Asia
     * Pacific (Singapore) region using Deterministic Easy-DKIM (DEED). </p> </li> <li>
     * <p> <code>AWS_SES_AP_SOUTHEAST_2</code> – Indicates that DKIM was configured for
     * the identity by replicating signing attributes from a parent identity in Asia
     * Pacific (Sydney) region using Deterministic Easy-DKIM (DEED). </p> </li> <li>
     * <p> <code>AWS_SES_AP_SOUTHEAST_3</code> – Indicates that DKIM was configured for
     * the identity by replicating signing attributes from a parent identity in Asia
     * Pacific (Jakarta) region using Deterministic Easy-DKIM (DEED). </p> </li> <li>
     * <p> <code>AWS_SES_EU_CENTRAL_1</code> – Indicates that DKIM was configured for
     * the identity by replicating signing attributes from a parent identity in Europe
     * (Frankfurt) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_EU_CENTRAL_2</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in Europe
     * (Zurich) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_US_EAST_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in US East (N.
     * Virginia) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_US_EAST_2</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in US East
     * (Ohio) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_US_WEST_1</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in US West (N.
     * California) region using Deterministic Easy-DKIM (DEED). </p> </li> <li> <p>
     * <code>AWS_SES_US_WEST_2</code> – Indicates that DKIM was configured for the
     * identity by replicating signing attributes from a parent identity in US West
     * (Oregon) region using Deterministic Easy-DKIM (DEED). </p> </li> </ul>
     */
    inline DkimSigningAttributesOrigin GetSigningAttributesOrigin() const { return m_signingAttributesOrigin; }
    inline bool SigningAttributesOriginHasBeenSet() const { return m_signingAttributesOriginHasBeenSet; }
    inline void SetSigningAttributesOrigin(DkimSigningAttributesOrigin value) { m_signingAttributesOriginHasBeenSet = true; m_signingAttributesOrigin = value; }
    inline DkimAttributes& WithSigningAttributesOrigin(DkimSigningAttributesOrigin value) { SetSigningAttributesOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Easy DKIM] The key length of the future DKIM key pair to be generated. This
     * can be changed at most once per day.</p>
     */
    inline DkimSigningKeyLength GetNextSigningKeyLength() const { return m_nextSigningKeyLength; }
    inline bool NextSigningKeyLengthHasBeenSet() const { return m_nextSigningKeyLengthHasBeenSet; }
    inline void SetNextSigningKeyLength(DkimSigningKeyLength value) { m_nextSigningKeyLengthHasBeenSet = true; m_nextSigningKeyLength = value; }
    inline DkimAttributes& WithNextSigningKeyLength(DkimSigningKeyLength value) { SetNextSigningKeyLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Easy DKIM] The key length of the DKIM key pair in use.</p>
     */
    inline DkimSigningKeyLength GetCurrentSigningKeyLength() const { return m_currentSigningKeyLength; }
    inline bool CurrentSigningKeyLengthHasBeenSet() const { return m_currentSigningKeyLengthHasBeenSet; }
    inline void SetCurrentSigningKeyLength(DkimSigningKeyLength value) { m_currentSigningKeyLengthHasBeenSet = true; m_currentSigningKeyLength = value; }
    inline DkimAttributes& WithCurrentSigningKeyLength(DkimSigningKeyLength value) { SetCurrentSigningKeyLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Easy DKIM] The last time a key pair was generated for this identity.</p>
     */
    inline const Aws::Utils::DateTime& GetLastKeyGenerationTimestamp() const { return m_lastKeyGenerationTimestamp; }
    inline bool LastKeyGenerationTimestampHasBeenSet() const { return m_lastKeyGenerationTimestampHasBeenSet; }
    template<typename LastKeyGenerationTimestampT = Aws::Utils::DateTime>
    void SetLastKeyGenerationTimestamp(LastKeyGenerationTimestampT&& value) { m_lastKeyGenerationTimestampHasBeenSet = true; m_lastKeyGenerationTimestamp = std::forward<LastKeyGenerationTimestampT>(value); }
    template<typename LastKeyGenerationTimestampT = Aws::Utils::DateTime>
    DkimAttributes& WithLastKeyGenerationTimestamp(LastKeyGenerationTimestampT&& value) { SetLastKeyGenerationTimestamp(std::forward<LastKeyGenerationTimestampT>(value)); return *this;}
    ///@}
  private:

    bool m_signingEnabled{false};
    bool m_signingEnabledHasBeenSet = false;

    DkimStatus m_status{DkimStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokens;
    bool m_tokensHasBeenSet = false;

    DkimSigningAttributesOrigin m_signingAttributesOrigin{DkimSigningAttributesOrigin::NOT_SET};
    bool m_signingAttributesOriginHasBeenSet = false;

    DkimSigningKeyLength m_nextSigningKeyLength{DkimSigningKeyLength::NOT_SET};
    bool m_nextSigningKeyLengthHasBeenSet = false;

    DkimSigningKeyLength m_currentSigningKeyLength{DkimSigningKeyLength::NOT_SET};
    bool m_currentSigningKeyLengthHasBeenSet = false;

    Aws::Utils::DateTime m_lastKeyGenerationTimestamp{};
    bool m_lastKeyGenerationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

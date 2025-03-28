﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/DkimStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that contains information about the DKIM configuration for an email
   * identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DkimAttributes">AWS
   * API Reference</a></p>
   */
  class DkimAttributes
  {
  public:
    AWS_PINPOINTEMAIL_API DkimAttributes() = default;
    AWS_PINPOINTEMAIL_API DkimAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API DkimAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the value is <code>true</code>, then the messages that Amazon Pinpoint
     * sends from the identity are DKIM-signed. If the value is <code>false</code>,
     * then the messages that Amazon Pinpoint sends from the identity aren't
     * DKIM-signed.</p>
     */
    inline bool GetSigningEnabled() const { return m_signingEnabled; }
    inline bool SigningEnabledHasBeenSet() const { return m_signingEnabledHasBeenSet; }
    inline void SetSigningEnabled(bool value) { m_signingEnabledHasBeenSet = true; m_signingEnabled = value; }
    inline DkimAttributes& WithSigningEnabled(bool value) { SetSigningEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether or not Amazon Pinpoint has successfully located the DKIM
     * records in the DNS records for the domain. The status can be one of the
     * following:</p> <ul> <li> <p> <code>PENDING</code> – Amazon Pinpoint hasn't yet
     * located the DKIM records in the DNS configuration for the domain, but will
     * continue to attempt to locate them.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Amazon Pinpoint located the DKIM records in the DNS configuration for the domain
     * and determined that they're correct. Amazon Pinpoint can now send DKIM-signed
     * email from the identity.</p> </li> <li> <p> <code>FAILED</code> – Amazon
     * Pinpoint was unable to locate the DKIM records in the DNS settings for the
     * domain, and won't continue to search for them.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue occurred, which prevented
     * Amazon Pinpoint from determining the DKIM status for the domain.</p> </li> <li>
     * <p> <code>NOT_STARTED</code> – Amazon Pinpoint hasn't yet started searching for
     * the DKIM records in the DKIM records for the domain.</p> </li> </ul>
     */
    inline DkimStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DkimStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DkimAttributes& WithStatus(DkimStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of unique strings that you use to create a set of CNAME records that
     * you add to the DNS configuration for your domain. When Amazon Pinpoint detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete. Amazon Pinpoint usually detects these records within about
     * 72 hours of adding them to the DNS configuration for your domain.</p>
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
  private:

    bool m_signingEnabled{false};
    bool m_signingEnabledHasBeenSet = false;

    DkimStatus m_status{DkimStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokens;
    bool m_tokensHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws

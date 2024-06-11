/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provided if <code>ActionType</code> is <code>DNS_REQUEST</code>. It provides
   * details about the DNS request that was detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DnsRequestAction">AWS
   * API Reference</a></p>
   */
  class DnsRequestAction
  {
  public:
    AWS_SECURITYHUB_API DnsRequestAction();
    AWS_SECURITYHUB_API DnsRequestAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API DnsRequestAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DNS domain that is associated with the DNS request.</p> <p>Length
     * Constraints: 128.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline DnsRequestAction& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DnsRequestAction& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DnsRequestAction& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol that was used for the DNS request.</p> <p>Length Constraints:
     * Minimum length of 1. Maximum length of 64.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline DnsRequestAction& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline DnsRequestAction& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline DnsRequestAction& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DNS request was blocked.</p>
     */
    inline bool GetBlocked() const{ return m_blocked; }
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }
    inline DnsRequestAction& WithBlocked(bool value) { SetBlocked(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    bool m_blocked;
    bool m_blockedHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

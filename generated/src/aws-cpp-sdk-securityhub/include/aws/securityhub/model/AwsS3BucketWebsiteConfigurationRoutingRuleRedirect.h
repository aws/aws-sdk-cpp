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
   * <p>The rules to redirect the request if the condition in <code>Condition</code>
   * is met.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketWebsiteConfigurationRoutingRuleRedirect">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketWebsiteConfigurationRoutingRuleRedirect
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleRedirect() = default;
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleRedirect(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The host name to use in the redirect request.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP redirect code to use in the response.</p>
     */
    inline const Aws::String& GetHttpRedirectCode() const { return m_httpRedirectCode; }
    inline bool HttpRedirectCodeHasBeenSet() const { return m_httpRedirectCodeHasBeenSet; }
    template<typename HttpRedirectCodeT = Aws::String>
    void SetHttpRedirectCode(HttpRedirectCodeT&& value) { m_httpRedirectCodeHasBeenSet = true; m_httpRedirectCode = std::forward<HttpRedirectCodeT>(value); }
    template<typename HttpRedirectCodeT = Aws::String>
    AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithHttpRedirectCode(HttpRedirectCodeT&& value) { SetHttpRedirectCode(std::forward<HttpRedirectCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to use to redirect the request. By default, uses the protocol
     * from the original request.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object key prefix to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyWith</code> is present.</p>
     */
    inline const Aws::String& GetReplaceKeyPrefixWith() const { return m_replaceKeyPrefixWith; }
    inline bool ReplaceKeyPrefixWithHasBeenSet() const { return m_replaceKeyPrefixWithHasBeenSet; }
    template<typename ReplaceKeyPrefixWithT = Aws::String>
    void SetReplaceKeyPrefixWith(ReplaceKeyPrefixWithT&& value) { m_replaceKeyPrefixWithHasBeenSet = true; m_replaceKeyPrefixWith = std::forward<ReplaceKeyPrefixWithT>(value); }
    template<typename ReplaceKeyPrefixWithT = Aws::String>
    AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithReplaceKeyPrefixWith(ReplaceKeyPrefixWithT&& value) { SetReplaceKeyPrefixWith(std::forward<ReplaceKeyPrefixWithT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific object key to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyPrefixWith</code> is present.</p>
     */
    inline const Aws::String& GetReplaceKeyWith() const { return m_replaceKeyWith; }
    inline bool ReplaceKeyWithHasBeenSet() const { return m_replaceKeyWithHasBeenSet; }
    template<typename ReplaceKeyWithT = Aws::String>
    void SetReplaceKeyWith(ReplaceKeyWithT&& value) { m_replaceKeyWithHasBeenSet = true; m_replaceKeyWith = std::forward<ReplaceKeyWithT>(value); }
    template<typename ReplaceKeyWithT = Aws::String>
    AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithReplaceKeyWith(ReplaceKeyWithT&& value) { SetReplaceKeyWith(std::forward<ReplaceKeyWithT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_httpRedirectCode;
    bool m_httpRedirectCodeHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_replaceKeyPrefixWith;
    bool m_replaceKeyPrefixWithHasBeenSet = false;

    Aws::String m_replaceKeyWith;
    bool m_replaceKeyWithHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

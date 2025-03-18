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
   * <p> Specifies the metadata options for an Amazon EC2 instance. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataMetadataOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataMetadataOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataMetadataOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataMetadataOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataMetadataOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Enables or disables the HTTP metadata endpoint on your instances. If the
     * parameter is not specified, the default state is enabled, and you won't be able
     * to access your instance metadata. </p>
     */
    inline const Aws::String& GetHttpEndpoint() const { return m_httpEndpoint; }
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }
    template<typename HttpEndpointT = Aws::String>
    void SetHttpEndpoint(HttpEndpointT&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::forward<HttpEndpointT>(value); }
    template<typename HttpEndpointT = Aws::String>
    AwsEc2LaunchTemplateDataMetadataOptionsDetails& WithHttpEndpoint(HttpEndpointT&& value) { SetHttpEndpoint(std::forward<HttpEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables or disables the IPv6 endpoint for the instance metadata service.
     * </p>
     */
    inline const Aws::String& GetHttpProtocolIpv6() const { return m_httpProtocolIpv6; }
    inline bool HttpProtocolIpv6HasBeenSet() const { return m_httpProtocolIpv6HasBeenSet; }
    template<typename HttpProtocolIpv6T = Aws::String>
    void SetHttpProtocolIpv6(HttpProtocolIpv6T&& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = std::forward<HttpProtocolIpv6T>(value); }
    template<typename HttpProtocolIpv6T = Aws::String>
    AwsEc2LaunchTemplateDataMetadataOptionsDetails& WithHttpProtocolIpv6(HttpProtocolIpv6T&& value) { SetHttpProtocolIpv6(std::forward<HttpProtocolIpv6T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state of token usage for your instance metadata requests. </p>
     */
    inline const Aws::String& GetHttpTokens() const { return m_httpTokens; }
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }
    template<typename HttpTokensT = Aws::String>
    void SetHttpTokens(HttpTokensT&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::forward<HttpTokensT>(value); }
    template<typename HttpTokensT = Aws::String>
    AwsEc2LaunchTemplateDataMetadataOptionsDetails& WithHttpTokens(HttpTokensT&& value) { SetHttpTokens(std::forward<HttpTokensT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel. </p>
     */
    inline int GetHttpPutResponseHopLimit() const { return m_httpPutResponseHopLimit; }
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }
    inline AwsEc2LaunchTemplateDataMetadataOptionsDetails& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> When set to <code>enabled</code>, this parameter allows access to instance
     * tags from the instance metadata. When set to <code>disabled</code>, it turns off
     * access to instance tags from the instance metadata. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags in instance metadata</a> in the <i>Amazon EC2 User Guide</i>.
     * </p>
     */
    inline const Aws::String& GetInstanceMetadataTags() const { return m_instanceMetadataTags; }
    inline bool InstanceMetadataTagsHasBeenSet() const { return m_instanceMetadataTagsHasBeenSet; }
    template<typename InstanceMetadataTagsT = Aws::String>
    void SetInstanceMetadataTags(InstanceMetadataTagsT&& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = std::forward<InstanceMetadataTagsT>(value); }
    template<typename InstanceMetadataTagsT = Aws::String>
    AwsEc2LaunchTemplateDataMetadataOptionsDetails& WithInstanceMetadataTags(InstanceMetadataTagsT&& value) { SetInstanceMetadataTags(std::forward<InstanceMetadataTagsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    Aws::String m_httpProtocolIpv6;
    bool m_httpProtocolIpv6HasBeenSet = false;

    Aws::String m_httpTokens;
    bool m_httpTokensHasBeenSet = false;

    int m_httpPutResponseHopLimit{0};
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    Aws::String m_instanceMetadataTags;
    bool m_instanceMetadataTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

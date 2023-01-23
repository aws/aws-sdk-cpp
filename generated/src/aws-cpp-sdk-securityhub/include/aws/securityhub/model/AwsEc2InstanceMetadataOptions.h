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
   * <p>Metadata options that allow you to configure and secure the Amazon EC2
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2InstanceMetadataOptions">AWS
   * API Reference</a></p>
   */
  class AwsEc2InstanceMetadataOptions
  {
  public:
    AWS_SECURITYHUB_API AwsEc2InstanceMetadataOptions();
    AWS_SECURITYHUB_API AwsEc2InstanceMetadataOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2InstanceMetadataOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables or disables the HTTP metadata endpoint on the instance. </p>
     */
    inline const Aws::String& GetHttpEndpoint() const{ return m_httpEndpoint; }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on the instance. </p>
     */
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on the instance. </p>
     */
    inline void SetHttpEndpoint(const Aws::String& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on the instance. </p>
     */
    inline void SetHttpEndpoint(Aws::String&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on the instance. </p>
     */
    inline void SetHttpEndpoint(const char* value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint.assign(value); }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on the instance. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithHttpEndpoint(const Aws::String& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>Enables or disables the HTTP metadata endpoint on the instance. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithHttpEndpoint(Aws::String&& value) { SetHttpEndpoint(std::move(value)); return *this;}

    /**
     * <p>Enables or disables the HTTP metadata endpoint on the instance. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithHttpEndpoint(const char* value) { SetHttpEndpoint(value); return *this;}


    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. </p>
     */
    inline const Aws::String& GetHttpProtocolIpv6() const{ return m_httpProtocolIpv6; }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. </p>
     */
    inline bool HttpProtocolIpv6HasBeenSet() const { return m_httpProtocolIpv6HasBeenSet; }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. </p>
     */
    inline void SetHttpProtocolIpv6(const Aws::String& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = value; }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. </p>
     */
    inline void SetHttpProtocolIpv6(Aws::String&& value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6 = std::move(value); }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. </p>
     */
    inline void SetHttpProtocolIpv6(const char* value) { m_httpProtocolIpv6HasBeenSet = true; m_httpProtocolIpv6.assign(value); }

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithHttpProtocolIpv6(const Aws::String& value) { SetHttpProtocolIpv6(value); return *this;}

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithHttpProtocolIpv6(Aws::String&& value) { SetHttpProtocolIpv6(std::move(value)); return *this;}

    /**
     * <p>Enables or disables the IPv6 endpoint for the instance metadata service. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithHttpProtocolIpv6(const char* value) { SetHttpProtocolIpv6(value); return *this;}


    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel. </p>
     */
    inline int GetHttpPutResponseHopLimit() const{ return m_httpPutResponseHopLimit; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel. </p>
     */
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel. </p>
     */
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }

    /**
     * <p>The desired HTTP PUT response hop limit for instance metadata requests. The
     * larger the number, the further instance metadata requests can travel. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}


    /**
     * <p>The state of token usage for your instance metadata requests. </p>
     */
    inline const Aws::String& GetHttpTokens() const{ return m_httpTokens; }

    /**
     * <p>The state of token usage for your instance metadata requests. </p>
     */
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }

    /**
     * <p>The state of token usage for your instance metadata requests. </p>
     */
    inline void SetHttpTokens(const Aws::String& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }

    /**
     * <p>The state of token usage for your instance metadata requests. </p>
     */
    inline void SetHttpTokens(Aws::String&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }

    /**
     * <p>The state of token usage for your instance metadata requests. </p>
     */
    inline void SetHttpTokens(const char* value) { m_httpTokensHasBeenSet = true; m_httpTokens.assign(value); }

    /**
     * <p>The state of token usage for your instance metadata requests. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithHttpTokens(const Aws::String& value) { SetHttpTokens(value); return *this;}

    /**
     * <p>The state of token usage for your instance metadata requests. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithHttpTokens(Aws::String&& value) { SetHttpTokens(std::move(value)); return *this;}

    /**
     * <p>The state of token usage for your instance metadata requests. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithHttpTokens(const char* value) { SetHttpTokens(value); return *this;}


    /**
     * <p>Specifies whether to allow access to instance tags from the instance
     * metadata. </p>
     */
    inline const Aws::String& GetInstanceMetadataTags() const{ return m_instanceMetadataTags; }

    /**
     * <p>Specifies whether to allow access to instance tags from the instance
     * metadata. </p>
     */
    inline bool InstanceMetadataTagsHasBeenSet() const { return m_instanceMetadataTagsHasBeenSet; }

    /**
     * <p>Specifies whether to allow access to instance tags from the instance
     * metadata. </p>
     */
    inline void SetInstanceMetadataTags(const Aws::String& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = value; }

    /**
     * <p>Specifies whether to allow access to instance tags from the instance
     * metadata. </p>
     */
    inline void SetInstanceMetadataTags(Aws::String&& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = std::move(value); }

    /**
     * <p>Specifies whether to allow access to instance tags from the instance
     * metadata. </p>
     */
    inline void SetInstanceMetadataTags(const char* value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags.assign(value); }

    /**
     * <p>Specifies whether to allow access to instance tags from the instance
     * metadata. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithInstanceMetadataTags(const Aws::String& value) { SetInstanceMetadataTags(value); return *this;}

    /**
     * <p>Specifies whether to allow access to instance tags from the instance
     * metadata. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithInstanceMetadataTags(Aws::String&& value) { SetInstanceMetadataTags(std::move(value)); return *this;}

    /**
     * <p>Specifies whether to allow access to instance tags from the instance
     * metadata. </p>
     */
    inline AwsEc2InstanceMetadataOptions& WithInstanceMetadataTags(const char* value) { SetInstanceMetadataTags(value); return *this;}

  private:

    Aws::String m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    Aws::String m_httpProtocolIpv6;
    bool m_httpProtocolIpv6HasBeenSet = false;

    int m_httpPutResponseHopLimit;
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    Aws::String m_httpTokens;
    bool m_httpTokensHasBeenSet = false;

    Aws::String m_instanceMetadataTags;
    bool m_instanceMetadataTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

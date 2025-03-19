/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOriginSslProtocols.h>
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
   * <p>A custom origin. A custom origin is any origin that is not an Amazon S3
   * bucket, with one exception. An Amazon S3 bucket that is <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">configured
   * with static website hosting</a> is a custom origin. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOriginCustomOriginConfig">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionOriginCustomOriginConfig
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginCustomOriginConfig() = default;
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginCustomOriginConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginCustomOriginConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HTTP port that CloudFront uses to connect to the origin. </p>
     */
    inline int GetHttpPort() const { return m_httpPort; }
    inline bool HttpPortHasBeenSet() const { return m_httpPortHasBeenSet; }
    inline void SetHttpPort(int value) { m_httpPortHasBeenSet = true; m_httpPort = value; }
    inline AwsCloudFrontDistributionOriginCustomOriginConfig& WithHttpPort(int value) { SetHttpPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTPS port that CloudFront uses to connect to the origin. </p>
     */
    inline int GetHttpsPort() const { return m_httpsPort; }
    inline bool HttpsPortHasBeenSet() const { return m_httpsPortHasBeenSet; }
    inline void SetHttpsPort(int value) { m_httpsPortHasBeenSet = true; m_httpsPort = value; }
    inline AwsCloudFrontDistributionOriginCustomOriginConfig& WithHttpsPort(int value) { SetHttpsPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how long, in seconds, CloudFront persists its connection to the
     * origin. </p>
     */
    inline int GetOriginKeepaliveTimeout() const { return m_originKeepaliveTimeout; }
    inline bool OriginKeepaliveTimeoutHasBeenSet() const { return m_originKeepaliveTimeoutHasBeenSet; }
    inline void SetOriginKeepaliveTimeout(int value) { m_originKeepaliveTimeoutHasBeenSet = true; m_originKeepaliveTimeout = value; }
    inline AwsCloudFrontDistributionOriginCustomOriginConfig& WithOriginKeepaliveTimeout(int value) { SetOriginKeepaliveTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the protocol (HTTP or HTTPS) that CloudFront uses to connect to the
     * origin. </p>
     */
    inline const Aws::String& GetOriginProtocolPolicy() const { return m_originProtocolPolicy; }
    inline bool OriginProtocolPolicyHasBeenSet() const { return m_originProtocolPolicyHasBeenSet; }
    template<typename OriginProtocolPolicyT = Aws::String>
    void SetOriginProtocolPolicy(OriginProtocolPolicyT&& value) { m_originProtocolPolicyHasBeenSet = true; m_originProtocolPolicy = std::forward<OriginProtocolPolicyT>(value); }
    template<typename OriginProtocolPolicyT = Aws::String>
    AwsCloudFrontDistributionOriginCustomOriginConfig& WithOriginProtocolPolicy(OriginProtocolPolicyT&& value) { SetOriginProtocolPolicy(std::forward<OriginProtocolPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how long, in seconds, CloudFront waits for a response from the
     * origin. </p>
     */
    inline int GetOriginReadTimeout() const { return m_originReadTimeout; }
    inline bool OriginReadTimeoutHasBeenSet() const { return m_originReadTimeoutHasBeenSet; }
    inline void SetOriginReadTimeout(int value) { m_originReadTimeoutHasBeenSet = true; m_originReadTimeout = value; }
    inline AwsCloudFrontDistributionOriginCustomOriginConfig& WithOriginReadTimeout(int value) { SetOriginReadTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the minimum SSL/TLS protocol that CloudFront uses when connecting
     * to your origin over HTTPS. </p>
     */
    inline const AwsCloudFrontDistributionOriginSslProtocols& GetOriginSslProtocols() const { return m_originSslProtocols; }
    inline bool OriginSslProtocolsHasBeenSet() const { return m_originSslProtocolsHasBeenSet; }
    template<typename OriginSslProtocolsT = AwsCloudFrontDistributionOriginSslProtocols>
    void SetOriginSslProtocols(OriginSslProtocolsT&& value) { m_originSslProtocolsHasBeenSet = true; m_originSslProtocols = std::forward<OriginSslProtocolsT>(value); }
    template<typename OriginSslProtocolsT = AwsCloudFrontDistributionOriginSslProtocols>
    AwsCloudFrontDistributionOriginCustomOriginConfig& WithOriginSslProtocols(OriginSslProtocolsT&& value) { SetOriginSslProtocols(std::forward<OriginSslProtocolsT>(value)); return *this;}
    ///@}
  private:

    int m_httpPort{0};
    bool m_httpPortHasBeenSet = false;

    int m_httpsPort{0};
    bool m_httpsPortHasBeenSet = false;

    int m_originKeepaliveTimeout{0};
    bool m_originKeepaliveTimeoutHasBeenSet = false;

    Aws::String m_originProtocolPolicy;
    bool m_originProtocolPolicyHasBeenSet = false;

    int m_originReadTimeout{0};
    bool m_originReadTimeoutHasBeenSet = false;

    AwsCloudFrontDistributionOriginSslProtocols m_originSslProtocols;
    bool m_originSslProtocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

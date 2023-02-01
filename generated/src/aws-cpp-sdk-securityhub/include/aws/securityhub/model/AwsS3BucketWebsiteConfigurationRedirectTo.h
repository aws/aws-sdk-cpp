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
   * <p>The redirect behavior for requests to the website.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketWebsiteConfigurationRedirectTo">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketWebsiteConfigurationRedirectTo
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRedirectTo();
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRedirectTo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRedirectTo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the host to redirect requests to.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The name of the host to redirect requests to.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The name of the host to redirect requests to.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The name of the host to redirect requests to.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The name of the host to redirect requests to.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The name of the host to redirect requests to.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRedirectTo& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The name of the host to redirect requests to.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRedirectTo& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The name of the host to redirect requests to.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRedirectTo& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The protocol to use when redirecting requests. By default, this field uses
     * the same protocol as the original request. Valid values are <code>http</code> or
     * <code>https</code>.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol to use when redirecting requests. By default, this field uses
     * the same protocol as the original request. Valid values are <code>http</code> or
     * <code>https</code>.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol to use when redirecting requests. By default, this field uses
     * the same protocol as the original request. Valid values are <code>http</code> or
     * <code>https</code>.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to use when redirecting requests. By default, this field uses
     * the same protocol as the original request. Valid values are <code>http</code> or
     * <code>https</code>.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol to use when redirecting requests. By default, this field uses
     * the same protocol as the original request. Valid values are <code>http</code> or
     * <code>https</code>.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol to use when redirecting requests. By default, this field uses
     * the same protocol as the original request. Valid values are <code>http</code> or
     * <code>https</code>.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRedirectTo& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to use when redirecting requests. By default, this field uses
     * the same protocol as the original request. Valid values are <code>http</code> or
     * <code>https</code>.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRedirectTo& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol to use when redirecting requests. By default, this field uses
     * the same protocol as the original request. Valid values are <code>http</code> or
     * <code>https</code>.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRedirectTo& WithProtocol(const char* value) { SetProtocol(value); return *this;}

  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

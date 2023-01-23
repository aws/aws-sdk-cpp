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
   * <p>A hostname and IP address mapping to append to the <b>/etc/hosts</b> file on
   * the container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hostname to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The hostname to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The hostname to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The hostname to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The hostname to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The hostname to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The hostname to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The hostname to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The IP address to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address to use in the <b>/etc/hosts</b> entry.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

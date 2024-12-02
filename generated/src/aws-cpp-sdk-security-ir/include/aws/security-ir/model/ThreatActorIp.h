/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ThreatActorIp">AWS
   * API Reference</a></p>
   */
  class ThreatActorIp
  {
  public:
    AWS_SECURITYIR_API ThreatActorIp();
    AWS_SECURITYIR_API ThreatActorIp(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API ThreatActorIp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline ThreatActorIp& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline ThreatActorIp& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline ThreatActorIp& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetUserAgent() const{ return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    inline void SetUserAgent(const Aws::String& value) { m_userAgentHasBeenSet = true; m_userAgent = value; }
    inline void SetUserAgent(Aws::String&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::move(value); }
    inline void SetUserAgent(const char* value) { m_userAgentHasBeenSet = true; m_userAgent.assign(value); }
    inline ThreatActorIp& WithUserAgent(const Aws::String& value) { SetUserAgent(value); return *this;}
    inline ThreatActorIp& WithUserAgent(Aws::String&& value) { SetUserAgent(std::move(value)); return *this;}
    inline ThreatActorIp& WithUserAgent(const char* value) { SetUserAgent(value); return *this;}
    ///@}
  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws

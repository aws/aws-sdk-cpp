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
   * <p>Provides information about the IP address where the scanned port is
   * located.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ActionLocalIpDetails">AWS
   * API Reference</a></p>
   */
  class ActionLocalIpDetails
  {
  public:
    AWS_SECURITYHUB_API ActionLocalIpDetails();
    AWS_SECURITYHUB_API ActionLocalIpDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActionLocalIpDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetIpAddressV4() const{ return m_ipAddressV4; }

    /**
     * <p>The IP address.</p>
     */
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }

    /**
     * <p>The IP address.</p>
     */
    inline void SetIpAddressV4(const Aws::String& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = value; }

    /**
     * <p>The IP address.</p>
     */
    inline void SetIpAddressV4(Aws::String&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::move(value); }

    /**
     * <p>The IP address.</p>
     */
    inline void SetIpAddressV4(const char* value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4.assign(value); }

    /**
     * <p>The IP address.</p>
     */
    inline ActionLocalIpDetails& WithIpAddressV4(const Aws::String& value) { SetIpAddressV4(value); return *this;}

    /**
     * <p>The IP address.</p>
     */
    inline ActionLocalIpDetails& WithIpAddressV4(Aws::String&& value) { SetIpAddressV4(std::move(value)); return *this;}

    /**
     * <p>The IP address.</p>
     */
    inline ActionLocalIpDetails& WithIpAddressV4(const char* value) { SetIpAddressV4(value); return *this;}

  private:

    Aws::String m_ipAddressV4;
    bool m_ipAddressV4HasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

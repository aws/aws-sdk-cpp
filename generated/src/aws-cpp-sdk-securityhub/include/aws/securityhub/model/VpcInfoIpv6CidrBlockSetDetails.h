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
   * <p>Provides details about the IPv6 CIDR blocks for the VPC. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/VpcInfoIpv6CidrBlockSetDetails">AWS
   * API Reference</a></p>
   */
  class VpcInfoIpv6CidrBlockSetDetails
  {
  public:
    AWS_SECURITYHUB_API VpcInfoIpv6CidrBlockSetDetails();
    AWS_SECURITYHUB_API VpcInfoIpv6CidrBlockSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API VpcInfoIpv6CidrBlockSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IPv6 CIDR block for the VPC. </p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPv6 CIDR block for the VPC. </p>
     */
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }

    /**
     * <p>The IPv6 CIDR block for the VPC. </p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR block for the VPC. </p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 CIDR block for the VPC. </p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 CIDR block for the VPC. </p>
     */
    inline VpcInfoIpv6CidrBlockSetDetails& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block for the VPC. </p>
     */
    inline VpcInfoIpv6CidrBlockSetDetails& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR block for the VPC. </p>
     */
    inline VpcInfoIpv6CidrBlockSetDetails& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}

  private:

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

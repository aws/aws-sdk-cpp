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
   * <p>An IPV6 CIDR block association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Ipv6CidrBlockAssociation">AWS
   * API Reference</a></p>
   */
  class Ipv6CidrBlockAssociation
  {
  public:
    AWS_SECURITYHUB_API Ipv6CidrBlockAssociation();
    AWS_SECURITYHUB_API Ipv6CidrBlockAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Ipv6CidrBlockAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline Ipv6CidrBlockAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline Ipv6CidrBlockAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline Ipv6CidrBlockAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline Ipv6CidrBlockAssociation& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline Ipv6CidrBlockAssociation& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline Ipv6CidrBlockAssociation& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}


    /**
     * <p>Information about the state of the CIDR block. Valid values are as
     * follows:</p> <ul> <li> <p> <code>associating</code> </p> </li> <li> <p>
     * <code>associated</code> </p> </li> <li> <p> <code>disassociating</code> </p>
     * </li> <li> <p> <code>disassociated</code> </p> </li> <li> <p>
     * <code>failed</code> </p> </li> <li> <p> <code>failing</code> </p> </li> </ul>
     */
    inline const Aws::String& GetCidrBlockState() const{ return m_cidrBlockState; }

    /**
     * <p>Information about the state of the CIDR block. Valid values are as
     * follows:</p> <ul> <li> <p> <code>associating</code> </p> </li> <li> <p>
     * <code>associated</code> </p> </li> <li> <p> <code>disassociating</code> </p>
     * </li> <li> <p> <code>disassociated</code> </p> </li> <li> <p>
     * <code>failed</code> </p> </li> <li> <p> <code>failing</code> </p> </li> </ul>
     */
    inline bool CidrBlockStateHasBeenSet() const { return m_cidrBlockStateHasBeenSet; }

    /**
     * <p>Information about the state of the CIDR block. Valid values are as
     * follows:</p> <ul> <li> <p> <code>associating</code> </p> </li> <li> <p>
     * <code>associated</code> </p> </li> <li> <p> <code>disassociating</code> </p>
     * </li> <li> <p> <code>disassociated</code> </p> </li> <li> <p>
     * <code>failed</code> </p> </li> <li> <p> <code>failing</code> </p> </li> </ul>
     */
    inline void SetCidrBlockState(const Aws::String& value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState = value; }

    /**
     * <p>Information about the state of the CIDR block. Valid values are as
     * follows:</p> <ul> <li> <p> <code>associating</code> </p> </li> <li> <p>
     * <code>associated</code> </p> </li> <li> <p> <code>disassociating</code> </p>
     * </li> <li> <p> <code>disassociated</code> </p> </li> <li> <p>
     * <code>failed</code> </p> </li> <li> <p> <code>failing</code> </p> </li> </ul>
     */
    inline void SetCidrBlockState(Aws::String&& value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState = std::move(value); }

    /**
     * <p>Information about the state of the CIDR block. Valid values are as
     * follows:</p> <ul> <li> <p> <code>associating</code> </p> </li> <li> <p>
     * <code>associated</code> </p> </li> <li> <p> <code>disassociating</code> </p>
     * </li> <li> <p> <code>disassociated</code> </p> </li> <li> <p>
     * <code>failed</code> </p> </li> <li> <p> <code>failing</code> </p> </li> </ul>
     */
    inline void SetCidrBlockState(const char* value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState.assign(value); }

    /**
     * <p>Information about the state of the CIDR block. Valid values are as
     * follows:</p> <ul> <li> <p> <code>associating</code> </p> </li> <li> <p>
     * <code>associated</code> </p> </li> <li> <p> <code>disassociating</code> </p>
     * </li> <li> <p> <code>disassociated</code> </p> </li> <li> <p>
     * <code>failed</code> </p> </li> <li> <p> <code>failing</code> </p> </li> </ul>
     */
    inline Ipv6CidrBlockAssociation& WithCidrBlockState(const Aws::String& value) { SetCidrBlockState(value); return *this;}

    /**
     * <p>Information about the state of the CIDR block. Valid values are as
     * follows:</p> <ul> <li> <p> <code>associating</code> </p> </li> <li> <p>
     * <code>associated</code> </p> </li> <li> <p> <code>disassociating</code> </p>
     * </li> <li> <p> <code>disassociated</code> </p> </li> <li> <p>
     * <code>failed</code> </p> </li> <li> <p> <code>failing</code> </p> </li> </ul>
     */
    inline Ipv6CidrBlockAssociation& WithCidrBlockState(Aws::String&& value) { SetCidrBlockState(std::move(value)); return *this;}

    /**
     * <p>Information about the state of the CIDR block. Valid values are as
     * follows:</p> <ul> <li> <p> <code>associating</code> </p> </li> <li> <p>
     * <code>associated</code> </p> </li> <li> <p> <code>disassociating</code> </p>
     * </li> <li> <p> <code>disassociated</code> </p> </li> <li> <p>
     * <code>failed</code> </p> </li> <li> <p> <code>failing</code> </p> </li> </ul>
     */
    inline Ipv6CidrBlockAssociation& WithCidrBlockState(const char* value) { SetCidrBlockState(value); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    Aws::String m_cidrBlockState;
    bool m_cidrBlockStateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

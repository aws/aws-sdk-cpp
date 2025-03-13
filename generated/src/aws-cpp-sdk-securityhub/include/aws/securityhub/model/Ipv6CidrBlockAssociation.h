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
    AWS_SECURITYHUB_API Ipv6CidrBlockAssociation() = default;
    AWS_SECURITYHUB_API Ipv6CidrBlockAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Ipv6CidrBlockAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    Ipv6CidrBlockAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const { return m_ipv6CidrBlock; }
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }
    template<typename Ipv6CidrBlockT = Aws::String>
    void SetIpv6CidrBlock(Ipv6CidrBlockT&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::forward<Ipv6CidrBlockT>(value); }
    template<typename Ipv6CidrBlockT = Aws::String>
    Ipv6CidrBlockAssociation& WithIpv6CidrBlock(Ipv6CidrBlockT&& value) { SetIpv6CidrBlock(std::forward<Ipv6CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the state of the CIDR block. Valid values are as
     * follows:</p> <ul> <li> <p> <code>associating</code> </p> </li> <li> <p>
     * <code>associated</code> </p> </li> <li> <p> <code>disassociating</code> </p>
     * </li> <li> <p> <code>disassociated</code> </p> </li> <li> <p>
     * <code>failed</code> </p> </li> <li> <p> <code>failing</code> </p> </li> </ul>
     */
    inline const Aws::String& GetCidrBlockState() const { return m_cidrBlockState; }
    inline bool CidrBlockStateHasBeenSet() const { return m_cidrBlockStateHasBeenSet; }
    template<typename CidrBlockStateT = Aws::String>
    void SetCidrBlockState(CidrBlockStateT&& value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState = std::forward<CidrBlockStateT>(value); }
    template<typename CidrBlockStateT = Aws::String>
    Ipv6CidrBlockAssociation& WithCidrBlockState(CidrBlockStateT&& value) { SetCidrBlockState(std::forward<CidrBlockStateT>(value)); return *this;}
    ///@}
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

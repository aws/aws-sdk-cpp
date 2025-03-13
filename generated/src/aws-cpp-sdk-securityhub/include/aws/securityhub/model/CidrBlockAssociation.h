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
   * <p>An IPv4 CIDR block association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CidrBlockAssociation">AWS
   * API Reference</a></p>
   */
  class CidrBlockAssociation
  {
  public:
    AWS_SECURITYHUB_API CidrBlockAssociation() = default;
    AWS_SECURITYHUB_API CidrBlockAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API CidrBlockAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association ID for the IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    CidrBlockAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    CidrBlockAssociation& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the state of the IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetCidrBlockState() const { return m_cidrBlockState; }
    inline bool CidrBlockStateHasBeenSet() const { return m_cidrBlockStateHasBeenSet; }
    template<typename CidrBlockStateT = Aws::String>
    void SetCidrBlockState(CidrBlockStateT&& value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState = std::forward<CidrBlockStateT>(value); }
    template<typename CidrBlockStateT = Aws::String>
    CidrBlockAssociation& WithCidrBlockState(CidrBlockStateT&& value) { SetCidrBlockState(std::forward<CidrBlockStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_cidrBlockState;
    bool m_cidrBlockStateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

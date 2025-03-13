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
   * <p>Provides details about the IPv4 CIDR blocks for the VPC. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/VpcInfoCidrBlockSetDetails">AWS
   * API Reference</a></p>
   */
  class VpcInfoCidrBlockSetDetails
  {
  public:
    AWS_SECURITYHUB_API VpcInfoCidrBlockSetDetails() = default;
    AWS_SECURITYHUB_API VpcInfoCidrBlockSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API VpcInfoCidrBlockSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IPv4 CIDR block for the VPC. </p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    VpcInfoCidrBlockSetDetails& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

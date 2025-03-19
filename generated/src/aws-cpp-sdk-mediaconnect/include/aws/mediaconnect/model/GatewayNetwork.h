/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p>The network settings for a gateway. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GatewayNetwork">AWS
   * API Reference</a></p>
   */
  class GatewayNetwork
  {
  public:
    AWS_MEDIACONNECT_API GatewayNetwork() = default;
    AWS_MEDIACONNECT_API GatewayNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API GatewayNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique IP address range to use for this network. These IP addresses should
     * be in the form of a Classless Inter-Domain Routing (CIDR) block; for example,
     * 10.0.0.0/16. </p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    GatewayNetwork& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network. This name is used to reference the network and must
     * be unique among networks in this gateway. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GatewayNetwork& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

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
   * The network settings for a gateway.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GatewayNetwork">AWS
   * API Reference</a></p>
   */
  class GatewayNetwork
  {
  public:
    AWS_MEDIACONNECT_API GatewayNetwork();
    AWS_MEDIACONNECT_API GatewayNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API GatewayNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A unique IP address range to use for this network. These IP addresses should be
     * in the form of a Classless Inter-Domain Routing (CIDR) block; for example,
     * 10.0.0.0/16.
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * A unique IP address range to use for this network. These IP addresses should be
     * in the form of a Classless Inter-Domain Routing (CIDR) block; for example,
     * 10.0.0.0/16.
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * A unique IP address range to use for this network. These IP addresses should be
     * in the form of a Classless Inter-Domain Routing (CIDR) block; for example,
     * 10.0.0.0/16.
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * A unique IP address range to use for this network. These IP addresses should be
     * in the form of a Classless Inter-Domain Routing (CIDR) block; for example,
     * 10.0.0.0/16.
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * A unique IP address range to use for this network. These IP addresses should be
     * in the form of a Classless Inter-Domain Routing (CIDR) block; for example,
     * 10.0.0.0/16.
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * A unique IP address range to use for this network. These IP addresses should be
     * in the form of a Classless Inter-Domain Routing (CIDR) block; for example,
     * 10.0.0.0/16.
     */
    inline GatewayNetwork& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * A unique IP address range to use for this network. These IP addresses should be
     * in the form of a Classless Inter-Domain Routing (CIDR) block; for example,
     * 10.0.0.0/16.
     */
    inline GatewayNetwork& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * A unique IP address range to use for this network. These IP addresses should be
     * in the form of a Classless Inter-Domain Routing (CIDR) block; for example,
     * 10.0.0.0/16.
     */
    inline GatewayNetwork& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * The name of the network. This name is used to reference the network and must be
     * unique among networks in this gateway.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the network. This name is used to reference the network and must be
     * unique among networks in this gateway.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the network. This name is used to reference the network and must be
     * unique among networks in this gateway.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the network. This name is used to reference the network and must be
     * unique among networks in this gateway.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the network. This name is used to reference the network and must be
     * unique among networks in this gateway.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the network. This name is used to reference the network and must be
     * unique among networks in this gateway.
     */
    inline GatewayNetwork& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the network. This name is used to reference the network and must be
     * unique among networks in this gateway.
     */
    inline GatewayNetwork& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the network. This name is used to reference the network and must be
     * unique among networks in this gateway.
     */
    inline GatewayNetwork& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/VpcEndpoint.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The VPC endpoint object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_REDSHIFTSERVERLESS_API Endpoint() = default;
    AWS_REDSHIFTSERVERLESS_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DNS address of the VPC endpoint.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    Endpoint& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that Amazon Redshift Serverless listens on.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>VpcEndpoint</code> objects.</p>
     */
    inline const Aws::Vector<VpcEndpoint>& GetVpcEndpoints() const { return m_vpcEndpoints; }
    inline bool VpcEndpointsHasBeenSet() const { return m_vpcEndpointsHasBeenSet; }
    template<typename VpcEndpointsT = Aws::Vector<VpcEndpoint>>
    void SetVpcEndpoints(VpcEndpointsT&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints = std::forward<VpcEndpointsT>(value); }
    template<typename VpcEndpointsT = Aws::Vector<VpcEndpoint>>
    Endpoint& WithVpcEndpoints(VpcEndpointsT&& value) { SetVpcEndpoints(std::forward<VpcEndpointsT>(value)); return *this;}
    template<typename VpcEndpointsT = VpcEndpoint>
    Endpoint& AddVpcEndpoints(VpcEndpointsT&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints.emplace_back(std::forward<VpcEndpointsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::Vector<VpcEndpoint> m_vpcEndpoints;
    bool m_vpcEndpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws

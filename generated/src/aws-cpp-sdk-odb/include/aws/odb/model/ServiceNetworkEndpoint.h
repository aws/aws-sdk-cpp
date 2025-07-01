/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/VpcEndpointType.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>The configuration for a service network endpoint.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ServiceNetworkEndpoint">AWS
   * API Reference</a></p>
   */
  class ServiceNetworkEndpoint
  {
  public:
    AWS_ODB_API ServiceNetworkEndpoint() = default;
    AWS_ODB_API ServiceNetworkEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API ServiceNetworkEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    ServiceNetworkEndpoint& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the VPC endpoint.</p> <p>Valid Values: <code>Interface |
     * Gateway</code> </p>
     */
    inline VpcEndpointType GetVpcEndpointType() const { return m_vpcEndpointType; }
    inline bool VpcEndpointTypeHasBeenSet() const { return m_vpcEndpointTypeHasBeenSet; }
    inline void SetVpcEndpointType(VpcEndpointType value) { m_vpcEndpointTypeHasBeenSet = true; m_vpcEndpointType = value; }
    inline ServiceNetworkEndpoint& WithVpcEndpointType(VpcEndpointType value) { SetVpcEndpointType(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    VpcEndpointType m_vpcEndpointType{VpcEndpointType::NOT_SET};
    bool m_vpcEndpointTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/AccessEndpointType.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the access type and endpoint for a WorkSpace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AccessEndpoint">AWS
   * API Reference</a></p>
   */
  class AccessEndpoint
  {
  public:
    AWS_WORKSPACES_API AccessEndpoint() = default;
    AWS_WORKSPACES_API AccessEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API AccessEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the type of access endpoint.</p>
     */
    inline AccessEndpointType GetAccessEndpointType() const { return m_accessEndpointType; }
    inline bool AccessEndpointTypeHasBeenSet() const { return m_accessEndpointTypeHasBeenSet; }
    inline void SetAccessEndpointType(AccessEndpointType value) { m_accessEndpointTypeHasBeenSet = true; m_accessEndpointType = value; }
    inline AccessEndpoint& WithAccessEndpointType(AccessEndpointType value) { SetAccessEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the VPC endpoint to use for access.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    AccessEndpoint& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}
  private:

    AccessEndpointType m_accessEndpointType{AccessEndpointType::NOT_SET};
    bool m_accessEndpointTypeHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws

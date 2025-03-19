/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/VpcOptions.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>An OpenSearch Ingestion-managed VPC endpoint that will access one or more
   * pipelines.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/VpcEndpoint">AWS
   * API Reference</a></p>
   */
  class VpcEndpoint
  {
  public:
    AWS_OSIS_API VpcEndpoint() = default;
    AWS_OSIS_API VpcEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API VpcEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    VpcEndpoint& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for your VPC. Amazon Web Services PrivateLink generates this value
     * when you create a VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    VpcEndpoint& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VPC, including associated subnets and security
     * groups.</p>
     */
    inline const VpcOptions& GetVpcOptions() const { return m_vpcOptions; }
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }
    template<typename VpcOptionsT = VpcOptions>
    void SetVpcOptions(VpcOptionsT&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::forward<VpcOptionsT>(value); }
    template<typename VpcOptionsT = VpcOptions>
    VpcEndpoint& WithVpcOptions(VpcOptionsT&& value) { SetVpcOptions(std::forward<VpcOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    VpcOptions m_vpcOptions;
    bool m_vpcOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

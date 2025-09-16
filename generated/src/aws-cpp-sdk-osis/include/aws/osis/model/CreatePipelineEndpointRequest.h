/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/OSISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/PipelineEndpointVpcOptions.h>
#include <utility>

namespace Aws
{
namespace OSIS
{
namespace Model
{

  /**
   */
  class CreatePipelineEndpointRequest : public OSISRequest
  {
  public:
    AWS_OSIS_API CreatePipelineEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePipelineEndpoint"; }

    AWS_OSIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline to create the endpoint
     * for.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    CreatePipelineEndpointRequest& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the VPC configuration for the pipeline endpoint, including
     * subnet IDs and security group IDs.</p>
     */
    inline const PipelineEndpointVpcOptions& GetVpcOptions() const { return m_vpcOptions; }
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }
    template<typename VpcOptionsT = PipelineEndpointVpcOptions>
    void SetVpcOptions(VpcOptionsT&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::forward<VpcOptionsT>(value); }
    template<typename VpcOptionsT = PipelineEndpointVpcOptions>
    CreatePipelineEndpointRequest& WithVpcOptions(VpcOptionsT&& value) { SetVpcOptions(std::forward<VpcOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    PipelineEndpointVpcOptions m_vpcOptions;
    bool m_vpcOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

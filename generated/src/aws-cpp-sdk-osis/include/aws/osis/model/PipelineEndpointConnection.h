/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/PipelineEndpointStatus.h>
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
   * <p>Represents a connection to a pipeline endpoint, containing details about the
   * endpoint association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/PipelineEndpointConnection">AWS
   * API Reference</a></p>
   */
  class PipelineEndpointConnection
  {
  public:
    AWS_OSIS_API PipelineEndpointConnection() = default;
    AWS_OSIS_API PipelineEndpointConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API PipelineEndpointConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline in the endpoint
     * connection.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    PipelineEndpointConnection& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the endpoint in the connection.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    PipelineEndpointConnection& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the pipeline endpoint connection.</p>
     */
    inline PipelineEndpointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PipelineEndpointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PipelineEndpointConnection& WithStatus(PipelineEndpointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the VPC endpoint used in this
     * connection.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const { return m_vpcEndpointOwner; }
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }
    template<typename VpcEndpointOwnerT = Aws::String>
    void SetVpcEndpointOwner(VpcEndpointOwnerT&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::forward<VpcEndpointOwnerT>(value); }
    template<typename VpcEndpointOwnerT = Aws::String>
    PipelineEndpointConnection& WithVpcEndpointOwner(VpcEndpointOwnerT&& value) { SetVpcEndpointOwner(std::forward<VpcEndpointOwnerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    PipelineEndpointStatus m_status{PipelineEndpointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_vpcEndpointOwner;
    bool m_vpcEndpointOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

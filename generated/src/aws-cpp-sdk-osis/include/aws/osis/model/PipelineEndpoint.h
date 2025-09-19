/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/PipelineEndpointStatus.h>
#include <aws/osis/model/PipelineEndpointVpcOptions.h>
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
   * <p>Represents a VPC endpoint for an OpenSearch Ingestion pipeline, enabling
   * private connectivity between your VPC and the pipeline.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/PipelineEndpoint">AWS
   * API Reference</a></p>
   */
  class PipelineEndpoint
  {
  public:
    AWS_OSIS_API PipelineEndpoint() = default;
    AWS_OSIS_API PipelineEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API PipelineEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline associated with this
     * endpoint.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    PipelineEndpoint& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the pipeline endpoint.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    PipelineEndpoint& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the pipeline endpoint.</p>
     */
    inline PipelineEndpointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PipelineEndpointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PipelineEndpoint& WithStatus(PipelineEndpointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC where the pipeline endpoint is created.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    PipelineEndpoint& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for the VPC endpoint, including subnet and security
     * group settings.</p>
     */
    inline const PipelineEndpointVpcOptions& GetVpcOptions() const { return m_vpcOptions; }
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }
    template<typename VpcOptionsT = PipelineEndpointVpcOptions>
    void SetVpcOptions(VpcOptionsT&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::forward<VpcOptionsT>(value); }
    template<typename VpcOptionsT = PipelineEndpointVpcOptions>
    PipelineEndpoint& WithVpcOptions(VpcOptionsT&& value) { SetVpcOptions(std::forward<VpcOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL used to ingest data to the pipeline through the VPC endpoint.</p>
     */
    inline const Aws::String& GetIngestEndpointUrl() const { return m_ingestEndpointUrl; }
    inline bool IngestEndpointUrlHasBeenSet() const { return m_ingestEndpointUrlHasBeenSet; }
    template<typename IngestEndpointUrlT = Aws::String>
    void SetIngestEndpointUrl(IngestEndpointUrlT&& value) { m_ingestEndpointUrlHasBeenSet = true; m_ingestEndpointUrl = std::forward<IngestEndpointUrlT>(value); }
    template<typename IngestEndpointUrlT = Aws::String>
    PipelineEndpoint& WithIngestEndpointUrl(IngestEndpointUrlT&& value) { SetIngestEndpointUrl(std::forward<IngestEndpointUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    PipelineEndpointStatus m_status{PipelineEndpointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    PipelineEndpointVpcOptions m_vpcOptions;
    bool m_vpcOptionsHasBeenSet = false;

    Aws::String m_ingestEndpointUrl;
    bool m_ingestEndpointUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

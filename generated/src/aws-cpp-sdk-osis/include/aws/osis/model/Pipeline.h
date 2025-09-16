/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/PipelineStatus.h>
#include <aws/osis/model/PipelineStatusReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/osis/model/LogPublishingOptions.h>
#include <aws/osis/model/BufferOptions.h>
#include <aws/osis/model/EncryptionAtRestOptions.h>
#include <aws/osis/model/VpcEndpoint.h>
#include <aws/osis/model/ServiceVpcEndpoint.h>
#include <aws/osis/model/PipelineDestination.h>
#include <aws/osis/model/Tag.h>
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
   * <p>Information about an existing OpenSearch Ingestion pipeline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/Pipeline">AWS API
   * Reference</a></p>
   */
  class Pipeline
  {
  public:
    AWS_OSIS_API Pipeline() = default;
    AWS_OSIS_API Pipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Pipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    Pipeline& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    Pipeline& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline int GetMinUnits() const { return m_minUnits; }
    inline bool MinUnitsHasBeenSet() const { return m_minUnitsHasBeenSet; }
    inline void SetMinUnits(int value) { m_minUnitsHasBeenSet = true; m_minUnits = value; }
    inline Pipeline& WithMinUnits(int value) { SetMinUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline int GetMaxUnits() const { return m_maxUnits; }
    inline bool MaxUnitsHasBeenSet() const { return m_maxUnitsHasBeenSet; }
    inline void SetMaxUnits(int value) { m_maxUnitsHasBeenSet = true; m_maxUnits = value; }
    inline Pipeline& WithMaxUnits(int value) { SetMaxUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the pipeline.</p>
     */
    inline PipelineStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PipelineStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Pipeline& WithStatus(PipelineStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the pipeline.</p>
     */
    inline const PipelineStatusReason& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = PipelineStatusReason>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = PipelineStatusReason>
    Pipeline& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Data Prepper pipeline configuration in YAML format.</p>
     */
    inline const Aws::String& GetPipelineConfigurationBody() const { return m_pipelineConfigurationBody; }
    inline bool PipelineConfigurationBodyHasBeenSet() const { return m_pipelineConfigurationBodyHasBeenSet; }
    template<typename PipelineConfigurationBodyT = Aws::String>
    void SetPipelineConfigurationBody(PipelineConfigurationBodyT&& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = std::forward<PipelineConfigurationBodyT>(value); }
    template<typename PipelineConfigurationBodyT = Aws::String>
    Pipeline& WithPipelineConfigurationBody(PipelineConfigurationBodyT&& value) { SetPipelineConfigurationBody(std::forward<PipelineConfigurationBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Pipeline& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the pipeline was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    Pipeline& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ingestion endpoints for the pipeline, which you can send data to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIngestEndpointUrls() const { return m_ingestEndpointUrls; }
    inline bool IngestEndpointUrlsHasBeenSet() const { return m_ingestEndpointUrlsHasBeenSet; }
    template<typename IngestEndpointUrlsT = Aws::Vector<Aws::String>>
    void SetIngestEndpointUrls(IngestEndpointUrlsT&& value) { m_ingestEndpointUrlsHasBeenSet = true; m_ingestEndpointUrls = std::forward<IngestEndpointUrlsT>(value); }
    template<typename IngestEndpointUrlsT = Aws::Vector<Aws::String>>
    Pipeline& WithIngestEndpointUrls(IngestEndpointUrlsT&& value) { SetIngestEndpointUrls(std::forward<IngestEndpointUrlsT>(value)); return *this;}
    template<typename IngestEndpointUrlsT = Aws::String>
    Pipeline& AddIngestEndpointUrls(IngestEndpointUrlsT&& value) { m_ingestEndpointUrlsHasBeenSet = true; m_ingestEndpointUrls.emplace_back(std::forward<IngestEndpointUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that represent log publishing settings.</p>
     */
    inline const LogPublishingOptions& GetLogPublishingOptions() const { return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    template<typename LogPublishingOptionsT = LogPublishingOptions>
    void SetLogPublishingOptions(LogPublishingOptionsT&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::forward<LogPublishingOptionsT>(value); }
    template<typename LogPublishingOptionsT = LogPublishingOptions>
    Pipeline& WithLogPublishingOptions(LogPublishingOptionsT&& value) { SetLogPublishingOptions(std::forward<LogPublishingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC interface endpoints that have access to the pipeline.</p>
     */
    inline const Aws::Vector<VpcEndpoint>& GetVpcEndpoints() const { return m_vpcEndpoints; }
    inline bool VpcEndpointsHasBeenSet() const { return m_vpcEndpointsHasBeenSet; }
    template<typename VpcEndpointsT = Aws::Vector<VpcEndpoint>>
    void SetVpcEndpoints(VpcEndpointsT&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints = std::forward<VpcEndpointsT>(value); }
    template<typename VpcEndpointsT = Aws::Vector<VpcEndpoint>>
    Pipeline& WithVpcEndpoints(VpcEndpointsT&& value) { SetVpcEndpoints(std::forward<VpcEndpointsT>(value)); return *this;}
    template<typename VpcEndpointsT = VpcEndpoint>
    Pipeline& AddVpcEndpoints(VpcEndpointsT&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints.emplace_back(std::forward<VpcEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const BufferOptions& GetBufferOptions() const { return m_bufferOptions; }
    inline bool BufferOptionsHasBeenSet() const { return m_bufferOptionsHasBeenSet; }
    template<typename BufferOptionsT = BufferOptions>
    void SetBufferOptions(BufferOptionsT&& value) { m_bufferOptionsHasBeenSet = true; m_bufferOptions = std::forward<BufferOptionsT>(value); }
    template<typename BufferOptionsT = BufferOptions>
    Pipeline& WithBufferOptions(BufferOptionsT&& value) { SetBufferOptions(std::forward<BufferOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const { return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    void SetEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::forward<EncryptionAtRestOptionsT>(value); }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    Pipeline& WithEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { SetEncryptionAtRestOptions(std::forward<EncryptionAtRestOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint service name for the pipeline.</p>
     */
    inline const Aws::String& GetVpcEndpointService() const { return m_vpcEndpointService; }
    inline bool VpcEndpointServiceHasBeenSet() const { return m_vpcEndpointServiceHasBeenSet; }
    template<typename VpcEndpointServiceT = Aws::String>
    void SetVpcEndpointService(VpcEndpointServiceT&& value) { m_vpcEndpointServiceHasBeenSet = true; m_vpcEndpointService = std::forward<VpcEndpointServiceT>(value); }
    template<typename VpcEndpointServiceT = Aws::String>
    Pipeline& WithVpcEndpointService(VpcEndpointServiceT&& value) { SetVpcEndpointService(std::forward<VpcEndpointServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC endpoints that OpenSearch Ingestion has created to other Amazon
     * Web Services services.</p>
     */
    inline const Aws::Vector<ServiceVpcEndpoint>& GetServiceVpcEndpoints() const { return m_serviceVpcEndpoints; }
    inline bool ServiceVpcEndpointsHasBeenSet() const { return m_serviceVpcEndpointsHasBeenSet; }
    template<typename ServiceVpcEndpointsT = Aws::Vector<ServiceVpcEndpoint>>
    void SetServiceVpcEndpoints(ServiceVpcEndpointsT&& value) { m_serviceVpcEndpointsHasBeenSet = true; m_serviceVpcEndpoints = std::forward<ServiceVpcEndpointsT>(value); }
    template<typename ServiceVpcEndpointsT = Aws::Vector<ServiceVpcEndpoint>>
    Pipeline& WithServiceVpcEndpoints(ServiceVpcEndpointsT&& value) { SetServiceVpcEndpoints(std::forward<ServiceVpcEndpointsT>(value)); return *this;}
    template<typename ServiceVpcEndpointsT = ServiceVpcEndpoint>
    Pipeline& AddServiceVpcEndpoints(ServiceVpcEndpointsT&& value) { m_serviceVpcEndpointsHasBeenSet = true; m_serviceVpcEndpoints.emplace_back(std::forward<ServiceVpcEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Destinations to which the pipeline writes data.</p>
     */
    inline const Aws::Vector<PipelineDestination>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<PipelineDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<PipelineDestination>>
    Pipeline& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = PipelineDestination>
    Pipeline& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Pipeline& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Pipeline& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the pipeline uses to
     * access AWS resources.</p>
     */
    inline const Aws::String& GetPipelineRoleArn() const { return m_pipelineRoleArn; }
    inline bool PipelineRoleArnHasBeenSet() const { return m_pipelineRoleArnHasBeenSet; }
    template<typename PipelineRoleArnT = Aws::String>
    void SetPipelineRoleArn(PipelineRoleArnT&& value) { m_pipelineRoleArnHasBeenSet = true; m_pipelineRoleArn = std::forward<PipelineRoleArnT>(value); }
    template<typename PipelineRoleArnT = Aws::String>
    Pipeline& WithPipelineRoleArn(PipelineRoleArnT&& value) { SetPipelineRoleArn(std::forward<PipelineRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    int m_minUnits{0};
    bool m_minUnitsHasBeenSet = false;

    int m_maxUnits{0};
    bool m_maxUnitsHasBeenSet = false;

    PipelineStatus m_status{PipelineStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    PipelineStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_pipelineConfigurationBody;
    bool m_pipelineConfigurationBodyHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_ingestEndpointUrls;
    bool m_ingestEndpointUrlsHasBeenSet = false;

    LogPublishingOptions m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    Aws::Vector<VpcEndpoint> m_vpcEndpoints;
    bool m_vpcEndpointsHasBeenSet = false;

    BufferOptions m_bufferOptions;
    bool m_bufferOptionsHasBeenSet = false;

    EncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    Aws::String m_vpcEndpointService;
    bool m_vpcEndpointServiceHasBeenSet = false;

    Aws::Vector<ServiceVpcEndpoint> m_serviceVpcEndpoints;
    bool m_serviceVpcEndpointsHasBeenSet = false;

    Aws::Vector<PipelineDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_pipelineRoleArn;
    bool m_pipelineRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

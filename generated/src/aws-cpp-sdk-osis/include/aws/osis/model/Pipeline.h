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
    AWS_OSIS_API Pipeline();
    AWS_OSIS_API Pipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Pipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline Pipeline& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline Pipeline& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline Pipeline& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(const char* value) { m_pipelineArnHasBeenSet = true; m_pipelineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline Pipeline& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline Pipeline& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline Pipeline& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}


    /**
     * <p>The minimum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline int GetMinUnits() const{ return m_minUnits; }

    /**
     * <p>The minimum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline bool MinUnitsHasBeenSet() const { return m_minUnitsHasBeenSet; }

    /**
     * <p>The minimum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline void SetMinUnits(int value) { m_minUnitsHasBeenSet = true; m_minUnits = value; }

    /**
     * <p>The minimum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline Pipeline& WithMinUnits(int value) { SetMinUnits(value); return *this;}


    /**
     * <p>The maximum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline int GetMaxUnits() const{ return m_maxUnits; }

    /**
     * <p>The maximum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline bool MaxUnitsHasBeenSet() const { return m_maxUnitsHasBeenSet; }

    /**
     * <p>The maximum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline void SetMaxUnits(int value) { m_maxUnitsHasBeenSet = true; m_maxUnits = value; }

    /**
     * <p>The maximum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline Pipeline& WithMaxUnits(int value) { SetMaxUnits(value); return *this;}


    /**
     * <p>The current status of the pipeline.</p>
     */
    inline const PipelineStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the pipeline.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the pipeline.</p>
     */
    inline void SetStatus(const PipelineStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the pipeline.</p>
     */
    inline void SetStatus(PipelineStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the pipeline.</p>
     */
    inline Pipeline& WithStatus(const PipelineStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the pipeline.</p>
     */
    inline Pipeline& WithStatus(PipelineStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the current status of the pipeline.</p>
     */
    inline const PipelineStatusReason& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the current status of the pipeline.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for the current status of the pipeline.</p>
     */
    inline void SetStatusReason(const PipelineStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the current status of the pipeline.</p>
     */
    inline void SetStatusReason(PipelineStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the current status of the pipeline.</p>
     */
    inline Pipeline& WithStatusReason(const PipelineStatusReason& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the current status of the pipeline.</p>
     */
    inline Pipeline& WithStatusReason(PipelineStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}


    /**
     * <p>The Data Prepper pipeline configuration in YAML format.</p>
     */
    inline const Aws::String& GetPipelineConfigurationBody() const{ return m_pipelineConfigurationBody; }

    /**
     * <p>The Data Prepper pipeline configuration in YAML format.</p>
     */
    inline bool PipelineConfigurationBodyHasBeenSet() const { return m_pipelineConfigurationBodyHasBeenSet; }

    /**
     * <p>The Data Prepper pipeline configuration in YAML format.</p>
     */
    inline void SetPipelineConfigurationBody(const Aws::String& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = value; }

    /**
     * <p>The Data Prepper pipeline configuration in YAML format.</p>
     */
    inline void SetPipelineConfigurationBody(Aws::String&& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = std::move(value); }

    /**
     * <p>The Data Prepper pipeline configuration in YAML format.</p>
     */
    inline void SetPipelineConfigurationBody(const char* value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody.assign(value); }

    /**
     * <p>The Data Prepper pipeline configuration in YAML format.</p>
     */
    inline Pipeline& WithPipelineConfigurationBody(const Aws::String& value) { SetPipelineConfigurationBody(value); return *this;}

    /**
     * <p>The Data Prepper pipeline configuration in YAML format.</p>
     */
    inline Pipeline& WithPipelineConfigurationBody(Aws::String&& value) { SetPipelineConfigurationBody(std::move(value)); return *this;}

    /**
     * <p>The Data Prepper pipeline configuration in YAML format.</p>
     */
    inline Pipeline& WithPipelineConfigurationBody(const char* value) { SetPipelineConfigurationBody(value); return *this;}


    /**
     * <p>The date and time when the pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when the pipeline was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time when the pipeline was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time when the pipeline was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time when the pipeline was created.</p>
     */
    inline Pipeline& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the pipeline was created.</p>
     */
    inline Pipeline& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time when the pipeline was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time when the pipeline was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The date and time when the pipeline was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The date and time when the pipeline was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time when the pipeline was last updated.</p>
     */
    inline Pipeline& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time when the pipeline was last updated.</p>
     */
    inline Pipeline& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The ingestion endpoints for the pipeline, which you can send data to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIngestEndpointUrls() const{ return m_ingestEndpointUrls; }

    /**
     * <p>The ingestion endpoints for the pipeline, which you can send data to.</p>
     */
    inline bool IngestEndpointUrlsHasBeenSet() const { return m_ingestEndpointUrlsHasBeenSet; }

    /**
     * <p>The ingestion endpoints for the pipeline, which you can send data to.</p>
     */
    inline void SetIngestEndpointUrls(const Aws::Vector<Aws::String>& value) { m_ingestEndpointUrlsHasBeenSet = true; m_ingestEndpointUrls = value; }

    /**
     * <p>The ingestion endpoints for the pipeline, which you can send data to.</p>
     */
    inline void SetIngestEndpointUrls(Aws::Vector<Aws::String>&& value) { m_ingestEndpointUrlsHasBeenSet = true; m_ingestEndpointUrls = std::move(value); }

    /**
     * <p>The ingestion endpoints for the pipeline, which you can send data to.</p>
     */
    inline Pipeline& WithIngestEndpointUrls(const Aws::Vector<Aws::String>& value) { SetIngestEndpointUrls(value); return *this;}

    /**
     * <p>The ingestion endpoints for the pipeline, which you can send data to.</p>
     */
    inline Pipeline& WithIngestEndpointUrls(Aws::Vector<Aws::String>&& value) { SetIngestEndpointUrls(std::move(value)); return *this;}

    /**
     * <p>The ingestion endpoints for the pipeline, which you can send data to.</p>
     */
    inline Pipeline& AddIngestEndpointUrls(const Aws::String& value) { m_ingestEndpointUrlsHasBeenSet = true; m_ingestEndpointUrls.push_back(value); return *this; }

    /**
     * <p>The ingestion endpoints for the pipeline, which you can send data to.</p>
     */
    inline Pipeline& AddIngestEndpointUrls(Aws::String&& value) { m_ingestEndpointUrlsHasBeenSet = true; m_ingestEndpointUrls.push_back(std::move(value)); return *this; }

    /**
     * <p>The ingestion endpoints for the pipeline, which you can send data to.</p>
     */
    inline Pipeline& AddIngestEndpointUrls(const char* value) { m_ingestEndpointUrlsHasBeenSet = true; m_ingestEndpointUrls.push_back(value); return *this; }


    /**
     * <p>Key-value pairs that represent log publishing settings.</p>
     */
    inline const LogPublishingOptions& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Key-value pairs that represent log publishing settings.</p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs that represent log publishing settings.</p>
     */
    inline void SetLogPublishingOptions(const LogPublishingOptions& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Key-value pairs that represent log publishing settings.</p>
     */
    inline void SetLogPublishingOptions(LogPublishingOptions&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Key-value pairs that represent log publishing settings.</p>
     */
    inline Pipeline& WithLogPublishingOptions(const LogPublishingOptions& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Key-value pairs that represent log publishing settings.</p>
     */
    inline Pipeline& WithLogPublishingOptions(LogPublishingOptions&& value) { SetLogPublishingOptions(std::move(value)); return *this;}


    /**
     * <p>The VPC interface endpoints that have access to the pipeline.</p>
     */
    inline const Aws::Vector<VpcEndpoint>& GetVpcEndpoints() const{ return m_vpcEndpoints; }

    /**
     * <p>The VPC interface endpoints that have access to the pipeline.</p>
     */
    inline bool VpcEndpointsHasBeenSet() const { return m_vpcEndpointsHasBeenSet; }

    /**
     * <p>The VPC interface endpoints that have access to the pipeline.</p>
     */
    inline void SetVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints = value; }

    /**
     * <p>The VPC interface endpoints that have access to the pipeline.</p>
     */
    inline void SetVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints = std::move(value); }

    /**
     * <p>The VPC interface endpoints that have access to the pipeline.</p>
     */
    inline Pipeline& WithVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { SetVpcEndpoints(value); return *this;}

    /**
     * <p>The VPC interface endpoints that have access to the pipeline.</p>
     */
    inline Pipeline& WithVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { SetVpcEndpoints(std::move(value)); return *this;}

    /**
     * <p>The VPC interface endpoints that have access to the pipeline.</p>
     */
    inline Pipeline& AddVpcEndpoints(const VpcEndpoint& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints.push_back(value); return *this; }

    /**
     * <p>The VPC interface endpoints that have access to the pipeline.</p>
     */
    inline Pipeline& AddVpcEndpoints(VpcEndpoint&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints.push_back(std::move(value)); return *this; }


    
    inline const BufferOptions& GetBufferOptions() const{ return m_bufferOptions; }

    
    inline bool BufferOptionsHasBeenSet() const { return m_bufferOptionsHasBeenSet; }

    
    inline void SetBufferOptions(const BufferOptions& value) { m_bufferOptionsHasBeenSet = true; m_bufferOptions = value; }

    
    inline void SetBufferOptions(BufferOptions&& value) { m_bufferOptionsHasBeenSet = true; m_bufferOptions = std::move(value); }

    
    inline Pipeline& WithBufferOptions(const BufferOptions& value) { SetBufferOptions(value); return *this;}

    
    inline Pipeline& WithBufferOptions(BufferOptions&& value) { SetBufferOptions(std::move(value)); return *this;}


    
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    
    inline Pipeline& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}

    
    inline Pipeline& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>A list of VPC endpoints that OpenSearch Ingestion has created to other AWS
     * services.</p>
     */
    inline const Aws::Vector<ServiceVpcEndpoint>& GetServiceVpcEndpoints() const{ return m_serviceVpcEndpoints; }

    /**
     * <p>A list of VPC endpoints that OpenSearch Ingestion has created to other AWS
     * services.</p>
     */
    inline bool ServiceVpcEndpointsHasBeenSet() const { return m_serviceVpcEndpointsHasBeenSet; }

    /**
     * <p>A list of VPC endpoints that OpenSearch Ingestion has created to other AWS
     * services.</p>
     */
    inline void SetServiceVpcEndpoints(const Aws::Vector<ServiceVpcEndpoint>& value) { m_serviceVpcEndpointsHasBeenSet = true; m_serviceVpcEndpoints = value; }

    /**
     * <p>A list of VPC endpoints that OpenSearch Ingestion has created to other AWS
     * services.</p>
     */
    inline void SetServiceVpcEndpoints(Aws::Vector<ServiceVpcEndpoint>&& value) { m_serviceVpcEndpointsHasBeenSet = true; m_serviceVpcEndpoints = std::move(value); }

    /**
     * <p>A list of VPC endpoints that OpenSearch Ingestion has created to other AWS
     * services.</p>
     */
    inline Pipeline& WithServiceVpcEndpoints(const Aws::Vector<ServiceVpcEndpoint>& value) { SetServiceVpcEndpoints(value); return *this;}

    /**
     * <p>A list of VPC endpoints that OpenSearch Ingestion has created to other AWS
     * services.</p>
     */
    inline Pipeline& WithServiceVpcEndpoints(Aws::Vector<ServiceVpcEndpoint>&& value) { SetServiceVpcEndpoints(std::move(value)); return *this;}

    /**
     * <p>A list of VPC endpoints that OpenSearch Ingestion has created to other AWS
     * services.</p>
     */
    inline Pipeline& AddServiceVpcEndpoints(const ServiceVpcEndpoint& value) { m_serviceVpcEndpointsHasBeenSet = true; m_serviceVpcEndpoints.push_back(value); return *this; }

    /**
     * <p>A list of VPC endpoints that OpenSearch Ingestion has created to other AWS
     * services.</p>
     */
    inline Pipeline& AddServiceVpcEndpoints(ServiceVpcEndpoint&& value) { m_serviceVpcEndpointsHasBeenSet = true; m_serviceVpcEndpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline Pipeline& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline Pipeline& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline Pipeline& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline Pipeline& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    int m_minUnits;
    bool m_minUnitsHasBeenSet = false;

    int m_maxUnits;
    bool m_maxUnitsHasBeenSet = false;

    PipelineStatus m_status;
    bool m_statusHasBeenSet = false;

    PipelineStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_pipelineConfigurationBody;
    bool m_pipelineConfigurationBodyHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
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

    Aws::Vector<ServiceVpcEndpoint> m_serviceVpcEndpoints;
    bool m_serviceVpcEndpointsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/OSISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/LogPublishingOptions.h>
#include <aws/osis/model/VpcOptions.h>
#include <aws/osis/model/BufferOptions.h>
#include <aws/osis/model/EncryptionAtRestOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/osis/model/Tag.h>
#include <utility>

namespace Aws
{
namespace OSIS
{
namespace Model
{

  /**
   */
  class CreatePipelineRequest : public OSISRequest
  {
  public:
    AWS_OSIS_API CreatePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePipeline"; }

    AWS_OSIS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the OpenSearch Ingestion pipeline to create. Pipeline names are
     * unique across the pipelines owned by an account within an Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the OpenSearch Ingestion pipeline to create. Pipeline names are
     * unique across the pipelines owned by an account within an Amazon Web Services
     * Region.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the OpenSearch Ingestion pipeline to create. Pipeline names are
     * unique across the pipelines owned by an account within an Amazon Web Services
     * Region.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the OpenSearch Ingestion pipeline to create. Pipeline names are
     * unique across the pipelines owned by an account within an Amazon Web Services
     * Region.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the OpenSearch Ingestion pipeline to create. Pipeline names are
     * unique across the pipelines owned by an account within an Amazon Web Services
     * Region.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the OpenSearch Ingestion pipeline to create. Pipeline names are
     * unique across the pipelines owned by an account within an Amazon Web Services
     * Region.</p>
     */
    inline CreatePipelineRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the OpenSearch Ingestion pipeline to create. Pipeline names are
     * unique across the pipelines owned by an account within an Amazon Web Services
     * Region.</p>
     */
    inline CreatePipelineRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the OpenSearch Ingestion pipeline to create. Pipeline names are
     * unique across the pipelines owned by an account within an Amazon Web Services
     * Region.</p>
     */
    inline CreatePipelineRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


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
    inline CreatePipelineRequest& WithMinUnits(int value) { SetMinUnits(value); return *this;}


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
    inline CreatePipelineRequest& WithMaxUnits(int value) { SetMaxUnits(value); return *this;}


    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline const Aws::String& GetPipelineConfigurationBody() const{ return m_pipelineConfigurationBody; }

    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline bool PipelineConfigurationBodyHasBeenSet() const { return m_pipelineConfigurationBodyHasBeenSet; }

    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline void SetPipelineConfigurationBody(const Aws::String& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = value; }

    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline void SetPipelineConfigurationBody(Aws::String&& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = std::move(value); }

    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline void SetPipelineConfigurationBody(const char* value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody.assign(value); }

    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline CreatePipelineRequest& WithPipelineConfigurationBody(const Aws::String& value) { SetPipelineConfigurationBody(value); return *this;}

    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline CreatePipelineRequest& WithPipelineConfigurationBody(Aws::String&& value) { SetPipelineConfigurationBody(std::move(value)); return *this;}

    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline CreatePipelineRequest& WithPipelineConfigurationBody(const char* value) { SetPipelineConfigurationBody(value); return *this;}


    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline const LogPublishingOptions& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline void SetLogPublishingOptions(const LogPublishingOptions& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline void SetLogPublishingOptions(LogPublishingOptions&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline CreatePipelineRequest& WithLogPublishingOptions(const LogPublishingOptions& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline CreatePipelineRequest& WithLogPublishingOptions(LogPublishingOptions&& value) { SetLogPublishingOptions(std::move(value)); return *this;}


    /**
     * <p>Container for the values required to configure VPC access for the pipeline.
     * If you don't specify these values, OpenSearch Ingestion creates the pipeline
     * with a public endpoint.</p>
     */
    inline const VpcOptions& GetVpcOptions() const{ return m_vpcOptions; }

    /**
     * <p>Container for the values required to configure VPC access for the pipeline.
     * If you don't specify these values, OpenSearch Ingestion creates the pipeline
     * with a public endpoint.</p>
     */
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }

    /**
     * <p>Container for the values required to configure VPC access for the pipeline.
     * If you don't specify these values, OpenSearch Ingestion creates the pipeline
     * with a public endpoint.</p>
     */
    inline void SetVpcOptions(const VpcOptions& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = value; }

    /**
     * <p>Container for the values required to configure VPC access for the pipeline.
     * If you don't specify these values, OpenSearch Ingestion creates the pipeline
     * with a public endpoint.</p>
     */
    inline void SetVpcOptions(VpcOptions&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::move(value); }

    /**
     * <p>Container for the values required to configure VPC access for the pipeline.
     * If you don't specify these values, OpenSearch Ingestion creates the pipeline
     * with a public endpoint.</p>
     */
    inline CreatePipelineRequest& WithVpcOptions(const VpcOptions& value) { SetVpcOptions(value); return *this;}

    /**
     * <p>Container for the values required to configure VPC access for the pipeline.
     * If you don't specify these values, OpenSearch Ingestion creates the pipeline
     * with a public endpoint.</p>
     */
    inline CreatePipelineRequest& WithVpcOptions(VpcOptions&& value) { SetVpcOptions(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs to configure persistent buffering for the pipeline.</p>
     */
    inline const BufferOptions& GetBufferOptions() const{ return m_bufferOptions; }

    /**
     * <p>Key-value pairs to configure persistent buffering for the pipeline.</p>
     */
    inline bool BufferOptionsHasBeenSet() const { return m_bufferOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to configure persistent buffering for the pipeline.</p>
     */
    inline void SetBufferOptions(const BufferOptions& value) { m_bufferOptionsHasBeenSet = true; m_bufferOptions = value; }

    /**
     * <p>Key-value pairs to configure persistent buffering for the pipeline.</p>
     */
    inline void SetBufferOptions(BufferOptions&& value) { m_bufferOptionsHasBeenSet = true; m_bufferOptions = std::move(value); }

    /**
     * <p>Key-value pairs to configure persistent buffering for the pipeline.</p>
     */
    inline CreatePipelineRequest& WithBufferOptions(const BufferOptions& value) { SetBufferOptions(value); return *this;}

    /**
     * <p>Key-value pairs to configure persistent buffering for the pipeline.</p>
     */
    inline CreatePipelineRequest& WithBufferOptions(BufferOptions&& value) { SetBufferOptions(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs to configure encryption for data that is written to a
     * persistent buffer.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>Key-value pairs to configure encryption for data that is written to a
     * persistent buffer.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to configure encryption for data that is written to a
     * persistent buffer.</p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>Key-value pairs to configure encryption for data that is written to a
     * persistent buffer.</p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>Key-value pairs to configure encryption for data that is written to a
     * persistent buffer.</p>
     */
    inline CreatePipelineRequest& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>Key-value pairs to configure encryption for data that is written to a
     * persistent buffer.</p>
     */
    inline CreatePipelineRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>List of tags to add to the pipeline upon creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>List of tags to add to the pipeline upon creation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>List of tags to add to the pipeline upon creation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>List of tags to add to the pipeline upon creation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>List of tags to add to the pipeline upon creation.</p>
     */
    inline CreatePipelineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>List of tags to add to the pipeline upon creation.</p>
     */
    inline CreatePipelineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>List of tags to add to the pipeline upon creation.</p>
     */
    inline CreatePipelineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>List of tags to add to the pipeline upon creation.</p>
     */
    inline CreatePipelineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    int m_minUnits;
    bool m_minUnitsHasBeenSet = false;

    int m_maxUnits;
    bool m_maxUnitsHasBeenSet = false;

    Aws::String m_pipelineConfigurationBody;
    bool m_pipelineConfigurationBodyHasBeenSet = false;

    LogPublishingOptions m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    VpcOptions m_vpcOptions;
    bool m_vpcOptionsHasBeenSet = false;

    BufferOptions m_bufferOptions;
    bool m_bufferOptionsHasBeenSet = false;

    EncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

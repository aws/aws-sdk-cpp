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
    AWS_OSIS_API CreatePipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePipeline"; }

    AWS_OSIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the OpenSearch Ingestion pipeline to create. Pipeline names are
     * unique across the pipelines owned by an account within an Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    CreatePipelineRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline int GetMinUnits() const { return m_minUnits; }
    inline bool MinUnitsHasBeenSet() const { return m_minUnitsHasBeenSet; }
    inline void SetMinUnits(int value) { m_minUnitsHasBeenSet = true; m_minUnits = value; }
    inline CreatePipelineRequest& WithMinUnits(int value) { SetMinUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline int GetMaxUnits() const { return m_maxUnits; }
    inline bool MaxUnitsHasBeenSet() const { return m_maxUnitsHasBeenSet; }
    inline void SetMaxUnits(int value) { m_maxUnitsHasBeenSet = true; m_maxUnits = value; }
    inline CreatePipelineRequest& WithMaxUnits(int value) { SetMaxUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline const Aws::String& GetPipelineConfigurationBody() const { return m_pipelineConfigurationBody; }
    inline bool PipelineConfigurationBodyHasBeenSet() const { return m_pipelineConfigurationBodyHasBeenSet; }
    template<typename PipelineConfigurationBodyT = Aws::String>
    void SetPipelineConfigurationBody(PipelineConfigurationBodyT&& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = std::forward<PipelineConfigurationBodyT>(value); }
    template<typename PipelineConfigurationBodyT = Aws::String>
    CreatePipelineRequest& WithPipelineConfigurationBody(PipelineConfigurationBodyT&& value) { SetPipelineConfigurationBody(std::forward<PipelineConfigurationBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline const LogPublishingOptions& GetLogPublishingOptions() const { return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    template<typename LogPublishingOptionsT = LogPublishingOptions>
    void SetLogPublishingOptions(LogPublishingOptionsT&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::forward<LogPublishingOptionsT>(value); }
    template<typename LogPublishingOptionsT = LogPublishingOptions>
    CreatePipelineRequest& WithLogPublishingOptions(LogPublishingOptionsT&& value) { SetLogPublishingOptions(std::forward<LogPublishingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the values required to configure VPC access for the pipeline.
     * If you don't specify these values, OpenSearch Ingestion creates the pipeline
     * with a public endpoint.</p>
     */
    inline const VpcOptions& GetVpcOptions() const { return m_vpcOptions; }
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }
    template<typename VpcOptionsT = VpcOptions>
    void SetVpcOptions(VpcOptionsT&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::forward<VpcOptionsT>(value); }
    template<typename VpcOptionsT = VpcOptions>
    CreatePipelineRequest& WithVpcOptions(VpcOptionsT&& value) { SetVpcOptions(std::forward<VpcOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure persistent buffering for the pipeline.</p>
     */
    inline const BufferOptions& GetBufferOptions() const { return m_bufferOptions; }
    inline bool BufferOptionsHasBeenSet() const { return m_bufferOptionsHasBeenSet; }
    template<typename BufferOptionsT = BufferOptions>
    void SetBufferOptions(BufferOptionsT&& value) { m_bufferOptionsHasBeenSet = true; m_bufferOptions = std::forward<BufferOptionsT>(value); }
    template<typename BufferOptionsT = BufferOptions>
    CreatePipelineRequest& WithBufferOptions(BufferOptionsT&& value) { SetBufferOptions(std::forward<BufferOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure encryption for data that is written to a
     * persistent buffer.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const { return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    void SetEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::forward<EncryptionAtRestOptionsT>(value); }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    CreatePipelineRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { SetEncryptionAtRestOptions(std::forward<EncryptionAtRestOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of tags to add to the pipeline upon creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreatePipelineRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreatePipelineRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants the pipeline
     * permission to access Amazon Web Services resources.</p>
     */
    inline const Aws::String& GetPipelineRoleArn() const { return m_pipelineRoleArn; }
    inline bool PipelineRoleArnHasBeenSet() const { return m_pipelineRoleArnHasBeenSet; }
    template<typename PipelineRoleArnT = Aws::String>
    void SetPipelineRoleArn(PipelineRoleArnT&& value) { m_pipelineRoleArnHasBeenSet = true; m_pipelineRoleArn = std::forward<PipelineRoleArnT>(value); }
    template<typename PipelineRoleArnT = Aws::String>
    CreatePipelineRequest& WithPipelineRoleArn(PipelineRoleArnT&& value) { SetPipelineRoleArn(std::forward<PipelineRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    int m_minUnits{0};
    bool m_minUnitsHasBeenSet = false;

    int m_maxUnits{0};
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

    Aws::String m_pipelineRoleArn;
    bool m_pipelineRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

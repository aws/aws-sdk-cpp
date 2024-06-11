/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/OSISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/LogPublishingOptions.h>
#include <aws/osis/model/BufferOptions.h>
#include <aws/osis/model/EncryptionAtRestOptions.h>
#include <utility>

namespace Aws
{
namespace OSIS
{
namespace Model
{

  /**
   */
  class UpdatePipelineRequest : public OSISRequest
  {
  public:
    AWS_OSIS_API UpdatePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipeline"; }

    AWS_OSIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }
    inline UpdatePipelineRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline UpdatePipelineRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline UpdatePipelineRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum pipeline capacity, in Ingestion Compute Units (ICUs).</p>
     */
    inline int GetMinUnits() const{ return m_minUnits; }
    inline bool MinUnitsHasBeenSet() const { return m_minUnitsHasBeenSet; }
    inline void SetMinUnits(int value) { m_minUnitsHasBeenSet = true; m_minUnits = value; }
    inline UpdatePipelineRequest& WithMinUnits(int value) { SetMinUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum pipeline capacity, in Ingestion Compute Units (ICUs)</p>
     */
    inline int GetMaxUnits() const{ return m_maxUnits; }
    inline bool MaxUnitsHasBeenSet() const { return m_maxUnitsHasBeenSet; }
    inline void SetMaxUnits(int value) { m_maxUnitsHasBeenSet = true; m_maxUnits = value; }
    inline UpdatePipelineRequest& WithMaxUnits(int value) { SetMaxUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline const Aws::String& GetPipelineConfigurationBody() const{ return m_pipelineConfigurationBody; }
    inline bool PipelineConfigurationBodyHasBeenSet() const { return m_pipelineConfigurationBodyHasBeenSet; }
    inline void SetPipelineConfigurationBody(const Aws::String& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = value; }
    inline void SetPipelineConfigurationBody(Aws::String&& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = std::move(value); }
    inline void SetPipelineConfigurationBody(const char* value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody.assign(value); }
    inline UpdatePipelineRequest& WithPipelineConfigurationBody(const Aws::String& value) { SetPipelineConfigurationBody(value); return *this;}
    inline UpdatePipelineRequest& WithPipelineConfigurationBody(Aws::String&& value) { SetPipelineConfigurationBody(std::move(value)); return *this;}
    inline UpdatePipelineRequest& WithPipelineConfigurationBody(const char* value) { SetPipelineConfigurationBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline const LogPublishingOptions& GetLogPublishingOptions() const{ return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    inline void SetLogPublishingOptions(const LogPublishingOptions& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }
    inline void SetLogPublishingOptions(LogPublishingOptions&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }
    inline UpdatePipelineRequest& WithLogPublishingOptions(const LogPublishingOptions& value) { SetLogPublishingOptions(value); return *this;}
    inline UpdatePipelineRequest& WithLogPublishingOptions(LogPublishingOptions&& value) { SetLogPublishingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure persistent buffering for the pipeline.</p>
     */
    inline const BufferOptions& GetBufferOptions() const{ return m_bufferOptions; }
    inline bool BufferOptionsHasBeenSet() const { return m_bufferOptionsHasBeenSet; }
    inline void SetBufferOptions(const BufferOptions& value) { m_bufferOptionsHasBeenSet = true; m_bufferOptions = value; }
    inline void SetBufferOptions(BufferOptions&& value) { m_bufferOptionsHasBeenSet = true; m_bufferOptions = std::move(value); }
    inline UpdatePipelineRequest& WithBufferOptions(const BufferOptions& value) { SetBufferOptions(value); return *this;}
    inline UpdatePipelineRequest& WithBufferOptions(BufferOptions&& value) { SetBufferOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure encryption for data that is written to a
     * persistent buffer.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }
    inline UpdatePipelineRequest& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}
    inline UpdatePipelineRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}
    ///@}
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

    BufferOptions m_bufferOptions;
    bool m_bufferOptionsHasBeenSet = false;

    EncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/model/PipelineStatus.h>
#include <aws/osis/model/PipelineStatusReason.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Summary information for an OpenSearch Ingestion pipeline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/PipelineSummary">AWS
   * API Reference</a></p>
   */
  class PipelineSummary
  {
  public:
    AWS_OSIS_API PipelineSummary();
    AWS_OSIS_API PipelineSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API PipelineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline PipelineSummary& WithStatus(const PipelineStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the pipeline.</p>
     */
    inline PipelineSummary& WithStatus(PipelineStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const PipelineStatusReason& GetStatusReason() const{ return m_statusReason; }

    
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    
    inline void SetStatusReason(const PipelineStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    
    inline void SetStatusReason(PipelineStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    
    inline PipelineSummary& WithStatusReason(const PipelineStatusReason& value) { SetStatusReason(value); return *this;}

    
    inline PipelineSummary& WithStatusReason(PipelineStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}


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
    inline PipelineSummary& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


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
    inline PipelineSummary& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}


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
    inline PipelineSummary& WithMinUnits(int value) { SetMinUnits(value); return *this;}


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
    inline PipelineSummary& WithMaxUnits(int value) { SetMaxUnits(value); return *this;}


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
    inline PipelineSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the pipeline was created.</p>
     */
    inline PipelineSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline PipelineSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time when the pipeline was last updated.</p>
     */
    inline PipelineSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


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
    inline PipelineSummary& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline PipelineSummary& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline PipelineSummary& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with the given pipeline.</p>
     */
    inline PipelineSummary& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    PipelineStatus m_status;
    bool m_statusHasBeenSet = false;

    PipelineStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    int m_minUnits;
    bool m_minUnitsHasBeenSet = false;

    int m_maxUnits;
    bool m_maxUnitsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/NodeFromTemplateJobStatus.h>
#include <aws/panorama/model/TemplateType.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A job to create a camera stream node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NodeFromTemplateJob">AWS
   * API Reference</a></p>
   */
  class NodeFromTemplateJob
  {
  public:
    AWS_PANORAMA_API NodeFromTemplateJob();
    AWS_PANORAMA_API NodeFromTemplateJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NodeFromTemplateJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the job was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>When the job was created.</p>
     */
    inline NodeFromTemplateJob& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the job was created.</p>
     */
    inline NodeFromTemplateJob& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job's ID.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline NodeFromTemplateJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline NodeFromTemplateJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline NodeFromTemplateJob& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The node's name.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }

    /**
     * <p>The node's name.</p>
     */
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }

    /**
     * <p>The node's name.</p>
     */
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }

    /**
     * <p>The node's name.</p>
     */
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }

    /**
     * <p>The node's name.</p>
     */
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }

    /**
     * <p>The node's name.</p>
     */
    inline NodeFromTemplateJob& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}

    /**
     * <p>The node's name.</p>
     */
    inline NodeFromTemplateJob& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}

    /**
     * <p>The node's name.</p>
     */
    inline NodeFromTemplateJob& WithNodeName(const char* value) { SetNodeName(value); return *this;}


    /**
     * <p>The job's status.</p>
     */
    inline const NodeFromTemplateJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The job's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(const NodeFromTemplateJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(NodeFromTemplateJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The job's status.</p>
     */
    inline NodeFromTemplateJob& WithStatus(const NodeFromTemplateJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The job's status.</p>
     */
    inline NodeFromTemplateJob& WithStatus(NodeFromTemplateJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The job's status message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The job's status message.</p>
     */
    inline NodeFromTemplateJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline NodeFromTemplateJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline NodeFromTemplateJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The job's template type.</p>
     */
    inline const TemplateType& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The job's template type.</p>
     */
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }

    /**
     * <p>The job's template type.</p>
     */
    inline void SetTemplateType(const TemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }

    /**
     * <p>The job's template type.</p>
     */
    inline void SetTemplateType(TemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }

    /**
     * <p>The job's template type.</p>
     */
    inline NodeFromTemplateJob& WithTemplateType(const TemplateType& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The job's template type.</p>
     */
    inline NodeFromTemplateJob& WithTemplateType(TemplateType&& value) { SetTemplateType(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    NodeFromTemplateJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    TemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

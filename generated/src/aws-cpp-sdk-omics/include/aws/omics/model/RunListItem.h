/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/RunStatus.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A workflow run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/RunListItem">AWS
   * API Reference</a></p>
   */
  class RunListItem
  {
  public:
    AWS_OMICS_API RunListItem();
    AWS_OMICS_API RunListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API RunListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The run's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The run's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The run's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The run's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The run's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The run's ARN.</p>
     */
    inline RunListItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The run's ARN.</p>
     */
    inline RunListItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The run's ARN.</p>
     */
    inline RunListItem& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the run was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the run was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the run was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the run was created.</p>
     */
    inline RunListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the run was created.</p>
     */
    inline RunListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The run's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The run's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The run's ID.</p>
     */
    inline RunListItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The run's ID.</p>
     */
    inline RunListItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The run's ID.</p>
     */
    inline RunListItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The run's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The run's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The run's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The run's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The run's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The run's name.</p>
     */
    inline RunListItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The run's name.</p>
     */
    inline RunListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The run's name.</p>
     */
    inline RunListItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The run's priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The run's priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The run's priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The run's priority.</p>
     */
    inline RunListItem& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>When the run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>When the run started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>When the run started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>When the run started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>When the run started.</p>
     */
    inline RunListItem& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>When the run started.</p>
     */
    inline RunListItem& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The run's status.</p>
     */
    inline const RunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The run's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The run's status.</p>
     */
    inline void SetStatus(const RunStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The run's status.</p>
     */
    inline void SetStatus(RunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The run's status.</p>
     */
    inline RunListItem& WithStatus(const RunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The run's status.</p>
     */
    inline RunListItem& WithStatus(RunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the run stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }

    /**
     * <p>When the run stopped.</p>
     */
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }

    /**
     * <p>When the run stopped.</p>
     */
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTimeHasBeenSet = true; m_stopTime = value; }

    /**
     * <p>When the run stopped.</p>
     */
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::move(value); }

    /**
     * <p>When the run stopped.</p>
     */
    inline RunListItem& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}

    /**
     * <p>When the run stopped.</p>
     */
    inline RunListItem& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}


    /**
     * <p>The run's storage capacity.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }

    /**
     * <p>The run's storage capacity.</p>
     */
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }

    /**
     * <p>The run's storage capacity.</p>
     */
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }

    /**
     * <p>The run's storage capacity.</p>
     */
    inline RunListItem& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}


    /**
     * <p>The run's workflow ID.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline RunListItem& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The run's workflow ID.</p>
     */
    inline RunListItem& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The run's workflow ID.</p>
     */
    inline RunListItem& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    RunStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime;
    bool m_stopTimeHasBeenSet = false;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/OutputSource.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Includes information about the specified association execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationExecutionTarget">AWS
   * API Reference</a></p>
   */
  class AssociationExecutionTarget
  {
  public:
    AWS_SSM_API AssociationExecutionTarget();
    AWS_SSM_API AssociationExecutionTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationExecutionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline AssociationExecutionTarget& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline AssociationExecutionTarget& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline AssociationExecutionTarget& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association version.</p>
     */
    inline const Aws::String& GetAssociationVersion() const{ return m_associationVersion; }
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }
    inline void SetAssociationVersion(const Aws::String& value) { m_associationVersionHasBeenSet = true; m_associationVersion = value; }
    inline void SetAssociationVersion(Aws::String&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::move(value); }
    inline void SetAssociationVersion(const char* value) { m_associationVersionHasBeenSet = true; m_associationVersion.assign(value); }
    inline AssociationExecutionTarget& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}
    inline AssociationExecutionTarget& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}
    inline AssociationExecutionTarget& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution ID.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }
    inline AssociationExecutionTarget& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline AssociationExecutionTarget& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline AssociationExecutionTarget& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID, for example, the managed node ID where the association
     * ran.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline AssociationExecutionTarget& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline AssociationExecutionTarget& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline AssociationExecutionTarget& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type, for example, EC2.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline AssociationExecutionTarget& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline AssociationExecutionTarget& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline AssociationExecutionTarget& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association execution status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AssociationExecutionTarget& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AssociationExecutionTarget& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AssociationExecutionTarget& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the execution status.</p>
     */
    inline const Aws::String& GetDetailedStatus() const{ return m_detailedStatus; }
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
    inline void SetDetailedStatus(const Aws::String& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }
    inline void SetDetailedStatus(Aws::String&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::move(value); }
    inline void SetDetailedStatus(const char* value) { m_detailedStatusHasBeenSet = true; m_detailedStatus.assign(value); }
    inline AssociationExecutionTarget& WithDetailedStatus(const Aws::String& value) { SetDetailedStatus(value); return *this;}
    inline AssociationExecutionTarget& WithDetailedStatus(Aws::String&& value) { SetDetailedStatus(std::move(value)); return *this;}
    inline AssociationExecutionTarget& WithDetailedStatus(const char* value) { SetDetailedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the last execution.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const{ return m_lastExecutionDate; }
    inline bool LastExecutionDateHasBeenSet() const { return m_lastExecutionDateHasBeenSet; }
    inline void SetLastExecutionDate(const Aws::Utils::DateTime& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = value; }
    inline void SetLastExecutionDate(Aws::Utils::DateTime&& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = std::move(value); }
    inline AssociationExecutionTarget& WithLastExecutionDate(const Aws::Utils::DateTime& value) { SetLastExecutionDate(value); return *this;}
    inline AssociationExecutionTarget& WithLastExecutionDate(Aws::Utils::DateTime&& value) { SetLastExecutionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where the association details are saved.</p>
     */
    inline const OutputSource& GetOutputSource() const{ return m_outputSource; }
    inline bool OutputSourceHasBeenSet() const { return m_outputSourceHasBeenSet; }
    inline void SetOutputSource(const OutputSource& value) { m_outputSourceHasBeenSet = true; m_outputSource = value; }
    inline void SetOutputSource(OutputSource&& value) { m_outputSourceHasBeenSet = true; m_outputSource = std::move(value); }
    inline AssociationExecutionTarget& WithOutputSource(const OutputSource& value) { SetOutputSource(value); return *this;}
    inline AssociationExecutionTarget& WithOutputSource(OutputSource&& value) { SetOutputSource(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_detailedStatus;
    bool m_detailedStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastExecutionDate;
    bool m_lastExecutionDateHasBeenSet = false;

    OutputSource m_outputSource;
    bool m_outputSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

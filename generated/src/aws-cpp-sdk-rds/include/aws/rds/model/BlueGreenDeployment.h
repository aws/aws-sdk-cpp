/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/SwitchoverDetail.h>
#include <aws/rds/model/BlueGreenDeploymentTask.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the details about a blue/green deployment.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
   * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
   * User Guide</i> and <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">
   * Using Amazon RDS Blue/Green Deployments for database updates</a> in the
   * <i>Amazon Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/BlueGreenDeployment">AWS
   * API Reference</a></p>
   */
  class BlueGreenDeployment
  {
  public:
    AWS_RDS_API BlueGreenDeployment();
    AWS_RDS_API BlueGreenDeployment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API BlueGreenDeployment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The system-generated identifier of the blue/green deployment.</p>
     */
    inline const Aws::String& GetBlueGreenDeploymentIdentifier() const{ return m_blueGreenDeploymentIdentifier; }

    /**
     * <p>The system-generated identifier of the blue/green deployment.</p>
     */
    inline bool BlueGreenDeploymentIdentifierHasBeenSet() const { return m_blueGreenDeploymentIdentifierHasBeenSet; }

    /**
     * <p>The system-generated identifier of the blue/green deployment.</p>
     */
    inline void SetBlueGreenDeploymentIdentifier(const Aws::String& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = value; }

    /**
     * <p>The system-generated identifier of the blue/green deployment.</p>
     */
    inline void SetBlueGreenDeploymentIdentifier(Aws::String&& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = std::move(value); }

    /**
     * <p>The system-generated identifier of the blue/green deployment.</p>
     */
    inline void SetBlueGreenDeploymentIdentifier(const char* value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier.assign(value); }

    /**
     * <p>The system-generated identifier of the blue/green deployment.</p>
     */
    inline BlueGreenDeployment& WithBlueGreenDeploymentIdentifier(const Aws::String& value) { SetBlueGreenDeploymentIdentifier(value); return *this;}

    /**
     * <p>The system-generated identifier of the blue/green deployment.</p>
     */
    inline BlueGreenDeployment& WithBlueGreenDeploymentIdentifier(Aws::String&& value) { SetBlueGreenDeploymentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The system-generated identifier of the blue/green deployment.</p>
     */
    inline BlueGreenDeployment& WithBlueGreenDeploymentIdentifier(const char* value) { SetBlueGreenDeploymentIdentifier(value); return *this;}


    /**
     * <p>The user-supplied name of the blue/green deployment.</p>
     */
    inline const Aws::String& GetBlueGreenDeploymentName() const{ return m_blueGreenDeploymentName; }

    /**
     * <p>The user-supplied name of the blue/green deployment.</p>
     */
    inline bool BlueGreenDeploymentNameHasBeenSet() const { return m_blueGreenDeploymentNameHasBeenSet; }

    /**
     * <p>The user-supplied name of the blue/green deployment.</p>
     */
    inline void SetBlueGreenDeploymentName(const Aws::String& value) { m_blueGreenDeploymentNameHasBeenSet = true; m_blueGreenDeploymentName = value; }

    /**
     * <p>The user-supplied name of the blue/green deployment.</p>
     */
    inline void SetBlueGreenDeploymentName(Aws::String&& value) { m_blueGreenDeploymentNameHasBeenSet = true; m_blueGreenDeploymentName = std::move(value); }

    /**
     * <p>The user-supplied name of the blue/green deployment.</p>
     */
    inline void SetBlueGreenDeploymentName(const char* value) { m_blueGreenDeploymentNameHasBeenSet = true; m_blueGreenDeploymentName.assign(value); }

    /**
     * <p>The user-supplied name of the blue/green deployment.</p>
     */
    inline BlueGreenDeployment& WithBlueGreenDeploymentName(const Aws::String& value) { SetBlueGreenDeploymentName(value); return *this;}

    /**
     * <p>The user-supplied name of the blue/green deployment.</p>
     */
    inline BlueGreenDeployment& WithBlueGreenDeploymentName(Aws::String&& value) { SetBlueGreenDeploymentName(std::move(value)); return *this;}

    /**
     * <p>The user-supplied name of the blue/green deployment.</p>
     */
    inline BlueGreenDeployment& WithBlueGreenDeploymentName(const char* value) { SetBlueGreenDeploymentName(value); return *this;}


    /**
     * <p>The source database for the blue/green deployment.</p> <p>Before switchover,
     * the source database is the production database in the blue environment.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source database for the blue/green deployment.</p> <p>Before switchover,
     * the source database is the production database in the blue environment.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source database for the blue/green deployment.</p> <p>Before switchover,
     * the source database is the production database in the blue environment.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source database for the blue/green deployment.</p> <p>Before switchover,
     * the source database is the production database in the blue environment.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source database for the blue/green deployment.</p> <p>Before switchover,
     * the source database is the production database in the blue environment.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source database for the blue/green deployment.</p> <p>Before switchover,
     * the source database is the production database in the blue environment.</p>
     */
    inline BlueGreenDeployment& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source database for the blue/green deployment.</p> <p>Before switchover,
     * the source database is the production database in the blue environment.</p>
     */
    inline BlueGreenDeployment& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source database for the blue/green deployment.</p> <p>Before switchover,
     * the source database is the production database in the blue environment.</p>
     */
    inline BlueGreenDeployment& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The target database for the blue/green deployment.</p> <p>Before switchover,
     * the target database is the clone database in the green environment.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The target database for the blue/green deployment.</p> <p>Before switchover,
     * the target database is the clone database in the green environment.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target database for the blue/green deployment.</p> <p>Before switchover,
     * the target database is the clone database in the green environment.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target database for the blue/green deployment.</p> <p>Before switchover,
     * the target database is the clone database in the green environment.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target database for the blue/green deployment.</p> <p>Before switchover,
     * the target database is the clone database in the green environment.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The target database for the blue/green deployment.</p> <p>Before switchover,
     * the target database is the clone database in the green environment.</p>
     */
    inline BlueGreenDeployment& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The target database for the blue/green deployment.</p> <p>Before switchover,
     * the target database is the clone database in the green environment.</p>
     */
    inline BlueGreenDeployment& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The target database for the blue/green deployment.</p> <p>Before switchover,
     * the target database is the clone database in the green environment.</p>
     */
    inline BlueGreenDeployment& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The details about each source and target resource in the blue/green
     * deployment.</p>
     */
    inline const Aws::Vector<SwitchoverDetail>& GetSwitchoverDetails() const{ return m_switchoverDetails; }

    /**
     * <p>The details about each source and target resource in the blue/green
     * deployment.</p>
     */
    inline bool SwitchoverDetailsHasBeenSet() const { return m_switchoverDetailsHasBeenSet; }

    /**
     * <p>The details about each source and target resource in the blue/green
     * deployment.</p>
     */
    inline void SetSwitchoverDetails(const Aws::Vector<SwitchoverDetail>& value) { m_switchoverDetailsHasBeenSet = true; m_switchoverDetails = value; }

    /**
     * <p>The details about each source and target resource in the blue/green
     * deployment.</p>
     */
    inline void SetSwitchoverDetails(Aws::Vector<SwitchoverDetail>&& value) { m_switchoverDetailsHasBeenSet = true; m_switchoverDetails = std::move(value); }

    /**
     * <p>The details about each source and target resource in the blue/green
     * deployment.</p>
     */
    inline BlueGreenDeployment& WithSwitchoverDetails(const Aws::Vector<SwitchoverDetail>& value) { SetSwitchoverDetails(value); return *this;}

    /**
     * <p>The details about each source and target resource in the blue/green
     * deployment.</p>
     */
    inline BlueGreenDeployment& WithSwitchoverDetails(Aws::Vector<SwitchoverDetail>&& value) { SetSwitchoverDetails(std::move(value)); return *this;}

    /**
     * <p>The details about each source and target resource in the blue/green
     * deployment.</p>
     */
    inline BlueGreenDeployment& AddSwitchoverDetails(const SwitchoverDetail& value) { m_switchoverDetailsHasBeenSet = true; m_switchoverDetails.push_back(value); return *this; }

    /**
     * <p>The details about each source and target resource in the blue/green
     * deployment.</p>
     */
    inline BlueGreenDeployment& AddSwitchoverDetails(SwitchoverDetail&& value) { m_switchoverDetailsHasBeenSet = true; m_switchoverDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>Either tasks to be performed or tasks that have been completed on the target
     * database before switchover.</p>
     */
    inline const Aws::Vector<BlueGreenDeploymentTask>& GetTasks() const{ return m_tasks; }

    /**
     * <p>Either tasks to be performed or tasks that have been completed on the target
     * database before switchover.</p>
     */
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }

    /**
     * <p>Either tasks to be performed or tasks that have been completed on the target
     * database before switchover.</p>
     */
    inline void SetTasks(const Aws::Vector<BlueGreenDeploymentTask>& value) { m_tasksHasBeenSet = true; m_tasks = value; }

    /**
     * <p>Either tasks to be performed or tasks that have been completed on the target
     * database before switchover.</p>
     */
    inline void SetTasks(Aws::Vector<BlueGreenDeploymentTask>&& value) { m_tasksHasBeenSet = true; m_tasks = std::move(value); }

    /**
     * <p>Either tasks to be performed or tasks that have been completed on the target
     * database before switchover.</p>
     */
    inline BlueGreenDeployment& WithTasks(const Aws::Vector<BlueGreenDeploymentTask>& value) { SetTasks(value); return *this;}

    /**
     * <p>Either tasks to be performed or tasks that have been completed on the target
     * database before switchover.</p>
     */
    inline BlueGreenDeployment& WithTasks(Aws::Vector<BlueGreenDeploymentTask>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>Either tasks to be performed or tasks that have been completed on the target
     * database before switchover.</p>
     */
    inline BlueGreenDeployment& AddTasks(const BlueGreenDeploymentTask& value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }

    /**
     * <p>Either tasks to be performed or tasks that have been completed on the target
     * database before switchover.</p>
     */
    inline BlueGreenDeployment& AddTasks(BlueGreenDeploymentTask&& value) { m_tasksHasBeenSet = true; m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the blue/green deployment.</p> <p>Values:</p> <ul> <li> <p>
     * <code>PROVISIONING</code> - Resources are being created in the green
     * environment.</p> </li> <li> <p> <code>AVAILABLE</code> - Resources are available
     * in the green environment.</p> </li> <li> <p> <code>SWITCHOVER_IN_PROGRESS</code>
     * - The deployment is being switched from the blue environment to the green
     * environment.</p> </li> <li> <p> <code>SWITCHOVER_COMPLETED</code> - Switchover
     * from the blue environment to the green environment is complete.</p> </li> <li>
     * <p> <code>INVALID_CONFIGURATION</code> - Resources in the green environment are
     * invalid, so switchover isn't possible.</p> </li> <li> <p>
     * <code>SWITCHOVER_FAILED</code> - Switchover was attempted but failed.</p> </li>
     * <li> <p> <code>DELETING</code> - The blue/green deployment is being deleted.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the blue/green deployment.</p> <p>Values:</p> <ul> <li> <p>
     * <code>PROVISIONING</code> - Resources are being created in the green
     * environment.</p> </li> <li> <p> <code>AVAILABLE</code> - Resources are available
     * in the green environment.</p> </li> <li> <p> <code>SWITCHOVER_IN_PROGRESS</code>
     * - The deployment is being switched from the blue environment to the green
     * environment.</p> </li> <li> <p> <code>SWITCHOVER_COMPLETED</code> - Switchover
     * from the blue environment to the green environment is complete.</p> </li> <li>
     * <p> <code>INVALID_CONFIGURATION</code> - Resources in the green environment are
     * invalid, so switchover isn't possible.</p> </li> <li> <p>
     * <code>SWITCHOVER_FAILED</code> - Switchover was attempted but failed.</p> </li>
     * <li> <p> <code>DELETING</code> - The blue/green deployment is being deleted.</p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the blue/green deployment.</p> <p>Values:</p> <ul> <li> <p>
     * <code>PROVISIONING</code> - Resources are being created in the green
     * environment.</p> </li> <li> <p> <code>AVAILABLE</code> - Resources are available
     * in the green environment.</p> </li> <li> <p> <code>SWITCHOVER_IN_PROGRESS</code>
     * - The deployment is being switched from the blue environment to the green
     * environment.</p> </li> <li> <p> <code>SWITCHOVER_COMPLETED</code> - Switchover
     * from the blue environment to the green environment is complete.</p> </li> <li>
     * <p> <code>INVALID_CONFIGURATION</code> - Resources in the green environment are
     * invalid, so switchover isn't possible.</p> </li> <li> <p>
     * <code>SWITCHOVER_FAILED</code> - Switchover was attempted but failed.</p> </li>
     * <li> <p> <code>DELETING</code> - The blue/green deployment is being deleted.</p>
     * </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the blue/green deployment.</p> <p>Values:</p> <ul> <li> <p>
     * <code>PROVISIONING</code> - Resources are being created in the green
     * environment.</p> </li> <li> <p> <code>AVAILABLE</code> - Resources are available
     * in the green environment.</p> </li> <li> <p> <code>SWITCHOVER_IN_PROGRESS</code>
     * - The deployment is being switched from the blue environment to the green
     * environment.</p> </li> <li> <p> <code>SWITCHOVER_COMPLETED</code> - Switchover
     * from the blue environment to the green environment is complete.</p> </li> <li>
     * <p> <code>INVALID_CONFIGURATION</code> - Resources in the green environment are
     * invalid, so switchover isn't possible.</p> </li> <li> <p>
     * <code>SWITCHOVER_FAILED</code> - Switchover was attempted but failed.</p> </li>
     * <li> <p> <code>DELETING</code> - The blue/green deployment is being deleted.</p>
     * </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the blue/green deployment.</p> <p>Values:</p> <ul> <li> <p>
     * <code>PROVISIONING</code> - Resources are being created in the green
     * environment.</p> </li> <li> <p> <code>AVAILABLE</code> - Resources are available
     * in the green environment.</p> </li> <li> <p> <code>SWITCHOVER_IN_PROGRESS</code>
     * - The deployment is being switched from the blue environment to the green
     * environment.</p> </li> <li> <p> <code>SWITCHOVER_COMPLETED</code> - Switchover
     * from the blue environment to the green environment is complete.</p> </li> <li>
     * <p> <code>INVALID_CONFIGURATION</code> - Resources in the green environment are
     * invalid, so switchover isn't possible.</p> </li> <li> <p>
     * <code>SWITCHOVER_FAILED</code> - Switchover was attempted but failed.</p> </li>
     * <li> <p> <code>DELETING</code> - The blue/green deployment is being deleted.</p>
     * </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the blue/green deployment.</p> <p>Values:</p> <ul> <li> <p>
     * <code>PROVISIONING</code> - Resources are being created in the green
     * environment.</p> </li> <li> <p> <code>AVAILABLE</code> - Resources are available
     * in the green environment.</p> </li> <li> <p> <code>SWITCHOVER_IN_PROGRESS</code>
     * - The deployment is being switched from the blue environment to the green
     * environment.</p> </li> <li> <p> <code>SWITCHOVER_COMPLETED</code> - Switchover
     * from the blue environment to the green environment is complete.</p> </li> <li>
     * <p> <code>INVALID_CONFIGURATION</code> - Resources in the green environment are
     * invalid, so switchover isn't possible.</p> </li> <li> <p>
     * <code>SWITCHOVER_FAILED</code> - Switchover was attempted but failed.</p> </li>
     * <li> <p> <code>DELETING</code> - The blue/green deployment is being deleted.</p>
     * </li> </ul>
     */
    inline BlueGreenDeployment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the blue/green deployment.</p> <p>Values:</p> <ul> <li> <p>
     * <code>PROVISIONING</code> - Resources are being created in the green
     * environment.</p> </li> <li> <p> <code>AVAILABLE</code> - Resources are available
     * in the green environment.</p> </li> <li> <p> <code>SWITCHOVER_IN_PROGRESS</code>
     * - The deployment is being switched from the blue environment to the green
     * environment.</p> </li> <li> <p> <code>SWITCHOVER_COMPLETED</code> - Switchover
     * from the blue environment to the green environment is complete.</p> </li> <li>
     * <p> <code>INVALID_CONFIGURATION</code> - Resources in the green environment are
     * invalid, so switchover isn't possible.</p> </li> <li> <p>
     * <code>SWITCHOVER_FAILED</code> - Switchover was attempted but failed.</p> </li>
     * <li> <p> <code>DELETING</code> - The blue/green deployment is being deleted.</p>
     * </li> </ul>
     */
    inline BlueGreenDeployment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the blue/green deployment.</p> <p>Values:</p> <ul> <li> <p>
     * <code>PROVISIONING</code> - Resources are being created in the green
     * environment.</p> </li> <li> <p> <code>AVAILABLE</code> - Resources are available
     * in the green environment.</p> </li> <li> <p> <code>SWITCHOVER_IN_PROGRESS</code>
     * - The deployment is being switched from the blue environment to the green
     * environment.</p> </li> <li> <p> <code>SWITCHOVER_COMPLETED</code> - Switchover
     * from the blue environment to the green environment is complete.</p> </li> <li>
     * <p> <code>INVALID_CONFIGURATION</code> - Resources in the green environment are
     * invalid, so switchover isn't possible.</p> </li> <li> <p>
     * <code>SWITCHOVER_FAILED</code> - Switchover was attempted but failed.</p> </li>
     * <li> <p> <code>DELETING</code> - The blue/green deployment is being deleted.</p>
     * </li> </ul>
     */
    inline BlueGreenDeployment& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Additional information about the status of the blue/green deployment.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>Additional information about the status of the blue/green deployment.</p>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p>Additional information about the status of the blue/green deployment.</p>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>Additional information about the status of the blue/green deployment.</p>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p>Additional information about the status of the blue/green deployment.</p>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }

    /**
     * <p>Additional information about the status of the blue/green deployment.</p>
     */
    inline BlueGreenDeployment& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>Additional information about the status of the blue/green deployment.</p>
     */
    inline BlueGreenDeployment& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>Additional information about the status of the blue/green deployment.</p>
     */
    inline BlueGreenDeployment& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}


    /**
     * <p>Specifies the time when the blue/green deployment was created, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>Specifies the time when the blue/green deployment was created, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>Specifies the time when the blue/green deployment was created, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>Specifies the time when the blue/green deployment was created, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>Specifies the time when the blue/green deployment was created, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline BlueGreenDeployment& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>Specifies the time when the blue/green deployment was created, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline BlueGreenDeployment& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the time when the blue/green deployment was deleted, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteTime() const{ return m_deleteTime; }

    /**
     * <p>Specifies the time when the blue/green deployment was deleted, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline bool DeleteTimeHasBeenSet() const { return m_deleteTimeHasBeenSet; }

    /**
     * <p>Specifies the time when the blue/green deployment was deleted, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetDeleteTime(const Aws::Utils::DateTime& value) { m_deleteTimeHasBeenSet = true; m_deleteTime = value; }

    /**
     * <p>Specifies the time when the blue/green deployment was deleted, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetDeleteTime(Aws::Utils::DateTime&& value) { m_deleteTimeHasBeenSet = true; m_deleteTime = std::move(value); }

    /**
     * <p>Specifies the time when the blue/green deployment was deleted, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline BlueGreenDeployment& WithDeleteTime(const Aws::Utils::DateTime& value) { SetDeleteTime(value); return *this;}

    /**
     * <p>Specifies the time when the blue/green deployment was deleted, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline BlueGreenDeployment& WithDeleteTime(Aws::Utils::DateTime&& value) { SetDeleteTime(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    
    inline BlueGreenDeployment& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    
    inline BlueGreenDeployment& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    
    inline BlueGreenDeployment& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    
    inline BlueGreenDeployment& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_blueGreenDeploymentIdentifier;
    bool m_blueGreenDeploymentIdentifierHasBeenSet = false;

    Aws::String m_blueGreenDeploymentName;
    bool m_blueGreenDeploymentNameHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::Vector<SwitchoverDetail> m_switchoverDetails;
    bool m_switchoverDetailsHasBeenSet = false;

    Aws::Vector<BlueGreenDeploymentTask> m_tasks;
    bool m_tasksHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deleteTime;
    bool m_deleteTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

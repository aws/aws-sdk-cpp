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
   * <p>Details about a blue/green deployment.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
   * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
   * User Guide</i> and <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">Using
   * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon
   * Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/BlueGreenDeployment">AWS
   * API Reference</a></p>
   */
  class BlueGreenDeployment
  {
  public:
    AWS_RDS_API BlueGreenDeployment() = default;
    AWS_RDS_API BlueGreenDeployment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API BlueGreenDeployment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the blue/green deployment.</p>
     */
    inline const Aws::String& GetBlueGreenDeploymentIdentifier() const { return m_blueGreenDeploymentIdentifier; }
    inline bool BlueGreenDeploymentIdentifierHasBeenSet() const { return m_blueGreenDeploymentIdentifierHasBeenSet; }
    template<typename BlueGreenDeploymentIdentifierT = Aws::String>
    void SetBlueGreenDeploymentIdentifier(BlueGreenDeploymentIdentifierT&& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = std::forward<BlueGreenDeploymentIdentifierT>(value); }
    template<typename BlueGreenDeploymentIdentifierT = Aws::String>
    BlueGreenDeployment& WithBlueGreenDeploymentIdentifier(BlueGreenDeploymentIdentifierT&& value) { SetBlueGreenDeploymentIdentifier(std::forward<BlueGreenDeploymentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-supplied name of the blue/green deployment.</p>
     */
    inline const Aws::String& GetBlueGreenDeploymentName() const { return m_blueGreenDeploymentName; }
    inline bool BlueGreenDeploymentNameHasBeenSet() const { return m_blueGreenDeploymentNameHasBeenSet; }
    template<typename BlueGreenDeploymentNameT = Aws::String>
    void SetBlueGreenDeploymentName(BlueGreenDeploymentNameT&& value) { m_blueGreenDeploymentNameHasBeenSet = true; m_blueGreenDeploymentName = std::forward<BlueGreenDeploymentNameT>(value); }
    template<typename BlueGreenDeploymentNameT = Aws::String>
    BlueGreenDeployment& WithBlueGreenDeploymentName(BlueGreenDeploymentNameT&& value) { SetBlueGreenDeploymentName(std::forward<BlueGreenDeploymentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source database for the blue/green deployment.</p> <p>Before switchover,
     * the source database is the production database in the blue environment.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    BlueGreenDeployment& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target database for the blue/green deployment.</p> <p>Before switchover,
     * the target database is the clone database in the green environment.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    BlueGreenDeployment& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about each source and target resource in the blue/green
     * deployment.</p>
     */
    inline const Aws::Vector<SwitchoverDetail>& GetSwitchoverDetails() const { return m_switchoverDetails; }
    inline bool SwitchoverDetailsHasBeenSet() const { return m_switchoverDetailsHasBeenSet; }
    template<typename SwitchoverDetailsT = Aws::Vector<SwitchoverDetail>>
    void SetSwitchoverDetails(SwitchoverDetailsT&& value) { m_switchoverDetailsHasBeenSet = true; m_switchoverDetails = std::forward<SwitchoverDetailsT>(value); }
    template<typename SwitchoverDetailsT = Aws::Vector<SwitchoverDetail>>
    BlueGreenDeployment& WithSwitchoverDetails(SwitchoverDetailsT&& value) { SetSwitchoverDetails(std::forward<SwitchoverDetailsT>(value)); return *this;}
    template<typename SwitchoverDetailsT = SwitchoverDetail>
    BlueGreenDeployment& AddSwitchoverDetails(SwitchoverDetailsT&& value) { m_switchoverDetailsHasBeenSet = true; m_switchoverDetails.emplace_back(std::forward<SwitchoverDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Either tasks to be performed or tasks that have been completed on the target
     * database before switchover.</p>
     */
    inline const Aws::Vector<BlueGreenDeploymentTask>& GetTasks() const { return m_tasks; }
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }
    template<typename TasksT = Aws::Vector<BlueGreenDeploymentTask>>
    void SetTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks = std::forward<TasksT>(value); }
    template<typename TasksT = Aws::Vector<BlueGreenDeploymentTask>>
    BlueGreenDeployment& WithTasks(TasksT&& value) { SetTasks(std::forward<TasksT>(value)); return *this;}
    template<typename TasksT = BlueGreenDeploymentTask>
    BlueGreenDeployment& AddTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks.emplace_back(std::forward<TasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the blue/green deployment.</p> <p>Valid Values:</p> <ul> <li>
     * <p> <code>PROVISIONING</code> - Resources are being created in the green
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
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    BlueGreenDeployment& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the status of the blue/green deployment.</p>
     */
    inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = Aws::String>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::String>
    BlueGreenDeployment& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the blue/green deployment was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    BlueGreenDeployment& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the blue/green deployment was deleted, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteTime() const { return m_deleteTime; }
    inline bool DeleteTimeHasBeenSet() const { return m_deleteTimeHasBeenSet; }
    template<typename DeleteTimeT = Aws::Utils::DateTime>
    void SetDeleteTime(DeleteTimeT&& value) { m_deleteTimeHasBeenSet = true; m_deleteTime = std::forward<DeleteTimeT>(value); }
    template<typename DeleteTimeT = Aws::Utils::DateTime>
    BlueGreenDeployment& WithDeleteTime(DeleteTimeT&& value) { SetDeleteTime(std::forward<DeleteTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    BlueGreenDeployment& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    BlueGreenDeployment& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}
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

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deleteTime{};
    bool m_deleteTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

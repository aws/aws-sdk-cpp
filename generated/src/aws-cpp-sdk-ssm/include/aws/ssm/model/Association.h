/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AssociationOverview.h>
#include <aws/ssm/model/Target.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Describes an association of a Amazon Web Services Systems Manager document
   * (SSM document) and a managed node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Association">AWS API
   * Reference</a></p>
   */
  class Association
  {
  public:
    AWS_SSM_API Association() = default;
    AWS_SSM_API Association(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Association& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Association& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    Association& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID created by the system when you create an association. An association
     * is a binding between a document and a set of targets with a schedule.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    Association& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association version.</p>
     */
    inline const Aws::String& GetAssociationVersion() const { return m_associationVersion; }
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }
    template<typename AssociationVersionT = Aws::String>
    void SetAssociationVersion(AssociationVersionT&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::forward<AssociationVersionT>(value); }
    template<typename AssociationVersionT = Aws::String>
    Association& WithAssociationVersion(AssociationVersionT&& value) { SetAssociationVersion(std::forward<AssociationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the document used in the association. If you change a document
     * version for a State Manager association, Systems Manager immediately runs the
     * association unless you previously specifed the
     * <code>apply-only-at-cron-interval</code> parameter.</p>  <p>State
     * Manager doesn't support running associations that use a new version of a
     * document if that document is shared from another account. State Manager always
     * runs the <code>default</code> version of a document if shared from another
     * account, even though the Systems Manager console shows that a new version was
     * processed. If you want to run an association using a new version of a document
     * shared form another account, you must set the document version to
     * <code>default</code>.</p> 
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    Association& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed nodes targeted by the request to create an association. You can
     * target all managed nodes in an Amazon Web Services account by specifying the
     * <code>InstanceIds</code> key with a value of <code>*</code>.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    Association& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    Association& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date on which the association was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const { return m_lastExecutionDate; }
    inline bool LastExecutionDateHasBeenSet() const { return m_lastExecutionDateHasBeenSet; }
    template<typename LastExecutionDateT = Aws::Utils::DateTime>
    void SetLastExecutionDate(LastExecutionDateT&& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = std::forward<LastExecutionDateT>(value); }
    template<typename LastExecutionDateT = Aws::Utils::DateTime>
    Association& WithLastExecutionDate(LastExecutionDateT&& value) { SetLastExecutionDate(std::forward<LastExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the association.</p>
     */
    inline const AssociationOverview& GetOverview() const { return m_overview; }
    inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }
    template<typename OverviewT = AssociationOverview>
    void SetOverview(OverviewT&& value) { m_overviewHasBeenSet = true; m_overview = std::forward<OverviewT>(value); }
    template<typename OverviewT = AssociationOverview>
    Association& WithOverview(OverviewT&& value) { SetOverview(std::forward<OverviewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cron expression that specifies a schedule when the association runs. The
     * schedule runs in Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    Association& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association name.</p>
     */
    inline const Aws::String& GetAssociationName() const { return m_associationName; }
    inline bool AssociationNameHasBeenSet() const { return m_associationNameHasBeenSet; }
    template<typename AssociationNameT = Aws::String>
    void SetAssociationName(AssociationNameT&& value) { m_associationNameHasBeenSet = true; m_associationName = std::forward<AssociationNameT>(value); }
    template<typename AssociationNameT = Aws::String>
    Association& WithAssociationName(AssociationNameT&& value) { SetAssociationName(std::forward<AssociationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of days to wait after the scheduled day to run an association.</p>
     */
    inline int GetScheduleOffset() const { return m_scheduleOffset; }
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }
    inline void SetScheduleOffset(int value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }
    inline Association& WithScheduleOffset(int value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours that an association can run on specified targets. After
     * the resulting cutoff time passes, associations that are currently running are
     * cancelled, and no pending executions are started on remaining targets.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Association& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const { return m_targetMaps; }
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }
    template<typename TargetMapsT = Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    void SetTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::forward<TargetMapsT>(value); }
    template<typename TargetMapsT = Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    Association& WithTargetMaps(TargetMapsT&& value) { SetTargetMaps(std::forward<TargetMapsT>(value)); return *this;}
    template<typename TargetMapsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    Association& AddTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.emplace_back(std::forward<TargetMapsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Utils::DateTime m_lastExecutionDate{};
    bool m_lastExecutionDateHasBeenSet = false;

    AssociationOverview m_overview;
    bool m_overviewHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_associationName;
    bool m_associationNameHasBeenSet = false;

    int m_scheduleOffset{0};
    bool m_scheduleOffsetHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_targetMaps;
    bool m_targetMapsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

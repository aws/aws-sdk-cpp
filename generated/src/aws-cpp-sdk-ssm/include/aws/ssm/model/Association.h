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
    AWS_SSM_API Association();
    AWS_SSM_API Association(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Association& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Association& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Association& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Association& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline Association& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline Association& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline Association& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID created by the system when you create an association. An association
     * is a binding between a document and a set of targets with a schedule.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline Association& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline Association& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline Association& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
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
    inline Association& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}
    inline Association& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}
    inline Association& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}
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
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }
    inline Association& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline Association& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline Association& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed nodes targeted by the request to create an association. You can
     * target all managed nodes in an Amazon Web Services account by specifying the
     * <code>InstanceIds</code> key with a value of <code>*</code>.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline Association& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline Association& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline Association& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline Association& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date on which the association was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const{ return m_lastExecutionDate; }
    inline bool LastExecutionDateHasBeenSet() const { return m_lastExecutionDateHasBeenSet; }
    inline void SetLastExecutionDate(const Aws::Utils::DateTime& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = value; }
    inline void SetLastExecutionDate(Aws::Utils::DateTime&& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = std::move(value); }
    inline Association& WithLastExecutionDate(const Aws::Utils::DateTime& value) { SetLastExecutionDate(value); return *this;}
    inline Association& WithLastExecutionDate(Aws::Utils::DateTime&& value) { SetLastExecutionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the association.</p>
     */
    inline const AssociationOverview& GetOverview() const{ return m_overview; }
    inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }
    inline void SetOverview(const AssociationOverview& value) { m_overviewHasBeenSet = true; m_overview = value; }
    inline void SetOverview(AssociationOverview&& value) { m_overviewHasBeenSet = true; m_overview = std::move(value); }
    inline Association& WithOverview(const AssociationOverview& value) { SetOverview(value); return *this;}
    inline Association& WithOverview(AssociationOverview&& value) { SetOverview(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cron expression that specifies a schedule when the association runs. The
     * schedule runs in Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }
    inline Association& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}
    inline Association& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}
    inline Association& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association name.</p>
     */
    inline const Aws::String& GetAssociationName() const{ return m_associationName; }
    inline bool AssociationNameHasBeenSet() const { return m_associationNameHasBeenSet; }
    inline void SetAssociationName(const Aws::String& value) { m_associationNameHasBeenSet = true; m_associationName = value; }
    inline void SetAssociationName(Aws::String&& value) { m_associationNameHasBeenSet = true; m_associationName = std::move(value); }
    inline void SetAssociationName(const char* value) { m_associationNameHasBeenSet = true; m_associationName.assign(value); }
    inline Association& WithAssociationName(const Aws::String& value) { SetAssociationName(value); return *this;}
    inline Association& WithAssociationName(Aws::String&& value) { SetAssociationName(std::move(value)); return *this;}
    inline Association& WithAssociationName(const char* value) { SetAssociationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of days to wait after the scheduled day to run an association.</p>
     */
    inline int GetScheduleOffset() const{ return m_scheduleOffset; }
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
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Association& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const{ return m_targetMaps; }
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }
    inline void SetTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps = value; }
    inline void SetTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::move(value); }
    inline Association& WithTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetTargetMaps(value); return *this;}
    inline Association& WithTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetTargetMaps(std::move(value)); return *this;}
    inline Association& AddTargetMaps(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(value); return *this; }
    inline Association& AddTargetMaps(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(std::move(value)); return *this; }
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

    Aws::Utils::DateTime m_lastExecutionDate;
    bool m_lastExecutionDateHasBeenSet = false;

    AssociationOverview m_overview;
    bool m_overviewHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_associationName;
    bool m_associationNameHasBeenSet = false;

    int m_scheduleOffset;
    bool m_scheduleOffsetHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_targetMaps;
    bool m_targetMapsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

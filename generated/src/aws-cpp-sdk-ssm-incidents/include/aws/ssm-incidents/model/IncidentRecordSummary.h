/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-incidents/model/IncidentRecordSource.h>
#include <aws/ssm-incidents/model/IncidentRecordStatus.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details describing an incident record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/IncidentRecordSummary">AWS
   * API Reference</a></p>
   */
  class IncidentRecordSummary
  {
  public:
    AWS_SSMINCIDENTS_API IncidentRecordSummary() = default;
    AWS_SSMINCIDENTS_API IncidentRecordSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API IncidentRecordSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    IncidentRecordSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the incident was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    IncidentRecordSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the impact to customers and applications.</p>
     */
    inline int GetImpact() const { return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(int value) { m_impactHasBeenSet = true; m_impact = value; }
    inline IncidentRecordSummary& WithImpact(int value) { SetImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>What caused Incident Manager to create the incident.</p>
     */
    inline const IncidentRecordSource& GetIncidentRecordSource() const { return m_incidentRecordSource; }
    inline bool IncidentRecordSourceHasBeenSet() const { return m_incidentRecordSourceHasBeenSet; }
    template<typename IncidentRecordSourceT = IncidentRecordSource>
    void SetIncidentRecordSource(IncidentRecordSourceT&& value) { m_incidentRecordSourceHasBeenSet = true; m_incidentRecordSource = std::forward<IncidentRecordSourceT>(value); }
    template<typename IncidentRecordSourceT = IncidentRecordSource>
    IncidentRecordSummary& WithIncidentRecordSource(IncidentRecordSourceT&& value) { SetIncidentRecordSource(std::forward<IncidentRecordSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the incident was resolved.</p>
     */
    inline const Aws::Utils::DateTime& GetResolvedTime() const { return m_resolvedTime; }
    inline bool ResolvedTimeHasBeenSet() const { return m_resolvedTimeHasBeenSet; }
    template<typename ResolvedTimeT = Aws::Utils::DateTime>
    void SetResolvedTime(ResolvedTimeT&& value) { m_resolvedTimeHasBeenSet = true; m_resolvedTime = std::forward<ResolvedTimeT>(value); }
    template<typename ResolvedTimeT = Aws::Utils::DateTime>
    IncidentRecordSummary& WithResolvedTime(ResolvedTimeT&& value) { SetResolvedTime(std::forward<ResolvedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the incident.</p>
     */
    inline IncidentRecordStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IncidentRecordStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline IncidentRecordSummary& WithStatus(IncidentRecordStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the incident. This value is either provided by the response plan
     * or overwritten on creation.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    IncidentRecordSummary& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    int m_impact{0};
    bool m_impactHasBeenSet = false;

    IncidentRecordSource m_incidentRecordSource;
    bool m_incidentRecordSourceHasBeenSet = false;

    Aws::Utils::DateTime m_resolvedTime{};
    bool m_resolvedTimeHasBeenSet = false;

    IncidentRecordStatus m_status{IncidentRecordStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws

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
    AWS_SSMINCIDENTS_API IncidentRecordSummary();
    AWS_SSMINCIDENTS_API IncidentRecordSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API IncidentRecordSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline IncidentRecordSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline IncidentRecordSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline IncidentRecordSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the incident was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline IncidentRecordSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline IncidentRecordSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the impact to customers and applications.</p>
     */
    inline int GetImpact() const{ return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(int value) { m_impactHasBeenSet = true; m_impact = value; }
    inline IncidentRecordSummary& WithImpact(int value) { SetImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>What caused Incident Manager to create the incident.</p>
     */
    inline const IncidentRecordSource& GetIncidentRecordSource() const{ return m_incidentRecordSource; }
    inline bool IncidentRecordSourceHasBeenSet() const { return m_incidentRecordSourceHasBeenSet; }
    inline void SetIncidentRecordSource(const IncidentRecordSource& value) { m_incidentRecordSourceHasBeenSet = true; m_incidentRecordSource = value; }
    inline void SetIncidentRecordSource(IncidentRecordSource&& value) { m_incidentRecordSourceHasBeenSet = true; m_incidentRecordSource = std::move(value); }
    inline IncidentRecordSummary& WithIncidentRecordSource(const IncidentRecordSource& value) { SetIncidentRecordSource(value); return *this;}
    inline IncidentRecordSummary& WithIncidentRecordSource(IncidentRecordSource&& value) { SetIncidentRecordSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the incident was resolved.</p>
     */
    inline const Aws::Utils::DateTime& GetResolvedTime() const{ return m_resolvedTime; }
    inline bool ResolvedTimeHasBeenSet() const { return m_resolvedTimeHasBeenSet; }
    inline void SetResolvedTime(const Aws::Utils::DateTime& value) { m_resolvedTimeHasBeenSet = true; m_resolvedTime = value; }
    inline void SetResolvedTime(Aws::Utils::DateTime&& value) { m_resolvedTimeHasBeenSet = true; m_resolvedTime = std::move(value); }
    inline IncidentRecordSummary& WithResolvedTime(const Aws::Utils::DateTime& value) { SetResolvedTime(value); return *this;}
    inline IncidentRecordSummary& WithResolvedTime(Aws::Utils::DateTime&& value) { SetResolvedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the incident.</p>
     */
    inline const IncidentRecordStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const IncidentRecordStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(IncidentRecordStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline IncidentRecordSummary& WithStatus(const IncidentRecordStatus& value) { SetStatus(value); return *this;}
    inline IncidentRecordSummary& WithStatus(IncidentRecordStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the incident. This value is either provided by the response plan
     * or overwritten on creation.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline IncidentRecordSummary& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline IncidentRecordSummary& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline IncidentRecordSummary& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    int m_impact;
    bool m_impactHasBeenSet = false;

    IncidentRecordSource m_incidentRecordSource;
    bool m_incidentRecordSourceHasBeenSet = false;

    Aws::Utils::DateTime m_resolvedTime;
    bool m_resolvedTimeHasBeenSet = false;

    IncidentRecordStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws

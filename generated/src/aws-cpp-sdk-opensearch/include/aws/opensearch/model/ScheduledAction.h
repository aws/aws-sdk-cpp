﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ActionType.h>
#include <aws/opensearch/model/ActionSeverity.h>
#include <aws/opensearch/model/ScheduledBy.h>
#include <aws/opensearch/model/ActionStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about a scheduled configuration change for an OpenSearch Service
   * domain. This actions can be a <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/service-software.html">service
   * software update</a> or a <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html#auto-tune-types">blue/green
   * Auto-Tune enhancement</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ScheduledAction">AWS
   * API Reference</a></p>
   */
  class ScheduledAction
  {
  public:
    AWS_OPENSEARCHSERVICE_API ScheduledAction();
    AWS_OPENSEARCHSERVICE_API ScheduledAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ScheduledAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the scheduled action.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ScheduledAction& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ScheduledAction& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ScheduledAction& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action that will be taken on the domain.</p>
     */
    inline const ActionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ActionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ScheduledAction& WithType(const ActionType& value) { SetType(value); return *this;}
    inline ScheduledAction& WithType(ActionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the action.</p>
     */
    inline const ActionSeverity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const ActionSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(ActionSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline ScheduledAction& WithSeverity(const ActionSeverity& value) { SetSeverity(value); return *this;}
    inline ScheduledAction& WithSeverity(ActionSeverity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the change is scheduled to happen.</p>
     */
    inline long long GetScheduledTime() const{ return m_scheduledTime; }
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }
    inline void SetScheduledTime(long long value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = value; }
    inline ScheduledAction& WithScheduledTime(long long value) { SetScheduledTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the action to be taken.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ScheduledAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ScheduledAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ScheduledAction& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the action was scheduled manually (<code>CUSTOMER</code>, or by
     * OpenSearch Service automatically (<code>SYSTEM</code>).</p>
     */
    inline const ScheduledBy& GetScheduledBy() const{ return m_scheduledBy; }
    inline bool ScheduledByHasBeenSet() const { return m_scheduledByHasBeenSet; }
    inline void SetScheduledBy(const ScheduledBy& value) { m_scheduledByHasBeenSet = true; m_scheduledBy = value; }
    inline void SetScheduledBy(ScheduledBy&& value) { m_scheduledByHasBeenSet = true; m_scheduledBy = std::move(value); }
    inline ScheduledAction& WithScheduledBy(const ScheduledBy& value) { SetScheduledBy(value); return *this;}
    inline ScheduledAction& WithScheduledBy(ScheduledBy&& value) { SetScheduledBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the scheduled action.</p>
     */
    inline const ActionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ScheduledAction& WithStatus(const ActionStatus& value) { SetStatus(value); return *this;}
    inline ScheduledAction& WithStatus(ActionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the action is required or optional.</p>
     */
    inline bool GetMandatory() const{ return m_mandatory; }
    inline bool MandatoryHasBeenSet() const { return m_mandatoryHasBeenSet; }
    inline void SetMandatory(bool value) { m_mandatoryHasBeenSet = true; m_mandatory = value; }
    inline ScheduledAction& WithMandatory(bool value) { SetMandatory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the scheduled action is cancellable.</p>
     */
    inline bool GetCancellable() const{ return m_cancellable; }
    inline bool CancellableHasBeenSet() const { return m_cancellableHasBeenSet; }
    inline void SetCancellable(bool value) { m_cancellableHasBeenSet = true; m_cancellable = value; }
    inline ScheduledAction& WithCancellable(bool value) { SetCancellable(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ActionType m_type;
    bool m_typeHasBeenSet = false;

    ActionSeverity m_severity;
    bool m_severityHasBeenSet = false;

    long long m_scheduledTime;
    bool m_scheduledTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ScheduledBy m_scheduledBy;
    bool m_scheduledByHasBeenSet = false;

    ActionStatus m_status;
    bool m_statusHasBeenSet = false;

    bool m_mandatory;
    bool m_mandatoryHasBeenSet = false;

    bool m_cancellable;
    bool m_cancellableHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

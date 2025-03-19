/**
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
    AWS_OPENSEARCHSERVICE_API ScheduledAction() = default;
    AWS_OPENSEARCHSERVICE_API ScheduledAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ScheduledAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the scheduled action.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ScheduledAction& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action that will be taken on the domain.</p>
     */
    inline ActionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ActionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ScheduledAction& WithType(ActionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the action.</p>
     */
    inline ActionSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(ActionSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ScheduledAction& WithSeverity(ActionSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the change is scheduled to happen.</p>
     */
    inline long long GetScheduledTime() const { return m_scheduledTime; }
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }
    inline void SetScheduledTime(long long value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = value; }
    inline ScheduledAction& WithScheduledTime(long long value) { SetScheduledTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the action to be taken.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ScheduledAction& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the action was scheduled manually (<code>CUSTOMER</code>, or by
     * OpenSearch Service automatically (<code>SYSTEM</code>).</p>
     */
    inline ScheduledBy GetScheduledBy() const { return m_scheduledBy; }
    inline bool ScheduledByHasBeenSet() const { return m_scheduledByHasBeenSet; }
    inline void SetScheduledBy(ScheduledBy value) { m_scheduledByHasBeenSet = true; m_scheduledBy = value; }
    inline ScheduledAction& WithScheduledBy(ScheduledBy value) { SetScheduledBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the scheduled action.</p>
     */
    inline ActionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ActionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ScheduledAction& WithStatus(ActionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the action is required or optional.</p>
     */
    inline bool GetMandatory() const { return m_mandatory; }
    inline bool MandatoryHasBeenSet() const { return m_mandatoryHasBeenSet; }
    inline void SetMandatory(bool value) { m_mandatoryHasBeenSet = true; m_mandatory = value; }
    inline ScheduledAction& WithMandatory(bool value) { SetMandatory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the scheduled action is cancellable.</p>
     */
    inline bool GetCancellable() const { return m_cancellable; }
    inline bool CancellableHasBeenSet() const { return m_cancellableHasBeenSet; }
    inline void SetCancellable(bool value) { m_cancellableHasBeenSet = true; m_cancellable = value; }
    inline ScheduledAction& WithCancellable(bool value) { SetCancellable(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ActionType m_type{ActionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ActionSeverity m_severity{ActionSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    long long m_scheduledTime{0};
    bool m_scheduledTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ScheduledBy m_scheduledBy{ScheduledBy::NOT_SET};
    bool m_scheduledByHasBeenSet = false;

    ActionStatus m_status{ActionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    bool m_mandatory{false};
    bool m_mandatoryHasBeenSet = false;

    bool m_cancellable{false};
    bool m_cancellableHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

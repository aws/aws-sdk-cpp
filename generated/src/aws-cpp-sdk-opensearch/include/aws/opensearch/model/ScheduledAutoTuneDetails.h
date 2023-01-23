/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/ScheduledAutoTuneActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ScheduledAutoTuneSeverityType.h>
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
   * <p>Specifies details about a scheduled Auto-Tune action. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
   * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ScheduledAutoTuneDetails">AWS
   * API Reference</a></p>
   */
  class ScheduledAutoTuneDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API ScheduledAutoTuneDetails();
    AWS_OPENSEARCHSERVICE_API ScheduledAutoTuneDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ScheduledAutoTuneDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time when the Auto-Tune action is scheduled for the domain.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date and time when the Auto-Tune action is scheduled for the domain.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date and time when the Auto-Tune action is scheduled for the domain.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date and time when the Auto-Tune action is scheduled for the domain.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date and time when the Auto-Tune action is scheduled for the domain.</p>
     */
    inline ScheduledAutoTuneDetails& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The date and time when the Auto-Tune action is scheduled for the domain.</p>
     */
    inline ScheduledAutoTuneDetails& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}


    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline const ScheduledAutoTuneActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline void SetActionType(const ScheduledAutoTuneActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline void SetActionType(ScheduledAutoTuneActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline ScheduledAutoTuneDetails& WithActionType(const ScheduledAutoTuneActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of Auto-Tune action.</p>
     */
    inline ScheduledAutoTuneDetails& WithActionType(ScheduledAutoTuneActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>A description of the Auto-Tune action.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>A description of the Auto-Tune action.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>A description of the Auto-Tune action.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>A description of the Auto-Tune action.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>A description of the Auto-Tune action.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>A description of the Auto-Tune action.</p>
     */
    inline ScheduledAutoTuneDetails& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>A description of the Auto-Tune action.</p>
     */
    inline ScheduledAutoTuneDetails& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>A description of the Auto-Tune action.</p>
     */
    inline ScheduledAutoTuneDetails& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The severity of the Auto-Tune action. Valid values are <code>LOW</code>,
     * <code>MEDIUM</code>, and <code>HIGH</code>.</p>
     */
    inline const ScheduledAutoTuneSeverityType& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the Auto-Tune action. Valid values are <code>LOW</code>,
     * <code>MEDIUM</code>, and <code>HIGH</code>.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity of the Auto-Tune action. Valid values are <code>LOW</code>,
     * <code>MEDIUM</code>, and <code>HIGH</code>.</p>
     */
    inline void SetSeverity(const ScheduledAutoTuneSeverityType& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the Auto-Tune action. Valid values are <code>LOW</code>,
     * <code>MEDIUM</code>, and <code>HIGH</code>.</p>
     */
    inline void SetSeverity(ScheduledAutoTuneSeverityType&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of the Auto-Tune action. Valid values are <code>LOW</code>,
     * <code>MEDIUM</code>, and <code>HIGH</code>.</p>
     */
    inline ScheduledAutoTuneDetails& WithSeverity(const ScheduledAutoTuneSeverityType& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the Auto-Tune action. Valid values are <code>LOW</code>,
     * <code>MEDIUM</code>, and <code>HIGH</code>.</p>
     */
    inline ScheduledAutoTuneDetails& WithSeverity(ScheduledAutoTuneSeverityType&& value) { SetSeverity(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    ScheduledAutoTuneActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    ScheduledAutoTuneSeverityType m_severity;
    bool m_severityHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

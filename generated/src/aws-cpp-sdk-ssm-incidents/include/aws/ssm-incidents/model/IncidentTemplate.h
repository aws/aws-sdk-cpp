/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/NotificationTargetItem.h>
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
   * <p>Basic details used in creating a response plan. The response plan is then
   * used to create an incident record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/IncidentTemplate">AWS
   * API Reference</a></p>
   */
  class IncidentTemplate
  {
  public:
    AWS_SSMINCIDENTS_API IncidentTemplate();
    AWS_SSMINCIDENTS_API IncidentTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API IncidentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string Incident Manager uses to prevent the same root cause from creating
     * multiple incidents in the same account.</p> <p>A deduplication string is a term
     * or phrase the system uses to check for duplicate incidents. If you specify a
     * deduplication string, Incident Manager searches for open incidents that contain
     * the same string in the <code>dedupeString</code> field when it creates the
     * incident. If a duplicate is detected, Incident Manager deduplicates the newer
     * incident into the existing incident.</p>  <p>By default, Incident Manager
     * automatically deduplicates multiple incidents created by the same Amazon
     * CloudWatch alarm or Amazon EventBridge event. You don't have to enter your own
     * deduplication string to prevent duplication for these resource types.</p>
     * 
     */
    inline const Aws::String& GetDedupeString() const{ return m_dedupeString; }
    inline bool DedupeStringHasBeenSet() const { return m_dedupeStringHasBeenSet; }
    inline void SetDedupeString(const Aws::String& value) { m_dedupeStringHasBeenSet = true; m_dedupeString = value; }
    inline void SetDedupeString(Aws::String&& value) { m_dedupeStringHasBeenSet = true; m_dedupeString = std::move(value); }
    inline void SetDedupeString(const char* value) { m_dedupeStringHasBeenSet = true; m_dedupeString.assign(value); }
    inline IncidentTemplate& WithDedupeString(const Aws::String& value) { SetDedupeString(value); return *this;}
    inline IncidentTemplate& WithDedupeString(Aws::String&& value) { SetDedupeString(std::move(value)); return *this;}
    inline IncidentTemplate& WithDedupeString(const char* value) { SetDedupeString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact of the incident on your customers and applications.</p> <p
     * class="title"> <b>Supported impact codes</b> </p> <ul> <li> <p> <code>1</code> -
     * Critical</p> </li> <li> <p> <code>2</code> - High</p> </li> <li> <p>
     * <code>3</code> - Medium</p> </li> <li> <p> <code>4</code> - Low</p> </li> <li>
     * <p> <code>5</code> - No Impact</p> </li> </ul>
     */
    inline int GetImpact() const{ return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(int value) { m_impactHasBeenSet = true; m_impact = value; }
    inline IncidentTemplate& WithImpact(int value) { SetImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the template. When the <code>StartIncident</code> API
     * action is called, Incident Manager assigns the tags specified in the template to
     * the incident.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIncidentTags() const{ return m_incidentTags; }
    inline bool IncidentTagsHasBeenSet() const { return m_incidentTagsHasBeenSet; }
    inline void SetIncidentTags(const Aws::Map<Aws::String, Aws::String>& value) { m_incidentTagsHasBeenSet = true; m_incidentTags = value; }
    inline void SetIncidentTags(Aws::Map<Aws::String, Aws::String>&& value) { m_incidentTagsHasBeenSet = true; m_incidentTags = std::move(value); }
    inline IncidentTemplate& WithIncidentTags(const Aws::Map<Aws::String, Aws::String>& value) { SetIncidentTags(value); return *this;}
    inline IncidentTemplate& WithIncidentTags(Aws::Map<Aws::String, Aws::String>&& value) { SetIncidentTags(std::move(value)); return *this;}
    inline IncidentTemplate& AddIncidentTags(const Aws::String& key, const Aws::String& value) { m_incidentTagsHasBeenSet = true; m_incidentTags.emplace(key, value); return *this; }
    inline IncidentTemplate& AddIncidentTags(Aws::String&& key, const Aws::String& value) { m_incidentTagsHasBeenSet = true; m_incidentTags.emplace(std::move(key), value); return *this; }
    inline IncidentTemplate& AddIncidentTags(const Aws::String& key, Aws::String&& value) { m_incidentTagsHasBeenSet = true; m_incidentTags.emplace(key, std::move(value)); return *this; }
    inline IncidentTemplate& AddIncidentTags(Aws::String&& key, Aws::String&& value) { m_incidentTagsHasBeenSet = true; m_incidentTags.emplace(std::move(key), std::move(value)); return *this; }
    inline IncidentTemplate& AddIncidentTags(const char* key, Aws::String&& value) { m_incidentTagsHasBeenSet = true; m_incidentTags.emplace(key, std::move(value)); return *this; }
    inline IncidentTemplate& AddIncidentTags(Aws::String&& key, const char* value) { m_incidentTagsHasBeenSet = true; m_incidentTags.emplace(std::move(key), value); return *this; }
    inline IncidentTemplate& AddIncidentTags(const char* key, const char* value) { m_incidentTagsHasBeenSet = true; m_incidentTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS targets that are notified when updates are made to an
     * incident.</p>
     */
    inline const Aws::Vector<NotificationTargetItem>& GetNotificationTargets() const{ return m_notificationTargets; }
    inline bool NotificationTargetsHasBeenSet() const { return m_notificationTargetsHasBeenSet; }
    inline void SetNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = value; }
    inline void SetNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = std::move(value); }
    inline IncidentTemplate& WithNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { SetNotificationTargets(value); return *this;}
    inline IncidentTemplate& WithNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { SetNotificationTargets(std::move(value)); return *this;}
    inline IncidentTemplate& AddNotificationTargets(const NotificationTargetItem& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.push_back(value); return *this; }
    inline IncidentTemplate& AddNotificationTargets(NotificationTargetItem&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline IncidentTemplate& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline IncidentTemplate& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline IncidentTemplate& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the incident. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline IncidentTemplate& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline IncidentTemplate& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline IncidentTemplate& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_dedupeString;
    bool m_dedupeStringHasBeenSet = false;

    int m_impact;
    bool m_impactHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_incidentTags;
    bool m_incidentTagsHasBeenSet = false;

    Aws::Vector<NotificationTargetItem> m_notificationTargets;
    bool m_notificationTargetsHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws

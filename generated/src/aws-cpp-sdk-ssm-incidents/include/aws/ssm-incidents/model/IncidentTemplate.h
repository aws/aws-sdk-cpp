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
    AWS_SSMINCIDENTS_API IncidentTemplate() = default;
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
    inline const Aws::String& GetDedupeString() const { return m_dedupeString; }
    inline bool DedupeStringHasBeenSet() const { return m_dedupeStringHasBeenSet; }
    template<typename DedupeStringT = Aws::String>
    void SetDedupeString(DedupeStringT&& value) { m_dedupeStringHasBeenSet = true; m_dedupeString = std::forward<DedupeStringT>(value); }
    template<typename DedupeStringT = Aws::String>
    IncidentTemplate& WithDedupeString(DedupeStringT&& value) { SetDedupeString(std::forward<DedupeStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact of the incident on your customers and applications.</p> <p
     * class="title"> <b>Supported impact codes</b> </p> <ul> <li> <p> <code>1</code> -
     * Critical</p> </li> <li> <p> <code>2</code> - High</p> </li> <li> <p>
     * <code>3</code> - Medium</p> </li> <li> <p> <code>4</code> - Low</p> </li> <li>
     * <p> <code>5</code> - No Impact</p> </li> </ul>
     */
    inline int GetImpact() const { return m_impact; }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetIncidentTags() const { return m_incidentTags; }
    inline bool IncidentTagsHasBeenSet() const { return m_incidentTagsHasBeenSet; }
    template<typename IncidentTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetIncidentTags(IncidentTagsT&& value) { m_incidentTagsHasBeenSet = true; m_incidentTags = std::forward<IncidentTagsT>(value); }
    template<typename IncidentTagsT = Aws::Map<Aws::String, Aws::String>>
    IncidentTemplate& WithIncidentTags(IncidentTagsT&& value) { SetIncidentTags(std::forward<IncidentTagsT>(value)); return *this;}
    template<typename IncidentTagsKeyT = Aws::String, typename IncidentTagsValueT = Aws::String>
    IncidentTemplate& AddIncidentTags(IncidentTagsKeyT&& key, IncidentTagsValueT&& value) {
      m_incidentTagsHasBeenSet = true; m_incidentTags.emplace(std::forward<IncidentTagsKeyT>(key), std::forward<IncidentTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS targets that are notified when updates are made to an
     * incident.</p>
     */
    inline const Aws::Vector<NotificationTargetItem>& GetNotificationTargets() const { return m_notificationTargets; }
    inline bool NotificationTargetsHasBeenSet() const { return m_notificationTargetsHasBeenSet; }
    template<typename NotificationTargetsT = Aws::Vector<NotificationTargetItem>>
    void SetNotificationTargets(NotificationTargetsT&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = std::forward<NotificationTargetsT>(value); }
    template<typename NotificationTargetsT = Aws::Vector<NotificationTargetItem>>
    IncidentTemplate& WithNotificationTargets(NotificationTargetsT&& value) { SetNotificationTargets(std::forward<NotificationTargetsT>(value)); return *this;}
    template<typename NotificationTargetsT = NotificationTargetItem>
    IncidentTemplate& AddNotificationTargets(NotificationTargetsT&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.emplace_back(std::forward<NotificationTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context.</p>
     */
    inline const Aws::String& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Aws::String>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Aws::String>
    IncidentTemplate& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the incident. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    IncidentTemplate& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dedupeString;
    bool m_dedupeStringHasBeenSet = false;

    int m_impact{0};
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

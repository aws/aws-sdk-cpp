/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/shield/model/SubResourceSummary.h>
#include <aws/shield/model/SummarizedCounter.h>
#include <aws/shield/model/AttackProperty.h>
#include <aws/shield/model/Mitigation.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The details of a DDoS attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackDetail">AWS
   * API Reference</a></p>
   */
  class AttackDetail
  {
  public:
    AWS_SHIELD_API AttackDetail() = default;
    AWS_SHIELD_API AttackDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API AttackDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline const Aws::String& GetAttackId() const { return m_attackId; }
    inline bool AttackIdHasBeenSet() const { return m_attackIdHasBeenSet; }
    template<typename AttackIdT = Aws::String>
    void SetAttackId(AttackIdT&& value) { m_attackIdHasBeenSet = true; m_attackId = std::forward<AttackIdT>(value); }
    template<typename AttackIdT = Aws::String>
    AttackDetail& WithAttackId(AttackIdT&& value) { SetAttackId(std::forward<AttackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    AttackDetail& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If applicable, additional detail about the resource being attacked, for
     * example, IP address or URL.</p>
     */
    inline const Aws::Vector<SubResourceSummary>& GetSubResources() const { return m_subResources; }
    inline bool SubResourcesHasBeenSet() const { return m_subResourcesHasBeenSet; }
    template<typename SubResourcesT = Aws::Vector<SubResourceSummary>>
    void SetSubResources(SubResourcesT&& value) { m_subResourcesHasBeenSet = true; m_subResources = std::forward<SubResourcesT>(value); }
    template<typename SubResourcesT = Aws::Vector<SubResourceSummary>>
    AttackDetail& WithSubResources(SubResourcesT&& value) { SetSubResources(std::forward<SubResourcesT>(value)); return *this;}
    template<typename SubResourcesT = SubResourceSummary>
    AttackDetail& AddSubResources(SubResourcesT&& value) { m_subResourcesHasBeenSet = true; m_subResources.emplace_back(std::forward<SubResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the attack started, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    AttackDetail& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the attack ended, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    AttackDetail& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of counters that describe the attack for the specified time period.</p>
     */
    inline const Aws::Vector<SummarizedCounter>& GetAttackCounters() const { return m_attackCounters; }
    inline bool AttackCountersHasBeenSet() const { return m_attackCountersHasBeenSet; }
    template<typename AttackCountersT = Aws::Vector<SummarizedCounter>>
    void SetAttackCounters(AttackCountersT&& value) { m_attackCountersHasBeenSet = true; m_attackCounters = std::forward<AttackCountersT>(value); }
    template<typename AttackCountersT = Aws::Vector<SummarizedCounter>>
    AttackDetail& WithAttackCounters(AttackCountersT&& value) { SetAttackCounters(std::forward<AttackCountersT>(value)); return *this;}
    template<typename AttackCountersT = SummarizedCounter>
    AttackDetail& AddAttackCounters(AttackCountersT&& value) { m_attackCountersHasBeenSet = true; m_attackCounters.emplace_back(std::forward<AttackCountersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of objects that provide details of the Shield event. </p> <p>For
     * infrastructure layer events (L3 and L4 events), you can view metrics for top
     * contributors in Amazon CloudWatch metrics. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#set-ddos-alarms">Shield
     * metrics and alarms</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline const Aws::Vector<AttackProperty>& GetAttackProperties() const { return m_attackProperties; }
    inline bool AttackPropertiesHasBeenSet() const { return m_attackPropertiesHasBeenSet; }
    template<typename AttackPropertiesT = Aws::Vector<AttackProperty>>
    void SetAttackProperties(AttackPropertiesT&& value) { m_attackPropertiesHasBeenSet = true; m_attackProperties = std::forward<AttackPropertiesT>(value); }
    template<typename AttackPropertiesT = Aws::Vector<AttackProperty>>
    AttackDetail& WithAttackProperties(AttackPropertiesT&& value) { SetAttackProperties(std::forward<AttackPropertiesT>(value)); return *this;}
    template<typename AttackPropertiesT = AttackProperty>
    AttackDetail& AddAttackProperties(AttackPropertiesT&& value) { m_attackPropertiesHasBeenSet = true; m_attackProperties.emplace_back(std::forward<AttackPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of mitigation actions taken for the attack.</p>
     */
    inline const Aws::Vector<Mitigation>& GetMitigations() const { return m_mitigations; }
    inline bool MitigationsHasBeenSet() const { return m_mitigationsHasBeenSet; }
    template<typename MitigationsT = Aws::Vector<Mitigation>>
    void SetMitigations(MitigationsT&& value) { m_mitigationsHasBeenSet = true; m_mitigations = std::forward<MitigationsT>(value); }
    template<typename MitigationsT = Aws::Vector<Mitigation>>
    AttackDetail& WithMitigations(MitigationsT&& value) { SetMitigations(std::forward<MitigationsT>(value)); return *this;}
    template<typename MitigationsT = Mitigation>
    AttackDetail& AddMitigations(MitigationsT&& value) { m_mitigationsHasBeenSet = true; m_mitigations.emplace_back(std::forward<MitigationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_attackId;
    bool m_attackIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<SubResourceSummary> m_subResources;
    bool m_subResourcesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<SummarizedCounter> m_attackCounters;
    bool m_attackCountersHasBeenSet = false;

    Aws::Vector<AttackProperty> m_attackProperties;
    bool m_attackPropertiesHasBeenSet = false;

    Aws::Vector<Mitigation> m_mitigations;
    bool m_mitigationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws

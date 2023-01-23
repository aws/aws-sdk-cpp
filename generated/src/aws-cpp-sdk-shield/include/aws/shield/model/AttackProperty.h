/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/AttackLayer.h>
#include <aws/shield/model/AttackPropertyIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/Unit.h>
#include <aws/shield/model/Contributor.h>
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
   * <p>Details of a Shield event. This is provided as part of an
   * <a>AttackDetail</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackProperty">AWS
   * API Reference</a></p>
   */
  class AttackProperty
  {
  public:
    AWS_SHIELD_API AttackProperty();
    AWS_SHIELD_API AttackProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API AttackProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of Shield event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p> <p>For infrastructure layer events (L3 and L4 events), you can view
     * metrics for top contributors in Amazon CloudWatch metrics. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#set-ddos-alarms">Shield
     * metrics and alarms</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline const AttackLayer& GetAttackLayer() const{ return m_attackLayer; }

    /**
     * <p>The type of Shield event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p> <p>For infrastructure layer events (L3 and L4 events), you can view
     * metrics for top contributors in Amazon CloudWatch metrics. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#set-ddos-alarms">Shield
     * metrics and alarms</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline bool AttackLayerHasBeenSet() const { return m_attackLayerHasBeenSet; }

    /**
     * <p>The type of Shield event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p> <p>For infrastructure layer events (L3 and L4 events), you can view
     * metrics for top contributors in Amazon CloudWatch metrics. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#set-ddos-alarms">Shield
     * metrics and alarms</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline void SetAttackLayer(const AttackLayer& value) { m_attackLayerHasBeenSet = true; m_attackLayer = value; }

    /**
     * <p>The type of Shield event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p> <p>For infrastructure layer events (L3 and L4 events), you can view
     * metrics for top contributors in Amazon CloudWatch metrics. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#set-ddos-alarms">Shield
     * metrics and alarms</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline void SetAttackLayer(AttackLayer&& value) { m_attackLayerHasBeenSet = true; m_attackLayer = std::move(value); }

    /**
     * <p>The type of Shield event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p> <p>For infrastructure layer events (L3 and L4 events), you can view
     * metrics for top contributors in Amazon CloudWatch metrics. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#set-ddos-alarms">Shield
     * metrics and alarms</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline AttackProperty& WithAttackLayer(const AttackLayer& value) { SetAttackLayer(value); return *this;}

    /**
     * <p>The type of Shield event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p> <p>For infrastructure layer events (L3 and L4 events), you can view
     * metrics for top contributors in Amazon CloudWatch metrics. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#set-ddos-alarms">Shield
     * metrics and alarms</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline AttackProperty& WithAttackLayer(AttackLayer&& value) { SetAttackLayer(std::move(value)); return *this;}


    /**
     * <p>Defines the Shield event property information that is provided. The
     * <code>WORDPRESS_PINGBACK_REFLECTOR</code> and
     * <code>WORDPRESS_PINGBACK_SOURCE</code> values are valid only for WordPress
     * reflective pingback events.</p>
     */
    inline const AttackPropertyIdentifier& GetAttackPropertyIdentifier() const{ return m_attackPropertyIdentifier; }

    /**
     * <p>Defines the Shield event property information that is provided. The
     * <code>WORDPRESS_PINGBACK_REFLECTOR</code> and
     * <code>WORDPRESS_PINGBACK_SOURCE</code> values are valid only for WordPress
     * reflective pingback events.</p>
     */
    inline bool AttackPropertyIdentifierHasBeenSet() const { return m_attackPropertyIdentifierHasBeenSet; }

    /**
     * <p>Defines the Shield event property information that is provided. The
     * <code>WORDPRESS_PINGBACK_REFLECTOR</code> and
     * <code>WORDPRESS_PINGBACK_SOURCE</code> values are valid only for WordPress
     * reflective pingback events.</p>
     */
    inline void SetAttackPropertyIdentifier(const AttackPropertyIdentifier& value) { m_attackPropertyIdentifierHasBeenSet = true; m_attackPropertyIdentifier = value; }

    /**
     * <p>Defines the Shield event property information that is provided. The
     * <code>WORDPRESS_PINGBACK_REFLECTOR</code> and
     * <code>WORDPRESS_PINGBACK_SOURCE</code> values are valid only for WordPress
     * reflective pingback events.</p>
     */
    inline void SetAttackPropertyIdentifier(AttackPropertyIdentifier&& value) { m_attackPropertyIdentifierHasBeenSet = true; m_attackPropertyIdentifier = std::move(value); }

    /**
     * <p>Defines the Shield event property information that is provided. The
     * <code>WORDPRESS_PINGBACK_REFLECTOR</code> and
     * <code>WORDPRESS_PINGBACK_SOURCE</code> values are valid only for WordPress
     * reflective pingback events.</p>
     */
    inline AttackProperty& WithAttackPropertyIdentifier(const AttackPropertyIdentifier& value) { SetAttackPropertyIdentifier(value); return *this;}

    /**
     * <p>Defines the Shield event property information that is provided. The
     * <code>WORDPRESS_PINGBACK_REFLECTOR</code> and
     * <code>WORDPRESS_PINGBACK_SOURCE</code> values are valid only for WordPress
     * reflective pingback events.</p>
     */
    inline AttackProperty& WithAttackPropertyIdentifier(AttackPropertyIdentifier&& value) { SetAttackPropertyIdentifier(std::move(value)); return *this;}


    /**
     * <p>Contributor objects for the top five contributors to a Shield event. A
     * contributor is a source of traffic that Shield Advanced identifies as
     * responsible for some or all of an event.</p>
     */
    inline const Aws::Vector<Contributor>& GetTopContributors() const{ return m_topContributors; }

    /**
     * <p>Contributor objects for the top five contributors to a Shield event. A
     * contributor is a source of traffic that Shield Advanced identifies as
     * responsible for some or all of an event.</p>
     */
    inline bool TopContributorsHasBeenSet() const { return m_topContributorsHasBeenSet; }

    /**
     * <p>Contributor objects for the top five contributors to a Shield event. A
     * contributor is a source of traffic that Shield Advanced identifies as
     * responsible for some or all of an event.</p>
     */
    inline void SetTopContributors(const Aws::Vector<Contributor>& value) { m_topContributorsHasBeenSet = true; m_topContributors = value; }

    /**
     * <p>Contributor objects for the top five contributors to a Shield event. A
     * contributor is a source of traffic that Shield Advanced identifies as
     * responsible for some or all of an event.</p>
     */
    inline void SetTopContributors(Aws::Vector<Contributor>&& value) { m_topContributorsHasBeenSet = true; m_topContributors = std::move(value); }

    /**
     * <p>Contributor objects for the top five contributors to a Shield event. A
     * contributor is a source of traffic that Shield Advanced identifies as
     * responsible for some or all of an event.</p>
     */
    inline AttackProperty& WithTopContributors(const Aws::Vector<Contributor>& value) { SetTopContributors(value); return *this;}

    /**
     * <p>Contributor objects for the top five contributors to a Shield event. A
     * contributor is a source of traffic that Shield Advanced identifies as
     * responsible for some or all of an event.</p>
     */
    inline AttackProperty& WithTopContributors(Aws::Vector<Contributor>&& value) { SetTopContributors(std::move(value)); return *this;}

    /**
     * <p>Contributor objects for the top five contributors to a Shield event. A
     * contributor is a source of traffic that Shield Advanced identifies as
     * responsible for some or all of an event.</p>
     */
    inline AttackProperty& AddTopContributors(const Contributor& value) { m_topContributorsHasBeenSet = true; m_topContributors.push_back(value); return *this; }

    /**
     * <p>Contributor objects for the top five contributors to a Shield event. A
     * contributor is a source of traffic that Shield Advanced identifies as
     * responsible for some or all of an event.</p>
     */
    inline AttackProperty& AddTopContributors(Contributor&& value) { m_topContributorsHasBeenSet = true; m_topContributors.push_back(std::move(value)); return *this; }


    /**
     * <p>The unit used for the <code>Contributor</code> <code>Value</code> property.
     * </p>
     */
    inline const Unit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit used for the <code>Contributor</code> <code>Value</code> property.
     * </p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit used for the <code>Contributor</code> <code>Value</code> property.
     * </p>
     */
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit used for the <code>Contributor</code> <code>Value</code> property.
     * </p>
     */
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit used for the <code>Contributor</code> <code>Value</code> property.
     * </p>
     */
    inline AttackProperty& WithUnit(const Unit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit used for the <code>Contributor</code> <code>Value</code> property.
     * </p>
     */
    inline AttackProperty& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The total contributions made to this Shield event by all contributors.</p>
     */
    inline long long GetTotal() const{ return m_total; }

    /**
     * <p>The total contributions made to this Shield event by all contributors.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total contributions made to this Shield event by all contributors.</p>
     */
    inline void SetTotal(long long value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total contributions made to this Shield event by all contributors.</p>
     */
    inline AttackProperty& WithTotal(long long value) { SetTotal(value); return *this;}

  private:

    AttackLayer m_attackLayer;
    bool m_attackLayerHasBeenSet = false;

    AttackPropertyIdentifier m_attackPropertyIdentifier;
    bool m_attackPropertyIdentifierHasBeenSet = false;

    Aws::Vector<Contributor> m_topContributors;
    bool m_topContributorsHasBeenSet = false;

    Unit m_unit;
    bool m_unitHasBeenSet = false;

    long long m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws

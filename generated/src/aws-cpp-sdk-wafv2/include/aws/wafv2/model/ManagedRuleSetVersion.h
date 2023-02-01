/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Information for a single version of a managed rule set. </p>  <p>This
   * is intended for use only by vendors of managed rule sets. Vendors are Amazon Web
   * Services and Amazon Web Services Marketplace sellers. </p> <p>Vendors, you can
   * use the managed rule set APIs to provide controlled rollout of your versioned
   * managed rule group offerings for your customers. The APIs are
   * <code>ListManagedRuleSets</code>, <code>GetManagedRuleSet</code>,
   * <code>PutManagedRuleSetVersions</code>, and
   * <code>UpdateManagedRuleSetVersionExpiryDate</code>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleSetVersion">AWS
   * API Reference</a></p>
   */
  class ManagedRuleSetVersion
  {
  public:
    AWS_WAFV2_API ManagedRuleSetVersion();
    AWS_WAFV2_API ManagedRuleSetVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedRuleSetVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the vendor rule group that's used to define
     * the published version of your managed rule group. </p>
     */
    inline const Aws::String& GetAssociatedRuleGroupArn() const{ return m_associatedRuleGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor rule group that's used to define
     * the published version of your managed rule group. </p>
     */
    inline bool AssociatedRuleGroupArnHasBeenSet() const { return m_associatedRuleGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor rule group that's used to define
     * the published version of your managed rule group. </p>
     */
    inline void SetAssociatedRuleGroupArn(const Aws::String& value) { m_associatedRuleGroupArnHasBeenSet = true; m_associatedRuleGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor rule group that's used to define
     * the published version of your managed rule group. </p>
     */
    inline void SetAssociatedRuleGroupArn(Aws::String&& value) { m_associatedRuleGroupArnHasBeenSet = true; m_associatedRuleGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor rule group that's used to define
     * the published version of your managed rule group. </p>
     */
    inline void SetAssociatedRuleGroupArn(const char* value) { m_associatedRuleGroupArnHasBeenSet = true; m_associatedRuleGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor rule group that's used to define
     * the published version of your managed rule group. </p>
     */
    inline ManagedRuleSetVersion& WithAssociatedRuleGroupArn(const Aws::String& value) { SetAssociatedRuleGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor rule group that's used to define
     * the published version of your managed rule group. </p>
     */
    inline ManagedRuleSetVersion& WithAssociatedRuleGroupArn(Aws::String&& value) { SetAssociatedRuleGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor rule group that's used to define
     * the published version of your managed rule group. </p>
     */
    inline ManagedRuleSetVersion& WithAssociatedRuleGroupArn(const char* value) { SetAssociatedRuleGroupArn(value); return *this;}


    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group.</p> <p>WAF
     * uses WCUs to calculate and control the operating resources that are used to run
     * your rules, rule groups, and web ACLs. WAF calculates capacity differently for
     * each rule type, to reflect the relative cost of each rule. Simple rules that
     * cost little to run use fewer WCUs than more complex rules that use more
     * processing power. Rule group capacity is fixed at creation, which helps users
     * plan their web ACL WCU usage when they use a rule group. The WCU limit for web
     * ACLs is 1,500. </p>
     */
    inline long long GetCapacity() const{ return m_capacity; }

    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group.</p> <p>WAF
     * uses WCUs to calculate and control the operating resources that are used to run
     * your rules, rule groups, and web ACLs. WAF calculates capacity differently for
     * each rule type, to reflect the relative cost of each rule. Simple rules that
     * cost little to run use fewer WCUs than more complex rules that use more
     * processing power. Rule group capacity is fixed at creation, which helps users
     * plan their web ACL WCU usage when they use a rule group. The WCU limit for web
     * ACLs is 1,500. </p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group.</p> <p>WAF
     * uses WCUs to calculate and control the operating resources that are used to run
     * your rules, rule groups, and web ACLs. WAF calculates capacity differently for
     * each rule type, to reflect the relative cost of each rule. Simple rules that
     * cost little to run use fewer WCUs than more complex rules that use more
     * processing power. Rule group capacity is fixed at creation, which helps users
     * plan their web ACL WCU usage when they use a rule group. The WCU limit for web
     * ACLs is 1,500. </p>
     */
    inline void SetCapacity(long long value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group.</p> <p>WAF
     * uses WCUs to calculate and control the operating resources that are used to run
     * your rules, rule groups, and web ACLs. WAF calculates capacity differently for
     * each rule type, to reflect the relative cost of each rule. Simple rules that
     * cost little to run use fewer WCUs than more complex rules that use more
     * processing power. Rule group capacity is fixed at creation, which helps users
     * plan their web ACL WCU usage when they use a rule group. The WCU limit for web
     * ACLs is 1,500. </p>
     */
    inline ManagedRuleSetVersion& WithCapacity(long long value) { SetCapacity(value); return *this;}


    /**
     * <p>The amount of time you expect this version of your managed rule group to
     * last, in days. </p>
     */
    inline int GetForecastedLifetime() const{ return m_forecastedLifetime; }

    /**
     * <p>The amount of time you expect this version of your managed rule group to
     * last, in days. </p>
     */
    inline bool ForecastedLifetimeHasBeenSet() const { return m_forecastedLifetimeHasBeenSet; }

    /**
     * <p>The amount of time you expect this version of your managed rule group to
     * last, in days. </p>
     */
    inline void SetForecastedLifetime(int value) { m_forecastedLifetimeHasBeenSet = true; m_forecastedLifetime = value; }

    /**
     * <p>The amount of time you expect this version of your managed rule group to
     * last, in days. </p>
     */
    inline ManagedRuleSetVersion& WithForecastedLifetime(int value) { SetForecastedLifetime(value); return *this;}


    /**
     * <p>The time that you first published this version. </p> <p>Times are in
     * Coordinated Universal Time (UTC) format. UTC format includes the special
     * designator, Z. For example, "2016-09-27T14:50Z". </p>
     */
    inline const Aws::Utils::DateTime& GetPublishTimestamp() const{ return m_publishTimestamp; }

    /**
     * <p>The time that you first published this version. </p> <p>Times are in
     * Coordinated Universal Time (UTC) format. UTC format includes the special
     * designator, Z. For example, "2016-09-27T14:50Z". </p>
     */
    inline bool PublishTimestampHasBeenSet() const { return m_publishTimestampHasBeenSet; }

    /**
     * <p>The time that you first published this version. </p> <p>Times are in
     * Coordinated Universal Time (UTC) format. UTC format includes the special
     * designator, Z. For example, "2016-09-27T14:50Z". </p>
     */
    inline void SetPublishTimestamp(const Aws::Utils::DateTime& value) { m_publishTimestampHasBeenSet = true; m_publishTimestamp = value; }

    /**
     * <p>The time that you first published this version. </p> <p>Times are in
     * Coordinated Universal Time (UTC) format. UTC format includes the special
     * designator, Z. For example, "2016-09-27T14:50Z". </p>
     */
    inline void SetPublishTimestamp(Aws::Utils::DateTime&& value) { m_publishTimestampHasBeenSet = true; m_publishTimestamp = std::move(value); }

    /**
     * <p>The time that you first published this version. </p> <p>Times are in
     * Coordinated Universal Time (UTC) format. UTC format includes the special
     * designator, Z. For example, "2016-09-27T14:50Z". </p>
     */
    inline ManagedRuleSetVersion& WithPublishTimestamp(const Aws::Utils::DateTime& value) { SetPublishTimestamp(value); return *this;}

    /**
     * <p>The time that you first published this version. </p> <p>Times are in
     * Coordinated Universal Time (UTC) format. UTC format includes the special
     * designator, Z. For example, "2016-09-27T14:50Z". </p>
     */
    inline ManagedRuleSetVersion& WithPublishTimestamp(Aws::Utils::DateTime&& value) { SetPublishTimestamp(std::move(value)); return *this;}


    /**
     * <p>The last time that you updated this version. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const{ return m_lastUpdateTimestamp; }

    /**
     * <p>The last time that you updated this version. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }

    /**
     * <p>The last time that you updated this version. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline void SetLastUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = value; }

    /**
     * <p>The last time that you updated this version. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline void SetLastUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::move(value); }

    /**
     * <p>The last time that you updated this version. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline ManagedRuleSetVersion& WithLastUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateTimestamp(value); return *this;}

    /**
     * <p>The last time that you updated this version. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline ManagedRuleSetVersion& WithLastUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time that this version is set to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTimestamp() const{ return m_expiryTimestamp; }

    /**
     * <p>The time that this version is set to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline bool ExpiryTimestampHasBeenSet() const { return m_expiryTimestampHasBeenSet; }

    /**
     * <p>The time that this version is set to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline void SetExpiryTimestamp(const Aws::Utils::DateTime& value) { m_expiryTimestampHasBeenSet = true; m_expiryTimestamp = value; }

    /**
     * <p>The time that this version is set to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline void SetExpiryTimestamp(Aws::Utils::DateTime&& value) { m_expiryTimestampHasBeenSet = true; m_expiryTimestamp = std::move(value); }

    /**
     * <p>The time that this version is set to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline ManagedRuleSetVersion& WithExpiryTimestamp(const Aws::Utils::DateTime& value) { SetExpiryTimestamp(value); return *this;}

    /**
     * <p>The time that this version is set to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline ManagedRuleSetVersion& WithExpiryTimestamp(Aws::Utils::DateTime&& value) { SetExpiryTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_associatedRuleGroupArn;
    bool m_associatedRuleGroupArnHasBeenSet = false;

    long long m_capacity;
    bool m_capacityHasBeenSet = false;

    int m_forecastedLifetime;
    bool m_forecastedLifetimeHasBeenSet = false;

    Aws::Utils::DateTime m_publishTimestamp;
    bool m_publishTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp;
    bool m_lastUpdateTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTimestamp;
    bool m_expiryTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws

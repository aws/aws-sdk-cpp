/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A version of the named managed rule group, that the rule group's vendor
   * publishes for use by customers. </p>  <p>This is intended for use only by
   * vendors of managed rule sets. Vendors are Amazon Web Services and Amazon Web
   * Services Marketplace sellers. </p> <p>Vendors, you can use the managed rule set
   * APIs to provide controlled rollout of your versioned managed rule group
   * offerings for your customers. The APIs are <code>ListManagedRuleSets</code>,
   * <code>GetManagedRuleSet</code>, <code>PutManagedRuleSetVersions</code>, and
   * <code>UpdateManagedRuleSetVersionExpiryDate</code>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/VersionToPublish">AWS
   * API Reference</a></p>
   */
  class VersionToPublish
  {
  public:
    AWS_WAFV2_API VersionToPublish() = default;
    AWS_WAFV2_API VersionToPublish(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API VersionToPublish& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vendor's rule group that's used in the
     * published managed rule group version. </p>
     */
    inline const Aws::String& GetAssociatedRuleGroupArn() const { return m_associatedRuleGroupArn; }
    inline bool AssociatedRuleGroupArnHasBeenSet() const { return m_associatedRuleGroupArnHasBeenSet; }
    template<typename AssociatedRuleGroupArnT = Aws::String>
    void SetAssociatedRuleGroupArn(AssociatedRuleGroupArnT&& value) { m_associatedRuleGroupArnHasBeenSet = true; m_associatedRuleGroupArn = std::forward<AssociatedRuleGroupArnT>(value); }
    template<typename AssociatedRuleGroupArnT = Aws::String>
    VersionToPublish& WithAssociatedRuleGroupArn(AssociatedRuleGroupArnT&& value) { SetAssociatedRuleGroupArn(std::forward<AssociatedRuleGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time the vendor expects this version of the managed rule group
     * to last, in days. </p>
     */
    inline int GetForecastedLifetime() const { return m_forecastedLifetime; }
    inline bool ForecastedLifetimeHasBeenSet() const { return m_forecastedLifetimeHasBeenSet; }
    inline void SetForecastedLifetime(int value) { m_forecastedLifetimeHasBeenSet = true; m_forecastedLifetime = value; }
    inline VersionToPublish& WithForecastedLifetime(int value) { SetForecastedLifetime(value); return *this;}
    ///@}
  private:

    Aws::String m_associatedRuleGroupArn;
    bool m_associatedRuleGroupArnHasBeenSet = false;

    int m_forecastedLifetime{0};
    bool m_forecastedLifetimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ProtectionGroupPatternTypeLimits.h>
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
   * <p>Limits settings on protection groups for your subscription. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ProtectionGroupLimits">AWS
   * API Reference</a></p>
   */
  class ProtectionGroupLimits
  {
  public:
    AWS_SHIELD_API ProtectionGroupLimits() = default;
    AWS_SHIELD_API ProtectionGroupLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API ProtectionGroupLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of protection groups that you can have at one time. </p>
     */
    inline long long GetMaxProtectionGroups() const { return m_maxProtectionGroups; }
    inline bool MaxProtectionGroupsHasBeenSet() const { return m_maxProtectionGroupsHasBeenSet; }
    inline void SetMaxProtectionGroups(long long value) { m_maxProtectionGroupsHasBeenSet = true; m_maxProtectionGroups = value; }
    inline ProtectionGroupLimits& WithMaxProtectionGroups(long long value) { SetMaxProtectionGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits settings by pattern type in the protection groups for your
     * subscription. </p>
     */
    inline const ProtectionGroupPatternTypeLimits& GetPatternTypeLimits() const { return m_patternTypeLimits; }
    inline bool PatternTypeLimitsHasBeenSet() const { return m_patternTypeLimitsHasBeenSet; }
    template<typename PatternTypeLimitsT = ProtectionGroupPatternTypeLimits>
    void SetPatternTypeLimits(PatternTypeLimitsT&& value) { m_patternTypeLimitsHasBeenSet = true; m_patternTypeLimits = std::forward<PatternTypeLimitsT>(value); }
    template<typename PatternTypeLimitsT = ProtectionGroupPatternTypeLimits>
    ProtectionGroupLimits& WithPatternTypeLimits(PatternTypeLimitsT&& value) { SetPatternTypeLimits(std::forward<PatternTypeLimitsT>(value)); return *this;}
    ///@}
  private:

    long long m_maxProtectionGroups{0};
    bool m_maxProtectionGroupsHasBeenSet = false;

    ProtectionGroupPatternTypeLimits m_patternTypeLimits;
    bool m_patternTypeLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws

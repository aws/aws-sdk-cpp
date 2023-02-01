/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ProtectionGroupArbitraryPatternLimits.h>
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
   * <p>Limits settings by pattern type in the protection groups for your
   * subscription. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ProtectionGroupPatternTypeLimits">AWS
   * API Reference</a></p>
   */
  class ProtectionGroupPatternTypeLimits
  {
  public:
    AWS_SHIELD_API ProtectionGroupPatternTypeLimits();
    AWS_SHIELD_API ProtectionGroupPatternTypeLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API ProtectionGroupPatternTypeLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Limits settings on protection groups with arbitrary pattern type. </p>
     */
    inline const ProtectionGroupArbitraryPatternLimits& GetArbitraryPatternLimits() const{ return m_arbitraryPatternLimits; }

    /**
     * <p>Limits settings on protection groups with arbitrary pattern type. </p>
     */
    inline bool ArbitraryPatternLimitsHasBeenSet() const { return m_arbitraryPatternLimitsHasBeenSet; }

    /**
     * <p>Limits settings on protection groups with arbitrary pattern type. </p>
     */
    inline void SetArbitraryPatternLimits(const ProtectionGroupArbitraryPatternLimits& value) { m_arbitraryPatternLimitsHasBeenSet = true; m_arbitraryPatternLimits = value; }

    /**
     * <p>Limits settings on protection groups with arbitrary pattern type. </p>
     */
    inline void SetArbitraryPatternLimits(ProtectionGroupArbitraryPatternLimits&& value) { m_arbitraryPatternLimitsHasBeenSet = true; m_arbitraryPatternLimits = std::move(value); }

    /**
     * <p>Limits settings on protection groups with arbitrary pattern type. </p>
     */
    inline ProtectionGroupPatternTypeLimits& WithArbitraryPatternLimits(const ProtectionGroupArbitraryPatternLimits& value) { SetArbitraryPatternLimits(value); return *this;}

    /**
     * <p>Limits settings on protection groups with arbitrary pattern type. </p>
     */
    inline ProtectionGroupPatternTypeLimits& WithArbitraryPatternLimits(ProtectionGroupArbitraryPatternLimits&& value) { SetArbitraryPatternLimits(std::move(value)); return *this;}

  private:

    ProtectionGroupArbitraryPatternLimits m_arbitraryPatternLimits;
    bool m_arbitraryPatternLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws

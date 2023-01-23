/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>

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
   * <p>Limits settings on protection groups with arbitrary pattern type.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ProtectionGroupArbitraryPatternLimits">AWS
   * API Reference</a></p>
   */
  class ProtectionGroupArbitraryPatternLimits
  {
  public:
    AWS_SHIELD_API ProtectionGroupArbitraryPatternLimits();
    AWS_SHIELD_API ProtectionGroupArbitraryPatternLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API ProtectionGroupArbitraryPatternLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of resources you can specify for a single arbitrary
     * pattern in a protection group.</p>
     */
    inline long long GetMaxMembers() const{ return m_maxMembers; }

    /**
     * <p>The maximum number of resources you can specify for a single arbitrary
     * pattern in a protection group.</p>
     */
    inline bool MaxMembersHasBeenSet() const { return m_maxMembersHasBeenSet; }

    /**
     * <p>The maximum number of resources you can specify for a single arbitrary
     * pattern in a protection group.</p>
     */
    inline void SetMaxMembers(long long value) { m_maxMembersHasBeenSet = true; m_maxMembers = value; }

    /**
     * <p>The maximum number of resources you can specify for a single arbitrary
     * pattern in a protection group.</p>
     */
    inline ProtectionGroupArbitraryPatternLimits& WithMaxMembers(long long value) { SetMaxMembers(value); return *this;}

  private:

    long long m_maxMembers;
    bool m_maxMembersHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws

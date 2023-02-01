/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>

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
   * <p>Used for CAPTCHA and challenge token settings. Determines how long a
   * <code>CAPTCHA</code> or challenge timestamp remains valid after WAF updates it
   * for a successful <code>CAPTCHA</code> or challenge response. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ImmunityTimeProperty">AWS
   * API Reference</a></p>
   */
  class ImmunityTimeProperty
  {
  public:
    AWS_WAFV2_API ImmunityTimeProperty();
    AWS_WAFV2_API ImmunityTimeProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ImmunityTimeProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of time, in seconds, that a <code>CAPTCHA</code> or challenge
     * timestamp is considered valid by WAF. The default setting is 300. </p> <p>For
     * the Challenge action, the minimum setting is 300. </p>
     */
    inline long long GetImmunityTime() const{ return m_immunityTime; }

    /**
     * <p>The amount of time, in seconds, that a <code>CAPTCHA</code> or challenge
     * timestamp is considered valid by WAF. The default setting is 300. </p> <p>For
     * the Challenge action, the minimum setting is 300. </p>
     */
    inline bool ImmunityTimeHasBeenSet() const { return m_immunityTimeHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, that a <code>CAPTCHA</code> or challenge
     * timestamp is considered valid by WAF. The default setting is 300. </p> <p>For
     * the Challenge action, the minimum setting is 300. </p>
     */
    inline void SetImmunityTime(long long value) { m_immunityTimeHasBeenSet = true; m_immunityTime = value; }

    /**
     * <p>The amount of time, in seconds, that a <code>CAPTCHA</code> or challenge
     * timestamp is considered valid by WAF. The default setting is 300. </p> <p>For
     * the Challenge action, the minimum setting is 300. </p>
     */
    inline ImmunityTimeProperty& WithImmunityTime(long long value) { SetImmunityTime(value); return *this;}

  private:

    long long m_immunityTime;
    bool m_immunityTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Used for CAPTCHA and challenge token settings. Determines how long a CAPTCHA
   * or challenge timestamp remains valid after WAF updates it for a successful
   * CAPTCHA or challenge response. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails();
    AWS_SECURITYHUB_API AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The amount of time, in seconds, that a CAPTCHA or challenge timestamp is
     * considered valid by WAF. </p>
     */
    inline long long GetImmunityTime() const{ return m_immunityTime; }

    /**
     * <p> The amount of time, in seconds, that a CAPTCHA or challenge timestamp is
     * considered valid by WAF. </p>
     */
    inline bool ImmunityTimeHasBeenSet() const { return m_immunityTimeHasBeenSet; }

    /**
     * <p> The amount of time, in seconds, that a CAPTCHA or challenge timestamp is
     * considered valid by WAF. </p>
     */
    inline void SetImmunityTime(long long value) { m_immunityTimeHasBeenSet = true; m_immunityTime = value; }

    /**
     * <p> The amount of time, in seconds, that a CAPTCHA or challenge timestamp is
     * considered valid by WAF. </p>
     */
    inline AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails& WithImmunityTime(long long value) { SetImmunityTime(value); return *this;}

  private:

    long long m_immunityTime;
    bool m_immunityTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

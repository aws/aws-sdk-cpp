/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ImmunityTimeProperty.h>
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
   * <p>Specifies how WAF should handle <code>Challenge</code> evaluations. This is
   * available at the web ACL level and in each rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ChallengeConfig">AWS
   * API Reference</a></p>
   */
  class ChallengeConfig
  {
  public:
    AWS_WAFV2_API ChallengeConfig();
    AWS_WAFV2_API ChallengeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ChallengeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines how long a challenge timestamp in the token remains valid after
     * the client successfully responds to a challenge. </p>
     */
    inline const ImmunityTimeProperty& GetImmunityTimeProperty() const{ return m_immunityTimeProperty; }

    /**
     * <p>Determines how long a challenge timestamp in the token remains valid after
     * the client successfully responds to a challenge. </p>
     */
    inline bool ImmunityTimePropertyHasBeenSet() const { return m_immunityTimePropertyHasBeenSet; }

    /**
     * <p>Determines how long a challenge timestamp in the token remains valid after
     * the client successfully responds to a challenge. </p>
     */
    inline void SetImmunityTimeProperty(const ImmunityTimeProperty& value) { m_immunityTimePropertyHasBeenSet = true; m_immunityTimeProperty = value; }

    /**
     * <p>Determines how long a challenge timestamp in the token remains valid after
     * the client successfully responds to a challenge. </p>
     */
    inline void SetImmunityTimeProperty(ImmunityTimeProperty&& value) { m_immunityTimePropertyHasBeenSet = true; m_immunityTimeProperty = std::move(value); }

    /**
     * <p>Determines how long a challenge timestamp in the token remains valid after
     * the client successfully responds to a challenge. </p>
     */
    inline ChallengeConfig& WithImmunityTimeProperty(const ImmunityTimeProperty& value) { SetImmunityTimeProperty(value); return *this;}

    /**
     * <p>Determines how long a challenge timestamp in the token remains valid after
     * the client successfully responds to a challenge. </p>
     */
    inline ChallengeConfig& WithImmunityTimeProperty(ImmunityTimeProperty&& value) { SetImmunityTimeProperty(std::move(value)); return *this;}

  private:

    ImmunityTimeProperty m_immunityTimeProperty;
    bool m_immunityTimePropertyHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws

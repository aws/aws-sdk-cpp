/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ProtectionLimits.h>
#include <aws/shield/model/ProtectionGroupLimits.h>
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
   * <p>Limits settings for your subscription. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/SubscriptionLimits">AWS
   * API Reference</a></p>
   */
  class SubscriptionLimits
  {
  public:
    AWS_SHIELD_API SubscriptionLimits();
    AWS_SHIELD_API SubscriptionLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API SubscriptionLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Limits settings on protections for your subscription. </p>
     */
    inline const ProtectionLimits& GetProtectionLimits() const{ return m_protectionLimits; }

    /**
     * <p>Limits settings on protections for your subscription. </p>
     */
    inline bool ProtectionLimitsHasBeenSet() const { return m_protectionLimitsHasBeenSet; }

    /**
     * <p>Limits settings on protections for your subscription. </p>
     */
    inline void SetProtectionLimits(const ProtectionLimits& value) { m_protectionLimitsHasBeenSet = true; m_protectionLimits = value; }

    /**
     * <p>Limits settings on protections for your subscription. </p>
     */
    inline void SetProtectionLimits(ProtectionLimits&& value) { m_protectionLimitsHasBeenSet = true; m_protectionLimits = std::move(value); }

    /**
     * <p>Limits settings on protections for your subscription. </p>
     */
    inline SubscriptionLimits& WithProtectionLimits(const ProtectionLimits& value) { SetProtectionLimits(value); return *this;}

    /**
     * <p>Limits settings on protections for your subscription. </p>
     */
    inline SubscriptionLimits& WithProtectionLimits(ProtectionLimits&& value) { SetProtectionLimits(std::move(value)); return *this;}


    /**
     * <p>Limits settings on protection groups for your subscription. </p>
     */
    inline const ProtectionGroupLimits& GetProtectionGroupLimits() const{ return m_protectionGroupLimits; }

    /**
     * <p>Limits settings on protection groups for your subscription. </p>
     */
    inline bool ProtectionGroupLimitsHasBeenSet() const { return m_protectionGroupLimitsHasBeenSet; }

    /**
     * <p>Limits settings on protection groups for your subscription. </p>
     */
    inline void SetProtectionGroupLimits(const ProtectionGroupLimits& value) { m_protectionGroupLimitsHasBeenSet = true; m_protectionGroupLimits = value; }

    /**
     * <p>Limits settings on protection groups for your subscription. </p>
     */
    inline void SetProtectionGroupLimits(ProtectionGroupLimits&& value) { m_protectionGroupLimitsHasBeenSet = true; m_protectionGroupLimits = std::move(value); }

    /**
     * <p>Limits settings on protection groups for your subscription. </p>
     */
    inline SubscriptionLimits& WithProtectionGroupLimits(const ProtectionGroupLimits& value) { SetProtectionGroupLimits(value); return *this;}

    /**
     * <p>Limits settings on protection groups for your subscription. </p>
     */
    inline SubscriptionLimits& WithProtectionGroupLimits(ProtectionGroupLimits&& value) { SetProtectionGroupLimits(std::move(value)); return *this;}

  private:

    ProtectionLimits m_protectionLimits;
    bool m_protectionLimitsHasBeenSet = false;

    ProtectionGroupLimits m_protectionGroupLimits;
    bool m_protectionGroupLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws

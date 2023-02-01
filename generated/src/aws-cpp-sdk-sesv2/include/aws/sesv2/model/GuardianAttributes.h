/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/FeatureStatus.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object containing additional settings for your VDM configuration as
   * applicable to the Guardian.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GuardianAttributes">AWS
   * API Reference</a></p>
   */
  class GuardianAttributes
  {
  public:
    AWS_SESV2_API GuardianAttributes();
    AWS_SESV2_API GuardianAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API GuardianAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the status of your VDM optimized shared delivery. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables optimized
     * shared delivery for your account.</p> </li> <li> <p> <code>DISABLED</code> –
     * Amazon SES disables optimized shared delivery for your account.</p> </li> </ul>
     */
    inline const FeatureStatus& GetOptimizedSharedDelivery() const{ return m_optimizedSharedDelivery; }

    /**
     * <p>Specifies the status of your VDM optimized shared delivery. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables optimized
     * shared delivery for your account.</p> </li> <li> <p> <code>DISABLED</code> –
     * Amazon SES disables optimized shared delivery for your account.</p> </li> </ul>
     */
    inline bool OptimizedSharedDeliveryHasBeenSet() const { return m_optimizedSharedDeliveryHasBeenSet; }

    /**
     * <p>Specifies the status of your VDM optimized shared delivery. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables optimized
     * shared delivery for your account.</p> </li> <li> <p> <code>DISABLED</code> –
     * Amazon SES disables optimized shared delivery for your account.</p> </li> </ul>
     */
    inline void SetOptimizedSharedDelivery(const FeatureStatus& value) { m_optimizedSharedDeliveryHasBeenSet = true; m_optimizedSharedDelivery = value; }

    /**
     * <p>Specifies the status of your VDM optimized shared delivery. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables optimized
     * shared delivery for your account.</p> </li> <li> <p> <code>DISABLED</code> –
     * Amazon SES disables optimized shared delivery for your account.</p> </li> </ul>
     */
    inline void SetOptimizedSharedDelivery(FeatureStatus&& value) { m_optimizedSharedDeliveryHasBeenSet = true; m_optimizedSharedDelivery = std::move(value); }

    /**
     * <p>Specifies the status of your VDM optimized shared delivery. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables optimized
     * shared delivery for your account.</p> </li> <li> <p> <code>DISABLED</code> –
     * Amazon SES disables optimized shared delivery for your account.</p> </li> </ul>
     */
    inline GuardianAttributes& WithOptimizedSharedDelivery(const FeatureStatus& value) { SetOptimizedSharedDelivery(value); return *this;}

    /**
     * <p>Specifies the status of your VDM optimized shared delivery. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables optimized
     * shared delivery for your account.</p> </li> <li> <p> <code>DISABLED</code> –
     * Amazon SES disables optimized shared delivery for your account.</p> </li> </ul>
     */
    inline GuardianAttributes& WithOptimizedSharedDelivery(FeatureStatus&& value) { SetOptimizedSharedDelivery(std::move(value)); return *this;}

  private:

    FeatureStatus m_optimizedSharedDelivery;
    bool m_optimizedSharedDeliveryHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

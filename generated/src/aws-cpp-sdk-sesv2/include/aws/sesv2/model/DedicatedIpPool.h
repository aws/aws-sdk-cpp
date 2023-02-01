/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ScalingMode.h>
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
   * <p>Contains information about a dedicated IP pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DedicatedIpPool">AWS
   * API Reference</a></p>
   */
  class DedicatedIpPool
  {
  public:
    AWS_SESV2_API DedicatedIpPool();
    AWS_SESV2_API DedicatedIpPool(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DedicatedIpPool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline DedicatedIpPool& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline DedicatedIpPool& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline DedicatedIpPool& WithPoolName(const char* value) { SetPoolName(value); return *this;}


    /**
     * <p>The type of the dedicated IP pool.</p> <ul> <li> <p> <code>STANDARD</code> –
     * A dedicated IP pool where the customer can control which IPs are part of the
     * pool.</p> </li> <li> <p> <code>MANAGED</code> – A dedicated IP pool where the
     * reputation and number of IPs is automatically managed by Amazon SES.</p> </li>
     * </ul>
     */
    inline const ScalingMode& GetScalingMode() const{ return m_scalingMode; }

    /**
     * <p>The type of the dedicated IP pool.</p> <ul> <li> <p> <code>STANDARD</code> –
     * A dedicated IP pool where the customer can control which IPs are part of the
     * pool.</p> </li> <li> <p> <code>MANAGED</code> – A dedicated IP pool where the
     * reputation and number of IPs is automatically managed by Amazon SES.</p> </li>
     * </ul>
     */
    inline bool ScalingModeHasBeenSet() const { return m_scalingModeHasBeenSet; }

    /**
     * <p>The type of the dedicated IP pool.</p> <ul> <li> <p> <code>STANDARD</code> –
     * A dedicated IP pool where the customer can control which IPs are part of the
     * pool.</p> </li> <li> <p> <code>MANAGED</code> – A dedicated IP pool where the
     * reputation and number of IPs is automatically managed by Amazon SES.</p> </li>
     * </ul>
     */
    inline void SetScalingMode(const ScalingMode& value) { m_scalingModeHasBeenSet = true; m_scalingMode = value; }

    /**
     * <p>The type of the dedicated IP pool.</p> <ul> <li> <p> <code>STANDARD</code> –
     * A dedicated IP pool where the customer can control which IPs are part of the
     * pool.</p> </li> <li> <p> <code>MANAGED</code> – A dedicated IP pool where the
     * reputation and number of IPs is automatically managed by Amazon SES.</p> </li>
     * </ul>
     */
    inline void SetScalingMode(ScalingMode&& value) { m_scalingModeHasBeenSet = true; m_scalingMode = std::move(value); }

    /**
     * <p>The type of the dedicated IP pool.</p> <ul> <li> <p> <code>STANDARD</code> –
     * A dedicated IP pool where the customer can control which IPs are part of the
     * pool.</p> </li> <li> <p> <code>MANAGED</code> – A dedicated IP pool where the
     * reputation and number of IPs is automatically managed by Amazon SES.</p> </li>
     * </ul>
     */
    inline DedicatedIpPool& WithScalingMode(const ScalingMode& value) { SetScalingMode(value); return *this;}

    /**
     * <p>The type of the dedicated IP pool.</p> <ul> <li> <p> <code>STANDARD</code> –
     * A dedicated IP pool where the customer can control which IPs are part of the
     * pool.</p> </li> <li> <p> <code>MANAGED</code> – A dedicated IP pool where the
     * reputation and number of IPs is automatically managed by Amazon SES.</p> </li>
     * </ul>
     */
    inline DedicatedIpPool& WithScalingMode(ScalingMode&& value) { SetScalingMode(std::move(value)); return *this;}

  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    ScalingMode m_scalingMode;
    bool m_scalingModeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

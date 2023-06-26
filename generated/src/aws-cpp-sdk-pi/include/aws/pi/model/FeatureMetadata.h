/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/FeatureStatus.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>The metadata for a feature. For example, the metadata might indicate that a
   * feature is turned on or off on a specific DB instance.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/FeatureMetadata">AWS
   * API Reference</a></p>
   */
  class FeatureMetadata
  {
  public:
    AWS_PI_API FeatureMetadata();
    AWS_PI_API FeatureMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API FeatureMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the feature on the DB instance. Possible values include the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> - The feature is enabled on
     * the instance.</p> </li> <li> <p> <code>DISABLED</code> - The feature is disabled
     * on the instance.</p> </li> <li> <p> <code>UNSUPPORTED</code> - The feature isn't
     * supported on the instance.</p> </li> <li> <p>
     * <code>ENABLED_PENDING_REBOOT</code> - The feature is enabled on the instance but
     * requires a reboot to take effect.</p> </li> <li> <p>
     * <code>DISABLED_PENDING_REBOOT</code> - The feature is disabled on the instance
     * but requires a reboot to take effect.</p> </li> <li> <p> <code>UNKNOWN</code> -
     * The feature status couldn't be determined.</p> </li> </ul>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the feature on the DB instance. Possible values include the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> - The feature is enabled on
     * the instance.</p> </li> <li> <p> <code>DISABLED</code> - The feature is disabled
     * on the instance.</p> </li> <li> <p> <code>UNSUPPORTED</code> - The feature isn't
     * supported on the instance.</p> </li> <li> <p>
     * <code>ENABLED_PENDING_REBOOT</code> - The feature is enabled on the instance but
     * requires a reboot to take effect.</p> </li> <li> <p>
     * <code>DISABLED_PENDING_REBOOT</code> - The feature is disabled on the instance
     * but requires a reboot to take effect.</p> </li> <li> <p> <code>UNKNOWN</code> -
     * The feature status couldn't be determined.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the feature on the DB instance. Possible values include the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> - The feature is enabled on
     * the instance.</p> </li> <li> <p> <code>DISABLED</code> - The feature is disabled
     * on the instance.</p> </li> <li> <p> <code>UNSUPPORTED</code> - The feature isn't
     * supported on the instance.</p> </li> <li> <p>
     * <code>ENABLED_PENDING_REBOOT</code> - The feature is enabled on the instance but
     * requires a reboot to take effect.</p> </li> <li> <p>
     * <code>DISABLED_PENDING_REBOOT</code> - The feature is disabled on the instance
     * but requires a reboot to take effect.</p> </li> <li> <p> <code>UNKNOWN</code> -
     * The feature status couldn't be determined.</p> </li> </ul>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the feature on the DB instance. Possible values include the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> - The feature is enabled on
     * the instance.</p> </li> <li> <p> <code>DISABLED</code> - The feature is disabled
     * on the instance.</p> </li> <li> <p> <code>UNSUPPORTED</code> - The feature isn't
     * supported on the instance.</p> </li> <li> <p>
     * <code>ENABLED_PENDING_REBOOT</code> - The feature is enabled on the instance but
     * requires a reboot to take effect.</p> </li> <li> <p>
     * <code>DISABLED_PENDING_REBOOT</code> - The feature is disabled on the instance
     * but requires a reboot to take effect.</p> </li> <li> <p> <code>UNKNOWN</code> -
     * The feature status couldn't be determined.</p> </li> </ul>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the feature on the DB instance. Possible values include the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> - The feature is enabled on
     * the instance.</p> </li> <li> <p> <code>DISABLED</code> - The feature is disabled
     * on the instance.</p> </li> <li> <p> <code>UNSUPPORTED</code> - The feature isn't
     * supported on the instance.</p> </li> <li> <p>
     * <code>ENABLED_PENDING_REBOOT</code> - The feature is enabled on the instance but
     * requires a reboot to take effect.</p> </li> <li> <p>
     * <code>DISABLED_PENDING_REBOOT</code> - The feature is disabled on the instance
     * but requires a reboot to take effect.</p> </li> <li> <p> <code>UNKNOWN</code> -
     * The feature status couldn't be determined.</p> </li> </ul>
     */
    inline FeatureMetadata& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the feature on the DB instance. Possible values include the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> - The feature is enabled on
     * the instance.</p> </li> <li> <p> <code>DISABLED</code> - The feature is disabled
     * on the instance.</p> </li> <li> <p> <code>UNSUPPORTED</code> - The feature isn't
     * supported on the instance.</p> </li> <li> <p>
     * <code>ENABLED_PENDING_REBOOT</code> - The feature is enabled on the instance but
     * requires a reboot to take effect.</p> </li> <li> <p>
     * <code>DISABLED_PENDING_REBOOT</code> - The feature is disabled on the instance
     * but requires a reboot to take effect.</p> </li> <li> <p> <code>UNKNOWN</code> -
     * The feature status couldn't be determined.</p> </li> </ul>
     */
    inline FeatureMetadata& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws

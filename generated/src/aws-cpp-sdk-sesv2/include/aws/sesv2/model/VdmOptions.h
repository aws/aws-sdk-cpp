/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DashboardOptions.h>
#include <aws/sesv2/model/GuardianOptions.h>
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
   * <p>An object that defines the VDM settings that apply to emails that you send
   * using the configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/VdmOptions">AWS
   * API Reference</a></p>
   */
  class VdmOptions
  {
  public:
    AWS_SESV2_API VdmOptions();
    AWS_SESV2_API VdmOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API VdmOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline const DashboardOptions& GetDashboardOptions() const{ return m_dashboardOptions; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline bool DashboardOptionsHasBeenSet() const { return m_dashboardOptionsHasBeenSet; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline void SetDashboardOptions(const DashboardOptions& value) { m_dashboardOptionsHasBeenSet = true; m_dashboardOptions = value; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline void SetDashboardOptions(DashboardOptions&& value) { m_dashboardOptionsHasBeenSet = true; m_dashboardOptions = std::move(value); }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline VdmOptions& WithDashboardOptions(const DashboardOptions& value) { SetDashboardOptions(value); return *this;}

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline VdmOptions& WithDashboardOptions(DashboardOptions&& value) { SetDashboardOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline const GuardianOptions& GetGuardianOptions() const{ return m_guardianOptions; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline bool GuardianOptionsHasBeenSet() const { return m_guardianOptionsHasBeenSet; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline void SetGuardianOptions(const GuardianOptions& value) { m_guardianOptionsHasBeenSet = true; m_guardianOptions = value; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline void SetGuardianOptions(GuardianOptions&& value) { m_guardianOptionsHasBeenSet = true; m_guardianOptions = std::move(value); }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline VdmOptions& WithGuardianOptions(const GuardianOptions& value) { SetGuardianOptions(value); return *this;}

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline VdmOptions& WithGuardianOptions(GuardianOptions&& value) { SetGuardianOptions(std::move(value)); return *this;}

  private:

    DashboardOptions m_dashboardOptions;
    bool m_dashboardOptionsHasBeenSet = false;

    GuardianOptions m_guardianOptions;
    bool m_guardianOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

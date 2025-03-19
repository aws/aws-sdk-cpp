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
    AWS_SESV2_API VdmOptions() = default;
    AWS_SESV2_API VdmOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API VdmOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline const DashboardOptions& GetDashboardOptions() const { return m_dashboardOptions; }
    inline bool DashboardOptionsHasBeenSet() const { return m_dashboardOptionsHasBeenSet; }
    template<typename DashboardOptionsT = DashboardOptions>
    void SetDashboardOptions(DashboardOptionsT&& value) { m_dashboardOptionsHasBeenSet = true; m_dashboardOptions = std::forward<DashboardOptionsT>(value); }
    template<typename DashboardOptionsT = DashboardOptions>
    VdmOptions& WithDashboardOptions(DashboardOptionsT&& value) { SetDashboardOptions(std::forward<DashboardOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline const GuardianOptions& GetGuardianOptions() const { return m_guardianOptions; }
    inline bool GuardianOptionsHasBeenSet() const { return m_guardianOptionsHasBeenSet; }
    template<typename GuardianOptionsT = GuardianOptions>
    void SetGuardianOptions(GuardianOptionsT&& value) { m_guardianOptionsHasBeenSet = true; m_guardianOptions = std::forward<GuardianOptionsT>(value); }
    template<typename GuardianOptionsT = GuardianOptions>
    VdmOptions& WithGuardianOptions(GuardianOptionsT&& value) { SetGuardianOptions(std::forward<GuardianOptionsT>(value)); return *this;}
    ///@}
  private:

    DashboardOptions m_dashboardOptions;
    bool m_dashboardOptionsHasBeenSet = false;

    GuardianOptions m_guardianOptions;
    bool m_guardianOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

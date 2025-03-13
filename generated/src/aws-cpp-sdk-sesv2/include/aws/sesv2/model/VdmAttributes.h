/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/FeatureStatus.h>
#include <aws/sesv2/model/DashboardAttributes.h>
#include <aws/sesv2/model/GuardianAttributes.h>
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
   * <p>The VDM attributes that apply to your Amazon SES account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/VdmAttributes">AWS
   * API Reference</a></p>
   */
  class VdmAttributes
  {
  public:
    AWS_SESV2_API VdmAttributes() = default;
    AWS_SESV2_API VdmAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API VdmAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the status of your VDM configuration. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables VDM for
     * your account.</p> </li> <li> <p> <code>DISABLED</code> – Amazon SES disables VDM
     * for your account.</p> </li> </ul>
     */
    inline FeatureStatus GetVdmEnabled() const { return m_vdmEnabled; }
    inline bool VdmEnabledHasBeenSet() const { return m_vdmEnabledHasBeenSet; }
    inline void SetVdmEnabled(FeatureStatus value) { m_vdmEnabledHasBeenSet = true; m_vdmEnabled = value; }
    inline VdmAttributes& WithVdmEnabled(FeatureStatus value) { SetVdmEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline const DashboardAttributes& GetDashboardAttributes() const { return m_dashboardAttributes; }
    inline bool DashboardAttributesHasBeenSet() const { return m_dashboardAttributesHasBeenSet; }
    template<typename DashboardAttributesT = DashboardAttributes>
    void SetDashboardAttributes(DashboardAttributesT&& value) { m_dashboardAttributesHasBeenSet = true; m_dashboardAttributes = std::forward<DashboardAttributesT>(value); }
    template<typename DashboardAttributesT = DashboardAttributes>
    VdmAttributes& WithDashboardAttributes(DashboardAttributesT&& value) { SetDashboardAttributes(std::forward<DashboardAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline const GuardianAttributes& GetGuardianAttributes() const { return m_guardianAttributes; }
    inline bool GuardianAttributesHasBeenSet() const { return m_guardianAttributesHasBeenSet; }
    template<typename GuardianAttributesT = GuardianAttributes>
    void SetGuardianAttributes(GuardianAttributesT&& value) { m_guardianAttributesHasBeenSet = true; m_guardianAttributes = std::forward<GuardianAttributesT>(value); }
    template<typename GuardianAttributesT = GuardianAttributes>
    VdmAttributes& WithGuardianAttributes(GuardianAttributesT&& value) { SetGuardianAttributes(std::forward<GuardianAttributesT>(value)); return *this;}
    ///@}
  private:

    FeatureStatus m_vdmEnabled{FeatureStatus::NOT_SET};
    bool m_vdmEnabledHasBeenSet = false;

    DashboardAttributes m_dashboardAttributes;
    bool m_dashboardAttributesHasBeenSet = false;

    GuardianAttributes m_guardianAttributes;
    bool m_guardianAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

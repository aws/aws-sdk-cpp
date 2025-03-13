/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{

  /**
   * <p>Provides information about a pending maintenance action for a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/PendingMaintenanceAction">AWS
   * API Reference</a></p>
   */
  class PendingMaintenanceAction
  {
  public:
    AWS_NEPTUNE_API PendingMaintenanceAction() = default;
    AWS_NEPTUNE_API PendingMaintenanceAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API PendingMaintenanceAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of pending maintenance action that is available for the
     * resource.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    PendingMaintenanceAction& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetAutoAppliedAfterDate() const { return m_autoAppliedAfterDate; }
    inline bool AutoAppliedAfterDateHasBeenSet() const { return m_autoAppliedAfterDateHasBeenSet; }
    template<typename AutoAppliedAfterDateT = Aws::Utils::DateTime>
    void SetAutoAppliedAfterDate(AutoAppliedAfterDateT&& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = std::forward<AutoAppliedAfterDateT>(value); }
    template<typename AutoAppliedAfterDateT = Aws::Utils::DateTime>
    PendingMaintenanceAction& WithAutoAppliedAfterDate(AutoAppliedAfterDateT&& value) { SetAutoAppliedAfterDate(std::forward<AutoAppliedAfterDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the maintenance action is automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetForcedApplyDate() const { return m_forcedApplyDate; }
    inline bool ForcedApplyDateHasBeenSet() const { return m_forcedApplyDateHasBeenSet; }
    template<typename ForcedApplyDateT = Aws::Utils::DateTime>
    void SetForcedApplyDate(ForcedApplyDateT&& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = std::forward<ForcedApplyDateT>(value); }
    template<typename ForcedApplyDateT = Aws::Utils::DateTime>
    PendingMaintenanceAction& WithForcedApplyDate(ForcedApplyDateT&& value) { SetForcedApplyDate(std::forward<ForcedApplyDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline const Aws::String& GetOptInStatus() const { return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    template<typename OptInStatusT = Aws::String>
    void SetOptInStatus(OptInStatusT&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::forward<OptInStatusT>(value); }
    template<typename OptInStatusT = Aws::String>
    PendingMaintenanceAction& WithOptInStatus(OptInStatusT&& value) { SetOptInStatus(std::forward<OptInStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective date when the pending maintenance action is applied to the
     * resource. This date takes into account opt-in requests received from the
     * <a>ApplyPendingMaintenanceAction</a> API, the <code>AutoAppliedAfterDate</code>,
     * and the <code>ForcedApplyDate</code>. This value is blank if an opt-in request
     * has not been received and nothing has been specified as
     * <code>AutoAppliedAfterDate</code> or <code>ForcedApplyDate</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCurrentApplyDate() const { return m_currentApplyDate; }
    inline bool CurrentApplyDateHasBeenSet() const { return m_currentApplyDateHasBeenSet; }
    template<typename CurrentApplyDateT = Aws::Utils::DateTime>
    void SetCurrentApplyDate(CurrentApplyDateT&& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = std::forward<CurrentApplyDateT>(value); }
    template<typename CurrentApplyDateT = Aws::Utils::DateTime>
    PendingMaintenanceAction& WithCurrentApplyDate(CurrentApplyDateT&& value) { SetCurrentApplyDate(std::forward<CurrentApplyDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PendingMaintenanceAction& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::Utils::DateTime m_autoAppliedAfterDate{};
    bool m_autoAppliedAfterDateHasBeenSet = false;

    Aws::Utils::DateTime m_forcedApplyDate{};
    bool m_forcedApplyDateHasBeenSet = false;

    Aws::String m_optInStatus;
    bool m_optInStatusHasBeenSet = false;

    Aws::Utils::DateTime m_currentApplyDate{};
    bool m_currentApplyDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws

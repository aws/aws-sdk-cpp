/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Provides information about a pending maintenance action for a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PendingMaintenanceAction">AWS
   * API Reference</a></p>
   */
  class PendingMaintenanceAction
  {
  public:
    AWS_RDS_API PendingMaintenanceAction();
    AWS_RDS_API PendingMaintenanceAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API PendingMaintenanceAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of pending maintenance action that is available for the resource.
     * </p> <p>For more information about maintenance actions, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html">Maintaining
     * a DB instance</a>.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>ca-certificate-rotation</code> </p> </li> <li> <p> <code>db-upgrade</code>
     * </p> </li> <li> <p> <code>hardware-maintenance</code> </p> </li> <li> <p>
     * <code>os-upgrade</code> </p> </li> <li> <p> <code>system-update</code> </p>
     * </li> </ul> <p>For more information about these actions, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#maintenance-actions-aurora">Maintenance
     * actions for Amazon Aurora</a> or <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#maintenance-actions-rds">Maintenance
     * actions for Amazon RDS</a>.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline PendingMaintenanceAction& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline PendingMaintenanceAction& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline PendingMaintenanceAction& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetAutoAppliedAfterDate() const{ return m_autoAppliedAfterDate; }
    inline bool AutoAppliedAfterDateHasBeenSet() const { return m_autoAppliedAfterDateHasBeenSet; }
    inline void SetAutoAppliedAfterDate(const Aws::Utils::DateTime& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = value; }
    inline void SetAutoAppliedAfterDate(Aws::Utils::DateTime&& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = std::move(value); }
    inline PendingMaintenanceAction& WithAutoAppliedAfterDate(const Aws::Utils::DateTime& value) { SetAutoAppliedAfterDate(value); return *this;}
    inline PendingMaintenanceAction& WithAutoAppliedAfterDate(Aws::Utils::DateTime&& value) { SetAutoAppliedAfterDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the maintenance action is automatically applied.</p> <p>On this
     * date, the maintenance action is applied to the resource as soon as possible,
     * regardless of the maintenance window for the resource. There might be a delay of
     * one or more days from this date before the maintenance action is applied.</p>
     */
    inline const Aws::Utils::DateTime& GetForcedApplyDate() const{ return m_forcedApplyDate; }
    inline bool ForcedApplyDateHasBeenSet() const { return m_forcedApplyDateHasBeenSet; }
    inline void SetForcedApplyDate(const Aws::Utils::DateTime& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = value; }
    inline void SetForcedApplyDate(Aws::Utils::DateTime&& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = std::move(value); }
    inline PendingMaintenanceAction& WithForcedApplyDate(const Aws::Utils::DateTime& value) { SetForcedApplyDate(value); return *this;}
    inline PendingMaintenanceAction& WithForcedApplyDate(Aws::Utils::DateTime&& value) { SetForcedApplyDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline const Aws::String& GetOptInStatus() const{ return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    inline void SetOptInStatus(const Aws::String& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }
    inline void SetOptInStatus(Aws::String&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }
    inline void SetOptInStatus(const char* value) { m_optInStatusHasBeenSet = true; m_optInStatus.assign(value); }
    inline PendingMaintenanceAction& WithOptInStatus(const Aws::String& value) { SetOptInStatus(value); return *this;}
    inline PendingMaintenanceAction& WithOptInStatus(Aws::String&& value) { SetOptInStatus(std::move(value)); return *this;}
    inline PendingMaintenanceAction& WithOptInStatus(const char* value) { SetOptInStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective date when the pending maintenance action is applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API, the
     * <code>AutoAppliedAfterDate</code>, and the <code>ForcedApplyDate</code>. This
     * value is blank if an opt-in request has not been received and nothing has been
     * specified as <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCurrentApplyDate() const{ return m_currentApplyDate; }
    inline bool CurrentApplyDateHasBeenSet() const { return m_currentApplyDateHasBeenSet; }
    inline void SetCurrentApplyDate(const Aws::Utils::DateTime& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = value; }
    inline void SetCurrentApplyDate(Aws::Utils::DateTime&& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = std::move(value); }
    inline PendingMaintenanceAction& WithCurrentApplyDate(const Aws::Utils::DateTime& value) { SetCurrentApplyDate(value); return *this;}
    inline PendingMaintenanceAction& WithCurrentApplyDate(Aws::Utils::DateTime&& value) { SetCurrentApplyDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PendingMaintenanceAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PendingMaintenanceAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PendingMaintenanceAction& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::Utils::DateTime m_autoAppliedAfterDate;
    bool m_autoAppliedAfterDateHasBeenSet = false;

    Aws::Utils::DateTime m_forcedApplyDate;
    bool m_forcedApplyDateHasBeenSet = false;

    Aws::String m_optInStatus;
    bool m_optInStatusHasBeenSet = false;

    Aws::Utils::DateTime m_currentApplyDate;
    bool m_currentApplyDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

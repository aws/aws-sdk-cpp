/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/InventoryDeletionStatus.h>
#include <aws/ssm/model/InventoryDeletionSummary.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Status information returned by the <code>DeleteInventory</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryDeletionStatusItem">AWS
   * API Reference</a></p>
   */
  class InventoryDeletionStatusItem
  {
  public:
    AWS_SSM_API InventoryDeletionStatusItem() = default;
    AWS_SSM_API InventoryDeletionStatusItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryDeletionStatusItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> operation.</p>
     */
    inline const Aws::String& GetDeletionId() const { return m_deletionId; }
    inline bool DeletionIdHasBeenSet() const { return m_deletionIdHasBeenSet; }
    template<typename DeletionIdT = Aws::String>
    void SetDeletionId(DeletionIdT&& value) { m_deletionIdHasBeenSet = true; m_deletionId = std::forward<DeletionIdT>(value); }
    template<typename DeletionIdT = Aws::String>
    InventoryDeletionStatusItem& WithDeletionId(DeletionIdT&& value) { SetDeletionId(std::forward<DeletionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inventory data type.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    InventoryDeletionStatusItem& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC timestamp when the delete operation started.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionStartTime() const { return m_deletionStartTime; }
    inline bool DeletionStartTimeHasBeenSet() const { return m_deletionStartTimeHasBeenSet; }
    template<typename DeletionStartTimeT = Aws::Utils::DateTime>
    void SetDeletionStartTime(DeletionStartTimeT&& value) { m_deletionStartTimeHasBeenSet = true; m_deletionStartTime = std::forward<DeletionStartTimeT>(value); }
    template<typename DeletionStartTimeT = Aws::Utils::DateTime>
    InventoryDeletionStatusItem& WithDeletionStartTime(DeletionStartTimeT&& value) { SetDeletionStartTime(std::forward<DeletionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation. Possible values are InProgress and Complete.</p>
     */
    inline InventoryDeletionStatus GetLastStatus() const { return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    inline void SetLastStatus(InventoryDeletionStatus value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }
    inline InventoryDeletionStatusItem& WithLastStatus(InventoryDeletionStatus value) { SetLastStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status.</p>
     */
    inline const Aws::String& GetLastStatusMessage() const { return m_lastStatusMessage; }
    inline bool LastStatusMessageHasBeenSet() const { return m_lastStatusMessageHasBeenSet; }
    template<typename LastStatusMessageT = Aws::String>
    void SetLastStatusMessage(LastStatusMessageT&& value) { m_lastStatusMessageHasBeenSet = true; m_lastStatusMessage = std::forward<LastStatusMessageT>(value); }
    template<typename LastStatusMessageT = Aws::String>
    InventoryDeletionStatusItem& WithLastStatusMessage(LastStatusMessageT&& value) { SetLastStatusMessage(std::forward<LastStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/inventory-custom.html#delete-custom-inventory">Understanding
     * the delete inventory summary</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline const InventoryDeletionSummary& GetDeletionSummary() const { return m_deletionSummary; }
    inline bool DeletionSummaryHasBeenSet() const { return m_deletionSummaryHasBeenSet; }
    template<typename DeletionSummaryT = InventoryDeletionSummary>
    void SetDeletionSummary(DeletionSummaryT&& value) { m_deletionSummaryHasBeenSet = true; m_deletionSummary = std::forward<DeletionSummaryT>(value); }
    template<typename DeletionSummaryT = InventoryDeletionSummary>
    InventoryDeletionStatusItem& WithDeletionSummary(DeletionSummaryT&& value) { SetDeletionSummary(std::forward<DeletionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC timestamp of when the last status report.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusUpdateTime() const { return m_lastStatusUpdateTime; }
    inline bool LastStatusUpdateTimeHasBeenSet() const { return m_lastStatusUpdateTimeHasBeenSet; }
    template<typename LastStatusUpdateTimeT = Aws::Utils::DateTime>
    void SetLastStatusUpdateTime(LastStatusUpdateTimeT&& value) { m_lastStatusUpdateTimeHasBeenSet = true; m_lastStatusUpdateTime = std::forward<LastStatusUpdateTimeT>(value); }
    template<typename LastStatusUpdateTimeT = Aws::Utils::DateTime>
    InventoryDeletionStatusItem& WithLastStatusUpdateTime(LastStatusUpdateTimeT&& value) { SetLastStatusUpdateTime(std::forward<LastStatusUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deletionId;
    bool m_deletionIdHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::Utils::DateTime m_deletionStartTime{};
    bool m_deletionStartTimeHasBeenSet = false;

    InventoryDeletionStatus m_lastStatus{InventoryDeletionStatus::NOT_SET};
    bool m_lastStatusHasBeenSet = false;

    Aws::String m_lastStatusMessage;
    bool m_lastStatusMessageHasBeenSet = false;

    InventoryDeletionSummary m_deletionSummary;
    bool m_deletionSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusUpdateTime{};
    bool m_lastStatusUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

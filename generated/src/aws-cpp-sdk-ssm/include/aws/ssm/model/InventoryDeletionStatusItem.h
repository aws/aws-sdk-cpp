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
    AWS_SSM_API InventoryDeletionStatusItem();
    AWS_SSM_API InventoryDeletionStatusItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryDeletionStatusItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> operation.</p>
     */
    inline const Aws::String& GetDeletionId() const{ return m_deletionId; }
    inline bool DeletionIdHasBeenSet() const { return m_deletionIdHasBeenSet; }
    inline void SetDeletionId(const Aws::String& value) { m_deletionIdHasBeenSet = true; m_deletionId = value; }
    inline void SetDeletionId(Aws::String&& value) { m_deletionIdHasBeenSet = true; m_deletionId = std::move(value); }
    inline void SetDeletionId(const char* value) { m_deletionIdHasBeenSet = true; m_deletionId.assign(value); }
    inline InventoryDeletionStatusItem& WithDeletionId(const Aws::String& value) { SetDeletionId(value); return *this;}
    inline InventoryDeletionStatusItem& WithDeletionId(Aws::String&& value) { SetDeletionId(std::move(value)); return *this;}
    inline InventoryDeletionStatusItem& WithDeletionId(const char* value) { SetDeletionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inventory data type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline InventoryDeletionStatusItem& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline InventoryDeletionStatusItem& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline InventoryDeletionStatusItem& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC timestamp when the delete operation started.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionStartTime() const{ return m_deletionStartTime; }
    inline bool DeletionStartTimeHasBeenSet() const { return m_deletionStartTimeHasBeenSet; }
    inline void SetDeletionStartTime(const Aws::Utils::DateTime& value) { m_deletionStartTimeHasBeenSet = true; m_deletionStartTime = value; }
    inline void SetDeletionStartTime(Aws::Utils::DateTime&& value) { m_deletionStartTimeHasBeenSet = true; m_deletionStartTime = std::move(value); }
    inline InventoryDeletionStatusItem& WithDeletionStartTime(const Aws::Utils::DateTime& value) { SetDeletionStartTime(value); return *this;}
    inline InventoryDeletionStatusItem& WithDeletionStartTime(Aws::Utils::DateTime&& value) { SetDeletionStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation. Possible values are InProgress and Complete.</p>
     */
    inline const InventoryDeletionStatus& GetLastStatus() const{ return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    inline void SetLastStatus(const InventoryDeletionStatus& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }
    inline void SetLastStatus(InventoryDeletionStatus&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }
    inline InventoryDeletionStatusItem& WithLastStatus(const InventoryDeletionStatus& value) { SetLastStatus(value); return *this;}
    inline InventoryDeletionStatusItem& WithLastStatus(InventoryDeletionStatus&& value) { SetLastStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status.</p>
     */
    inline const Aws::String& GetLastStatusMessage() const{ return m_lastStatusMessage; }
    inline bool LastStatusMessageHasBeenSet() const { return m_lastStatusMessageHasBeenSet; }
    inline void SetLastStatusMessage(const Aws::String& value) { m_lastStatusMessageHasBeenSet = true; m_lastStatusMessage = value; }
    inline void SetLastStatusMessage(Aws::String&& value) { m_lastStatusMessageHasBeenSet = true; m_lastStatusMessage = std::move(value); }
    inline void SetLastStatusMessage(const char* value) { m_lastStatusMessageHasBeenSet = true; m_lastStatusMessage.assign(value); }
    inline InventoryDeletionStatusItem& WithLastStatusMessage(const Aws::String& value) { SetLastStatusMessage(value); return *this;}
    inline InventoryDeletionStatusItem& WithLastStatusMessage(Aws::String&& value) { SetLastStatusMessage(std::move(value)); return *this;}
    inline InventoryDeletionStatusItem& WithLastStatusMessage(const char* value) { SetLastStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/inventory-custom.html#delete-custom-inventory">Understanding
     * the delete inventory summary</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline const InventoryDeletionSummary& GetDeletionSummary() const{ return m_deletionSummary; }
    inline bool DeletionSummaryHasBeenSet() const { return m_deletionSummaryHasBeenSet; }
    inline void SetDeletionSummary(const InventoryDeletionSummary& value) { m_deletionSummaryHasBeenSet = true; m_deletionSummary = value; }
    inline void SetDeletionSummary(InventoryDeletionSummary&& value) { m_deletionSummaryHasBeenSet = true; m_deletionSummary = std::move(value); }
    inline InventoryDeletionStatusItem& WithDeletionSummary(const InventoryDeletionSummary& value) { SetDeletionSummary(value); return *this;}
    inline InventoryDeletionStatusItem& WithDeletionSummary(InventoryDeletionSummary&& value) { SetDeletionSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC timestamp of when the last status report.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusUpdateTime() const{ return m_lastStatusUpdateTime; }
    inline bool LastStatusUpdateTimeHasBeenSet() const { return m_lastStatusUpdateTimeHasBeenSet; }
    inline void SetLastStatusUpdateTime(const Aws::Utils::DateTime& value) { m_lastStatusUpdateTimeHasBeenSet = true; m_lastStatusUpdateTime = value; }
    inline void SetLastStatusUpdateTime(Aws::Utils::DateTime&& value) { m_lastStatusUpdateTimeHasBeenSet = true; m_lastStatusUpdateTime = std::move(value); }
    inline InventoryDeletionStatusItem& WithLastStatusUpdateTime(const Aws::Utils::DateTime& value) { SetLastStatusUpdateTime(value); return *this;}
    inline InventoryDeletionStatusItem& WithLastStatusUpdateTime(Aws::Utils::DateTime&& value) { SetLastStatusUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deletionId;
    bool m_deletionIdHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::Utils::DateTime m_deletionStartTime;
    bool m_deletionStartTimeHasBeenSet = false;

    InventoryDeletionStatus m_lastStatus;
    bool m_lastStatusHasBeenSet = false;

    Aws::String m_lastStatusMessage;
    bool m_lastStatusMessageHasBeenSet = false;

    InventoryDeletionSummary m_deletionSummary;
    bool m_deletionSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusUpdateTime;
    bool m_lastStatusUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

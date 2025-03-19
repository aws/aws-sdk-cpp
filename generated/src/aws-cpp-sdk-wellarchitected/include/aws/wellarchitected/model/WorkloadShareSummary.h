/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/PermissionType.h>
#include <aws/wellarchitected/model/ShareStatus.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A workload share summary return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/WorkloadShareSummary">AWS
   * API Reference</a></p>
   */
  class WorkloadShareSummary
  {
  public:
    AWS_WELLARCHITECTED_API WorkloadShareSummary() = default;
    AWS_WELLARCHITECTED_API WorkloadShareSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API WorkloadShareSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetShareId() const { return m_shareId; }
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }
    template<typename ShareIdT = Aws::String>
    void SetShareId(ShareIdT&& value) { m_shareIdHasBeenSet = true; m_shareId = std::forward<ShareIdT>(value); }
    template<typename ShareIdT = Aws::String>
    WorkloadShareSummary& WithShareId(ShareIdT&& value) { SetShareId(std::forward<ShareIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSharedWith() const { return m_sharedWith; }
    inline bool SharedWithHasBeenSet() const { return m_sharedWithHasBeenSet; }
    template<typename SharedWithT = Aws::String>
    void SetSharedWith(SharedWithT&& value) { m_sharedWithHasBeenSet = true; m_sharedWith = std::forward<SharedWithT>(value); }
    template<typename SharedWithT = Aws::String>
    WorkloadShareSummary& WithSharedWith(SharedWithT&& value) { SetSharedWith(std::forward<SharedWithT>(value)); return *this;}
    ///@}

    ///@{
    
    inline PermissionType GetPermissionType() const { return m_permissionType; }
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
    inline void SetPermissionType(PermissionType value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }
    inline WorkloadShareSummary& WithPermissionType(PermissionType value) { SetPermissionType(value); return *this;}
    ///@}

    ///@{
    
    inline ShareStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ShareStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkloadShareSummary& WithStatus(ShareStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional message to compliment the Status field.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    WorkloadShareSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    Aws::String m_sharedWith;
    bool m_sharedWithHasBeenSet = false;

    PermissionType m_permissionType{PermissionType::NOT_SET};
    bool m_permissionTypeHasBeenSet = false;

    ShareStatus m_status{ShareStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

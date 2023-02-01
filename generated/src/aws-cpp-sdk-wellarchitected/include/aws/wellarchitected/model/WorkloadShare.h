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
   * <p>A workload share return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/WorkloadShare">AWS
   * API Reference</a></p>
   */
  class WorkloadShare
  {
  public:
    AWS_WELLARCHITECTED_API WorkloadShare();
    AWS_WELLARCHITECTED_API WorkloadShare(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API WorkloadShare& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }

    
    inline void SetShareId(const Aws::String& value) { m_shareIdHasBeenSet = true; m_shareId = value; }

    
    inline void SetShareId(Aws::String&& value) { m_shareIdHasBeenSet = true; m_shareId = std::move(value); }

    
    inline void SetShareId(const char* value) { m_shareIdHasBeenSet = true; m_shareId.assign(value); }

    
    inline WorkloadShare& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    
    inline WorkloadShare& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    
    inline WorkloadShare& WithShareId(const char* value) { SetShareId(value); return *this;}


    
    inline const Aws::String& GetSharedBy() const{ return m_sharedBy; }

    
    inline bool SharedByHasBeenSet() const { return m_sharedByHasBeenSet; }

    
    inline void SetSharedBy(const Aws::String& value) { m_sharedByHasBeenSet = true; m_sharedBy = value; }

    
    inline void SetSharedBy(Aws::String&& value) { m_sharedByHasBeenSet = true; m_sharedBy = std::move(value); }

    
    inline void SetSharedBy(const char* value) { m_sharedByHasBeenSet = true; m_sharedBy.assign(value); }

    
    inline WorkloadShare& WithSharedBy(const Aws::String& value) { SetSharedBy(value); return *this;}

    
    inline WorkloadShare& WithSharedBy(Aws::String&& value) { SetSharedBy(std::move(value)); return *this;}

    
    inline WorkloadShare& WithSharedBy(const char* value) { SetSharedBy(value); return *this;}


    
    inline const Aws::String& GetSharedWith() const{ return m_sharedWith; }

    
    inline bool SharedWithHasBeenSet() const { return m_sharedWithHasBeenSet; }

    
    inline void SetSharedWith(const Aws::String& value) { m_sharedWithHasBeenSet = true; m_sharedWith = value; }

    
    inline void SetSharedWith(Aws::String&& value) { m_sharedWithHasBeenSet = true; m_sharedWith = std::move(value); }

    
    inline void SetSharedWith(const char* value) { m_sharedWithHasBeenSet = true; m_sharedWith.assign(value); }

    
    inline WorkloadShare& WithSharedWith(const Aws::String& value) { SetSharedWith(value); return *this;}

    
    inline WorkloadShare& WithSharedWith(Aws::String&& value) { SetSharedWith(std::move(value)); return *this;}

    
    inline WorkloadShare& WithSharedWith(const char* value) { SetSharedWith(value); return *this;}


    
    inline const PermissionType& GetPermissionType() const{ return m_permissionType; }

    
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }

    
    inline void SetPermissionType(const PermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }

    
    inline void SetPermissionType(PermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }

    
    inline WorkloadShare& WithPermissionType(const PermissionType& value) { SetPermissionType(value); return *this;}

    
    inline WorkloadShare& WithPermissionType(PermissionType&& value) { SetPermissionType(std::move(value)); return *this;}


    
    inline const ShareStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline WorkloadShare& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    
    inline WorkloadShare& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    
    inline WorkloadShare& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    
    inline WorkloadShare& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    
    inline WorkloadShare& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline WorkloadShare& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline WorkloadShare& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline WorkloadShare& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}

  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    Aws::String m_sharedBy;
    bool m_sharedByHasBeenSet = false;

    Aws::String m_sharedWith;
    bool m_sharedWithHasBeenSet = false;

    PermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet = false;

    ShareStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

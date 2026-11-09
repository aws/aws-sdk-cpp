/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class UpdateExascaleCloudExadataInfrastructureRequest : public OdbRequest {
 public:
  AWS_ODB_API UpdateExascaleCloudExadataInfrastructureRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateExascaleCloudExadataInfrastructure"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier or Amazon Resource Name (ARN) of the Exadata
   * infrastructure to update.</p>
   */
  inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
  inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
  template <typename CloudExadataInfrastructureIdT = Aws::String>
  void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) {
    m_cloudExadataInfrastructureIdHasBeenSet = true;
    m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value);
  }
  template <typename CloudExadataInfrastructureIdT = Aws::String>
  UpdateExascaleCloudExadataInfrastructureRequest& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) {
    SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount of Exascale storage, in gigabytes (GB), to configure on the
   * Exadata infrastructure.</p>
   */
  inline int GetTotalStorageSizeInGBs() const { return m_totalStorageSizeInGBs; }
  inline bool TotalStorageSizeInGBsHasBeenSet() const { return m_totalStorageSizeInGBsHasBeenSet; }
  inline void SetTotalStorageSizeInGBs(int value) {
    m_totalStorageSizeInGBsHasBeenSet = true;
    m_totalStorageSizeInGBs = value;
  }
  inline UpdateExascaleCloudExadataInfrastructureRequest& WithTotalStorageSizeInGBs(int value) {
    SetTotalStorageSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount of Exascale storage, in gigabytes (GB), to allocate for VM
   * storage on the Exadata infrastructure. VM clusters that store their VM file
   * systems or VM backups in Exascale storage use this capacity.</p>
   */
  inline int GetTotalVmStorageSizeInGBs() const { return m_totalVmStorageSizeInGBs; }
  inline bool TotalVmStorageSizeInGBsHasBeenSet() const { return m_totalVmStorageSizeInGBsHasBeenSet; }
  inline void SetTotalVmStorageSizeInGBs(int value) {
    m_totalVmStorageSizeInGBsHasBeenSet = true;
    m_totalVmStorageSizeInGBs = value;
  }
  inline UpdateExascaleCloudExadataInfrastructureRequest& WithTotalVmStorageSizeInGBs(int value) {
    SetTotalVmStorageSizeInGBs(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_cloudExadataInfrastructureId;

  int m_totalStorageSizeInGBs{0};

  int m_totalVmStorageSizeInGBs{0};
  bool m_cloudExadataInfrastructureIdHasBeenSet = false;
  bool m_totalStorageSizeInGBsHasBeenSet = false;
  bool m_totalVmStorageSizeInGBsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

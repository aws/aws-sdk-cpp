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
class AssociateVirtualMachinesToExadbVmClusterRequest : public OdbRequest {
 public:
  AWS_ODB_API AssociateVirtualMachinesToExadbVmClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateVirtualMachinesToExadbVmCluster"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Exascale VM cluster to add virtual machines
   * to.</p>
   */
  inline const Aws::String& GetExadbVmClusterId() const { return m_exadbVmClusterId; }
  inline bool ExadbVmClusterIdHasBeenSet() const { return m_exadbVmClusterIdHasBeenSet; }
  template <typename ExadbVmClusterIdT = Aws::String>
  void SetExadbVmClusterId(ExadbVmClusterIdT&& value) {
    m_exadbVmClusterIdHasBeenSet = true;
    m_exadbVmClusterId = std::forward<ExadbVmClusterIdT>(value);
  }
  template <typename ExadbVmClusterIdT = Aws::String>
  AssociateVirtualMachinesToExadbVmClusterRequest& WithExadbVmClusterId(ExadbVmClusterIdT&& value) {
    SetExadbVmClusterId(std::forward<ExadbVmClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired number of nodes in the Exascale VM cluster after the
   * association.</p>
   */
  inline int GetDesiredNodeCount() const { return m_desiredNodeCount; }
  inline bool DesiredNodeCountHasBeenSet() const { return m_desiredNodeCountHasBeenSet; }
  inline void SetDesiredNodeCount(int value) {
    m_desiredNodeCountHasBeenSet = true;
    m_desiredNodeCount = value;
  }
  inline AssociateVirtualMachinesToExadbVmClusterRequest& WithDesiredNodeCount(int value) {
    SetDesiredNodeCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_exadbVmClusterId;

  int m_desiredNodeCount{0};
  bool m_exadbVmClusterIdHasBeenSet = false;
  bool m_desiredNodeCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

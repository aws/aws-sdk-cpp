/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class DisassociateVirtualMachinesFromExadbVmClusterRequest : public OdbRequest {
 public:
  AWS_ODB_API DisassociateVirtualMachinesFromExadbVmClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateVirtualMachinesFromExadbVmCluster"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Exascale VM cluster to remove virtual machines
   * from.</p>
   */
  inline const Aws::String& GetExadbVmClusterId() const { return m_exadbVmClusterId; }
  inline bool ExadbVmClusterIdHasBeenSet() const { return m_exadbVmClusterIdHasBeenSet; }
  template <typename ExadbVmClusterIdT = Aws::String>
  void SetExadbVmClusterId(ExadbVmClusterIdT&& value) {
    m_exadbVmClusterIdHasBeenSet = true;
    m_exadbVmClusterId = std::forward<ExadbVmClusterIdT>(value);
  }
  template <typename ExadbVmClusterIdT = Aws::String>
  DisassociateVirtualMachinesFromExadbVmClusterRequest& WithExadbVmClusterId(ExadbVmClusterIdT&& value) {
    SetExadbVmClusterId(std::forward<ExadbVmClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of DB node IDs to remove from the Exascale VM cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDbNodeIds() const { return m_dbNodeIds; }
  inline bool DbNodeIdsHasBeenSet() const { return m_dbNodeIdsHasBeenSet; }
  template <typename DbNodeIdsT = Aws::Vector<Aws::String>>
  void SetDbNodeIds(DbNodeIdsT&& value) {
    m_dbNodeIdsHasBeenSet = true;
    m_dbNodeIds = std::forward<DbNodeIdsT>(value);
  }
  template <typename DbNodeIdsT = Aws::Vector<Aws::String>>
  DisassociateVirtualMachinesFromExadbVmClusterRequest& WithDbNodeIds(DbNodeIdsT&& value) {
    SetDbNodeIds(std::forward<DbNodeIdsT>(value));
    return *this;
  }
  template <typename DbNodeIdsT = Aws::String>
  DisassociateVirtualMachinesFromExadbVmClusterRequest& AddDbNodeIds(DbNodeIdsT&& value) {
    m_dbNodeIdsHasBeenSet = true;
    m_dbNodeIds.emplace_back(std::forward<DbNodeIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exadbVmClusterId;

  Aws::Vector<Aws::String> m_dbNodeIds;
  bool m_exadbVmClusterIdHasBeenSet = false;
  bool m_dbNodeIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

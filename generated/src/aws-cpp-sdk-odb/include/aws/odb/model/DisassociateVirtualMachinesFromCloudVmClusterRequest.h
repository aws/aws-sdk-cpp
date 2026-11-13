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
class DisassociateVirtualMachinesFromCloudVmClusterRequest : public OdbRequest {
 public:
  AWS_ODB_API DisassociateVirtualMachinesFromCloudVmClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateVirtualMachinesFromCloudVmCluster"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the VM cluster to remove virtual machines from.</p>
   */
  inline const Aws::String& GetCloudVmClusterId() const { return m_cloudVmClusterId; }
  inline bool CloudVmClusterIdHasBeenSet() const { return m_cloudVmClusterIdHasBeenSet; }
  template <typename CloudVmClusterIdT = Aws::String>
  void SetCloudVmClusterId(CloudVmClusterIdT&& value) {
    m_cloudVmClusterIdHasBeenSet = true;
    m_cloudVmClusterId = std::forward<CloudVmClusterIdT>(value);
  }
  template <typename CloudVmClusterIdT = Aws::String>
  DisassociateVirtualMachinesFromCloudVmClusterRequest& WithCloudVmClusterId(CloudVmClusterIdT&& value) {
    SetCloudVmClusterId(std::forward<CloudVmClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of database server IDs for the virtual machines to remove from the
   * VM cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDbServers() const { return m_dbServers; }
  inline bool DbServersHasBeenSet() const { return m_dbServersHasBeenSet; }
  template <typename DbServersT = Aws::Vector<Aws::String>>
  void SetDbServers(DbServersT&& value) {
    m_dbServersHasBeenSet = true;
    m_dbServers = std::forward<DbServersT>(value);
  }
  template <typename DbServersT = Aws::Vector<Aws::String>>
  DisassociateVirtualMachinesFromCloudVmClusterRequest& WithDbServers(DbServersT&& value) {
    SetDbServers(std::forward<DbServersT>(value));
    return *this;
  }
  template <typename DbServersT = Aws::String>
  DisassociateVirtualMachinesFromCloudVmClusterRequest& AddDbServers(DbServersT&& value) {
    m_dbServersHasBeenSet = true;
    m_dbServers.emplace_back(std::forward<DbServersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cloudVmClusterId;

  Aws::Vector<Aws::String> m_dbServers;
  bool m_cloudVmClusterIdHasBeenSet = false;
  bool m_dbServersHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

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
class DeleteExadbVmClusterRequest : public OdbRequest {
 public:
  AWS_ODB_API DeleteExadbVmClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteExadbVmCluster"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Exascale VM cluster to delete.</p>
   */
  inline const Aws::String& GetExadbVmClusterId() const { return m_exadbVmClusterId; }
  inline bool ExadbVmClusterIdHasBeenSet() const { return m_exadbVmClusterIdHasBeenSet; }
  template <typename ExadbVmClusterIdT = Aws::String>
  void SetExadbVmClusterId(ExadbVmClusterIdT&& value) {
    m_exadbVmClusterIdHasBeenSet = true;
    m_exadbVmClusterId = std::forward<ExadbVmClusterIdT>(value);
  }
  template <typename ExadbVmClusterIdT = Aws::String>
  DeleteExadbVmClusterRequest& WithExadbVmClusterId(ExadbVmClusterIdT&& value) {
    SetExadbVmClusterId(std::forward<ExadbVmClusterIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exadbVmClusterId;
  bool m_exadbVmClusterIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

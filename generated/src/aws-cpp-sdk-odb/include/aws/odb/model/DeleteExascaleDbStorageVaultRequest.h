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
class DeleteExascaleDbStorageVaultRequest : public OdbRequest {
 public:
  AWS_ODB_API DeleteExascaleDbStorageVaultRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteExascaleDbStorageVault"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Exascale storage vault to delete.</p>
   */
  inline const Aws::String& GetExascaleDbStorageVaultId() const { return m_exascaleDbStorageVaultId; }
  inline bool ExascaleDbStorageVaultIdHasBeenSet() const { return m_exascaleDbStorageVaultIdHasBeenSet; }
  template <typename ExascaleDbStorageVaultIdT = Aws::String>
  void SetExascaleDbStorageVaultId(ExascaleDbStorageVaultIdT&& value) {
    m_exascaleDbStorageVaultIdHasBeenSet = true;
    m_exascaleDbStorageVaultId = std::forward<ExascaleDbStorageVaultIdT>(value);
  }
  template <typename ExascaleDbStorageVaultIdT = Aws::String>
  DeleteExascaleDbStorageVaultRequest& WithExascaleDbStorageVaultId(ExascaleDbStorageVaultIdT&& value) {
    SetExascaleDbStorageVaultId(std::forward<ExascaleDbStorageVaultIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exascaleDbStorageVaultId;
  bool m_exascaleDbStorageVaultIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

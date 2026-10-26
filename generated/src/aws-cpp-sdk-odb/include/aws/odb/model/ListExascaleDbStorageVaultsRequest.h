/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ExascaleDbStorageVaultType.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class ListExascaleDbStorageVaultsRequest : public OdbRequest {
 public:
  AWS_ODB_API ListExascaleDbStorageVaultsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListExascaleDbStorageVaults"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The maximum number of items to return for this request. To get the next page
   * of items, make another request with the token returned in the output.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListExascaleDbStorageVaultsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token returned from a previous paginated request. Pagination continues
   * from the end of the items returned by the previous request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListExascaleDbStorageVaultsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier or Amazon Resource Name (ARN) of an Exadata
   * infrastructure. If you specify this value, the operation returns only the
   * Exascale storage vaults on that infrastructure that you own or that are shared
   * with you. The infrastructure can be one that's shared with you through Amazon
   * Web Services Resource Access Manager (Amazon Web Services RAM). You can't
   * combine this filter with a <code>vaultType</code> of
   * <code>EXASCALE_INFRASTRUCTURE</code>.</p>
   */
  inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
  inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
  template <typename CloudExadataInfrastructureIdT = Aws::String>
  void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) {
    m_cloudExadataInfrastructureIdHasBeenSet = true;
    m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value);
  }
  template <typename CloudExadataInfrastructureIdT = Aws::String>
  ListExascaleDbStorageVaultsRequest& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) {
    SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of Exascale storage vaults to return. Specify
   * <code>DEDICATED_INFRASTRUCTURE</code> to return Exascale storage vaults on
   * dedicated Exadata infrastructure, or <code>EXASCALE_INFRASTRUCTURE</code> to
   * return Exascale storage vaults for Exascale VM clusters. If you don't specify a
   * value, the operation returns both types. You can't combine
   * <code>EXASCALE_INFRASTRUCTURE</code> with the
   * <code>cloudExadataInfrastructureId</code> filter.</p>
   */
  inline ExascaleDbStorageVaultType GetVaultType() const { return m_vaultType; }
  inline bool VaultTypeHasBeenSet() const { return m_vaultTypeHasBeenSet; }
  inline void SetVaultType(ExascaleDbStorageVaultType value) {
    m_vaultTypeHasBeenSet = true;
    m_vaultType = value;
  }
  inline ListExascaleDbStorageVaultsRequest& WithVaultType(ExascaleDbStorageVaultType value) {
    SetVaultType(value);
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_cloudExadataInfrastructureId;

  ExascaleDbStorageVaultType m_vaultType{ExascaleDbStorageVaultType::NOT_SET};
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_cloudExadataInfrastructureIdHasBeenSet = false;
  bool m_vaultTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

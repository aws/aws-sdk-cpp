/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SpaceResourceOperation.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateSpaceResourcesRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateSpaceResourcesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSpaceResources"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the space.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateSpaceResourcesRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the space that you want to update resources for.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  UpdateSpaceResourcesRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of resources to add to the space.</p>
   */
  inline const Aws::Vector<SpaceResourceOperation>& GetAddResources() const { return m_addResources; }
  inline bool AddResourcesHasBeenSet() const { return m_addResourcesHasBeenSet; }
  template <typename AddResourcesT = Aws::Vector<SpaceResourceOperation>>
  void SetAddResources(AddResourcesT&& value) {
    m_addResourcesHasBeenSet = true;
    m_addResources = std::forward<AddResourcesT>(value);
  }
  template <typename AddResourcesT = Aws::Vector<SpaceResourceOperation>>
  UpdateSpaceResourcesRequest& WithAddResources(AddResourcesT&& value) {
    SetAddResources(std::forward<AddResourcesT>(value));
    return *this;
  }
  template <typename AddResourcesT = SpaceResourceOperation>
  UpdateSpaceResourcesRequest& AddAddResources(AddResourcesT&& value) {
    m_addResourcesHasBeenSet = true;
    m_addResources.emplace_back(std::forward<AddResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of resources to remove from the space.</p>
   */
  inline const Aws::Vector<SpaceResourceOperation>& GetRemoveResources() const { return m_removeResources; }
  inline bool RemoveResourcesHasBeenSet() const { return m_removeResourcesHasBeenSet; }
  template <typename RemoveResourcesT = Aws::Vector<SpaceResourceOperation>>
  void SetRemoveResources(RemoveResourcesT&& value) {
    m_removeResourcesHasBeenSet = true;
    m_removeResources = std::forward<RemoveResourcesT>(value);
  }
  template <typename RemoveResourcesT = Aws::Vector<SpaceResourceOperation>>
  UpdateSpaceResourcesRequest& WithRemoveResources(RemoveResourcesT&& value) {
    SetRemoveResources(std::forward<RemoveResourcesT>(value));
    return *this;
  }
  template <typename RemoveResourcesT = SpaceResourceOperation>
  UpdateSpaceResourcesRequest& AddRemoveResources(RemoveResourcesT&& value) {
    m_removeResourcesHasBeenSet = true;
    m_removeResources.emplace_back(std::forward<RemoveResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_spaceId;

  Aws::Vector<SpaceResourceOperation> m_addResources;

  Aws::Vector<SpaceResourceOperation> m_removeResources;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_spaceIdHasBeenSet = false;
  bool m_addResourcesHasBeenSet = false;
  bool m_removeResourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

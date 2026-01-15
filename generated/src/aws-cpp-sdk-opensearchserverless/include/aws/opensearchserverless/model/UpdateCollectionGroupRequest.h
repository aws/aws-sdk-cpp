/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CollectionGroupCapacityLimits.h>

#include <utility>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

/**
 */
class UpdateCollectionGroupRequest : public OpenSearchServerlessRequest {
 public:
  AWS_OPENSEARCHSERVERLESS_API UpdateCollectionGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCollectionGroup"; }

  AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the collection group to update.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateCollectionGroupRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the collection group.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateCollectionGroupRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated capacity limits for the collection group, in OpenSearch Compute Units
   * (OCUs).</p>
   */
  inline const CollectionGroupCapacityLimits& GetCapacityLimits() const { return m_capacityLimits; }
  inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }
  template <typename CapacityLimitsT = CollectionGroupCapacityLimits>
  void SetCapacityLimits(CapacityLimitsT&& value) {
    m_capacityLimitsHasBeenSet = true;
    m_capacityLimits = std::forward<CapacityLimitsT>(value);
  }
  template <typename CapacityLimitsT = CollectionGroupCapacityLimits>
  UpdateCollectionGroupRequest& WithCapacityLimits(CapacityLimitsT&& value) {
    SetCapacityLimits(std::forward<CapacityLimitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateCollectionGroupRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_description;

  CollectionGroupCapacityLimits m_capacityLimits;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_idHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_capacityLimitsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws

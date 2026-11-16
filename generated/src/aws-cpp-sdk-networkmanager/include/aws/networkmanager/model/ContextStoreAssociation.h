/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ContextStoreAssociationState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Describes the association between a context store and a transit
 * gateway.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ContextStoreAssociation">AWS
 * API Reference</a></p>
 */
class ContextStoreAssociation {
 public:
  AWS_NETWORKMANAGER_API ContextStoreAssociation() = default;
  AWS_NETWORKMANAGER_API ContextStoreAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API ContextStoreAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the context store.</p>
   */
  inline const Aws::String& GetContextStoreId() const { return m_contextStoreId; }
  inline bool ContextStoreIdHasBeenSet() const { return m_contextStoreIdHasBeenSet; }
  template <typename ContextStoreIdT = Aws::String>
  void SetContextStoreId(ContextStoreIdT&& value) {
    m_contextStoreIdHasBeenSet = true;
    m_contextStoreId = std::forward<ContextStoreIdT>(value);
  }
  template <typename ContextStoreIdT = Aws::String>
  ContextStoreAssociation& WithContextStoreId(ContextStoreIdT&& value) {
    SetContextStoreId(std::forward<ContextStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
   */
  inline const Aws::String& GetTransitGatewayArn() const { return m_transitGatewayArn; }
  inline bool TransitGatewayArnHasBeenSet() const { return m_transitGatewayArnHasBeenSet; }
  template <typename TransitGatewayArnT = Aws::String>
  void SetTransitGatewayArn(TransitGatewayArnT&& value) {
    m_transitGatewayArnHasBeenSet = true;
    m_transitGatewayArn = std::forward<TransitGatewayArnT>(value);
  }
  template <typename TransitGatewayArnT = Aws::String>
  ContextStoreAssociation& WithTransitGatewayArn(TransitGatewayArnT&& value) {
    SetTransitGatewayArn(std::forward<TransitGatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the association was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ContextStoreAssociation& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the association. The possible values are the following:</p> <ul>
   * <li> <p> <code>ASSOCIATING</code>: The transit gateway is being associated with
   * the context store.</p> </li> <li> <p> <code>ASSOCIATED</code>: The transit
   * gateway is associated with the context store.</p> </li> <li> <p>
   * <code>DISASSOCIATING</code>: The transit gateway is being disassociated from the
   * context store.</p> </li> <li> <p> <code>FAILED</code>: The association failed.
   * To remove it, disassociate the transit gateway.</p> </li> </ul>
   */
  inline ContextStoreAssociationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ContextStoreAssociationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ContextStoreAssociation& WithState(ContextStoreAssociationState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_contextStoreId;

  Aws::String m_transitGatewayArn;

  Aws::Utils::DateTime m_createdAt{};

  ContextStoreAssociationState m_state{ContextStoreAssociationState::NOT_SET};
  bool m_contextStoreIdHasBeenSet = false;
  bool m_transitGatewayArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws

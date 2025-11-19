/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterNetworkInterfaceState.h>
#include <aws/mediaconnect/model/RouterNetworkInterfaceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>A summary of a router network interface, including its name, type, ARN, ID,
 * associated input/output counts, state, and other key details. This structure is
 * used in the response of the ListRouterNetworkInterfaces operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedRouterNetworkInterface">AWS
 * API Reference</a></p>
 */
class ListedRouterNetworkInterface {
 public:
  AWS_MEDIACONNECT_API ListedRouterNetworkInterface() = default;
  AWS_MEDIACONNECT_API ListedRouterNetworkInterface(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ListedRouterNetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the router network interface.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListedRouterNetworkInterface& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router network interface.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ListedRouterNetworkInterface& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the router network interface.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ListedRouterNetworkInterface& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the router network interface.</p>
   */
  inline RouterNetworkInterfaceType GetNetworkInterfaceType() const { return m_networkInterfaceType; }
  inline bool NetworkInterfaceTypeHasBeenSet() const { return m_networkInterfaceTypeHasBeenSet; }
  inline void SetNetworkInterfaceType(RouterNetworkInterfaceType value) {
    m_networkInterfaceTypeHasBeenSet = true;
    m_networkInterfaceType = value;
  }
  inline ListedRouterNetworkInterface& WithNetworkInterfaceType(RouterNetworkInterfaceType value) {
    SetNetworkInterfaceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of router outputs associated with the network interface.</p>
   */
  inline int GetAssociatedOutputCount() const { return m_associatedOutputCount; }
  inline bool AssociatedOutputCountHasBeenSet() const { return m_associatedOutputCountHasBeenSet; }
  inline void SetAssociatedOutputCount(int value) {
    m_associatedOutputCountHasBeenSet = true;
    m_associatedOutputCount = value;
  }
  inline ListedRouterNetworkInterface& WithAssociatedOutputCount(int value) {
    SetAssociatedOutputCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of router inputs associated with the network interface.</p>
   */
  inline int GetAssociatedInputCount() const { return m_associatedInputCount; }
  inline bool AssociatedInputCountHasBeenSet() const { return m_associatedInputCountHasBeenSet; }
  inline void SetAssociatedInputCount(int value) {
    m_associatedInputCountHasBeenSet = true;
    m_associatedInputCount = value;
  }
  inline ListedRouterNetworkInterface& WithAssociatedInputCount(int value) {
    SetAssociatedInputCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the router network interface.</p>
   */
  inline RouterNetworkInterfaceState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RouterNetworkInterfaceState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ListedRouterNetworkInterface& WithState(RouterNetworkInterfaceState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region where the router network interface is located.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  ListedRouterNetworkInterface& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the network interface was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ListedRouterNetworkInterface& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the router network interface was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ListedRouterNetworkInterface& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  RouterNetworkInterfaceType m_networkInterfaceType{RouterNetworkInterfaceType::NOT_SET};
  bool m_networkInterfaceTypeHasBeenSet = false;

  int m_associatedOutputCount{0};
  bool m_associatedOutputCountHasBeenSet = false;

  int m_associatedInputCount{0};
  bool m_associatedInputCountHasBeenSet = false;

  RouterNetworkInterfaceState m_state{RouterNetworkInterfaceState::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::String m_regionName;
  bool m_regionNameHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

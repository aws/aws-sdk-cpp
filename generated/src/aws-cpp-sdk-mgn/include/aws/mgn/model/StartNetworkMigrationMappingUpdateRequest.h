/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/StartNetworkMigrationMappingUpdateConstruct.h>
#include <aws/mgn/model/StartNetworkMigrationMappingUpdateSegment.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class StartNetworkMigrationMappingUpdateRequest : public MgnRequest {
 public:
  AWS_MGN_API StartNetworkMigrationMappingUpdateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartNetworkMigrationMappingUpdate"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the network migration execution.</p>
   */
  inline const Aws::String& GetNetworkMigrationExecutionID() const { return m_networkMigrationExecutionID; }
  inline bool NetworkMigrationExecutionIDHasBeenSet() const { return m_networkMigrationExecutionIDHasBeenSet; }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  void SetNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    m_networkMigrationExecutionIDHasBeenSet = true;
    m_networkMigrationExecutionID = std::forward<NetworkMigrationExecutionIDT>(value);
  }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  StartNetworkMigrationMappingUpdateRequest& WithNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    SetNetworkMigrationExecutionID(std::forward<NetworkMigrationExecutionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the network migration definition.</p>
   */
  inline const Aws::String& GetNetworkMigrationDefinitionID() const { return m_networkMigrationDefinitionID; }
  inline bool NetworkMigrationDefinitionIDHasBeenSet() const { return m_networkMigrationDefinitionIDHasBeenSet; }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  void SetNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    m_networkMigrationDefinitionIDHasBeenSet = true;
    m_networkMigrationDefinitionID = std::forward<NetworkMigrationDefinitionIDT>(value);
  }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  StartNetworkMigrationMappingUpdateRequest& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    SetNetworkMigrationDefinitionID(std::forward<NetworkMigrationDefinitionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of construct updates to apply.</p>
   */
  inline const Aws::Vector<StartNetworkMigrationMappingUpdateConstruct>& GetConstructs() const { return m_constructs; }
  inline bool ConstructsHasBeenSet() const { return m_constructsHasBeenSet; }
  template <typename ConstructsT = Aws::Vector<StartNetworkMigrationMappingUpdateConstruct>>
  void SetConstructs(ConstructsT&& value) {
    m_constructsHasBeenSet = true;
    m_constructs = std::forward<ConstructsT>(value);
  }
  template <typename ConstructsT = Aws::Vector<StartNetworkMigrationMappingUpdateConstruct>>
  StartNetworkMigrationMappingUpdateRequest& WithConstructs(ConstructsT&& value) {
    SetConstructs(std::forward<ConstructsT>(value));
    return *this;
  }
  template <typename ConstructsT = StartNetworkMigrationMappingUpdateConstruct>
  StartNetworkMigrationMappingUpdateRequest& AddConstructs(ConstructsT&& value) {
    m_constructsHasBeenSet = true;
    m_constructs.emplace_back(std::forward<ConstructsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of segment updates to apply.</p>
   */
  inline const Aws::Vector<StartNetworkMigrationMappingUpdateSegment>& GetSegments() const { return m_segments; }
  inline bool SegmentsHasBeenSet() const { return m_segmentsHasBeenSet; }
  template <typename SegmentsT = Aws::Vector<StartNetworkMigrationMappingUpdateSegment>>
  void SetSegments(SegmentsT&& value) {
    m_segmentsHasBeenSet = true;
    m_segments = std::forward<SegmentsT>(value);
  }
  template <typename SegmentsT = Aws::Vector<StartNetworkMigrationMappingUpdateSegment>>
  StartNetworkMigrationMappingUpdateRequest& WithSegments(SegmentsT&& value) {
    SetSegments(std::forward<SegmentsT>(value));
    return *this;
  }
  template <typename SegmentsT = StartNetworkMigrationMappingUpdateSegment>
  StartNetworkMigrationMappingUpdateRequest& AddSegments(SegmentsT&& value) {
    m_segmentsHasBeenSet = true;
    m_segments.emplace_back(std::forward<SegmentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkMigrationExecutionID;

  Aws::String m_networkMigrationDefinitionID;

  Aws::Vector<StartNetworkMigrationMappingUpdateConstruct> m_constructs;

  Aws::Vector<StartNetworkMigrationMappingUpdateSegment> m_segments;
  bool m_networkMigrationExecutionIDHasBeenSet = false;
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_constructsHasBeenSet = false;
  bool m_segmentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws

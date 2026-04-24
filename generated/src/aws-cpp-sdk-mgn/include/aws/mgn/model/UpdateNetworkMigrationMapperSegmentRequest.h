/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class UpdateNetworkMigrationMapperSegmentRequest : public MgnRequest {
 public:
  AWS_MGN_API UpdateNetworkMigrationMapperSegmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkMigrationMapperSegment"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

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
  UpdateNetworkMigrationMapperSegmentRequest& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    SetNetworkMigrationDefinitionID(std::forward<NetworkMigrationDefinitionIDT>(value));
    return *this;
  }
  ///@}

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
  UpdateNetworkMigrationMapperSegmentRequest& WithNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    SetNetworkMigrationExecutionID(std::forward<NetworkMigrationExecutionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the segment to update.</p>
   */
  inline const Aws::String& GetSegmentID() const { return m_segmentID; }
  inline bool SegmentIDHasBeenSet() const { return m_segmentIDHasBeenSet; }
  template <typename SegmentIDT = Aws::String>
  void SetSegmentID(SegmentIDT&& value) {
    m_segmentIDHasBeenSet = true;
    m_segmentID = std::forward<SegmentIDT>(value);
  }
  template <typename SegmentIDT = Aws::String>
  UpdateNetworkMigrationMapperSegmentRequest& WithSegmentID(SegmentIDT&& value) {
    SetSegmentID(std::forward<SegmentIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated scope tags for the segment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetScopeTags() const { return m_scopeTags; }
  inline bool ScopeTagsHasBeenSet() const { return m_scopeTagsHasBeenSet; }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetScopeTags(ScopeTagsT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags = std::forward<ScopeTagsT>(value);
  }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  UpdateNetworkMigrationMapperSegmentRequest& WithScopeTags(ScopeTagsT&& value) {
    SetScopeTags(std::forward<ScopeTagsT>(value));
    return *this;
  }
  template <typename ScopeTagsKeyT = Aws::String, typename ScopeTagsValueT = Aws::String>
  UpdateNetworkMigrationMapperSegmentRequest& AddScopeTags(ScopeTagsKeyT&& key, ScopeTagsValueT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags.emplace(std::forward<ScopeTagsKeyT>(key), std::forward<ScopeTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkMigrationDefinitionID;

  Aws::String m_networkMigrationExecutionID;

  Aws::String m_segmentID;

  Aws::Map<Aws::String, Aws::String> m_scopeTags;
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_networkMigrationExecutionIDHasBeenSet = false;
  bool m_segmentIDHasBeenSet = false;
  bool m_scopeTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws

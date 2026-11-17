/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Filters for listing source actions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListRemoteSourceActionsRequestFilters">AWS
 * API Reference</a></p>
 */
class ListRemoteSourceActionsRequestFilters {
 public:
  AWS_MGN_API ListRemoteSourceActionsRequestFilters() = default;
  AWS_MGN_API ListRemoteSourceActionsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ListRemoteSourceActionsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of source action IDs to filter by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemoteSourceActionIDs() const { return m_remoteSourceActionIDs; }
  inline bool RemoteSourceActionIDsHasBeenSet() const { return m_remoteSourceActionIDsHasBeenSet; }
  template <typename RemoteSourceActionIDsT = Aws::Vector<Aws::String>>
  void SetRemoteSourceActionIDs(RemoteSourceActionIDsT&& value) {
    m_remoteSourceActionIDsHasBeenSet = true;
    m_remoteSourceActionIDs = std::forward<RemoteSourceActionIDsT>(value);
  }
  template <typename RemoteSourceActionIDsT = Aws::Vector<Aws::String>>
  ListRemoteSourceActionsRequestFilters& WithRemoteSourceActionIDs(RemoteSourceActionIDsT&& value) {
    SetRemoteSourceActionIDs(std::forward<RemoteSourceActionIDsT>(value));
    return *this;
  }
  template <typename RemoteSourceActionIDsT = Aws::String>
  ListRemoteSourceActionsRequestFilters& AddRemoteSourceActionIDs(RemoteSourceActionIDsT&& value) {
    m_remoteSourceActionIDsHasBeenSet = true;
    m_remoteSourceActionIDs.emplace_back(std::forward<RemoteSourceActionIDsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_remoteSourceActionIDs;
  bool m_remoteSourceActionIDsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws

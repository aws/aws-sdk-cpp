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
 * <p>Filters for listing source action jobs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListRemoteSourceActionJobsRequestFilters">AWS
 * API Reference</a></p>
 */
class ListRemoteSourceActionJobsRequestFilters {
 public:
  AWS_MGN_API ListRemoteSourceActionJobsRequestFilters() = default;
  AWS_MGN_API ListRemoteSourceActionJobsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ListRemoteSourceActionJobsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of job IDs to filter by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemoteSourceActionJobIDs() const { return m_remoteSourceActionJobIDs; }
  inline bool RemoteSourceActionJobIDsHasBeenSet() const { return m_remoteSourceActionJobIDsHasBeenSet; }
  template <typename RemoteSourceActionJobIDsT = Aws::Vector<Aws::String>>
  void SetRemoteSourceActionJobIDs(RemoteSourceActionJobIDsT&& value) {
    m_remoteSourceActionJobIDsHasBeenSet = true;
    m_remoteSourceActionJobIDs = std::forward<RemoteSourceActionJobIDsT>(value);
  }
  template <typename RemoteSourceActionJobIDsT = Aws::Vector<Aws::String>>
  ListRemoteSourceActionJobsRequestFilters& WithRemoteSourceActionJobIDs(RemoteSourceActionJobIDsT&& value) {
    SetRemoteSourceActionJobIDs(std::forward<RemoteSourceActionJobIDsT>(value));
    return *this;
  }
  template <typename RemoteSourceActionJobIDsT = Aws::String>
  ListRemoteSourceActionJobsRequestFilters& AddRemoteSourceActionJobIDs(RemoteSourceActionJobIDsT&& value) {
    m_remoteSourceActionJobIDsHasBeenSet = true;
    m_remoteSourceActionJobIDs.emplace_back(std::forward<RemoteSourceActionJobIDsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_remoteSourceActionJobIDs;
  bool m_remoteSourceActionJobIDsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws

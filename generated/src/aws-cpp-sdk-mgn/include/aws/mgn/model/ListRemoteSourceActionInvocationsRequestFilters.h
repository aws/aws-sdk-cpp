/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/RemoteSourceActionInvocationStatus.h>

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
 * <p>Filters for listing source action invocations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListRemoteSourceActionInvocationsRequestFilters">AWS
 * API Reference</a></p>
 */
class ListRemoteSourceActionInvocationsRequestFilters {
 public:
  AWS_MGN_API ListRemoteSourceActionInvocationsRequestFilters() = default;
  AWS_MGN_API ListRemoteSourceActionInvocationsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ListRemoteSourceActionInvocationsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of source server ARNs to filter by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSourceServerArns() const { return m_sourceServerArns; }
  inline bool SourceServerArnsHasBeenSet() const { return m_sourceServerArnsHasBeenSet; }
  template <typename SourceServerArnsT = Aws::Vector<Aws::String>>
  void SetSourceServerArns(SourceServerArnsT&& value) {
    m_sourceServerArnsHasBeenSet = true;
    m_sourceServerArns = std::forward<SourceServerArnsT>(value);
  }
  template <typename SourceServerArnsT = Aws::Vector<Aws::String>>
  ListRemoteSourceActionInvocationsRequestFilters& WithSourceServerArns(SourceServerArnsT&& value) {
    SetSourceServerArns(std::forward<SourceServerArnsT>(value));
    return *this;
  }
  template <typename SourceServerArnsT = Aws::String>
  ListRemoteSourceActionInvocationsRequestFilters& AddSourceServerArns(SourceServerArnsT&& value) {
    m_sourceServerArnsHasBeenSet = true;
    m_sourceServerArns.emplace_back(std::forward<SourceServerArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of source action ARNs to filter by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemoteSourceActionArns() const { return m_remoteSourceActionArns; }
  inline bool RemoteSourceActionArnsHasBeenSet() const { return m_remoteSourceActionArnsHasBeenSet; }
  template <typename RemoteSourceActionArnsT = Aws::Vector<Aws::String>>
  void SetRemoteSourceActionArns(RemoteSourceActionArnsT&& value) {
    m_remoteSourceActionArnsHasBeenSet = true;
    m_remoteSourceActionArns = std::forward<RemoteSourceActionArnsT>(value);
  }
  template <typename RemoteSourceActionArnsT = Aws::Vector<Aws::String>>
  ListRemoteSourceActionInvocationsRequestFilters& WithRemoteSourceActionArns(RemoteSourceActionArnsT&& value) {
    SetRemoteSourceActionArns(std::forward<RemoteSourceActionArnsT>(value));
    return *this;
  }
  template <typename RemoteSourceActionArnsT = Aws::String>
  ListRemoteSourceActionInvocationsRequestFilters& AddRemoteSourceActionArns(RemoteSourceActionArnsT&& value) {
    m_remoteSourceActionArnsHasBeenSet = true;
    m_remoteSourceActionArns.emplace_back(std::forward<RemoteSourceActionArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of invocation statuses to filter by.</p>
   */
  inline const Aws::Vector<RemoteSourceActionInvocationStatus>& GetStatuses() const { return m_statuses; }
  inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
  template <typename StatusesT = Aws::Vector<RemoteSourceActionInvocationStatus>>
  void SetStatuses(StatusesT&& value) {
    m_statusesHasBeenSet = true;
    m_statuses = std::forward<StatusesT>(value);
  }
  template <typename StatusesT = Aws::Vector<RemoteSourceActionInvocationStatus>>
  ListRemoteSourceActionInvocationsRequestFilters& WithStatuses(StatusesT&& value) {
    SetStatuses(std::forward<StatusesT>(value));
    return *this;
  }
  inline ListRemoteSourceActionInvocationsRequestFilters& AddStatuses(RemoteSourceActionInvocationStatus value) {
    m_statusesHasBeenSet = true;
    m_statuses.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_sourceServerArns;

  Aws::Vector<Aws::String> m_remoteSourceActionArns;

  Aws::Vector<RemoteSourceActionInvocationStatus> m_statuses;
  bool m_sourceServerArnsHasBeenSet = false;
  bool m_remoteSourceActionArnsHasBeenSet = false;
  bool m_statusesHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/MultiRegionParameterGroup.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MemoryDB {
namespace Model {
class DescribeMultiRegionParameterGroupsResult {
 public:
  AWS_MEMORYDB_API DescribeMultiRegionParameterGroupsResult() = default;
  AWS_MEMORYDB_API DescribeMultiRegionParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEMORYDB_API DescribeMultiRegionParameterGroupsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An optional token to include in the response. If this token is provided, the
   * response includes only results beyond the token, up to the value specified by
   * MaxResults.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeMultiRegionParameterGroupsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of multi-region parameter groups. Each element in the list contains
   * detailed information about one parameter group.</p>
   */
  inline const Aws::Vector<MultiRegionParameterGroup>& GetMultiRegionParameterGroups() const { return m_multiRegionParameterGroups; }
  template <typename MultiRegionParameterGroupsT = Aws::Vector<MultiRegionParameterGroup>>
  void SetMultiRegionParameterGroups(MultiRegionParameterGroupsT&& value) {
    m_multiRegionParameterGroupsHasBeenSet = true;
    m_multiRegionParameterGroups = std::forward<MultiRegionParameterGroupsT>(value);
  }
  template <typename MultiRegionParameterGroupsT = Aws::Vector<MultiRegionParameterGroup>>
  DescribeMultiRegionParameterGroupsResult& WithMultiRegionParameterGroups(MultiRegionParameterGroupsT&& value) {
    SetMultiRegionParameterGroups(std::forward<MultiRegionParameterGroupsT>(value));
    return *this;
  }
  template <typename MultiRegionParameterGroupsT = MultiRegionParameterGroup>
  DescribeMultiRegionParameterGroupsResult& AddMultiRegionParameterGroups(MultiRegionParameterGroupsT&& value) {
    m_multiRegionParameterGroupsHasBeenSet = true;
    m_multiRegionParameterGroups.emplace_back(std::forward<MultiRegionParameterGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeMultiRegionParameterGroupsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<MultiRegionParameterGroup> m_multiRegionParameterGroups;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_multiRegionParameterGroupsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MemoryDB
}  // namespace Aws

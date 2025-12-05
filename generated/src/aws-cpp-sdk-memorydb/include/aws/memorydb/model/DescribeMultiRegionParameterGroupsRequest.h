/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MemoryDB {
namespace Model {

/**
 */
class DescribeMultiRegionParameterGroupsRequest : public MemoryDBRequest {
 public:
  AWS_MEMORYDB_API DescribeMultiRegionParameterGroupsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeMultiRegionParameterGroups"; }

  AWS_MEMORYDB_API Aws::String SerializePayload() const override;

  AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The request for information on a specific multi-region parameter group.</p>
   */
  inline const Aws::String& GetMultiRegionParameterGroupName() const { return m_multiRegionParameterGroupName; }
  inline bool MultiRegionParameterGroupNameHasBeenSet() const { return m_multiRegionParameterGroupNameHasBeenSet; }
  template <typename MultiRegionParameterGroupNameT = Aws::String>
  void SetMultiRegionParameterGroupName(MultiRegionParameterGroupNameT&& value) {
    m_multiRegionParameterGroupNameHasBeenSet = true;
    m_multiRegionParameterGroupName = std::forward<MultiRegionParameterGroupNameT>(value);
  }
  template <typename MultiRegionParameterGroupNameT = Aws::String>
  DescribeMultiRegionParameterGroupsRequest& WithMultiRegionParameterGroupName(MultiRegionParameterGroupNameT&& value) {
    SetMultiRegionParameterGroupName(std::forward<MultiRegionParameterGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of records to include in the response. If more records
   * exist than the specified MaxResults value, a token is included in the response
   * so that the remaining results can be retrieved.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeMultiRegionParameterGroupsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional token returned from a prior request. Use this token for
   * pagination of results from this action. If this parameter is specified, the
   * response includes only results beyond the token, up to the value specified by
   * MaxResults.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeMultiRegionParameterGroupsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_multiRegionParameterGroupName;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_multiRegionParameterGroupNameHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace MemoryDB
}  // namespace Aws

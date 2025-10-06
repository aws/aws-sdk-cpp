/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class DescribeMultiRegionParametersRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API DescribeMultiRegionParametersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMultiRegionParameters"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the multi-region parameter group to return details for.</p>
     */
    inline const Aws::String& GetMultiRegionParameterGroupName() const { return m_multiRegionParameterGroupName; }
    inline bool MultiRegionParameterGroupNameHasBeenSet() const { return m_multiRegionParameterGroupNameHasBeenSet; }
    template<typename MultiRegionParameterGroupNameT = Aws::String>
    void SetMultiRegionParameterGroupName(MultiRegionParameterGroupNameT&& value) { m_multiRegionParameterGroupNameHasBeenSet = true; m_multiRegionParameterGroupName = std::forward<MultiRegionParameterGroupNameT>(value); }
    template<typename MultiRegionParameterGroupNameT = Aws::String>
    DescribeMultiRegionParametersRequest& WithMultiRegionParameterGroupName(MultiRegionParameterGroupNameT&& value) { SetMultiRegionParameterGroupName(std::forward<MultiRegionParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter types to return. Valid values: user | system |
     * engine-default</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    DescribeMultiRegionParametersRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeMultiRegionParametersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMultiRegionParametersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_multiRegionParameterGroupName;
    bool m_multiRegionParameterGroupNameHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws

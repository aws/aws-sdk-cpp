/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InstancePatchStateFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeInstancePatchStatesForPatchGroupRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeInstancePatchStatesForPatchGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstancePatchStatesForPatchGroup"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the patch group for which the patch state information should be
     * retrieved.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::move(value); }
    inline void SetPatchGroup(const char* value) { m_patchGroupHasBeenSet = true; m_patchGroup.assign(value); }
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Key
     * (string between 1 and 200 characters)</p> </li> <li> <p>Values (array containing
     * a single string)</p> </li> <li> <p>Type (string "Equal", "NotEqual", "LessThan",
     * "GreaterThan")</p> </li> </ul>
     */
    inline const Aws::Vector<InstancePatchStateFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<InstancePatchStateFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<InstancePatchStateFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithFilters(const Aws::Vector<InstancePatchStateFilter>& value) { SetFilters(value); return *this;}
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithFilters(Aws::Vector<InstancePatchStateFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeInstancePatchStatesForPatchGroupRequest& AddFilters(const InstancePatchStateFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeInstancePatchStatesForPatchGroupRequest& AddFilters(InstancePatchStateFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet = false;

    Aws::Vector<InstancePatchStateFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

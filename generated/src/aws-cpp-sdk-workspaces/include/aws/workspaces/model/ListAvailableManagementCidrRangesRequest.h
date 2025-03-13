/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ListAvailableManagementCidrRangesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ListAvailableManagementCidrRangesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAvailableManagementCidrRanges"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IP address range to search. Specify an IP address range that is
     * compatible with your network and in CIDR notation (that is, specify the range as
     * an IPv4 CIDR block).</p>
     */
    inline const Aws::String& GetManagementCidrRangeConstraint() const { return m_managementCidrRangeConstraint; }
    inline bool ManagementCidrRangeConstraintHasBeenSet() const { return m_managementCidrRangeConstraintHasBeenSet; }
    template<typename ManagementCidrRangeConstraintT = Aws::String>
    void SetManagementCidrRangeConstraint(ManagementCidrRangeConstraintT&& value) { m_managementCidrRangeConstraintHasBeenSet = true; m_managementCidrRangeConstraint = std::forward<ManagementCidrRangeConstraintT>(value); }
    template<typename ManagementCidrRangeConstraintT = Aws::String>
    ListAvailableManagementCidrRangesRequest& WithManagementCidrRangeConstraint(ManagementCidrRangeConstraintT&& value) { SetManagementCidrRangeConstraint(std::forward<ManagementCidrRangeConstraintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAvailableManagementCidrRangesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAvailableManagementCidrRangesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managementCidrRangeConstraint;
    bool m_managementCidrRangeConstraintHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchOrchestratorFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeInstancePatchesRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeInstancePatchesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstancePatches"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the managed node whose patch state information should be
     * retrieved.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DescribeInstancePatchesRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribeInstancePatches</code>include the
     * following:</p> <ul> <li> <p> <b> <code>Classification</code> </b> </p> <p>Sample
     * values: <code>Security</code> | <code>SecurityUpdates</code> </p> </li> <li> <p>
     * <b> <code>KBId</code> </b> </p> <p>Sample values: <code>KB4480056</code> |
     * <code>java-1.7.0-openjdk.x86_64</code> </p> </li> <li> <p> <b>
     * <code>Severity</code> </b> </p> <p>Sample values: <code>Important</code> |
     * <code>Medium</code> | <code>Low</code> </p> </li> <li> <p> <b>
     * <code>State</code> </b> </p> <p>Sample values: <code>Installed</code> |
     * <code>InstalledOther</code> | <code>InstalledPendingReboot</code> </p> <p>For
     * lists of all <code>State</code> values, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-compliance-states.html">Patch
     * compliance state values</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p> </li> </ul>
     */
    inline const Aws::Vector<PatchOrchestratorFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<PatchOrchestratorFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<PatchOrchestratorFilter>>
    DescribeInstancePatchesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = PatchOrchestratorFilter>
    DescribeInstancePatchesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInstancePatchesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeInstancePatchesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<PatchOrchestratorFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

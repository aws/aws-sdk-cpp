﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeEffectivePatchesForPatchBaselineRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeEffectivePatchesForPatchBaselineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEffectivePatchesForPatchBaseline"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the patch baseline to retrieve the effective patches for.</p>
     */
    inline const Aws::String& GetBaselineId() const { return m_baselineId; }
    inline bool BaselineIdHasBeenSet() const { return m_baselineIdHasBeenSet; }
    template<typename BaselineIdT = Aws::String>
    void SetBaselineId(BaselineIdT&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::forward<BaselineIdT>(value); }
    template<typename BaselineIdT = Aws::String>
    DescribeEffectivePatchesForPatchBaselineRequest& WithBaselineId(BaselineIdT&& value) { SetBaselineId(std::forward<BaselineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeEffectivePatchesForPatchBaselineRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeEffectivePatchesForPatchBaselineRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

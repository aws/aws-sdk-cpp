/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/RunType.h>
#include <utility>

namespace Aws
{
namespace Synthetics
{
namespace Model
{

  /**
   */
  class GetCanaryRunsRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API GetCanaryRunsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCanaryRuns"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the canary that you want to see runs for.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetCanaryRunsRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>GetCanaryRuns</code> operation to retrieve the next
     * set of results.</p>  <p>When auto retry is enabled for the canary, the
     * first subsequent retry is suffixed with *1 indicating its the first retry and
     * the next subsequent try is suffixed with *2.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCanaryRunsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this parameter to limit how many runs are returned each time you use
     * the <code>GetCanaryRuns</code> operation. If you omit this parameter, the
     * default of 100 is used.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCanaryRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DryRunId associated with an existing canary’s dry run. You can use this
     * DryRunId to retrieve information about the dry run.</p>
     */
    inline const Aws::String& GetDryRunId() const { return m_dryRunId; }
    inline bool DryRunIdHasBeenSet() const { return m_dryRunIdHasBeenSet; }
    template<typename DryRunIdT = Aws::String>
    void SetDryRunId(DryRunIdT&& value) { m_dryRunIdHasBeenSet = true; m_dryRunId = std::forward<DryRunIdT>(value); }
    template<typename DryRunIdT = Aws::String>
    GetCanaryRunsRequest& WithDryRunId(DryRunIdT&& value) { SetDryRunId(std::forward<DryRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <ul> <li> <p>When you provide <code>RunType=CANARY_RUN</code> and
     * <code>dryRunId</code>, you will get an exception </p> </li> <li> <p>When a value
     * is not provided for <code>RunType</code>, the default value is
     * <code>CANARY_RUN</code> </p> </li> <li> <p>When <code>CANARY_RUN</code> is
     * provided, all canary runs excluding dry runs are returned</p> </li> <li> <p>When
     * <code>DRY_RUN</code> is provided, all dry runs excluding canary runs are
     * returned</p> </li> </ul>
     */
    inline RunType GetRunType() const { return m_runType; }
    inline bool RunTypeHasBeenSet() const { return m_runTypeHasBeenSet; }
    inline void SetRunType(RunType value) { m_runTypeHasBeenSet = true; m_runType = value; }
    inline GetCanaryRunsRequest& WithRunType(RunType value) { SetRunType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_dryRunId;
    bool m_dryRunIdHasBeenSet = false;

    RunType m_runType{RunType::NOT_SET};
    bool m_runTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

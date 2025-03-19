/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/RunStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class ListRunsRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListRunsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRuns"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Filter the list by run name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListRunsRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the list by run group ID.</p>
     */
    inline const Aws::String& GetRunGroupId() const { return m_runGroupId; }
    inline bool RunGroupIdHasBeenSet() const { return m_runGroupIdHasBeenSet; }
    template<typename RunGroupIdT = Aws::String>
    void SetRunGroupId(RunGroupIdT&& value) { m_runGroupIdHasBeenSet = true; m_runGroupId = std::forward<RunGroupIdT>(value); }
    template<typename RunGroupIdT = Aws::String>
    ListRunsRequest& WithRunGroupId(RunGroupIdT&& value) { SetRunGroupId(std::forward<RunGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetStartingToken() const { return m_startingToken; }
    inline bool StartingTokenHasBeenSet() const { return m_startingTokenHasBeenSet; }
    template<typename StartingTokenT = Aws::String>
    void SetStartingToken(StartingTokenT&& value) { m_startingTokenHasBeenSet = true; m_startingToken = std::forward<StartingTokenT>(value); }
    template<typename StartingTokenT = Aws::String>
    ListRunsRequest& WithStartingToken(StartingTokenT&& value) { SetStartingToken(std::forward<StartingTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of runs to return in one page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a run.</p>
     */
    inline RunStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListRunsRequest& WithStatus(RunStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_runGroupId;
    bool m_runGroupIdHasBeenSet = false;

    Aws::String m_startingToken;
    bool m_startingTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    RunStatus m_status{RunStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

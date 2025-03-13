/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/PipesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/RequestedPipeState.h>
#include <aws/pipes/model/PipeState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pipes
{
namespace Model
{

  /**
   */
  class ListPipesRequest : public PipesRequest
  {
  public:
    AWS_PIPES_API ListPipesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPipes"; }

    AWS_PIPES_API Aws::String SerializePayload() const override;

    AWS_PIPES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A value that will return a subset of the pipes associated with this account.
     * For example, <code>"NamePrefix": "ABC"</code> will return all endpoints with
     * "ABC" in the name.</p>
     */
    inline const Aws::String& GetNamePrefix() const { return m_namePrefix; }
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }
    template<typename NamePrefixT = Aws::String>
    void SetNamePrefix(NamePrefixT&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::forward<NamePrefixT>(value); }
    template<typename NamePrefixT = Aws::String>
    ListPipesRequest& WithNamePrefix(NamePrefixT&& value) { SetNamePrefix(std::forward<NamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state the pipe should be in.</p>
     */
    inline RequestedPipeState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(RequestedPipeState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline ListPipesRequest& WithDesiredState(RequestedPipeState value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state the pipe is in.</p>
     */
    inline PipeState GetCurrentState() const { return m_currentState; }
    inline bool CurrentStateHasBeenSet() const { return m_currentStateHasBeenSet; }
    inline void SetCurrentState(PipeState value) { m_currentStateHasBeenSet = true; m_currentState = value; }
    inline ListPipesRequest& WithCurrentState(PipeState value) { SetCurrentState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix matching the pipe source.</p>
     */
    inline const Aws::String& GetSourcePrefix() const { return m_sourcePrefix; }
    inline bool SourcePrefixHasBeenSet() const { return m_sourcePrefixHasBeenSet; }
    template<typename SourcePrefixT = Aws::String>
    void SetSourcePrefix(SourcePrefixT&& value) { m_sourcePrefixHasBeenSet = true; m_sourcePrefix = std::forward<SourcePrefixT>(value); }
    template<typename SourcePrefixT = Aws::String>
    ListPipesRequest& WithSourcePrefix(SourcePrefixT&& value) { SetSourcePrefix(std::forward<SourcePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix matching the pipe target.</p>
     */
    inline const Aws::String& GetTargetPrefix() const { return m_targetPrefix; }
    inline bool TargetPrefixHasBeenSet() const { return m_targetPrefixHasBeenSet; }
    template<typename TargetPrefixT = Aws::String>
    void SetTargetPrefix(TargetPrefixT&& value) { m_targetPrefixHasBeenSet = true; m_targetPrefix = std::forward<TargetPrefixT>(value); }
    template<typename TargetPrefixT = Aws::String>
    ListPipesRequest& WithTargetPrefix(TargetPrefixT&& value) { SetTargetPrefix(std::forward<TargetPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPipesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of pipes to include in the response.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListPipesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    RequestedPipeState m_desiredState{RequestedPipeState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

    PipeState m_currentState{PipeState::NOT_SET};
    bool m_currentStateHasBeenSet = false;

    Aws::String m_sourcePrefix;
    bool m_sourcePrefixHasBeenSet = false;

    Aws::String m_targetPrefix;
    bool m_targetPrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws

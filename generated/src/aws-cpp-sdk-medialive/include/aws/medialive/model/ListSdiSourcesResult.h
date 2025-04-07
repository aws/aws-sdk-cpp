/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/SdiSourceSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListSdiSourcesResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListSdiSourcesResponse">AWS
   * API Reference</a></p>
   */
  class ListSdiSourcesResult
  {
  public:
    AWS_MEDIALIVE_API ListSdiSourcesResult() = default;
    AWS_MEDIALIVE_API ListSdiSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListSdiSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSdiSourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<SdiSourceSummary>& GetSdiSources() const { return m_sdiSources; }
    template<typename SdiSourcesT = Aws::Vector<SdiSourceSummary>>
    void SetSdiSources(SdiSourcesT&& value) { m_sdiSourcesHasBeenSet = true; m_sdiSources = std::forward<SdiSourcesT>(value); }
    template<typename SdiSourcesT = Aws::Vector<SdiSourceSummary>>
    ListSdiSourcesResult& WithSdiSources(SdiSourcesT&& value) { SetSdiSources(std::forward<SdiSourcesT>(value)); return *this;}
    template<typename SdiSourcesT = SdiSourceSummary>
    ListSdiSourcesResult& AddSdiSources(SdiSourcesT&& value) { m_sdiSourcesHasBeenSet = true; m_sdiSources.emplace_back(std::forward<SdiSourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSdiSourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SdiSourceSummary> m_sdiSources;
    bool m_sdiSourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

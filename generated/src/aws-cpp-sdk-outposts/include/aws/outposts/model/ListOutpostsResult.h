/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/Outpost.h>
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
namespace Outposts
{
namespace Model
{
  class ListOutpostsResult
  {
  public:
    AWS_OUTPOSTS_API ListOutpostsResult() = default;
    AWS_OUTPOSTS_API ListOutpostsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListOutpostsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<Outpost>& GetOutposts() const { return m_outposts; }
    template<typename OutpostsT = Aws::Vector<Outpost>>
    void SetOutposts(OutpostsT&& value) { m_outpostsHasBeenSet = true; m_outposts = std::forward<OutpostsT>(value); }
    template<typename OutpostsT = Aws::Vector<Outpost>>
    ListOutpostsResult& WithOutposts(OutpostsT&& value) { SetOutposts(std::forward<OutpostsT>(value)); return *this;}
    template<typename OutpostsT = Outpost>
    ListOutpostsResult& AddOutposts(OutpostsT&& value) { m_outpostsHasBeenSet = true; m_outposts.emplace_back(std::forward<OutpostsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOutpostsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOutpostsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Outpost> m_outposts;
    bool m_outpostsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws

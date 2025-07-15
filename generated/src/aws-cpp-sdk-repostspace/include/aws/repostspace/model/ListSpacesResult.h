/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/model/SpaceData.h>
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
namespace repostspace
{
namespace Model
{
  class ListSpacesResult
  {
  public:
    AWS_REPOSTSPACE_API ListSpacesResult() = default;
    AWS_REPOSTSPACE_API ListSpacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API ListSpacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain some information about the private
     * re:Posts in the account.</p>
     */
    inline const Aws::Vector<SpaceData>& GetSpaces() const { return m_spaces; }
    template<typename SpacesT = Aws::Vector<SpaceData>>
    void SetSpaces(SpacesT&& value) { m_spacesHasBeenSet = true; m_spaces = std::forward<SpacesT>(value); }
    template<typename SpacesT = Aws::Vector<SpaceData>>
    ListSpacesResult& WithSpaces(SpacesT&& value) { SetSpaces(std::forward<SpacesT>(value)); return *this;}
    template<typename SpacesT = SpaceData>
    ListSpacesResult& AddSpaces(SpacesT&& value) { m_spacesHasBeenSet = true; m_spaces.emplace_back(std::forward<SpacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you use when you request the next set of private re:Posts.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSpacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSpacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SpaceData> m_spaces;
    bool m_spacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws

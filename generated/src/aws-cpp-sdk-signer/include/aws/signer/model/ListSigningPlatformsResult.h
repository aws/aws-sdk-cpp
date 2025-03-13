/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/SigningPlatform.h>
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
namespace signer
{
namespace Model
{
  class ListSigningPlatformsResult
  {
  public:
    AWS_SIGNER_API ListSigningPlatformsResult() = default;
    AWS_SIGNER_API ListSigningPlatformsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API ListSigningPlatformsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all platforms that match the request parameters.</p>
     */
    inline const Aws::Vector<SigningPlatform>& GetPlatforms() const { return m_platforms; }
    template<typename PlatformsT = Aws::Vector<SigningPlatform>>
    void SetPlatforms(PlatformsT&& value) { m_platformsHasBeenSet = true; m_platforms = std::forward<PlatformsT>(value); }
    template<typename PlatformsT = Aws::Vector<SigningPlatform>>
    ListSigningPlatformsResult& WithPlatforms(PlatformsT&& value) { SetPlatforms(std::forward<PlatformsT>(value)); return *this;}
    template<typename PlatformsT = SigningPlatform>
    ListSigningPlatformsResult& AddPlatforms(PlatformsT&& value) { m_platformsHasBeenSet = true; m_platforms.emplace_back(std::forward<PlatformsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSigningPlatformsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSigningPlatformsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SigningPlatform> m_platforms;
    bool m_platformsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws

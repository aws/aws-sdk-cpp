/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchBaselineIdentity.h>
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
namespace SSM
{
namespace Model
{
  class DescribePatchBaselinesResult
  {
  public:
    AWS_SSM_API DescribePatchBaselinesResult() = default;
    AWS_SSM_API DescribePatchBaselinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribePatchBaselinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>PatchBaselineIdentity</code> elements.</p>
     */
    inline const Aws::Vector<PatchBaselineIdentity>& GetBaselineIdentities() const { return m_baselineIdentities; }
    template<typename BaselineIdentitiesT = Aws::Vector<PatchBaselineIdentity>>
    void SetBaselineIdentities(BaselineIdentitiesT&& value) { m_baselineIdentitiesHasBeenSet = true; m_baselineIdentities = std::forward<BaselineIdentitiesT>(value); }
    template<typename BaselineIdentitiesT = Aws::Vector<PatchBaselineIdentity>>
    DescribePatchBaselinesResult& WithBaselineIdentities(BaselineIdentitiesT&& value) { SetBaselineIdentities(std::forward<BaselineIdentitiesT>(value)); return *this;}
    template<typename BaselineIdentitiesT = PatchBaselineIdentity>
    DescribePatchBaselinesResult& AddBaselineIdentities(BaselineIdentitiesT&& value) { m_baselineIdentitiesHasBeenSet = true; m_baselineIdentities.emplace_back(std::forward<BaselineIdentitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribePatchBaselinesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePatchBaselinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PatchBaselineIdentity> m_baselineIdentities;
    bool m_baselineIdentitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

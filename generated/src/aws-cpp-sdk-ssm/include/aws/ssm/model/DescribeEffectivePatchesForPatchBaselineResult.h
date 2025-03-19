/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/EffectivePatch.h>
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
  class DescribeEffectivePatchesForPatchBaselineResult
  {
  public:
    AWS_SSM_API DescribeEffectivePatchesForPatchBaselineResult() = default;
    AWS_SSM_API DescribeEffectivePatchesForPatchBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeEffectivePatchesForPatchBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of patches and patch status.</p>
     */
    inline const Aws::Vector<EffectivePatch>& GetEffectivePatches() const { return m_effectivePatches; }
    template<typename EffectivePatchesT = Aws::Vector<EffectivePatch>>
    void SetEffectivePatches(EffectivePatchesT&& value) { m_effectivePatchesHasBeenSet = true; m_effectivePatches = std::forward<EffectivePatchesT>(value); }
    template<typename EffectivePatchesT = Aws::Vector<EffectivePatch>>
    DescribeEffectivePatchesForPatchBaselineResult& WithEffectivePatches(EffectivePatchesT&& value) { SetEffectivePatches(std::forward<EffectivePatchesT>(value)); return *this;}
    template<typename EffectivePatchesT = EffectivePatch>
    DescribeEffectivePatchesForPatchBaselineResult& AddEffectivePatches(EffectivePatchesT&& value) { m_effectivePatchesHasBeenSet = true; m_effectivePatches.emplace_back(std::forward<EffectivePatchesT>(value)); return *this; }
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
    DescribeEffectivePatchesForPatchBaselineResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEffectivePatchesForPatchBaselineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EffectivePatch> m_effectivePatches;
    bool m_effectivePatchesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

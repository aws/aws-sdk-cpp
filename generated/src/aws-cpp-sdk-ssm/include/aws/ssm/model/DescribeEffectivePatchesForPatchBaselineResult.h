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
    AWS_SSM_API DescribeEffectivePatchesForPatchBaselineResult();
    AWS_SSM_API DescribeEffectivePatchesForPatchBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeEffectivePatchesForPatchBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of patches and patch status.</p>
     */
    inline const Aws::Vector<EffectivePatch>& GetEffectivePatches() const{ return m_effectivePatches; }
    inline void SetEffectivePatches(const Aws::Vector<EffectivePatch>& value) { m_effectivePatches = value; }
    inline void SetEffectivePatches(Aws::Vector<EffectivePatch>&& value) { m_effectivePatches = std::move(value); }
    inline DescribeEffectivePatchesForPatchBaselineResult& WithEffectivePatches(const Aws::Vector<EffectivePatch>& value) { SetEffectivePatches(value); return *this;}
    inline DescribeEffectivePatchesForPatchBaselineResult& WithEffectivePatches(Aws::Vector<EffectivePatch>&& value) { SetEffectivePatches(std::move(value)); return *this;}
    inline DescribeEffectivePatchesForPatchBaselineResult& AddEffectivePatches(const EffectivePatch& value) { m_effectivePatches.push_back(value); return *this; }
    inline DescribeEffectivePatchesForPatchBaselineResult& AddEffectivePatches(EffectivePatch&& value) { m_effectivePatches.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeEffectivePatchesForPatchBaselineResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeEffectivePatchesForPatchBaselineResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeEffectivePatchesForPatchBaselineResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEffectivePatchesForPatchBaselineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEffectivePatchesForPatchBaselineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEffectivePatchesForPatchBaselineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EffectivePatch> m_effectivePatches;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

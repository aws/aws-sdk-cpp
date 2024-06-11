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
    AWS_SSM_API DescribePatchBaselinesResult();
    AWS_SSM_API DescribePatchBaselinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribePatchBaselinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>PatchBaselineIdentity</code> elements.</p>
     */
    inline const Aws::Vector<PatchBaselineIdentity>& GetBaselineIdentities() const{ return m_baselineIdentities; }
    inline void SetBaselineIdentities(const Aws::Vector<PatchBaselineIdentity>& value) { m_baselineIdentities = value; }
    inline void SetBaselineIdentities(Aws::Vector<PatchBaselineIdentity>&& value) { m_baselineIdentities = std::move(value); }
    inline DescribePatchBaselinesResult& WithBaselineIdentities(const Aws::Vector<PatchBaselineIdentity>& value) { SetBaselineIdentities(value); return *this;}
    inline DescribePatchBaselinesResult& WithBaselineIdentities(Aws::Vector<PatchBaselineIdentity>&& value) { SetBaselineIdentities(std::move(value)); return *this;}
    inline DescribePatchBaselinesResult& AddBaselineIdentities(const PatchBaselineIdentity& value) { m_baselineIdentities.push_back(value); return *this; }
    inline DescribePatchBaselinesResult& AddBaselineIdentities(PatchBaselineIdentity&& value) { m_baselineIdentities.push_back(std::move(value)); return *this; }
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
    inline DescribePatchBaselinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribePatchBaselinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribePatchBaselinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePatchBaselinesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePatchBaselinesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePatchBaselinesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PatchBaselineIdentity> m_baselineIdentities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

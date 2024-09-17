/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Patch.h>
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
  class DescribeAvailablePatchesResult
  {
  public:
    AWS_SSM_API DescribeAvailablePatchesResult();
    AWS_SSM_API DescribeAvailablePatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeAvailablePatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of patches. Each entry in the array is a patch structure.</p>
     */
    inline const Aws::Vector<Patch>& GetPatches() const{ return m_patches; }
    inline void SetPatches(const Aws::Vector<Patch>& value) { m_patches = value; }
    inline void SetPatches(Aws::Vector<Patch>&& value) { m_patches = std::move(value); }
    inline DescribeAvailablePatchesResult& WithPatches(const Aws::Vector<Patch>& value) { SetPatches(value); return *this;}
    inline DescribeAvailablePatchesResult& WithPatches(Aws::Vector<Patch>&& value) { SetPatches(std::move(value)); return *this;}
    inline DescribeAvailablePatchesResult& AddPatches(const Patch& value) { m_patches.push_back(value); return *this; }
    inline DescribeAvailablePatchesResult& AddPatches(Patch&& value) { m_patches.push_back(std::move(value)); return *this; }
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
    inline DescribeAvailablePatchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAvailablePatchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAvailablePatchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAvailablePatchesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAvailablePatchesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAvailablePatchesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Patch> m_patches;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

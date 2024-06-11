/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchGroupPatchBaselineMapping.h>
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
  class DescribePatchGroupsResult
  {
  public:
    AWS_SSM_API DescribePatchGroupsResult();
    AWS_SSM_API DescribePatchGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribePatchGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Each entry in the array contains:</p> <ul> <li> <p> <code>PatchGroup</code>:
     * string (between 1 and 256 characters. Regex:
     * <code>^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$)</code> </p> </li> <li> <p>
     * <code>PatchBaselineIdentity</code>: A <code>PatchBaselineIdentity</code>
     * element.</p> </li> </ul>
     */
    inline const Aws::Vector<PatchGroupPatchBaselineMapping>& GetMappings() const{ return m_mappings; }
    inline void SetMappings(const Aws::Vector<PatchGroupPatchBaselineMapping>& value) { m_mappings = value; }
    inline void SetMappings(Aws::Vector<PatchGroupPatchBaselineMapping>&& value) { m_mappings = std::move(value); }
    inline DescribePatchGroupsResult& WithMappings(const Aws::Vector<PatchGroupPatchBaselineMapping>& value) { SetMappings(value); return *this;}
    inline DescribePatchGroupsResult& WithMappings(Aws::Vector<PatchGroupPatchBaselineMapping>&& value) { SetMappings(std::move(value)); return *this;}
    inline DescribePatchGroupsResult& AddMappings(const PatchGroupPatchBaselineMapping& value) { m_mappings.push_back(value); return *this; }
    inline DescribePatchGroupsResult& AddMappings(PatchGroupPatchBaselineMapping&& value) { m_mappings.push_back(std::move(value)); return *this; }
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
    inline DescribePatchGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribePatchGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribePatchGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePatchGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePatchGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePatchGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PatchGroupPatchBaselineMapping> m_mappings;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

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
    AWS_SSM_API DescribePatchGroupsResult() = default;
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
    inline const Aws::Vector<PatchGroupPatchBaselineMapping>& GetMappings() const { return m_mappings; }
    template<typename MappingsT = Aws::Vector<PatchGroupPatchBaselineMapping>>
    void SetMappings(MappingsT&& value) { m_mappingsHasBeenSet = true; m_mappings = std::forward<MappingsT>(value); }
    template<typename MappingsT = Aws::Vector<PatchGroupPatchBaselineMapping>>
    DescribePatchGroupsResult& WithMappings(MappingsT&& value) { SetMappings(std::forward<MappingsT>(value)); return *this;}
    template<typename MappingsT = PatchGroupPatchBaselineMapping>
    DescribePatchGroupsResult& AddMappings(MappingsT&& value) { m_mappingsHasBeenSet = true; m_mappings.emplace_back(std::forward<MappingsT>(value)); return *this; }
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
    DescribePatchGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePatchGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PatchGroupPatchBaselineMapping> m_mappings;
    bool m_mappingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

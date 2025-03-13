/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchComplianceData.h>
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
  class DescribeInstancePatchesResult
  {
  public:
    AWS_SSM_API DescribeInstancePatchesResult() = default;
    AWS_SSM_API DescribeInstancePatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInstancePatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Title
     * (string)</p> </li> <li> <p>KBId (string)</p> </li> <li> <p>Classification
     * (string)</p> </li> <li> <p>Severity (string)</p> </li> <li> <p>State (string,
     * such as "INSTALLED" or "FAILED")</p> </li> <li> <p>InstalledTime (DateTime)</p>
     * </li> <li> <p>InstalledBy (string)</p> </li> </ul>
     */
    inline const Aws::Vector<PatchComplianceData>& GetPatches() const { return m_patches; }
    template<typename PatchesT = Aws::Vector<PatchComplianceData>>
    void SetPatches(PatchesT&& value) { m_patchesHasBeenSet = true; m_patches = std::forward<PatchesT>(value); }
    template<typename PatchesT = Aws::Vector<PatchComplianceData>>
    DescribeInstancePatchesResult& WithPatches(PatchesT&& value) { SetPatches(std::forward<PatchesT>(value)); return *this;}
    template<typename PatchesT = PatchComplianceData>
    DescribeInstancePatchesResult& AddPatches(PatchesT&& value) { m_patchesHasBeenSet = true; m_patches.emplace_back(std::forward<PatchesT>(value)); return *this; }
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
    DescribeInstancePatchesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInstancePatchesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PatchComplianceData> m_patches;
    bool m_patchesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

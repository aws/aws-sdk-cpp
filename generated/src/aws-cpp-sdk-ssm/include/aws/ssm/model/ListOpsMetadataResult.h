/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OpsMetadata.h>
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
  class ListOpsMetadataResult
  {
  public:
    AWS_SSM_API ListOpsMetadataResult() = default;
    AWS_SSM_API ListOpsMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListOpsMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of OpsMetadata objects.</p>
     */
    inline const Aws::Vector<OpsMetadata>& GetOpsMetadataList() const { return m_opsMetadataList; }
    template<typename OpsMetadataListT = Aws::Vector<OpsMetadata>>
    void SetOpsMetadataList(OpsMetadataListT&& value) { m_opsMetadataListHasBeenSet = true; m_opsMetadataList = std::forward<OpsMetadataListT>(value); }
    template<typename OpsMetadataListT = Aws::Vector<OpsMetadata>>
    ListOpsMetadataResult& WithOpsMetadataList(OpsMetadataListT&& value) { SetOpsMetadataList(std::forward<OpsMetadataListT>(value)); return *this;}
    template<typename OpsMetadataListT = OpsMetadata>
    ListOpsMetadataResult& AddOpsMetadataList(OpsMetadataListT&& value) { m_opsMetadataListHasBeenSet = true; m_opsMetadataList.emplace_back(std::forward<OpsMetadataListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOpsMetadataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOpsMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OpsMetadata> m_opsMetadataList;
    bool m_opsMetadataListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

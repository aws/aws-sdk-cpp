/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/DeleteCollectionDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class DeleteCollectionResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API DeleteCollectionResult() = default;
    AWS_OPENSEARCHSERVERLESS_API DeleteCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API DeleteCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of the deleted collection.</p>
     */
    inline const DeleteCollectionDetail& GetDeleteCollectionDetail() const { return m_deleteCollectionDetail; }
    template<typename DeleteCollectionDetailT = DeleteCollectionDetail>
    void SetDeleteCollectionDetail(DeleteCollectionDetailT&& value) { m_deleteCollectionDetailHasBeenSet = true; m_deleteCollectionDetail = std::forward<DeleteCollectionDetailT>(value); }
    template<typename DeleteCollectionDetailT = DeleteCollectionDetail>
    DeleteCollectionResult& WithDeleteCollectionDetail(DeleteCollectionDetailT&& value) { SetDeleteCollectionDetail(std::forward<DeleteCollectionDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteCollectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeleteCollectionDetail m_deleteCollectionDetail;
    bool m_deleteCollectionDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws

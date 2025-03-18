/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/UpdateCollectionDetail.h>
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
  class UpdateCollectionResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateCollectionResult() = default;
    AWS_OPENSEARCHSERVERLESS_API UpdateCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API UpdateCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the updated collection.</p>
     */
    inline const UpdateCollectionDetail& GetUpdateCollectionDetail() const { return m_updateCollectionDetail; }
    template<typename UpdateCollectionDetailT = UpdateCollectionDetail>
    void SetUpdateCollectionDetail(UpdateCollectionDetailT&& value) { m_updateCollectionDetailHasBeenSet = true; m_updateCollectionDetail = std::forward<UpdateCollectionDetailT>(value); }
    template<typename UpdateCollectionDetailT = UpdateCollectionDetail>
    UpdateCollectionResult& WithUpdateCollectionDetail(UpdateCollectionDetailT&& value) { SetUpdateCollectionDetail(std::forward<UpdateCollectionDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateCollectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UpdateCollectionDetail m_updateCollectionDetail;
    bool m_updateCollectionDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws

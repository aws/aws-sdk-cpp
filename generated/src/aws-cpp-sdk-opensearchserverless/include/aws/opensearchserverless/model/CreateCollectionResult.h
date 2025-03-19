/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CreateCollectionDetail.h>
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
  class CreateCollectionResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateCollectionResult() = default;
    AWS_OPENSEARCHSERVERLESS_API CreateCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API CreateCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the collection.</p>
     */
    inline const CreateCollectionDetail& GetCreateCollectionDetail() const { return m_createCollectionDetail; }
    template<typename CreateCollectionDetailT = CreateCollectionDetail>
    void SetCreateCollectionDetail(CreateCollectionDetailT&& value) { m_createCollectionDetailHasBeenSet = true; m_createCollectionDetail = std::forward<CreateCollectionDetailT>(value); }
    template<typename CreateCollectionDetailT = CreateCollectionDetail>
    CreateCollectionResult& WithCreateCollectionDetail(CreateCollectionDetailT&& value) { SetCreateCollectionDetail(std::forward<CreateCollectionDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCollectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CreateCollectionDetail m_createCollectionDetail;
    bool m_createCollectionDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws

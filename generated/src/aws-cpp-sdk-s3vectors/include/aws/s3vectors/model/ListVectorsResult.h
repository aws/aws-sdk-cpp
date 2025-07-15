/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3vectors/model/ListOutputVector.h>
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
namespace S3Vectors
{
namespace Model
{
  class ListVectorsResult
  {
  public:
    AWS_S3VECTORS_API ListVectorsResult() = default;
    AWS_S3VECTORS_API ListVectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3VECTORS_API ListVectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Pagination token to be used in the subsequent request. The field is empty if
     * no further pagination is required.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Vectors in the current segment.</p>
     */
    inline const Aws::Vector<ListOutputVector>& GetVectors() const { return m_vectors; }
    template<typename VectorsT = Aws::Vector<ListOutputVector>>
    void SetVectors(VectorsT&& value) { m_vectorsHasBeenSet = true; m_vectors = std::forward<VectorsT>(value); }
    template<typename VectorsT = Aws::Vector<ListOutputVector>>
    ListVectorsResult& WithVectors(VectorsT&& value) { SetVectors(std::forward<VectorsT>(value)); return *this;}
    template<typename VectorsT = ListOutputVector>
    ListVectorsResult& AddVectors(VectorsT&& value) { m_vectorsHasBeenSet = true; m_vectors.emplace_back(std::forward<VectorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListOutputVector> m_vectors;
    bool m_vectorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/model/QueryOutputVector.h>
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
  class QueryVectorsResult
  {
  public:
    AWS_S3VECTORS_API QueryVectorsResult() = default;
    AWS_S3VECTORS_API QueryVectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3VECTORS_API QueryVectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The vectors in the approximate nearest neighbor search.</p>
     */
    inline const Aws::Vector<QueryOutputVector>& GetVectors() const { return m_vectors; }
    template<typename VectorsT = Aws::Vector<QueryOutputVector>>
    void SetVectors(VectorsT&& value) { m_vectorsHasBeenSet = true; m_vectors = std::forward<VectorsT>(value); }
    template<typename VectorsT = Aws::Vector<QueryOutputVector>>
    QueryVectorsResult& WithVectors(VectorsT&& value) { SetVectors(std::forward<VectorsT>(value)); return *this;}
    template<typename VectorsT = QueryOutputVector>
    QueryVectorsResult& AddVectors(VectorsT&& value) { m_vectorsHasBeenSet = true; m_vectors.emplace_back(std::forward<VectorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    QueryVectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QueryOutputVector> m_vectors;
    bool m_vectorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws

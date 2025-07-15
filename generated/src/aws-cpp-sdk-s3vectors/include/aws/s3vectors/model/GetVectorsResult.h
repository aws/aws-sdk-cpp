/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/model/GetOutputVector.h>
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
  class GetVectorsResult
  {
  public:
    AWS_S3VECTORS_API GetVectorsResult() = default;
    AWS_S3VECTORS_API GetVectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3VECTORS_API GetVectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The attributes of the vectors.</p>
     */
    inline const Aws::Vector<GetOutputVector>& GetVectors() const { return m_vectors; }
    template<typename VectorsT = Aws::Vector<GetOutputVector>>
    void SetVectors(VectorsT&& value) { m_vectorsHasBeenSet = true; m_vectors = std::forward<VectorsT>(value); }
    template<typename VectorsT = Aws::Vector<GetOutputVector>>
    GetVectorsResult& WithVectors(VectorsT&& value) { SetVectors(std::forward<VectorsT>(value)); return *this;}
    template<typename VectorsT = GetOutputVector>
    GetVectorsResult& AddVectors(VectorsT&& value) { m_vectorsHasBeenSet = true; m_vectors.emplace_back(std::forward<VectorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GetOutputVector> m_vectors;
    bool m_vectorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws

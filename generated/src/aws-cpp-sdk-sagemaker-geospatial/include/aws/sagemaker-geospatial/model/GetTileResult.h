/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace SageMakerGeospatial
{
namespace Model
{
  class GetTileResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API GetTileResult() = default;
    AWS_SAGEMAKERGEOSPATIAL_API GetTileResult(GetTileResult&&) = default;
    AWS_SAGEMAKERGEOSPATIAL_API GetTileResult& operator=(GetTileResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetTileResult(const GetTileResult&) = delete;
    GetTileResult& operator=(const GetTileResult&) = delete;


    AWS_SAGEMAKERGEOSPATIAL_API GetTileResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_SAGEMAKERGEOSPATIAL_API GetTileResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The output binary file.</p>
     */
    inline Aws::IOStream& GetBinaryFile() const { return m_binaryFile.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_binaryFile = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_binaryFile{};
    bool m_binaryFileHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws

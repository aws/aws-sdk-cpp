/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
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
    AWS_SAGEMAKERGEOSPATIAL_API GetTileResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_SAGEMAKERGEOSPATIAL_API GetTileResult(GetTileResult&&);
    AWS_SAGEMAKERGEOSPATIAL_API GetTileResult& operator=(GetTileResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetTileResult(const GetTileResult&) = delete;
    GetTileResult& operator=(const GetTileResult&) = delete;


    AWS_SAGEMAKERGEOSPATIAL_API GetTileResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_SAGEMAKERGEOSPATIAL_API GetTileResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The output binary file.</p>
     */
    inline Aws::IOStream& GetBinaryFile() { return m_binaryFile.GetUnderlyingStream(); }

    /**
     * <p>The output binary file.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_binaryFile = Aws::Utils::Stream::ResponseStream(body); }

  private:

  Aws::Utils::Stream::ResponseStream m_binaryFile;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws

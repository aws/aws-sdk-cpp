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
    inline Aws::IOStream& GetBinaryFile() const { return m_binaryFile.GetUnderlyingStream(); }

    /**
     * <p>The output binary file.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_binaryFile = Aws::Utils::Stream::ResponseStream(body); }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Stream::ResponseStream m_binaryFile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws

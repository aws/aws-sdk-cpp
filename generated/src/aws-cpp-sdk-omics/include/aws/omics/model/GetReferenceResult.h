/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Omics
{
namespace Model
{
  class GetReferenceResult
  {
  public:
    AWS_OMICS_API GetReferenceResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_OMICS_API GetReferenceResult(GetReferenceResult&&);
    AWS_OMICS_API GetReferenceResult& operator=(GetReferenceResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetReferenceResult(const GetReferenceResult&) = delete;
    GetReferenceResult& operator=(const GetReferenceResult&) = delete;


    AWS_OMICS_API GetReferenceResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_OMICS_API GetReferenceResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The reference file payload.</p>
     */
    inline Aws::IOStream& GetPayload() { return m_payload.GetUnderlyingStream(); }

    /**
     * <p>The reference file payload.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

  private:

  Aws::Utils::Stream::ResponseStream m_payload;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

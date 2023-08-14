/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ShareDetails.h>
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
namespace Omics
{
namespace Model
{
  class GetShareResult
  {
  public:
    AWS_OMICS_API GetShareResult();
    AWS_OMICS_API GetShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An analytic store share details object. contains status, resourceArn,
     * ownerId, etc. </p>
     */
    inline const ShareDetails& GetShare() const{ return m_share; }

    /**
     * <p> An analytic store share details object. contains status, resourceArn,
     * ownerId, etc. </p>
     */
    inline void SetShare(const ShareDetails& value) { m_share = value; }

    /**
     * <p> An analytic store share details object. contains status, resourceArn,
     * ownerId, etc. </p>
     */
    inline void SetShare(ShareDetails&& value) { m_share = std::move(value); }

    /**
     * <p> An analytic store share details object. contains status, resourceArn,
     * ownerId, etc. </p>
     */
    inline GetShareResult& WithShare(const ShareDetails& value) { SetShare(value); return *this;}

    /**
     * <p> An analytic store share details object. contains status, resourceArn,
     * ownerId, etc. </p>
     */
    inline GetShareResult& WithShare(ShareDetails&& value) { SetShare(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetShareResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetShareResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetShareResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ShareDetails m_share;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

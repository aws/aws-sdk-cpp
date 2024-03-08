/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
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
namespace repostspace
{
namespace Model
{
  class CreateSpaceResult
  {
  public:
    AWS_REPOSTSPACE_API CreateSpaceResult();
    AWS_REPOSTSPACE_API CreateSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API CreateSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const{ return m_spaceId; }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(const Aws::String& value) { m_spaceId = value; }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(Aws::String&& value) { m_spaceId = std::move(value); }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(const char* value) { m_spaceId.assign(value); }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline CreateSpaceResult& WithSpaceId(const Aws::String& value) { SetSpaceId(value); return *this;}

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline CreateSpaceResult& WithSpaceId(Aws::String&& value) { SetSpaceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline CreateSpaceResult& WithSpaceId(const char* value) { SetSpaceId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSpaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSpaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSpaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_spaceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws

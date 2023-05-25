/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
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
namespace MediaStore
{
namespace Model
{
  class GetLifecyclePolicyResult
  {
  public:
    AWS_MEDIASTORE_API GetLifecyclePolicyResult();
    AWS_MEDIASTORE_API GetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API GetLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline const Aws::String& GetLifecyclePolicy() const{ return m_lifecyclePolicy; }

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline void SetLifecyclePolicy(const Aws::String& value) { m_lifecyclePolicy = value; }

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline void SetLifecyclePolicy(Aws::String&& value) { m_lifecyclePolicy = std::move(value); }

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline void SetLifecyclePolicy(const char* value) { m_lifecyclePolicy.assign(value); }

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline GetLifecyclePolicyResult& WithLifecyclePolicy(const Aws::String& value) { SetLifecyclePolicy(value); return *this;}

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline GetLifecyclePolicyResult& WithLifecyclePolicy(Aws::String&& value) { SetLifecyclePolicy(std::move(value)); return *this;}

    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline GetLifecyclePolicyResult& WithLifecyclePolicy(const char* value) { SetLifecyclePolicy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLifecyclePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLifecyclePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLifecyclePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_lifecyclePolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws

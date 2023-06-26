/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class PutProjectPolicyResult
  {
  public:
    AWS_REKOGNITION_API PutProjectPolicyResult();
    AWS_REKOGNITION_API PutProjectPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API PutProjectPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the project policy.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const{ return m_policyRevisionId; }

    /**
     * <p>The ID of the project policy.</p>
     */
    inline void SetPolicyRevisionId(const Aws::String& value) { m_policyRevisionId = value; }

    /**
     * <p>The ID of the project policy.</p>
     */
    inline void SetPolicyRevisionId(Aws::String&& value) { m_policyRevisionId = std::move(value); }

    /**
     * <p>The ID of the project policy.</p>
     */
    inline void SetPolicyRevisionId(const char* value) { m_policyRevisionId.assign(value); }

    /**
     * <p>The ID of the project policy.</p>
     */
    inline PutProjectPolicyResult& WithPolicyRevisionId(const Aws::String& value) { SetPolicyRevisionId(value); return *this;}

    /**
     * <p>The ID of the project policy.</p>
     */
    inline PutProjectPolicyResult& WithPolicyRevisionId(Aws::String&& value) { SetPolicyRevisionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project policy.</p>
     */
    inline PutProjectPolicyResult& WithPolicyRevisionId(const char* value) { SetPolicyRevisionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutProjectPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutProjectPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutProjectPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_policyRevisionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

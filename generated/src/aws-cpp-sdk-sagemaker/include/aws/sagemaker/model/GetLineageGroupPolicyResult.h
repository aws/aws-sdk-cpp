/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class GetLineageGroupPolicyResult
  {
  public:
    AWS_SAGEMAKER_API GetLineageGroupPolicyResult();
    AWS_SAGEMAKER_API GetLineageGroupPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API GetLineageGroupPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline const Aws::String& GetLineageGroupArn() const{ return m_lineageGroupArn; }
    inline void SetLineageGroupArn(const Aws::String& value) { m_lineageGroupArn = value; }
    inline void SetLineageGroupArn(Aws::String&& value) { m_lineageGroupArn = std::move(value); }
    inline void SetLineageGroupArn(const char* value) { m_lineageGroupArn.assign(value); }
    inline GetLineageGroupPolicyResult& WithLineageGroupArn(const Aws::String& value) { SetLineageGroupArn(value); return *this;}
    inline GetLineageGroupPolicyResult& WithLineageGroupArn(Aws::String&& value) { SetLineageGroupArn(std::move(value)); return *this;}
    inline GetLineageGroupPolicyResult& WithLineageGroupArn(const char* value) { SetLineageGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource policy that gives access to the lineage group in another
     * account.</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicy = value; }
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicy = std::move(value); }
    inline void SetResourcePolicy(const char* value) { m_resourcePolicy.assign(value); }
    inline GetLineageGroupPolicyResult& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}
    inline GetLineageGroupPolicyResult& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}
    inline GetLineageGroupPolicyResult& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLineageGroupPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLineageGroupPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLineageGroupPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_lineageGroupArn;

    Aws::String m_resourcePolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

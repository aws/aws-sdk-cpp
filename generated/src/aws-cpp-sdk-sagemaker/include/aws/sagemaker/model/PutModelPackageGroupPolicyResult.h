﻿/**
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
  class PutModelPackageGroupPolicyResult
  {
  public:
    AWS_SAGEMAKER_API PutModelPackageGroupPolicyResult();
    AWS_SAGEMAKER_API PutModelPackageGroupPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API PutModelPackageGroupPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model package group.</p>
     */
    inline const Aws::String& GetModelPackageGroupArn() const{ return m_modelPackageGroupArn; }
    inline void SetModelPackageGroupArn(const Aws::String& value) { m_modelPackageGroupArn = value; }
    inline void SetModelPackageGroupArn(Aws::String&& value) { m_modelPackageGroupArn = std::move(value); }
    inline void SetModelPackageGroupArn(const char* value) { m_modelPackageGroupArn.assign(value); }
    inline PutModelPackageGroupPolicyResult& WithModelPackageGroupArn(const Aws::String& value) { SetModelPackageGroupArn(value); return *this;}
    inline PutModelPackageGroupPolicyResult& WithModelPackageGroupArn(Aws::String&& value) { SetModelPackageGroupArn(std::move(value)); return *this;}
    inline PutModelPackageGroupPolicyResult& WithModelPackageGroupArn(const char* value) { SetModelPackageGroupArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutModelPackageGroupPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutModelPackageGroupPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutModelPackageGroupPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageGroupArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

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
  class DeleteContextResult
  {
  public:
    AWS_SAGEMAKER_API DeleteContextResult();
    AWS_SAGEMAKER_API DeleteContextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DeleteContextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the context.</p>
     */
    inline const Aws::String& GetContextArn() const{ return m_contextArn; }
    inline void SetContextArn(const Aws::String& value) { m_contextArn = value; }
    inline void SetContextArn(Aws::String&& value) { m_contextArn = std::move(value); }
    inline void SetContextArn(const char* value) { m_contextArn.assign(value); }
    inline DeleteContextResult& WithContextArn(const Aws::String& value) { SetContextArn(value); return *this;}
    inline DeleteContextResult& WithContextArn(Aws::String&& value) { SetContextArn(std::move(value)); return *this;}
    inline DeleteContextResult& WithContextArn(const char* value) { SetContextArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteContextResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteContextResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteContextResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contextArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

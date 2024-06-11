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
  class DeleteActionResult
  {
  public:
    AWS_SAGEMAKER_API DeleteActionResult();
    AWS_SAGEMAKER_API DeleteActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DeleteActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline const Aws::String& GetActionArn() const{ return m_actionArn; }
    inline void SetActionArn(const Aws::String& value) { m_actionArn = value; }
    inline void SetActionArn(Aws::String&& value) { m_actionArn = std::move(value); }
    inline void SetActionArn(const char* value) { m_actionArn.assign(value); }
    inline DeleteActionResult& WithActionArn(const Aws::String& value) { SetActionArn(value); return *this;}
    inline DeleteActionResult& WithActionArn(Aws::String&& value) { SetActionArn(std::move(value)); return *this;}
    inline DeleteActionResult& WithActionArn(const char* value) { SetActionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_actionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

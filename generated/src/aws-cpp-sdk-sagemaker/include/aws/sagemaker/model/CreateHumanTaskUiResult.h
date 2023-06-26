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
  class CreateHumanTaskUiResult
  {
  public:
    AWS_SAGEMAKER_API CreateHumanTaskUiResult();
    AWS_SAGEMAKER_API CreateHumanTaskUiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateHumanTaskUiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const{ return m_humanTaskUiArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline void SetHumanTaskUiArn(const Aws::String& value) { m_humanTaskUiArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline void SetHumanTaskUiArn(Aws::String&& value) { m_humanTaskUiArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline void SetHumanTaskUiArn(const char* value) { m_humanTaskUiArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline CreateHumanTaskUiResult& WithHumanTaskUiArn(const Aws::String& value) { SetHumanTaskUiArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline CreateHumanTaskUiResult& WithHumanTaskUiArn(Aws::String&& value) { SetHumanTaskUiArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline CreateHumanTaskUiResult& WithHumanTaskUiArn(const char* value) { SetHumanTaskUiArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateHumanTaskUiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateHumanTaskUiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateHumanTaskUiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_humanTaskUiArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

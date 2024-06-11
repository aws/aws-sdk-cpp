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
  class UpdateProjectResult
  {
  public:
    AWS_SAGEMAKER_API UpdateProjectResult();
    AWS_SAGEMAKER_API UpdateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }
    inline UpdateProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline UpdateProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline UpdateProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

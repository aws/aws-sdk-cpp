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
  class CreateProjectResult
  {
  public:
    AWS_SAGEMAKER_API CreateProjectResult();
    AWS_SAGEMAKER_API CreateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }
    inline CreateProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline CreateProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline CreateProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the new project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }
    inline CreateProjectResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline CreateProjectResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline CreateProjectResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;

    Aws::String m_projectId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

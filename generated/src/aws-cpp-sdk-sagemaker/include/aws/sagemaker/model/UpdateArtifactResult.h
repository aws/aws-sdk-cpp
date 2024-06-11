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
  class UpdateArtifactResult
  {
  public:
    AWS_SAGEMAKER_API UpdateArtifactResult();
    AWS_SAGEMAKER_API UpdateArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline const Aws::String& GetArtifactArn() const{ return m_artifactArn; }
    inline void SetArtifactArn(const Aws::String& value) { m_artifactArn = value; }
    inline void SetArtifactArn(Aws::String&& value) { m_artifactArn = std::move(value); }
    inline void SetArtifactArn(const char* value) { m_artifactArn.assign(value); }
    inline UpdateArtifactResult& WithArtifactArn(const Aws::String& value) { SetArtifactArn(value); return *this;}
    inline UpdateArtifactResult& WithArtifactArn(Aws::String&& value) { SetArtifactArn(std::move(value)); return *this;}
    inline UpdateArtifactResult& WithArtifactArn(const char* value) { SetArtifactArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateArtifactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateArtifactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateArtifactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_artifactArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

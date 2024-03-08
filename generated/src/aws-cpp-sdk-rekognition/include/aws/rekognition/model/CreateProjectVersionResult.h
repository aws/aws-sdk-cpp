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
  class CreateProjectVersionResult
  {
  public:
    AWS_REKOGNITION_API CreateProjectVersionResult();
    AWS_REKOGNITION_API CreateProjectVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CreateProjectVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the model or the project version that was created. Use
     * <code>DescribeProjectVersion</code> to get the current status of the training
     * operation.</p>
     */
    inline const Aws::String& GetProjectVersionArn() const{ return m_projectVersionArn; }

    /**
     * <p>The ARN of the model or the project version that was created. Use
     * <code>DescribeProjectVersion</code> to get the current status of the training
     * operation.</p>
     */
    inline void SetProjectVersionArn(const Aws::String& value) { m_projectVersionArn = value; }

    /**
     * <p>The ARN of the model or the project version that was created. Use
     * <code>DescribeProjectVersion</code> to get the current status of the training
     * operation.</p>
     */
    inline void SetProjectVersionArn(Aws::String&& value) { m_projectVersionArn = std::move(value); }

    /**
     * <p>The ARN of the model or the project version that was created. Use
     * <code>DescribeProjectVersion</code> to get the current status of the training
     * operation.</p>
     */
    inline void SetProjectVersionArn(const char* value) { m_projectVersionArn.assign(value); }

    /**
     * <p>The ARN of the model or the project version that was created. Use
     * <code>DescribeProjectVersion</code> to get the current status of the training
     * operation.</p>
     */
    inline CreateProjectVersionResult& WithProjectVersionArn(const Aws::String& value) { SetProjectVersionArn(value); return *this;}

    /**
     * <p>The ARN of the model or the project version that was created. Use
     * <code>DescribeProjectVersion</code> to get the current status of the training
     * operation.</p>
     */
    inline CreateProjectVersionResult& WithProjectVersionArn(Aws::String&& value) { SetProjectVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model or the project version that was created. Use
     * <code>DescribeProjectVersion</code> to get the current status of the training
     * operation.</p>
     */
    inline CreateProjectVersionResult& WithProjectVersionArn(const char* value) { SetProjectVersionArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProjectVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProjectVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProjectVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_projectVersionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

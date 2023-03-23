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
  class CreateAutoMLJobV2Result
  {
  public:
    AWS_SAGEMAKER_API CreateAutoMLJobV2Result();
    AWS_SAGEMAKER_API CreateAutoMLJobV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateAutoMLJobV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ARN assigned to the AutoMLJob when it is created.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const{ return m_autoMLJobArn; }

    /**
     * <p>The unique ARN assigned to the AutoMLJob when it is created.</p>
     */
    inline void SetAutoMLJobArn(const Aws::String& value) { m_autoMLJobArn = value; }

    /**
     * <p>The unique ARN assigned to the AutoMLJob when it is created.</p>
     */
    inline void SetAutoMLJobArn(Aws::String&& value) { m_autoMLJobArn = std::move(value); }

    /**
     * <p>The unique ARN assigned to the AutoMLJob when it is created.</p>
     */
    inline void SetAutoMLJobArn(const char* value) { m_autoMLJobArn.assign(value); }

    /**
     * <p>The unique ARN assigned to the AutoMLJob when it is created.</p>
     */
    inline CreateAutoMLJobV2Result& WithAutoMLJobArn(const Aws::String& value) { SetAutoMLJobArn(value); return *this;}

    /**
     * <p>The unique ARN assigned to the AutoMLJob when it is created.</p>
     */
    inline CreateAutoMLJobV2Result& WithAutoMLJobArn(Aws::String&& value) { SetAutoMLJobArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN assigned to the AutoMLJob when it is created.</p>
     */
    inline CreateAutoMLJobV2Result& WithAutoMLJobArn(const char* value) { SetAutoMLJobArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAutoMLJobV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAutoMLJobV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAutoMLJobV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_autoMLJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

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
  class CreateAutoMLJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateAutoMLJobResult();
    AWS_SAGEMAKER_API CreateAutoMLJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateAutoMLJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ARN assigned to the AutoML job when it is created.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const{ return m_autoMLJobArn; }

    /**
     * <p>The unique ARN assigned to the AutoML job when it is created.</p>
     */
    inline void SetAutoMLJobArn(const Aws::String& value) { m_autoMLJobArn = value; }

    /**
     * <p>The unique ARN assigned to the AutoML job when it is created.</p>
     */
    inline void SetAutoMLJobArn(Aws::String&& value) { m_autoMLJobArn = std::move(value); }

    /**
     * <p>The unique ARN assigned to the AutoML job when it is created.</p>
     */
    inline void SetAutoMLJobArn(const char* value) { m_autoMLJobArn.assign(value); }

    /**
     * <p>The unique ARN assigned to the AutoML job when it is created.</p>
     */
    inline CreateAutoMLJobResult& WithAutoMLJobArn(const Aws::String& value) { SetAutoMLJobArn(value); return *this;}

    /**
     * <p>The unique ARN assigned to the AutoML job when it is created.</p>
     */
    inline CreateAutoMLJobResult& WithAutoMLJobArn(Aws::String&& value) { SetAutoMLJobArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN assigned to the AutoML job when it is created.</p>
     */
    inline CreateAutoMLJobResult& WithAutoMLJobArn(const char* value) { SetAutoMLJobArn(value); return *this;}

  private:

    Aws::String m_autoMLJobArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

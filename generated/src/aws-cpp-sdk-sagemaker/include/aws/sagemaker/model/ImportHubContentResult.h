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
  class ImportHubContentResult
  {
  public:
    AWS_SAGEMAKER_API ImportHubContentResult();
    AWS_SAGEMAKER_API ImportHubContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ImportHubContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the hub that the content was imported into.</p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }

    /**
     * <p>The ARN of the hub that the content was imported into.</p>
     */
    inline void SetHubArn(const Aws::String& value) { m_hubArn = value; }

    /**
     * <p>The ARN of the hub that the content was imported into.</p>
     */
    inline void SetHubArn(Aws::String&& value) { m_hubArn = std::move(value); }

    /**
     * <p>The ARN of the hub that the content was imported into.</p>
     */
    inline void SetHubArn(const char* value) { m_hubArn.assign(value); }

    /**
     * <p>The ARN of the hub that the content was imported into.</p>
     */
    inline ImportHubContentResult& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}

    /**
     * <p>The ARN of the hub that the content was imported into.</p>
     */
    inline ImportHubContentResult& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the hub that the content was imported into.</p>
     */
    inline ImportHubContentResult& WithHubArn(const char* value) { SetHubArn(value); return *this;}


    /**
     * <p>The ARN of the hub content that was imported.</p>
     */
    inline const Aws::String& GetHubContentArn() const{ return m_hubContentArn; }

    /**
     * <p>The ARN of the hub content that was imported.</p>
     */
    inline void SetHubContentArn(const Aws::String& value) { m_hubContentArn = value; }

    /**
     * <p>The ARN of the hub content that was imported.</p>
     */
    inline void SetHubContentArn(Aws::String&& value) { m_hubContentArn = std::move(value); }

    /**
     * <p>The ARN of the hub content that was imported.</p>
     */
    inline void SetHubContentArn(const char* value) { m_hubContentArn.assign(value); }

    /**
     * <p>The ARN of the hub content that was imported.</p>
     */
    inline ImportHubContentResult& WithHubContentArn(const Aws::String& value) { SetHubContentArn(value); return *this;}

    /**
     * <p>The ARN of the hub content that was imported.</p>
     */
    inline ImportHubContentResult& WithHubContentArn(Aws::String&& value) { SetHubContentArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the hub content that was imported.</p>
     */
    inline ImportHubContentResult& WithHubContentArn(const char* value) { SetHubContentArn(value); return *this;}

  private:

    Aws::String m_hubArn;

    Aws::String m_hubContentArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

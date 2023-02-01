/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{
  class CreateInsightResult
  {
  public:
    AWS_SECURITYHUB_API CreateInsightResult();
    AWS_SECURITYHUB_API CreateInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API CreateInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the insight created.</p>
     */
    inline const Aws::String& GetInsightArn() const{ return m_insightArn; }

    /**
     * <p>The ARN of the insight created.</p>
     */
    inline void SetInsightArn(const Aws::String& value) { m_insightArn = value; }

    /**
     * <p>The ARN of the insight created.</p>
     */
    inline void SetInsightArn(Aws::String&& value) { m_insightArn = std::move(value); }

    /**
     * <p>The ARN of the insight created.</p>
     */
    inline void SetInsightArn(const char* value) { m_insightArn.assign(value); }

    /**
     * <p>The ARN of the insight created.</p>
     */
    inline CreateInsightResult& WithInsightArn(const Aws::String& value) { SetInsightArn(value); return *this;}

    /**
     * <p>The ARN of the insight created.</p>
     */
    inline CreateInsightResult& WithInsightArn(Aws::String&& value) { SetInsightArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the insight created.</p>
     */
    inline CreateInsightResult& WithInsightArn(const char* value) { SetInsightArn(value); return *this;}

  private:

    Aws::String m_insightArn;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

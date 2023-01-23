/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class CreateBatchInferenceJobResult
  {
  public:
    AWS_PERSONALIZE_API CreateBatchInferenceJobResult();
    AWS_PERSONALIZE_API CreateBatchInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateBatchInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the batch inference job.</p>
     */
    inline const Aws::String& GetBatchInferenceJobArn() const{ return m_batchInferenceJobArn; }

    /**
     * <p>The ARN of the batch inference job.</p>
     */
    inline void SetBatchInferenceJobArn(const Aws::String& value) { m_batchInferenceJobArn = value; }

    /**
     * <p>The ARN of the batch inference job.</p>
     */
    inline void SetBatchInferenceJobArn(Aws::String&& value) { m_batchInferenceJobArn = std::move(value); }

    /**
     * <p>The ARN of the batch inference job.</p>
     */
    inline void SetBatchInferenceJobArn(const char* value) { m_batchInferenceJobArn.assign(value); }

    /**
     * <p>The ARN of the batch inference job.</p>
     */
    inline CreateBatchInferenceJobResult& WithBatchInferenceJobArn(const Aws::String& value) { SetBatchInferenceJobArn(value); return *this;}

    /**
     * <p>The ARN of the batch inference job.</p>
     */
    inline CreateBatchInferenceJobResult& WithBatchInferenceJobArn(Aws::String&& value) { SetBatchInferenceJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the batch inference job.</p>
     */
    inline CreateBatchInferenceJobResult& WithBatchInferenceJobArn(const char* value) { SetBatchInferenceJobArn(value); return *this;}

  private:

    Aws::String m_batchInferenceJobArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws

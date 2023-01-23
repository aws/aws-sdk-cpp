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
  class DeleteTrialResult
  {
  public:
    AWS_SAGEMAKER_API DeleteTrialResult();
    AWS_SAGEMAKER_API DeleteTrialResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DeleteTrialResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the trial that is being deleted.</p>
     */
    inline const Aws::String& GetTrialArn() const{ return m_trialArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial that is being deleted.</p>
     */
    inline void SetTrialArn(const Aws::String& value) { m_trialArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial that is being deleted.</p>
     */
    inline void SetTrialArn(Aws::String&& value) { m_trialArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial that is being deleted.</p>
     */
    inline void SetTrialArn(const char* value) { m_trialArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial that is being deleted.</p>
     */
    inline DeleteTrialResult& WithTrialArn(const Aws::String& value) { SetTrialArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trial that is being deleted.</p>
     */
    inline DeleteTrialResult& WithTrialArn(Aws::String&& value) { SetTrialArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trial that is being deleted.</p>
     */
    inline DeleteTrialResult& WithTrialArn(const char* value) { SetTrialArn(value); return *this;}

  private:

    Aws::String m_trialArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

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
  class DeleteExperimentResult
  {
  public:
    AWS_SAGEMAKER_API DeleteExperimentResult();
    AWS_SAGEMAKER_API DeleteExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DeleteExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the experiment that is being deleted.</p>
     */
    inline const Aws::String& GetExperimentArn() const{ return m_experimentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment that is being deleted.</p>
     */
    inline void SetExperimentArn(const Aws::String& value) { m_experimentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment that is being deleted.</p>
     */
    inline void SetExperimentArn(Aws::String&& value) { m_experimentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment that is being deleted.</p>
     */
    inline void SetExperimentArn(const char* value) { m_experimentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment that is being deleted.</p>
     */
    inline DeleteExperimentResult& WithExperimentArn(const Aws::String& value) { SetExperimentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment that is being deleted.</p>
     */
    inline DeleteExperimentResult& WithExperimentArn(Aws::String&& value) { SetExperimentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment that is being deleted.</p>
     */
    inline DeleteExperimentResult& WithExperimentArn(const char* value) { SetExperimentArn(value); return *this;}

  private:

    Aws::String m_experimentArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

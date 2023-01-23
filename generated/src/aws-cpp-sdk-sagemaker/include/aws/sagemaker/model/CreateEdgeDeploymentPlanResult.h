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
  class CreateEdgeDeploymentPlanResult
  {
  public:
    AWS_SAGEMAKER_API CreateEdgeDeploymentPlanResult();
    AWS_SAGEMAKER_API CreateEdgeDeploymentPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateEdgeDeploymentPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanArn() const{ return m_edgeDeploymentPlanArn; }

    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanArn(const Aws::String& value) { m_edgeDeploymentPlanArn = value; }

    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanArn(Aws::String&& value) { m_edgeDeploymentPlanArn = std::move(value); }

    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanArn(const char* value) { m_edgeDeploymentPlanArn.assign(value); }

    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline CreateEdgeDeploymentPlanResult& WithEdgeDeploymentPlanArn(const Aws::String& value) { SetEdgeDeploymentPlanArn(value); return *this;}

    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline CreateEdgeDeploymentPlanResult& WithEdgeDeploymentPlanArn(Aws::String&& value) { SetEdgeDeploymentPlanArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline CreateEdgeDeploymentPlanResult& WithEdgeDeploymentPlanArn(const char* value) { SetEdgeDeploymentPlanArn(value); return *this;}

  private:

    Aws::String m_edgeDeploymentPlanArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

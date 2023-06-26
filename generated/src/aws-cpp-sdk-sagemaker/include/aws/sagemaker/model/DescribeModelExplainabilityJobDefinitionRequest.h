/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeModelExplainabilityJobDefinitionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeModelExplainabilityJobDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeModelExplainabilityJobDefinition"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }

    /**
     * <p>The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }

    /**
     * <p>The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeModelExplainabilityJobDefinitionRequest& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeModelExplainabilityJobDefinitionRequest& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeModelExplainabilityJobDefinitionRequest& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}

  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

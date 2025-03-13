/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The configuration parameters that specify the IAM roles assumed by the
   * execution role of SageMaker (assumable roles) and the cluster instances or job
   * execution environments (execution roles or runtime roles) to manage and access
   * resources required for running Amazon EMR clusters or Amazon EMR Serverless
   * applications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EmrSettings">AWS
   * API Reference</a></p>
   */
  class EmrSettings
  {
  public:
    AWS_SAGEMAKER_API EmrSettings() = default;
    AWS_SAGEMAKER_API EmrSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EmrSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of Amazon Resource Names (ARNs) of the IAM roles that the execution
     * role of SageMaker can assume for performing operations or tasks related to
     * Amazon EMR clusters or Amazon EMR Serverless applications. These roles define
     * the permissions and access policies required when performing Amazon EMR-related
     * operations, such as listing, connecting to, or terminating Amazon EMR clusters
     * or Amazon EMR Serverless applications. They are typically used in cross-account
     * access scenarios, where the Amazon EMR resources (clusters or serverless
     * applications) are located in a different Amazon Web Services account than the
     * SageMaker domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssumableRoleArns() const { return m_assumableRoleArns; }
    inline bool AssumableRoleArnsHasBeenSet() const { return m_assumableRoleArnsHasBeenSet; }
    template<typename AssumableRoleArnsT = Aws::Vector<Aws::String>>
    void SetAssumableRoleArns(AssumableRoleArnsT&& value) { m_assumableRoleArnsHasBeenSet = true; m_assumableRoleArns = std::forward<AssumableRoleArnsT>(value); }
    template<typename AssumableRoleArnsT = Aws::Vector<Aws::String>>
    EmrSettings& WithAssumableRoleArns(AssumableRoleArnsT&& value) { SetAssumableRoleArns(std::forward<AssumableRoleArnsT>(value)); return *this;}
    template<typename AssumableRoleArnsT = Aws::String>
    EmrSettings& AddAssumableRoleArns(AssumableRoleArnsT&& value) { m_assumableRoleArnsHasBeenSet = true; m_assumableRoleArns.emplace_back(std::forward<AssumableRoleArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Resource Names (ARNs) of the IAM roles used by the Amazon
     * EMR cluster instances or job execution environments to access other Amazon Web
     * Services services and resources needed during the runtime of your Amazon EMR or
     * Amazon EMR Serverless workloads, such as Amazon S3 for data access, Amazon
     * CloudWatch for logging, or other Amazon Web Services services based on the
     * particular workload requirements.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecutionRoleArns() const { return m_executionRoleArns; }
    inline bool ExecutionRoleArnsHasBeenSet() const { return m_executionRoleArnsHasBeenSet; }
    template<typename ExecutionRoleArnsT = Aws::Vector<Aws::String>>
    void SetExecutionRoleArns(ExecutionRoleArnsT&& value) { m_executionRoleArnsHasBeenSet = true; m_executionRoleArns = std::forward<ExecutionRoleArnsT>(value); }
    template<typename ExecutionRoleArnsT = Aws::Vector<Aws::String>>
    EmrSettings& WithExecutionRoleArns(ExecutionRoleArnsT&& value) { SetExecutionRoleArns(std::forward<ExecutionRoleArnsT>(value)); return *this;}
    template<typename ExecutionRoleArnsT = Aws::String>
    EmrSettings& AddExecutionRoleArns(ExecutionRoleArnsT&& value) { m_executionRoleArnsHasBeenSet = true; m_executionRoleArns.emplace_back(std::forward<ExecutionRoleArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_assumableRoleArns;
    bool m_assumableRoleArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_executionRoleArns;
    bool m_executionRoleArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

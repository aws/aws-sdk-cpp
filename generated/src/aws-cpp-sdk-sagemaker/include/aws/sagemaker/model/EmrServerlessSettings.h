/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FeatureStatus.h>
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
   * <p>The settings for running Amazon EMR Serverless jobs in SageMaker
   * Canvas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EmrServerlessSettings">AWS
   * API Reference</a></p>
   */
  class EmrServerlessSettings
  {
  public:
    AWS_SAGEMAKER_API EmrServerlessSettings();
    AWS_SAGEMAKER_API EmrServerlessSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EmrServerlessSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services IAM role that is
     * assumed for running Amazon EMR Serverless jobs in SageMaker Canvas. This role
     * should have the necessary permissions to read and write data attached and a
     * trust relationship with EMR Serverless.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline EmrServerlessSettings& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline EmrServerlessSettings& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline EmrServerlessSettings& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether Amazon EMR Serverless job capabilities are enabled or
     * disabled in the SageMaker Canvas application.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EmrServerlessSettings& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}
    inline EmrServerlessSettings& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

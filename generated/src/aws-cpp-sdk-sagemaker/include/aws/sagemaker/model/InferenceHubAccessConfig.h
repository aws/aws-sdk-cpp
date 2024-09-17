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
   * <p>Configuration information specifying which hub contents have accessible
   * deployment options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceHubAccessConfig">AWS
   * API Reference</a></p>
   */
  class InferenceHubAccessConfig
  {
  public:
    AWS_SAGEMAKER_API InferenceHubAccessConfig();
    AWS_SAGEMAKER_API InferenceHubAccessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceHubAccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the hub content for which deployment access is allowed.</p>
     */
    inline const Aws::String& GetHubContentArn() const{ return m_hubContentArn; }
    inline bool HubContentArnHasBeenSet() const { return m_hubContentArnHasBeenSet; }
    inline void SetHubContentArn(const Aws::String& value) { m_hubContentArnHasBeenSet = true; m_hubContentArn = value; }
    inline void SetHubContentArn(Aws::String&& value) { m_hubContentArnHasBeenSet = true; m_hubContentArn = std::move(value); }
    inline void SetHubContentArn(const char* value) { m_hubContentArnHasBeenSet = true; m_hubContentArn.assign(value); }
    inline InferenceHubAccessConfig& WithHubContentArn(const Aws::String& value) { SetHubContentArn(value); return *this;}
    inline InferenceHubAccessConfig& WithHubContentArn(Aws::String&& value) { SetHubContentArn(std::move(value)); return *this;}
    inline InferenceHubAccessConfig& WithHubContentArn(const char* value) { SetHubContentArn(value); return *this;}
    ///@}
  private:

    Aws::String m_hubContentArn;
    bool m_hubContentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

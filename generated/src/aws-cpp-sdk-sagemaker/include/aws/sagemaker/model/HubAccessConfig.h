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
   * <p>The configuration for a private hub model reference that points to a public
   * SageMaker JumpStart model.</p> <p>For more information about private hubs, see
   * <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/jumpstart-curated-hubs.html">Private
   * curated hubs for foundation model access control in JumpStart</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HubAccessConfig">AWS
   * API Reference</a></p>
   */
  class HubAccessConfig
  {
  public:
    AWS_SAGEMAKER_API HubAccessConfig() = default;
    AWS_SAGEMAKER_API HubAccessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HubAccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of your private model hub content. This should be a
     * <code>ModelReference</code> resource type that points to a SageMaker JumpStart
     * public hub model.</p>
     */
    inline const Aws::String& GetHubContentArn() const { return m_hubContentArn; }
    inline bool HubContentArnHasBeenSet() const { return m_hubContentArnHasBeenSet; }
    template<typename HubContentArnT = Aws::String>
    void SetHubContentArn(HubContentArnT&& value) { m_hubContentArnHasBeenSet = true; m_hubContentArn = std::forward<HubContentArnT>(value); }
    template<typename HubContentArnT = Aws::String>
    HubAccessConfig& WithHubContentArn(HubContentArnT&& value) { SetHubContentArn(std::forward<HubContentArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubContentArn;
    bool m_hubContentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

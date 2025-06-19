/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CfnUpdateTemplateProvider.h>
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
   * <p> Contains configuration details for updating an existing template provider in
   * the project. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTemplateProvider">AWS
   * API Reference</a></p>
   */
  class UpdateTemplateProvider
  {
  public:
    AWS_SAGEMAKER_API UpdateTemplateProvider() = default;
    AWS_SAGEMAKER_API UpdateTemplateProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UpdateTemplateProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The CloudFormation template provider configuration to update. </p>
     */
    inline const CfnUpdateTemplateProvider& GetCfnTemplateProvider() const { return m_cfnTemplateProvider; }
    inline bool CfnTemplateProviderHasBeenSet() const { return m_cfnTemplateProviderHasBeenSet; }
    template<typename CfnTemplateProviderT = CfnUpdateTemplateProvider>
    void SetCfnTemplateProvider(CfnTemplateProviderT&& value) { m_cfnTemplateProviderHasBeenSet = true; m_cfnTemplateProvider = std::forward<CfnTemplateProviderT>(value); }
    template<typename CfnTemplateProviderT = CfnUpdateTemplateProvider>
    UpdateTemplateProvider& WithCfnTemplateProvider(CfnTemplateProviderT&& value) { SetCfnTemplateProvider(std::forward<CfnTemplateProviderT>(value)); return *this;}
    ///@}
  private:

    CfnUpdateTemplateProvider m_cfnTemplateProvider;
    bool m_cfnTemplateProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

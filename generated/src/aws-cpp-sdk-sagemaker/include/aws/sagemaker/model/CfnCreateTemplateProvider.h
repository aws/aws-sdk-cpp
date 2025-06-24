/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CfnStackCreateParameter.h>
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
   * <p> The CloudFormation template provider configuration for creating
   * infrastructure resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CfnCreateTemplateProvider">AWS
   * API Reference</a></p>
   */
  class CfnCreateTemplateProvider
  {
  public:
    AWS_SAGEMAKER_API CfnCreateTemplateProvider() = default;
    AWS_SAGEMAKER_API CfnCreateTemplateProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CfnCreateTemplateProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier for the template within the project. </p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    CfnCreateTemplateProvider& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 URL of the CloudFormation template. </p>
     */
    inline const Aws::String& GetTemplateURL() const { return m_templateURL; }
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }
    template<typename TemplateURLT = Aws::String>
    void SetTemplateURL(TemplateURLT&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::forward<TemplateURLT>(value); }
    template<typename TemplateURLT = Aws::String>
    CfnCreateTemplateProvider& WithTemplateURL(TemplateURLT&& value) { SetTemplateURL(std::forward<TemplateURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IAM role that CloudFormation assumes when creating the stack. </p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    CfnCreateTemplateProvider& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of CloudFormation stack parameters.</p>
     */
    inline const Aws::Vector<CfnStackCreateParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<CfnStackCreateParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<CfnStackCreateParameter>>
    CfnCreateTemplateProvider& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = CfnStackCreateParameter>
    CfnCreateTemplateProvider& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::Vector<CfnStackCreateParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

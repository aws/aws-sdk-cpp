/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-incidents/model/SsmTargetAccount.h>
#include <aws/ssm-incidents/model/DynamicSsmParameterValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details about the Systems Manager automation document that will be used as a
   * runbook during an incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/SsmAutomation">AWS
   * API Reference</a></p>
   */
  class SsmAutomation
  {
  public:
    AWS_SSMINCIDENTS_API SsmAutomation() = default;
    AWS_SSMINCIDENTS_API SsmAutomation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API SsmAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The automation document's name.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    SsmAutomation& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automation document's version to use when running.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    SsmAutomation& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline const Aws::Map<Aws::String, DynamicSsmParameterValue>& GetDynamicParameters() const { return m_dynamicParameters; }
    inline bool DynamicParametersHasBeenSet() const { return m_dynamicParametersHasBeenSet; }
    template<typename DynamicParametersT = Aws::Map<Aws::String, DynamicSsmParameterValue>>
    void SetDynamicParameters(DynamicParametersT&& value) { m_dynamicParametersHasBeenSet = true; m_dynamicParameters = std::forward<DynamicParametersT>(value); }
    template<typename DynamicParametersT = Aws::Map<Aws::String, DynamicSsmParameterValue>>
    SsmAutomation& WithDynamicParameters(DynamicParametersT&& value) { SetDynamicParameters(std::forward<DynamicParametersT>(value)); return *this;}
    template<typename DynamicParametersKeyT = Aws::String, typename DynamicParametersValueT = DynamicSsmParameterValue>
    SsmAutomation& AddDynamicParameters(DynamicParametersKeyT&& key, DynamicParametersValueT&& value) {
      m_dynamicParametersHasBeenSet = true; m_dynamicParameters.emplace(std::forward<DynamicParametersKeyT>(key), std::forward<DynamicParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    SsmAutomation& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    SsmAutomation& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role that the automation document will
     * assume when running commands.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SsmAutomation& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that the automation document will be run in. This can be in
     * either the management account or an application account.</p>
     */
    inline SsmTargetAccount GetTargetAccount() const { return m_targetAccount; }
    inline bool TargetAccountHasBeenSet() const { return m_targetAccountHasBeenSet; }
    inline void SetTargetAccount(SsmTargetAccount value) { m_targetAccountHasBeenSet = true; m_targetAccount = value; }
    inline SsmAutomation& WithTargetAccount(SsmTargetAccount value) { SetTargetAccount(value); return *this;}
    ///@}
  private:

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Map<Aws::String, DynamicSsmParameterValue> m_dynamicParameters;
    bool m_dynamicParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    SsmTargetAccount m_targetAccount{SsmTargetAccount::NOT_SET};
    bool m_targetAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws

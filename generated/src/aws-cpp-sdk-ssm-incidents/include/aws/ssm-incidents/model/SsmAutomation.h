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
    AWS_SSMINCIDENTS_API SsmAutomation();
    AWS_SSMINCIDENTS_API SsmAutomation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API SsmAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The automation document's name.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The automation document's name.</p>
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>The automation document's name.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The automation document's name.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The automation document's name.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The automation document's name.</p>
     */
    inline SsmAutomation& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The automation document's name.</p>
     */
    inline SsmAutomation& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The automation document's name.</p>
     */
    inline SsmAutomation& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The automation document's version to use when running.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The automation document's version to use when running.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The automation document's version to use when running.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The automation document's version to use when running.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The automation document's version to use when running.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The automation document's version to use when running.</p>
     */
    inline SsmAutomation& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The automation document's version to use when running.</p>
     */
    inline SsmAutomation& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The automation document's version to use when running.</p>
     */
    inline SsmAutomation& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline const Aws::Map<Aws::String, DynamicSsmParameterValue>& GetDynamicParameters() const{ return m_dynamicParameters; }

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline bool DynamicParametersHasBeenSet() const { return m_dynamicParametersHasBeenSet; }

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline void SetDynamicParameters(const Aws::Map<Aws::String, DynamicSsmParameterValue>& value) { m_dynamicParametersHasBeenSet = true; m_dynamicParameters = value; }

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline void SetDynamicParameters(Aws::Map<Aws::String, DynamicSsmParameterValue>&& value) { m_dynamicParametersHasBeenSet = true; m_dynamicParameters = std::move(value); }

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline SsmAutomation& WithDynamicParameters(const Aws::Map<Aws::String, DynamicSsmParameterValue>& value) { SetDynamicParameters(value); return *this;}

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline SsmAutomation& WithDynamicParameters(Aws::Map<Aws::String, DynamicSsmParameterValue>&& value) { SetDynamicParameters(std::move(value)); return *this;}

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline SsmAutomation& AddDynamicParameters(const Aws::String& key, const DynamicSsmParameterValue& value) { m_dynamicParametersHasBeenSet = true; m_dynamicParameters.emplace(key, value); return *this; }

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline SsmAutomation& AddDynamicParameters(Aws::String&& key, const DynamicSsmParameterValue& value) { m_dynamicParametersHasBeenSet = true; m_dynamicParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline SsmAutomation& AddDynamicParameters(const Aws::String& key, DynamicSsmParameterValue&& value) { m_dynamicParametersHasBeenSet = true; m_dynamicParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline SsmAutomation& AddDynamicParameters(Aws::String&& key, DynamicSsmParameterValue&& value) { m_dynamicParametersHasBeenSet = true; m_dynamicParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline SsmAutomation& AddDynamicParameters(const char* key, DynamicSsmParameterValue&& value) { m_dynamicParametersHasBeenSet = true; m_dynamicParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pair to resolve dynamic parameter values when processing a
     * Systems Manager Automation runbook.</p>
     */
    inline SsmAutomation& AddDynamicParameters(const char* key, const DynamicSsmParameterValue& value) { m_dynamicParametersHasBeenSet = true; m_dynamicParameters.emplace(key, value); return *this; }


    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline SsmAutomation& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline SsmAutomation& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline SsmAutomation& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline SsmAutomation& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline SsmAutomation& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline SsmAutomation& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline SsmAutomation& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pair parameters to use when running the automation
     * document.</p>
     */
    inline SsmAutomation& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the role that the automation document will
     * assume when running commands.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the automation document will
     * assume when running commands.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the automation document will
     * assume when running commands.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the automation document will
     * assume when running commands.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the automation document will
     * assume when running commands.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the automation document will
     * assume when running commands.</p>
     */
    inline SsmAutomation& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the automation document will
     * assume when running commands.</p>
     */
    inline SsmAutomation& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the automation document will
     * assume when running commands.</p>
     */
    inline SsmAutomation& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The account that the automation document will be run in. This can be in
     * either the management account or an application account.</p>
     */
    inline const SsmTargetAccount& GetTargetAccount() const{ return m_targetAccount; }

    /**
     * <p>The account that the automation document will be run in. This can be in
     * either the management account or an application account.</p>
     */
    inline bool TargetAccountHasBeenSet() const { return m_targetAccountHasBeenSet; }

    /**
     * <p>The account that the automation document will be run in. This can be in
     * either the management account or an application account.</p>
     */
    inline void SetTargetAccount(const SsmTargetAccount& value) { m_targetAccountHasBeenSet = true; m_targetAccount = value; }

    /**
     * <p>The account that the automation document will be run in. This can be in
     * either the management account or an application account.</p>
     */
    inline void SetTargetAccount(SsmTargetAccount&& value) { m_targetAccountHasBeenSet = true; m_targetAccount = std::move(value); }

    /**
     * <p>The account that the automation document will be run in. This can be in
     * either the management account or an application account.</p>
     */
    inline SsmAutomation& WithTargetAccount(const SsmTargetAccount& value) { SetTargetAccount(value); return *this;}

    /**
     * <p>The account that the automation document will be run in. This can be in
     * either the management account or an application account.</p>
     */
    inline SsmAutomation& WithTargetAccount(SsmTargetAccount&& value) { SetTargetAccount(std::move(value)); return *this;}

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

    SsmTargetAccount m_targetAccount;
    bool m_targetAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws

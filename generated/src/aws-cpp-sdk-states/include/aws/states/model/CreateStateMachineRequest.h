/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/StateMachineType.h>
#include <aws/states/model/LoggingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/states/model/TracingConfiguration.h>
#include <aws/states/model/EncryptionConfiguration.h>
#include <aws/states/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class CreateStateMachineRequest : public SFNRequest
  {
  public:
    AWS_SFN_API CreateStateMachineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStateMachine"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the state machine. </p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>,
     * <code>U+FFFE-FFFF</code>)</p> </li> <li> <p>surrogates
     * (<code>U+D800-DFFF</code>)</p> </li> <li> <p>invalid characters (<code>
     * U+10FFFF</code>)</p> </li> </ul> <p>To enable logging with CloudWatch Logs, the
     * name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateStateMachineRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline const Aws::String& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Aws::String>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::String>
    CreateStateMachineRequest& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateStateMachineRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether a Standard or Express state machine is created. The
     * default is <code>STANDARD</code>. You cannot update the <code>type</code> of a
     * state machine once it has been created.</p>
     */
    inline StateMachineType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(StateMachineType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateStateMachineRequest& WithType(StateMachineType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines what execution history events are logged and where they are
     * logged.</p>  <p>By default, the <code>level</code> is set to
     * <code>OFF</code>. For more information see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/cloudwatch-log-level.html">Log
     * Levels</a> in the Step Functions User Guide.</p> 
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    void SetLoggingConfiguration(LoggingConfigurationT&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::forward<LoggingConfigurationT>(value); }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    CreateStateMachineRequest& WithLoggingConfiguration(LoggingConfigurationT&& value) { SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to be added when creating a state machine.</p> <p>An array of key-value
     * pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
     * white space, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateStateMachineRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateStateMachineRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline const TracingConfiguration& GetTracingConfiguration() const { return m_tracingConfiguration; }
    inline bool TracingConfigurationHasBeenSet() const { return m_tracingConfigurationHasBeenSet; }
    template<typename TracingConfigurationT = TracingConfiguration>
    void SetTracingConfiguration(TracingConfigurationT&& value) { m_tracingConfigurationHasBeenSet = true; m_tracingConfiguration = std::forward<TracingConfigurationT>(value); }
    template<typename TracingConfigurationT = TracingConfiguration>
    CreateStateMachineRequest& WithTracingConfiguration(TracingConfigurationT&& value) { SetTracingConfiguration(std::forward<TracingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to publish the first version of the state machine
     * during creation. The default is <code>false</code>.</p>
     */
    inline bool GetPublish() const { return m_publish; }
    inline bool PublishHasBeenSet() const { return m_publishHasBeenSet; }
    inline void SetPublish(bool value) { m_publishHasBeenSet = true; m_publish = value; }
    inline CreateStateMachineRequest& WithPublish(bool value) { SetPublish(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets description about the state machine version. You can only set the
     * description if the <code>publish</code> parameter is set to <code>true</code>.
     * Otherwise, if you set <code>versionDescription</code>, but <code>publish</code>
     * to <code>false</code>, this API action throws
     * <code>ValidationException</code>.</p>
     */
    inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    template<typename VersionDescriptionT = Aws::String>
    void SetVersionDescription(VersionDescriptionT&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::forward<VersionDescriptionT>(value); }
    template<typename VersionDescriptionT = Aws::String>
    CreateStateMachineRequest& WithVersionDescription(VersionDescriptionT&& value) { SetVersionDescription(std::forward<VersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to configure server-side encryption.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    CreateStateMachineRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    StateMachineType m_type{StateMachineType::NOT_SET};
    bool m_typeHasBeenSet = false;

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    TracingConfiguration m_tracingConfiguration;
    bool m_tracingConfigurationHasBeenSet = false;

    bool m_publish{false};
    bool m_publishHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws

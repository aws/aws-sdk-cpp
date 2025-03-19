/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ConfigurationPolicyAssociation.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> An array of configuration policy associations, one for each configuration
   * policy association identifier, that was specified in a
   * <code>BatchGetConfigurationPolicyAssociations</code> request but couldn’t be
   * processed due to an error. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UnprocessedConfigurationPolicyAssociation">AWS
   * API Reference</a></p>
   */
  class UnprocessedConfigurationPolicyAssociation
  {
  public:
    AWS_SECURITYHUB_API UnprocessedConfigurationPolicyAssociation() = default;
    AWS_SECURITYHUB_API UnprocessedConfigurationPolicyAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API UnprocessedConfigurationPolicyAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Configuration policy association identifiers that were specified in a
     * <code>BatchGetConfigurationPolicyAssociations</code> request but couldn’t be
     * processed due to an error. </p>
     */
    inline const ConfigurationPolicyAssociation& GetConfigurationPolicyAssociationIdentifiers() const { return m_configurationPolicyAssociationIdentifiers; }
    inline bool ConfigurationPolicyAssociationIdentifiersHasBeenSet() const { return m_configurationPolicyAssociationIdentifiersHasBeenSet; }
    template<typename ConfigurationPolicyAssociationIdentifiersT = ConfigurationPolicyAssociation>
    void SetConfigurationPolicyAssociationIdentifiers(ConfigurationPolicyAssociationIdentifiersT&& value) { m_configurationPolicyAssociationIdentifiersHasBeenSet = true; m_configurationPolicyAssociationIdentifiers = std::forward<ConfigurationPolicyAssociationIdentifiersT>(value); }
    template<typename ConfigurationPolicyAssociationIdentifiersT = ConfigurationPolicyAssociation>
    UnprocessedConfigurationPolicyAssociation& WithConfigurationPolicyAssociationIdentifiers(ConfigurationPolicyAssociationIdentifiersT&& value) { SetConfigurationPolicyAssociationIdentifiers(std::forward<ConfigurationPolicyAssociationIdentifiersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An HTTP status code that identifies why the configuration policy association
     * failed. </p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    UnprocessedConfigurationPolicyAssociation& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A string that identifies why the configuration policy association failed.
     * </p>
     */
    inline const Aws::String& GetErrorReason() const { return m_errorReason; }
    inline bool ErrorReasonHasBeenSet() const { return m_errorReasonHasBeenSet; }
    template<typename ErrorReasonT = Aws::String>
    void SetErrorReason(ErrorReasonT&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::forward<ErrorReasonT>(value); }
    template<typename ErrorReasonT = Aws::String>
    UnprocessedConfigurationPolicyAssociation& WithErrorReason(ErrorReasonT&& value) { SetErrorReason(std::forward<ErrorReasonT>(value)); return *this;}
    ///@}
  private:

    ConfigurationPolicyAssociation m_configurationPolicyAssociationIdentifiers;
    bool m_configurationPolicyAssociationIdentifiersHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorReason;
    bool m_errorReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

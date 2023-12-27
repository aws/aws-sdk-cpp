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
    AWS_SECURITYHUB_API UnprocessedConfigurationPolicyAssociation();
    AWS_SECURITYHUB_API UnprocessedConfigurationPolicyAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API UnprocessedConfigurationPolicyAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Configuration policy association identifiers that were specified in a
     * <code>BatchGetConfigurationPolicyAssociations</code> request but couldn’t be
     * processed due to an error. </p>
     */
    inline const ConfigurationPolicyAssociation& GetConfigurationPolicyAssociationIdentifiers() const{ return m_configurationPolicyAssociationIdentifiers; }

    /**
     * <p> Configuration policy association identifiers that were specified in a
     * <code>BatchGetConfigurationPolicyAssociations</code> request but couldn’t be
     * processed due to an error. </p>
     */
    inline bool ConfigurationPolicyAssociationIdentifiersHasBeenSet() const { return m_configurationPolicyAssociationIdentifiersHasBeenSet; }

    /**
     * <p> Configuration policy association identifiers that were specified in a
     * <code>BatchGetConfigurationPolicyAssociations</code> request but couldn’t be
     * processed due to an error. </p>
     */
    inline void SetConfigurationPolicyAssociationIdentifiers(const ConfigurationPolicyAssociation& value) { m_configurationPolicyAssociationIdentifiersHasBeenSet = true; m_configurationPolicyAssociationIdentifiers = value; }

    /**
     * <p> Configuration policy association identifiers that were specified in a
     * <code>BatchGetConfigurationPolicyAssociations</code> request but couldn’t be
     * processed due to an error. </p>
     */
    inline void SetConfigurationPolicyAssociationIdentifiers(ConfigurationPolicyAssociation&& value) { m_configurationPolicyAssociationIdentifiersHasBeenSet = true; m_configurationPolicyAssociationIdentifiers = std::move(value); }

    /**
     * <p> Configuration policy association identifiers that were specified in a
     * <code>BatchGetConfigurationPolicyAssociations</code> request but couldn’t be
     * processed due to an error. </p>
     */
    inline UnprocessedConfigurationPolicyAssociation& WithConfigurationPolicyAssociationIdentifiers(const ConfigurationPolicyAssociation& value) { SetConfigurationPolicyAssociationIdentifiers(value); return *this;}

    /**
     * <p> Configuration policy association identifiers that were specified in a
     * <code>BatchGetConfigurationPolicyAssociations</code> request but couldn’t be
     * processed due to an error. </p>
     */
    inline UnprocessedConfigurationPolicyAssociation& WithConfigurationPolicyAssociationIdentifiers(ConfigurationPolicyAssociation&& value) { SetConfigurationPolicyAssociationIdentifiers(std::move(value)); return *this;}


    /**
     * <p> An HTTP status code that identifies why the configuration policy association
     * failed. </p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p> An HTTP status code that identifies why the configuration policy association
     * failed. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p> An HTTP status code that identifies why the configuration policy association
     * failed. </p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p> An HTTP status code that identifies why the configuration policy association
     * failed. </p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p> An HTTP status code that identifies why the configuration policy association
     * failed. </p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p> An HTTP status code that identifies why the configuration policy association
     * failed. </p>
     */
    inline UnprocessedConfigurationPolicyAssociation& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p> An HTTP status code that identifies why the configuration policy association
     * failed. </p>
     */
    inline UnprocessedConfigurationPolicyAssociation& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p> An HTTP status code that identifies why the configuration policy association
     * failed. </p>
     */
    inline UnprocessedConfigurationPolicyAssociation& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p> A string that identifies why the configuration policy association failed.
     * </p>
     */
    inline const Aws::String& GetErrorReason() const{ return m_errorReason; }

    /**
     * <p> A string that identifies why the configuration policy association failed.
     * </p>
     */
    inline bool ErrorReasonHasBeenSet() const { return m_errorReasonHasBeenSet; }

    /**
     * <p> A string that identifies why the configuration policy association failed.
     * </p>
     */
    inline void SetErrorReason(const Aws::String& value) { m_errorReasonHasBeenSet = true; m_errorReason = value; }

    /**
     * <p> A string that identifies why the configuration policy association failed.
     * </p>
     */
    inline void SetErrorReason(Aws::String&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::move(value); }

    /**
     * <p> A string that identifies why the configuration policy association failed.
     * </p>
     */
    inline void SetErrorReason(const char* value) { m_errorReasonHasBeenSet = true; m_errorReason.assign(value); }

    /**
     * <p> A string that identifies why the configuration policy association failed.
     * </p>
     */
    inline UnprocessedConfigurationPolicyAssociation& WithErrorReason(const Aws::String& value) { SetErrorReason(value); return *this;}

    /**
     * <p> A string that identifies why the configuration policy association failed.
     * </p>
     */
    inline UnprocessedConfigurationPolicyAssociation& WithErrorReason(Aws::String&& value) { SetErrorReason(std::move(value)); return *this;}

    /**
     * <p> A string that identifies why the configuration policy association failed.
     * </p>
     */
    inline UnprocessedConfigurationPolicyAssociation& WithErrorReason(const char* value) { SetErrorReason(value); return *this;}

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

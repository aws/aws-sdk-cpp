/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/PcaConnectorAdRequest.h>
#include <aws/pca-connector-ad/model/TemplateDefinition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

  /**
   */
  class UpdateTemplateRequest : public PcaConnectorAdRequest
  {
  public:
    AWS_PCACONNECTORAD_API UpdateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplate"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;


    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline const TemplateDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline void SetDefinition(const TemplateDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline void SetDefinition(TemplateDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline UpdateTemplateRequest& WithDefinition(const TemplateDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline UpdateTemplateRequest& WithDefinition(TemplateDefinition&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>This setting allows the major version of a template to be increased
     * automatically. All members of Active Directory groups that are allowed to enroll
     * with a template will receive a new certificate issued using that template.</p>
     */
    inline bool GetReenrollAllCertificateHolders() const{ return m_reenrollAllCertificateHolders; }

    /**
     * <p>This setting allows the major version of a template to be increased
     * automatically. All members of Active Directory groups that are allowed to enroll
     * with a template will receive a new certificate issued using that template.</p>
     */
    inline bool ReenrollAllCertificateHoldersHasBeenSet() const { return m_reenrollAllCertificateHoldersHasBeenSet; }

    /**
     * <p>This setting allows the major version of a template to be increased
     * automatically. All members of Active Directory groups that are allowed to enroll
     * with a template will receive a new certificate issued using that template.</p>
     */
    inline void SetReenrollAllCertificateHolders(bool value) { m_reenrollAllCertificateHoldersHasBeenSet = true; m_reenrollAllCertificateHolders = value; }

    /**
     * <p>This setting allows the major version of a template to be increased
     * automatically. All members of Active Directory groups that are allowed to enroll
     * with a template will receive a new certificate issued using that template.</p>
     */
    inline UpdateTemplateRequest& WithReenrollAllCertificateHolders(bool value) { SetReenrollAllCertificateHolders(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline UpdateTemplateRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline UpdateTemplateRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline UpdateTemplateRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}

  private:

    TemplateDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    bool m_reenrollAllCertificateHolders;
    bool m_reenrollAllCertificateHoldersHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws

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
    AWS_PCACONNECTORAD_API UpdateTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplate"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline const TemplateDefinition& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = TemplateDefinition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = TemplateDefinition>
    UpdateTemplateRequest& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This setting allows the major version of a template to be increased
     * automatically. All members of Active Directory groups that are allowed to enroll
     * with a template will receive a new certificate issued using that template.</p>
     */
    inline bool GetReenrollAllCertificateHolders() const { return m_reenrollAllCertificateHolders; }
    inline bool ReenrollAllCertificateHoldersHasBeenSet() const { return m_reenrollAllCertificateHoldersHasBeenSet; }
    inline void SetReenrollAllCertificateHolders(bool value) { m_reenrollAllCertificateHoldersHasBeenSet = true; m_reenrollAllCertificateHolders = value; }
    inline UpdateTemplateRequest& WithReenrollAllCertificateHolders(bool value) { SetReenrollAllCertificateHolders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    UpdateTemplateRequest& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}
  private:

    TemplateDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    bool m_reenrollAllCertificateHolders{false};
    bool m_reenrollAllCertificateHoldersHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws

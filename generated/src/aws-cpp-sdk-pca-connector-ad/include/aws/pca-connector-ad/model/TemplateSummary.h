/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pca-connector-ad/model/TemplateDefinition.h>
#include <aws/pca-connector-ad/model/TemplateRevision.h>
#include <aws/pca-connector-ad/model/TemplateStatus.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>An Active Directory compatible certificate template. Connectors issue
   * certificates against these templates based on the requestor's Active Directory
   * group membership.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/TemplateSummary">AWS
   * API Reference</a></p>
   */
  class TemplateSummary
  {
  public:
    AWS_PCACONNECTORAD_API TemplateSummary();
    AWS_PCACONNECTORAD_API TemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API TemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline TemplateSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline TemplateSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline TemplateSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }
    inline TemplateSummary& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}
    inline TemplateSummary& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}
    inline TemplateSummary& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline TemplateSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline TemplateSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline const TemplateDefinition& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const TemplateDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(TemplateDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline TemplateSummary& WithDefinition(const TemplateDefinition& value) { SetDefinition(value); return *this;}
    inline TemplateSummary& WithDefinition(TemplateDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the template. The template name must be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TemplateSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TemplateSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TemplateSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object identifier of a template.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::move(value); }
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier.assign(value); }
    inline TemplateSummary& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}
    inline TemplateSummary& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(std::move(value)); return *this;}
    inline TemplateSummary& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template schema version. Template schema versions can be v2, v3, or v4.
     * The template configuration options change based on the template schema
     * version.</p>
     */
    inline int GetPolicySchema() const{ return m_policySchema; }
    inline bool PolicySchemaHasBeenSet() const { return m_policySchemaHasBeenSet; }
    inline void SetPolicySchema(int value) { m_policySchemaHasBeenSet = true; m_policySchema = value; }
    inline TemplateSummary& WithPolicySchema(int value) { SetPolicySchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision version of the template. Template updates will increment the
     * minor revision. Re-enrolling all certificate holders will increment the major
     * revision.</p>
     */
    inline const TemplateRevision& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const TemplateRevision& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(TemplateRevision&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline TemplateSummary& WithRevision(const TemplateRevision& value) { SetRevision(value); return *this;}
    inline TemplateSummary& WithRevision(TemplateRevision&& value) { SetRevision(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the template. Status can be creating, active, deleting, or
     * failed.</p>
     */
    inline const TemplateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TemplateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TemplateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TemplateSummary& WithStatus(const TemplateStatus& value) { SetStatus(value); return *this;}
    inline TemplateSummary& WithStatus(TemplateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the template was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline TemplateSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline TemplateSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    TemplateDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;

    int m_policySchema;
    bool m_policySchemaHasBeenSet = false;

    TemplateRevision m_revision;
    bool m_revisionHasBeenSet = false;

    TemplateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws

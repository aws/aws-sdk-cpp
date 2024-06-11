/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/Provisioning.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>Detailed data of an Proton service template resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ServiceTemplate">AWS
   * API Reference</a></p>
   */
  class ServiceTemplate
  {
  public:
    AWS_PROTON_API ServiceTemplate();
    AWS_PROTON_API ServiceTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ServiceTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ServiceTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServiceTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServiceTemplate& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the service template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceTemplate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceTemplate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the service template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ServiceTemplate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ServiceTemplate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ServiceTemplate& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service template name as displayed in the developer interface.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline ServiceTemplate& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline ServiceTemplate& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline ServiceTemplate& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer provided service template encryption key that's used to encrypt
     * data.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }
    inline ServiceTemplate& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}
    inline ServiceTemplate& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}
    inline ServiceTemplate& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the service template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }
    inline ServiceTemplate& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}
    inline ServiceTemplate& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceTemplate& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>pipelineProvisioning</code> is <code>true</code>, a service pipeline
     * is included in the service template. Otherwise, a service pipeline <i>isn't</i>
     * included in the service template.</p>
     */
    inline const Provisioning& GetPipelineProvisioning() const{ return m_pipelineProvisioning; }
    inline bool PipelineProvisioningHasBeenSet() const { return m_pipelineProvisioningHasBeenSet; }
    inline void SetPipelineProvisioning(const Provisioning& value) { m_pipelineProvisioningHasBeenSet = true; m_pipelineProvisioning = value; }
    inline void SetPipelineProvisioning(Provisioning&& value) { m_pipelineProvisioningHasBeenSet = true; m_pipelineProvisioning = std::move(value); }
    inline ServiceTemplate& WithPipelineProvisioning(const Provisioning& value) { SetPipelineProvisioning(value); return *this;}
    inline ServiceTemplate& WithPipelineProvisioning(Provisioning&& value) { SetPipelineProvisioning(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended version of the service template.</p>
     */
    inline const Aws::String& GetRecommendedVersion() const{ return m_recommendedVersion; }
    inline bool RecommendedVersionHasBeenSet() const { return m_recommendedVersionHasBeenSet; }
    inline void SetRecommendedVersion(const Aws::String& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = value; }
    inline void SetRecommendedVersion(Aws::String&& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = std::move(value); }
    inline void SetRecommendedVersion(const char* value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion.assign(value); }
    inline ServiceTemplate& WithRecommendedVersion(const Aws::String& value) { SetRecommendedVersion(value); return *this;}
    inline ServiceTemplate& WithRecommendedVersion(Aws::String&& value) { SetRecommendedVersion(std::move(value)); return *this;}
    inline ServiceTemplate& WithRecommendedVersion(const char* value) { SetRecommendedVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Provisioning m_pipelineProvisioning;
    bool m_pipelineProvisioningHasBeenSet = false;

    Aws::String m_recommendedVersion;
    bool m_recommendedVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws

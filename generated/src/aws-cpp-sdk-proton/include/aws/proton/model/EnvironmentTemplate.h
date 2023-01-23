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
   * <p>The environment template data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/EnvironmentTemplate">AWS
   * API Reference</a></p>
   */
  class EnvironmentTemplate
  {
  public:
    AWS_PROTON_API EnvironmentTemplate();
    AWS_PROTON_API EnvironmentTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API EnvironmentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the environment template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment template.</p>
     */
    inline EnvironmentTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment template.</p>
     */
    inline EnvironmentTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment template.</p>
     */
    inline EnvironmentTemplate& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time when the environment template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the environment template was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the environment template was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the environment template was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the environment template was created.</p>
     */
    inline EnvironmentTemplate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the environment template was created.</p>
     */
    inline EnvironmentTemplate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A description of the environment template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the environment template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the environment template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the environment template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the environment template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the environment template.</p>
     */
    inline EnvironmentTemplate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the environment template.</p>
     */
    inline EnvironmentTemplate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the environment template.</p>
     */
    inline EnvironmentTemplate& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the environment template as displayed in the developer
     * interface.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the environment template as displayed in the developer
     * interface.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the environment template as displayed in the developer
     * interface.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the environment template as displayed in the developer
     * interface.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the environment template as displayed in the developer
     * interface.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the environment template as displayed in the developer
     * interface.</p>
     */
    inline EnvironmentTemplate& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the environment template as displayed in the developer
     * interface.</p>
     */
    inline EnvironmentTemplate& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment template as displayed in the developer
     * interface.</p>
     */
    inline EnvironmentTemplate& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The customer provided encryption key for the environment template.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The customer provided encryption key for the environment template.</p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The customer provided encryption key for the environment template.</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The customer provided encryption key for the environment template.</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The customer provided encryption key for the environment template.</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The customer provided encryption key for the environment template.</p>
     */
    inline EnvironmentTemplate& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The customer provided encryption key for the environment template.</p>
     */
    inline EnvironmentTemplate& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The customer provided encryption key for the environment template.</p>
     */
    inline EnvironmentTemplate& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p>The time when the environment template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The time when the environment template was last modified.</p>
     */
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }

    /**
     * <p>The time when the environment template was last modified.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }

    /**
     * <p>The time when the environment template was last modified.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }

    /**
     * <p>The time when the environment template was last modified.</p>
     */
    inline EnvironmentTemplate& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The time when the environment template was last modified.</p>
     */
    inline EnvironmentTemplate& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the environment template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment template.</p>
     */
    inline EnvironmentTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment template.</p>
     */
    inline EnvironmentTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment template.</p>
     */
    inline EnvironmentTemplate& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline const Provisioning& GetProvisioning() const{ return m_provisioning; }

    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline bool ProvisioningHasBeenSet() const { return m_provisioningHasBeenSet; }

    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline void SetProvisioning(const Provisioning& value) { m_provisioningHasBeenSet = true; m_provisioning = value; }

    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline void SetProvisioning(Provisioning&& value) { m_provisioningHasBeenSet = true; m_provisioning = std::move(value); }

    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline EnvironmentTemplate& WithProvisioning(const Provisioning& value) { SetProvisioning(value); return *this;}

    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline EnvironmentTemplate& WithProvisioning(Provisioning&& value) { SetProvisioning(std::move(value)); return *this;}


    /**
     * <p>The ID of the recommended version of the environment template.</p>
     */
    inline const Aws::String& GetRecommendedVersion() const{ return m_recommendedVersion; }

    /**
     * <p>The ID of the recommended version of the environment template.</p>
     */
    inline bool RecommendedVersionHasBeenSet() const { return m_recommendedVersionHasBeenSet; }

    /**
     * <p>The ID of the recommended version of the environment template.</p>
     */
    inline void SetRecommendedVersion(const Aws::String& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = value; }

    /**
     * <p>The ID of the recommended version of the environment template.</p>
     */
    inline void SetRecommendedVersion(Aws::String&& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = std::move(value); }

    /**
     * <p>The ID of the recommended version of the environment template.</p>
     */
    inline void SetRecommendedVersion(const char* value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion.assign(value); }

    /**
     * <p>The ID of the recommended version of the environment template.</p>
     */
    inline EnvironmentTemplate& WithRecommendedVersion(const Aws::String& value) { SetRecommendedVersion(value); return *this;}

    /**
     * <p>The ID of the recommended version of the environment template.</p>
     */
    inline EnvironmentTemplate& WithRecommendedVersion(Aws::String&& value) { SetRecommendedVersion(std::move(value)); return *this;}

    /**
     * <p>The ID of the recommended version of the environment template.</p>
     */
    inline EnvironmentTemplate& WithRecommendedVersion(const char* value) { SetRecommendedVersion(value); return *this;}

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

    Provisioning m_provisioning;
    bool m_provisioningHasBeenSet = false;

    Aws::String m_recommendedVersion;
    bool m_recommendedVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
   * <p>Information about the build artifacts for the CodeBuild
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectArtifactsDetails">AWS
   * API Reference</a></p>
   */
  class AwsCodeBuildProjectArtifactsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCodeBuildProjectArtifactsDetails();
    AWS_SECURITYHUB_API AwsCodeBuildProjectArtifactsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectArtifactsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for the artifact definition.</p>
     */
    inline const Aws::String& GetArtifactIdentifier() const{ return m_artifactIdentifier; }
    inline bool ArtifactIdentifierHasBeenSet() const { return m_artifactIdentifierHasBeenSet; }
    inline void SetArtifactIdentifier(const Aws::String& value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier = value; }
    inline void SetArtifactIdentifier(Aws::String&& value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier = std::move(value); }
    inline void SetArtifactIdentifier(const char* value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier.assign(value); }
    inline AwsCodeBuildProjectArtifactsDetails& WithArtifactIdentifier(const Aws::String& value) { SetArtifactIdentifier(value); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithArtifactIdentifier(Aws::String&& value) { SetArtifactIdentifier(std::move(value)); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithArtifactIdentifier(const char* value) { SetArtifactIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to disable encryption on the artifact. Only valid when
     * <code>Type</code> is <code>S3</code>.</p>
     */
    inline bool GetEncryptionDisabled() const{ return m_encryptionDisabled; }
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }
    inline AwsCodeBuildProjectArtifactsDetails& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only used when <code>Type</code> is <code>S3</code>. The name of the S3
     * bucket where the artifact is located.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline AwsCodeBuildProjectArtifactsDetails& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only used when Type is S3. The name of the artifact. Used with
     * <code>NamepaceType</code> and <code>Path</code> to determine the pattern for
     * storing the artifact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsCodeBuildProjectArtifactsDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only used when <code>Type</code> is <code>S3</code>. The value to use for the
     * namespace. Used with <code>Name</code> and <code>Path</code> to determine the
     * pattern for storing the artifact.</p>
     */
    inline const Aws::String& GetNamespaceType() const{ return m_namespaceType; }
    inline bool NamespaceTypeHasBeenSet() const { return m_namespaceTypeHasBeenSet; }
    inline void SetNamespaceType(const Aws::String& value) { m_namespaceTypeHasBeenSet = true; m_namespaceType = value; }
    inline void SetNamespaceType(Aws::String&& value) { m_namespaceTypeHasBeenSet = true; m_namespaceType = std::move(value); }
    inline void SetNamespaceType(const char* value) { m_namespaceTypeHasBeenSet = true; m_namespaceType.assign(value); }
    inline AwsCodeBuildProjectArtifactsDetails& WithNamespaceType(const Aws::String& value) { SetNamespaceType(value); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithNamespaceType(Aws::String&& value) { SetNamespaceType(std::move(value)); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithNamespaceType(const char* value) { SetNamespaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the name specified in the buildspec file overrides the artifact
     * name.</p>
     */
    inline bool GetOverrideArtifactName() const{ return m_overrideArtifactName; }
    inline bool OverrideArtifactNameHasBeenSet() const { return m_overrideArtifactNameHasBeenSet; }
    inline void SetOverrideArtifactName(bool value) { m_overrideArtifactNameHasBeenSet = true; m_overrideArtifactName = value; }
    inline AwsCodeBuildProjectArtifactsDetails& WithOverrideArtifactName(bool value) { SetOverrideArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only used when <code>Type</code> is <code>S3</code>. The type of output
     * artifact to create.</p>
     */
    inline const Aws::String& GetPackaging() const{ return m_packaging; }
    inline bool PackagingHasBeenSet() const { return m_packagingHasBeenSet; }
    inline void SetPackaging(const Aws::String& value) { m_packagingHasBeenSet = true; m_packaging = value; }
    inline void SetPackaging(Aws::String&& value) { m_packagingHasBeenSet = true; m_packaging = std::move(value); }
    inline void SetPackaging(const char* value) { m_packagingHasBeenSet = true; m_packaging.assign(value); }
    inline AwsCodeBuildProjectArtifactsDetails& WithPackaging(const Aws::String& value) { SetPackaging(value); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithPackaging(Aws::String&& value) { SetPackaging(std::move(value)); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithPackaging(const char* value) { SetPackaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only used when <code>Type</code> is <code>S3</code>. The path to the
     * artifact. Used with <code>Name</code> and <code>NamespaceType</code> to
     * determine the pattern for storing the artifact.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline AwsCodeBuildProjectArtifactsDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of build artifact.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AwsCodeBuildProjectArtifactsDetails& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AwsCodeBuildProjectArtifactsDetails& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_artifactIdentifier;
    bool m_artifactIdentifierHasBeenSet = false;

    bool m_encryptionDisabled;
    bool m_encryptionDisabledHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_namespaceType;
    bool m_namespaceTypeHasBeenSet = false;

    bool m_overrideArtifactName;
    bool m_overrideArtifactNameHasBeenSet = false;

    Aws::String m_packaging;
    bool m_packagingHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

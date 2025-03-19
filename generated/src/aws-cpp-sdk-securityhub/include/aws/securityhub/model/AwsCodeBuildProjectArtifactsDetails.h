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
    AWS_SECURITYHUB_API AwsCodeBuildProjectArtifactsDetails() = default;
    AWS_SECURITYHUB_API AwsCodeBuildProjectArtifactsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectArtifactsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for the artifact definition.</p>
     */
    inline const Aws::String& GetArtifactIdentifier() const { return m_artifactIdentifier; }
    inline bool ArtifactIdentifierHasBeenSet() const { return m_artifactIdentifierHasBeenSet; }
    template<typename ArtifactIdentifierT = Aws::String>
    void SetArtifactIdentifier(ArtifactIdentifierT&& value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier = std::forward<ArtifactIdentifierT>(value); }
    template<typename ArtifactIdentifierT = Aws::String>
    AwsCodeBuildProjectArtifactsDetails& WithArtifactIdentifier(ArtifactIdentifierT&& value) { SetArtifactIdentifier(std::forward<ArtifactIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to disable encryption on the artifact. Only valid when
     * <code>Type</code> is <code>S3</code>.</p>
     */
    inline bool GetEncryptionDisabled() const { return m_encryptionDisabled; }
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }
    inline AwsCodeBuildProjectArtifactsDetails& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only used when <code>Type</code> is <code>S3</code>. The name of the S3
     * bucket where the artifact is located.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    AwsCodeBuildProjectArtifactsDetails& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only used when Type is S3. The name of the artifact. Used with
     * <code>NamepaceType</code> and <code>Path</code> to determine the pattern for
     * storing the artifact.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsCodeBuildProjectArtifactsDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only used when <code>Type</code> is <code>S3</code>. The value to use for the
     * namespace. Used with <code>Name</code> and <code>Path</code> to determine the
     * pattern for storing the artifact.</p>
     */
    inline const Aws::String& GetNamespaceType() const { return m_namespaceType; }
    inline bool NamespaceTypeHasBeenSet() const { return m_namespaceTypeHasBeenSet; }
    template<typename NamespaceTypeT = Aws::String>
    void SetNamespaceType(NamespaceTypeT&& value) { m_namespaceTypeHasBeenSet = true; m_namespaceType = std::forward<NamespaceTypeT>(value); }
    template<typename NamespaceTypeT = Aws::String>
    AwsCodeBuildProjectArtifactsDetails& WithNamespaceType(NamespaceTypeT&& value) { SetNamespaceType(std::forward<NamespaceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the name specified in the buildspec file overrides the artifact
     * name.</p>
     */
    inline bool GetOverrideArtifactName() const { return m_overrideArtifactName; }
    inline bool OverrideArtifactNameHasBeenSet() const { return m_overrideArtifactNameHasBeenSet; }
    inline void SetOverrideArtifactName(bool value) { m_overrideArtifactNameHasBeenSet = true; m_overrideArtifactName = value; }
    inline AwsCodeBuildProjectArtifactsDetails& WithOverrideArtifactName(bool value) { SetOverrideArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only used when <code>Type</code> is <code>S3</code>. The type of output
     * artifact to create.</p>
     */
    inline const Aws::String& GetPackaging() const { return m_packaging; }
    inline bool PackagingHasBeenSet() const { return m_packagingHasBeenSet; }
    template<typename PackagingT = Aws::String>
    void SetPackaging(PackagingT&& value) { m_packagingHasBeenSet = true; m_packaging = std::forward<PackagingT>(value); }
    template<typename PackagingT = Aws::String>
    AwsCodeBuildProjectArtifactsDetails& WithPackaging(PackagingT&& value) { SetPackaging(std::forward<PackagingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only used when <code>Type</code> is <code>S3</code>. The path to the
     * artifact. Used with <code>Name</code> and <code>NamespaceType</code> to
     * determine the pattern for storing the artifact.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    AwsCodeBuildProjectArtifactsDetails& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of build artifact.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsCodeBuildProjectArtifactsDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_artifactIdentifier;
    bool m_artifactIdentifierHasBeenSet = false;

    bool m_encryptionDisabled{false};
    bool m_encryptionDisabledHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_namespaceType;
    bool m_namespaceTypeHasBeenSet = false;

    bool m_overrideArtifactName{false};
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

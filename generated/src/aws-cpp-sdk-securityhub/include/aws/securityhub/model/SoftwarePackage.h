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
   * <p>Information about a software package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SoftwarePackage">AWS
   * API Reference</a></p>
   */
  class SoftwarePackage
  {
  public:
    AWS_SECURITYHUB_API SoftwarePackage() = default;
    AWS_SECURITYHUB_API SoftwarePackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SoftwarePackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the software package.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SoftwarePackage& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software package.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    SoftwarePackage& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch of the software package.</p>
     */
    inline const Aws::String& GetEpoch() const { return m_epoch; }
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }
    template<typename EpochT = Aws::String>
    void SetEpoch(EpochT&& value) { m_epochHasBeenSet = true; m_epoch = std::forward<EpochT>(value); }
    template<typename EpochT = Aws::String>
    SoftwarePackage& WithEpoch(EpochT&& value) { SetEpoch(std::forward<EpochT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release of the software package.</p>
     */
    inline const Aws::String& GetRelease() const { return m_release; }
    inline bool ReleaseHasBeenSet() const { return m_releaseHasBeenSet; }
    template<typename ReleaseT = Aws::String>
    void SetRelease(ReleaseT&& value) { m_releaseHasBeenSet = true; m_release = std::forward<ReleaseT>(value); }
    template<typename ReleaseT = Aws::String>
    SoftwarePackage& WithRelease(ReleaseT&& value) { SetRelease(std::forward<ReleaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture used for the software package.</p>
     */
    inline const Aws::String& GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    template<typename ArchitectureT = Aws::String>
    void SetArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture = std::forward<ArchitectureT>(value); }
    template<typename ArchitectureT = Aws::String>
    SoftwarePackage& WithArchitecture(ArchitectureT&& value) { SetArchitecture(std::forward<ArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the package.</p>
     */
    inline const Aws::String& GetPackageManager() const { return m_packageManager; }
    inline bool PackageManagerHasBeenSet() const { return m_packageManagerHasBeenSet; }
    template<typename PackageManagerT = Aws::String>
    void SetPackageManager(PackageManagerT&& value) { m_packageManagerHasBeenSet = true; m_packageManager = std::forward<PackageManagerT>(value); }
    template<typename PackageManagerT = Aws::String>
    SoftwarePackage& WithPackageManager(PackageManagerT&& value) { SetPackageManager(std::forward<PackageManagerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file system path to the package manager inventory file.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    SoftwarePackage& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software package in which the vulnerability has been
     * resolved. </p>
     */
    inline const Aws::String& GetFixedInVersion() const { return m_fixedInVersion; }
    inline bool FixedInVersionHasBeenSet() const { return m_fixedInVersionHasBeenSet; }
    template<typename FixedInVersionT = Aws::String>
    void SetFixedInVersion(FixedInVersionT&& value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion = std::forward<FixedInVersionT>(value); }
    template<typename FixedInVersionT = Aws::String>
    SoftwarePackage& WithFixedInVersion(FixedInVersionT&& value) { SetFixedInVersion(std::forward<FixedInVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the actions a customer can take to resolve the vulnerability in the
     * software package. </p>
     */
    inline const Aws::String& GetRemediation() const { return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    template<typename RemediationT = Aws::String>
    void SetRemediation(RemediationT&& value) { m_remediationHasBeenSet = true; m_remediation = std::forward<RemediationT>(value); }
    template<typename RemediationT = Aws::String>
    SoftwarePackage& WithRemediation(RemediationT&& value) { SetRemediation(std::forward<RemediationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source layer hash of the vulnerable package. </p>
     */
    inline const Aws::String& GetSourceLayerHash() const { return m_sourceLayerHash; }
    inline bool SourceLayerHashHasBeenSet() const { return m_sourceLayerHashHasBeenSet; }
    template<typename SourceLayerHashT = Aws::String>
    void SetSourceLayerHash(SourceLayerHashT&& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = std::forward<SourceLayerHashT>(value); }
    template<typename SourceLayerHashT = Aws::String>
    SoftwarePackage& WithSourceLayerHash(SourceLayerHashT&& value) { SetSourceLayerHash(std::forward<SourceLayerHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source layer. </p>
     */
    inline const Aws::String& GetSourceLayerArn() const { return m_sourceLayerArn; }
    inline bool SourceLayerArnHasBeenSet() const { return m_sourceLayerArnHasBeenSet; }
    template<typename SourceLayerArnT = Aws::String>
    void SetSourceLayerArn(SourceLayerArnT&& value) { m_sourceLayerArnHasBeenSet = true; m_sourceLayerArn = std::forward<SourceLayerArnT>(value); }
    template<typename SourceLayerArnT = Aws::String>
    SoftwarePackage& WithSourceLayerArn(SourceLayerArnT&& value) { SetSourceLayerArn(std::forward<SourceLayerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_epoch;
    bool m_epochHasBeenSet = false;

    Aws::String m_release;
    bool m_releaseHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_packageManager;
    bool m_packageManagerHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    Aws::String m_fixedInVersion;
    bool m_fixedInVersionHasBeenSet = false;

    Aws::String m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::String m_sourceLayerHash;
    bool m_sourceLayerHashHasBeenSet = false;

    Aws::String m_sourceLayerArn;
    bool m_sourceLayerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

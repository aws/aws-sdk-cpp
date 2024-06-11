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
    AWS_SECURITYHUB_API SoftwarePackage();
    AWS_SECURITYHUB_API SoftwarePackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SoftwarePackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the software package.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SoftwarePackage& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SoftwarePackage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SoftwarePackage& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software package.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline SoftwarePackage& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline SoftwarePackage& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline SoftwarePackage& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch of the software package.</p>
     */
    inline const Aws::String& GetEpoch() const{ return m_epoch; }
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }
    inline void SetEpoch(const Aws::String& value) { m_epochHasBeenSet = true; m_epoch = value; }
    inline void SetEpoch(Aws::String&& value) { m_epochHasBeenSet = true; m_epoch = std::move(value); }
    inline void SetEpoch(const char* value) { m_epochHasBeenSet = true; m_epoch.assign(value); }
    inline SoftwarePackage& WithEpoch(const Aws::String& value) { SetEpoch(value); return *this;}
    inline SoftwarePackage& WithEpoch(Aws::String&& value) { SetEpoch(std::move(value)); return *this;}
    inline SoftwarePackage& WithEpoch(const char* value) { SetEpoch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release of the software package.</p>
     */
    inline const Aws::String& GetRelease() const{ return m_release; }
    inline bool ReleaseHasBeenSet() const { return m_releaseHasBeenSet; }
    inline void SetRelease(const Aws::String& value) { m_releaseHasBeenSet = true; m_release = value; }
    inline void SetRelease(Aws::String&& value) { m_releaseHasBeenSet = true; m_release = std::move(value); }
    inline void SetRelease(const char* value) { m_releaseHasBeenSet = true; m_release.assign(value); }
    inline SoftwarePackage& WithRelease(const Aws::String& value) { SetRelease(value); return *this;}
    inline SoftwarePackage& WithRelease(Aws::String&& value) { SetRelease(std::move(value)); return *this;}
    inline SoftwarePackage& WithRelease(const char* value) { SetRelease(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture used for the software package.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }
    inline SoftwarePackage& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}
    inline SoftwarePackage& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}
    inline SoftwarePackage& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the package.</p>
     */
    inline const Aws::String& GetPackageManager() const{ return m_packageManager; }
    inline bool PackageManagerHasBeenSet() const { return m_packageManagerHasBeenSet; }
    inline void SetPackageManager(const Aws::String& value) { m_packageManagerHasBeenSet = true; m_packageManager = value; }
    inline void SetPackageManager(Aws::String&& value) { m_packageManagerHasBeenSet = true; m_packageManager = std::move(value); }
    inline void SetPackageManager(const char* value) { m_packageManagerHasBeenSet = true; m_packageManager.assign(value); }
    inline SoftwarePackage& WithPackageManager(const Aws::String& value) { SetPackageManager(value); return *this;}
    inline SoftwarePackage& WithPackageManager(Aws::String&& value) { SetPackageManager(std::move(value)); return *this;}
    inline SoftwarePackage& WithPackageManager(const char* value) { SetPackageManager(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file system path to the package manager inventory file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline SoftwarePackage& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline SoftwarePackage& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline SoftwarePackage& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software package in which the vulnerability has been
     * resolved. </p>
     */
    inline const Aws::String& GetFixedInVersion() const{ return m_fixedInVersion; }
    inline bool FixedInVersionHasBeenSet() const { return m_fixedInVersionHasBeenSet; }
    inline void SetFixedInVersion(const Aws::String& value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion = value; }
    inline void SetFixedInVersion(Aws::String&& value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion = std::move(value); }
    inline void SetFixedInVersion(const char* value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion.assign(value); }
    inline SoftwarePackage& WithFixedInVersion(const Aws::String& value) { SetFixedInVersion(value); return *this;}
    inline SoftwarePackage& WithFixedInVersion(Aws::String&& value) { SetFixedInVersion(std::move(value)); return *this;}
    inline SoftwarePackage& WithFixedInVersion(const char* value) { SetFixedInVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the actions a customer can take to resolve the vulnerability in the
     * software package. </p>
     */
    inline const Aws::String& GetRemediation() const{ return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    inline void SetRemediation(const Aws::String& value) { m_remediationHasBeenSet = true; m_remediation = value; }
    inline void SetRemediation(Aws::String&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }
    inline void SetRemediation(const char* value) { m_remediationHasBeenSet = true; m_remediation.assign(value); }
    inline SoftwarePackage& WithRemediation(const Aws::String& value) { SetRemediation(value); return *this;}
    inline SoftwarePackage& WithRemediation(Aws::String&& value) { SetRemediation(std::move(value)); return *this;}
    inline SoftwarePackage& WithRemediation(const char* value) { SetRemediation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source layer hash of the vulnerable package. </p>
     */
    inline const Aws::String& GetSourceLayerHash() const{ return m_sourceLayerHash; }
    inline bool SourceLayerHashHasBeenSet() const { return m_sourceLayerHashHasBeenSet; }
    inline void SetSourceLayerHash(const Aws::String& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = value; }
    inline void SetSourceLayerHash(Aws::String&& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = std::move(value); }
    inline void SetSourceLayerHash(const char* value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash.assign(value); }
    inline SoftwarePackage& WithSourceLayerHash(const Aws::String& value) { SetSourceLayerHash(value); return *this;}
    inline SoftwarePackage& WithSourceLayerHash(Aws::String&& value) { SetSourceLayerHash(std::move(value)); return *this;}
    inline SoftwarePackage& WithSourceLayerHash(const char* value) { SetSourceLayerHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source layer. </p>
     */
    inline const Aws::String& GetSourceLayerArn() const{ return m_sourceLayerArn; }
    inline bool SourceLayerArnHasBeenSet() const { return m_sourceLayerArnHasBeenSet; }
    inline void SetSourceLayerArn(const Aws::String& value) { m_sourceLayerArnHasBeenSet = true; m_sourceLayerArn = value; }
    inline void SetSourceLayerArn(Aws::String&& value) { m_sourceLayerArnHasBeenSet = true; m_sourceLayerArn = std::move(value); }
    inline void SetSourceLayerArn(const char* value) { m_sourceLayerArnHasBeenSet = true; m_sourceLayerArn.assign(value); }
    inline SoftwarePackage& WithSourceLayerArn(const Aws::String& value) { SetSourceLayerArn(value); return *this;}
    inline SoftwarePackage& WithSourceLayerArn(Aws::String&& value) { SetSourceLayerArn(std::move(value)); return *this;}
    inline SoftwarePackage& WithSourceLayerArn(const char* value) { SetSourceLayerArn(value); return *this;}
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

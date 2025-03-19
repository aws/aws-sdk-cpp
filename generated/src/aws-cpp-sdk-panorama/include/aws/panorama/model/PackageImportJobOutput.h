/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/OutPutS3Location.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>Results of a package import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/PackageImportJobOutput">AWS
   * API Reference</a></p>
   */
  class PackageImportJobOutput
  {
  public:
    AWS_PANORAMA_API PackageImportJobOutput() = default;
    AWS_PANORAMA_API PackageImportJobOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API PackageImportJobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The package's output location.</p>
     */
    inline const OutPutS3Location& GetOutputS3Location() const { return m_outputS3Location; }
    inline bool OutputS3LocationHasBeenSet() const { return m_outputS3LocationHasBeenSet; }
    template<typename OutputS3LocationT = OutPutS3Location>
    void SetOutputS3Location(OutputS3LocationT&& value) { m_outputS3LocationHasBeenSet = true; m_outputS3Location = std::forward<OutputS3LocationT>(value); }
    template<typename OutputS3LocationT = OutPutS3Location>
    PackageImportJobOutput& WithOutputS3Location(OutputS3LocationT&& value) { SetOutputS3Location(std::forward<OutputS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package's ID.</p>
     */
    inline const Aws::String& GetPackageId() const { return m_packageId; }
    inline bool PackageIdHasBeenSet() const { return m_packageIdHasBeenSet; }
    template<typename PackageIdT = Aws::String>
    void SetPackageId(PackageIdT&& value) { m_packageIdHasBeenSet = true; m_packageId = std::forward<PackageIdT>(value); }
    template<typename PackageIdT = Aws::String>
    PackageImportJobOutput& WithPackageId(PackageIdT&& value) { SetPackageId(std::forward<PackageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package's version.</p>
     */
    inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    template<typename PackageVersionT = Aws::String>
    void SetPackageVersion(PackageVersionT&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::forward<PackageVersionT>(value); }
    template<typename PackageVersionT = Aws::String>
    PackageImportJobOutput& WithPackageVersion(PackageVersionT&& value) { SetPackageVersion(std::forward<PackageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package's patch version.</p>
     */
    inline const Aws::String& GetPatchVersion() const { return m_patchVersion; }
    inline bool PatchVersionHasBeenSet() const { return m_patchVersionHasBeenSet; }
    template<typename PatchVersionT = Aws::String>
    void SetPatchVersion(PatchVersionT&& value) { m_patchVersionHasBeenSet = true; m_patchVersion = std::forward<PatchVersionT>(value); }
    template<typename PatchVersionT = Aws::String>
    PackageImportJobOutput& WithPatchVersion(PatchVersionT&& value) { SetPatchVersion(std::forward<PatchVersionT>(value)); return *this;}
    ///@}
  private:

    OutPutS3Location m_outputS3Location;
    bool m_outputS3LocationHasBeenSet = false;

    Aws::String m_packageId;
    bool m_packageIdHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_patchVersion;
    bool m_patchVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

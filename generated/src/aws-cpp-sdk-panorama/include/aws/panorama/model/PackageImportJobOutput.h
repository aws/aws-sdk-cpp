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
    AWS_PANORAMA_API PackageImportJobOutput();
    AWS_PANORAMA_API PackageImportJobOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API PackageImportJobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The package's output location.</p>
     */
    inline const OutPutS3Location& GetOutputS3Location() const{ return m_outputS3Location; }

    /**
     * <p>The package's output location.</p>
     */
    inline bool OutputS3LocationHasBeenSet() const { return m_outputS3LocationHasBeenSet; }

    /**
     * <p>The package's output location.</p>
     */
    inline void SetOutputS3Location(const OutPutS3Location& value) { m_outputS3LocationHasBeenSet = true; m_outputS3Location = value; }

    /**
     * <p>The package's output location.</p>
     */
    inline void SetOutputS3Location(OutPutS3Location&& value) { m_outputS3LocationHasBeenSet = true; m_outputS3Location = std::move(value); }

    /**
     * <p>The package's output location.</p>
     */
    inline PackageImportJobOutput& WithOutputS3Location(const OutPutS3Location& value) { SetOutputS3Location(value); return *this;}

    /**
     * <p>The package's output location.</p>
     */
    inline PackageImportJobOutput& WithOutputS3Location(OutPutS3Location&& value) { SetOutputS3Location(std::move(value)); return *this;}


    /**
     * <p>The package's ID.</p>
     */
    inline const Aws::String& GetPackageId() const{ return m_packageId; }

    /**
     * <p>The package's ID.</p>
     */
    inline bool PackageIdHasBeenSet() const { return m_packageIdHasBeenSet; }

    /**
     * <p>The package's ID.</p>
     */
    inline void SetPackageId(const Aws::String& value) { m_packageIdHasBeenSet = true; m_packageId = value; }

    /**
     * <p>The package's ID.</p>
     */
    inline void SetPackageId(Aws::String&& value) { m_packageIdHasBeenSet = true; m_packageId = std::move(value); }

    /**
     * <p>The package's ID.</p>
     */
    inline void SetPackageId(const char* value) { m_packageIdHasBeenSet = true; m_packageId.assign(value); }

    /**
     * <p>The package's ID.</p>
     */
    inline PackageImportJobOutput& WithPackageId(const Aws::String& value) { SetPackageId(value); return *this;}

    /**
     * <p>The package's ID.</p>
     */
    inline PackageImportJobOutput& WithPackageId(Aws::String&& value) { SetPackageId(std::move(value)); return *this;}

    /**
     * <p>The package's ID.</p>
     */
    inline PackageImportJobOutput& WithPackageId(const char* value) { SetPackageId(value); return *this;}


    /**
     * <p>The package's version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }

    /**
     * <p>The package's version.</p>
     */
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }

    /**
     * <p>The package's version.</p>
     */
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }

    /**
     * <p>The package's version.</p>
     */
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }

    /**
     * <p>The package's version.</p>
     */
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }

    /**
     * <p>The package's version.</p>
     */
    inline PackageImportJobOutput& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}

    /**
     * <p>The package's version.</p>
     */
    inline PackageImportJobOutput& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}

    /**
     * <p>The package's version.</p>
     */
    inline PackageImportJobOutput& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}


    /**
     * <p>The package's patch version.</p>
     */
    inline const Aws::String& GetPatchVersion() const{ return m_patchVersion; }

    /**
     * <p>The package's patch version.</p>
     */
    inline bool PatchVersionHasBeenSet() const { return m_patchVersionHasBeenSet; }

    /**
     * <p>The package's patch version.</p>
     */
    inline void SetPatchVersion(const Aws::String& value) { m_patchVersionHasBeenSet = true; m_patchVersion = value; }

    /**
     * <p>The package's patch version.</p>
     */
    inline void SetPatchVersion(Aws::String&& value) { m_patchVersionHasBeenSet = true; m_patchVersion = std::move(value); }

    /**
     * <p>The package's patch version.</p>
     */
    inline void SetPatchVersion(const char* value) { m_patchVersionHasBeenSet = true; m_patchVersion.assign(value); }

    /**
     * <p>The package's patch version.</p>
     */
    inline PackageImportJobOutput& WithPatchVersion(const Aws::String& value) { SetPatchVersion(value); return *this;}

    /**
     * <p>The package's patch version.</p>
     */
    inline PackageImportJobOutput& WithPatchVersion(Aws::String&& value) { SetPatchVersion(std::move(value)); return *this;}

    /**
     * <p>The package's patch version.</p>
     */
    inline PackageImportJobOutput& WithPatchVersion(const char* value) { SetPatchVersion(value); return *this;}

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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/PackageVersionInputConfig.h>
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
   * <p>A configuration for a package import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/PackageImportJobInputConfig">AWS
   * API Reference</a></p>
   */
  class PackageImportJobInputConfig
  {
  public:
    AWS_PANORAMA_API PackageImportJobInputConfig();
    AWS_PANORAMA_API PackageImportJobInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API PackageImportJobInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The package version's input configuration.</p>
     */
    inline const PackageVersionInputConfig& GetPackageVersionInputConfig() const{ return m_packageVersionInputConfig; }

    /**
     * <p>The package version's input configuration.</p>
     */
    inline bool PackageVersionInputConfigHasBeenSet() const { return m_packageVersionInputConfigHasBeenSet; }

    /**
     * <p>The package version's input configuration.</p>
     */
    inline void SetPackageVersionInputConfig(const PackageVersionInputConfig& value) { m_packageVersionInputConfigHasBeenSet = true; m_packageVersionInputConfig = value; }

    /**
     * <p>The package version's input configuration.</p>
     */
    inline void SetPackageVersionInputConfig(PackageVersionInputConfig&& value) { m_packageVersionInputConfigHasBeenSet = true; m_packageVersionInputConfig = std::move(value); }

    /**
     * <p>The package version's input configuration.</p>
     */
    inline PackageImportJobInputConfig& WithPackageVersionInputConfig(const PackageVersionInputConfig& value) { SetPackageVersionInputConfig(value); return *this;}

    /**
     * <p>The package version's input configuration.</p>
     */
    inline PackageImportJobInputConfig& WithPackageVersionInputConfig(PackageVersionInputConfig&& value) { SetPackageVersionInputConfig(std::move(value)); return *this;}

  private:

    PackageVersionInputConfig m_packageVersionInputConfig;
    bool m_packageVersionInputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

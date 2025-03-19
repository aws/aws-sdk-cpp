/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/PackageVersionOutputConfig.h>
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
   * <p>An output configuration for a package import job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/PackageImportJobOutputConfig">AWS
   * API Reference</a></p>
   */
  class PackageImportJobOutputConfig
  {
  public:
    AWS_PANORAMA_API PackageImportJobOutputConfig() = default;
    AWS_PANORAMA_API PackageImportJobOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API PackageImportJobOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The package version's output configuration.</p>
     */
    inline const PackageVersionOutputConfig& GetPackageVersionOutputConfig() const { return m_packageVersionOutputConfig; }
    inline bool PackageVersionOutputConfigHasBeenSet() const { return m_packageVersionOutputConfigHasBeenSet; }
    template<typename PackageVersionOutputConfigT = PackageVersionOutputConfig>
    void SetPackageVersionOutputConfig(PackageVersionOutputConfigT&& value) { m_packageVersionOutputConfigHasBeenSet = true; m_packageVersionOutputConfig = std::forward<PackageVersionOutputConfigT>(value); }
    template<typename PackageVersionOutputConfigT = PackageVersionOutputConfig>
    PackageImportJobOutputConfig& WithPackageVersionOutputConfig(PackageVersionOutputConfigT&& value) { SetPackageVersionOutputConfig(std::forward<PackageVersionOutputConfigT>(value)); return *this;}
    ///@}
  private:

    PackageVersionOutputConfig m_packageVersionOutputConfig;
    bool m_packageVersionOutputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

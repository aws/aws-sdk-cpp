﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
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
   * <p>A package version output configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/PackageVersionOutputConfig">AWS
   * API Reference</a></p>
   */
  class PackageVersionOutputConfig
  {
  public:
    AWS_PANORAMA_API PackageVersionOutputConfig();
    AWS_PANORAMA_API PackageVersionOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API PackageVersionOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates that the version is recommended for all users.</p>
     */
    inline bool GetMarkLatest() const{ return m_markLatest; }
    inline bool MarkLatestHasBeenSet() const { return m_markLatestHasBeenSet; }
    inline void SetMarkLatest(bool value) { m_markLatestHasBeenSet = true; m_markLatest = value; }
    inline PackageVersionOutputConfig& WithMarkLatest(bool value) { SetMarkLatest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output's package name.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline PackageVersionOutputConfig& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline PackageVersionOutputConfig& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline PackageVersionOutputConfig& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output's package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }
    inline PackageVersionOutputConfig& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}
    inline PackageVersionOutputConfig& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}
    inline PackageVersionOutputConfig& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}
    ///@}
  private:

    bool m_markLatest;
    bool m_markLatestHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

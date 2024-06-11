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
   * <p>A package object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/PackageObject">AWS
   * API Reference</a></p>
   */
  class PackageObject
  {
  public:
    AWS_PANORAMA_API PackageObject();
    AWS_PANORAMA_API PackageObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API PackageObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The object's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PackageObject& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PackageObject& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PackageObject& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object's package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }
    inline PackageObject& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}
    inline PackageObject& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}
    inline PackageObject& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object's patch version.</p>
     */
    inline const Aws::String& GetPatchVersion() const{ return m_patchVersion; }
    inline bool PatchVersionHasBeenSet() const { return m_patchVersionHasBeenSet; }
    inline void SetPatchVersion(const Aws::String& value) { m_patchVersionHasBeenSet = true; m_patchVersion = value; }
    inline void SetPatchVersion(Aws::String&& value) { m_patchVersionHasBeenSet = true; m_patchVersion = std::move(value); }
    inline void SetPatchVersion(const char* value) { m_patchVersionHasBeenSet = true; m_patchVersion.assign(value); }
    inline PackageObject& WithPatchVersion(const Aws::String& value) { SetPatchVersion(value); return *this;}
    inline PackageObject& WithPatchVersion(Aws::String&& value) { SetPatchVersion(std::move(value)); return *this;}
    inline PackageObject& WithPatchVersion(const char* value) { SetPatchVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_patchVersion;
    bool m_patchVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

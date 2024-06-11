﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure contains information about one canary runtime version. For
   * more information about runtime versions, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
   * Canary Runtime Versions</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/RuntimeVersion">AWS
   * API Reference</a></p>
   */
  class RuntimeVersion
  {
  public:
    AWS_SYNTHETICS_API RuntimeVersion();
    AWS_SYNTHETICS_API RuntimeVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API RuntimeVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the runtime version. For a list of valid runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline RuntimeVersion& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline RuntimeVersion& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline RuntimeVersion& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the runtime version, created by Amazon.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RuntimeVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RuntimeVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RuntimeVersion& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the runtime version was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseDate() const{ return m_releaseDate; }
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }
    inline void SetReleaseDate(const Aws::Utils::DateTime& value) { m_releaseDateHasBeenSet = true; m_releaseDate = value; }
    inline void SetReleaseDate(Aws::Utils::DateTime&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::move(value); }
    inline RuntimeVersion& WithReleaseDate(const Aws::Utils::DateTime& value) { SetReleaseDate(value); return *this;}
    inline RuntimeVersion& WithReleaseDate(Aws::Utils::DateTime&& value) { SetReleaseDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this runtime version is deprecated, this value is the date of
     * deprecation.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const{ return m_deprecationDate; }
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
    inline void SetDeprecationDate(const Aws::Utils::DateTime& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }
    inline void SetDeprecationDate(Aws::Utils::DateTime&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::move(value); }
    inline RuntimeVersion& WithDeprecationDate(const Aws::Utils::DateTime& value) { SetDeprecationDate(value); return *this;}
    inline RuntimeVersion& WithDeprecationDate(Aws::Utils::DateTime&& value) { SetDeprecationDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_releaseDate;
    bool m_releaseDateHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationDate;
    bool m_deprecationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

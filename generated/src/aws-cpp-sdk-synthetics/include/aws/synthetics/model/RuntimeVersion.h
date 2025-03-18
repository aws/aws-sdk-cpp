/**
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
    AWS_SYNTHETICS_API RuntimeVersion() = default;
    AWS_SYNTHETICS_API RuntimeVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API RuntimeVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the runtime version. For a list of valid runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    RuntimeVersion& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the runtime version, created by Amazon.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RuntimeVersion& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the runtime version was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseDate() const { return m_releaseDate; }
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }
    template<typename ReleaseDateT = Aws::Utils::DateTime>
    void SetReleaseDate(ReleaseDateT&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::forward<ReleaseDateT>(value); }
    template<typename ReleaseDateT = Aws::Utils::DateTime>
    RuntimeVersion& WithReleaseDate(ReleaseDateT&& value) { SetReleaseDate(std::forward<ReleaseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this runtime version is deprecated, this value is the date of
     * deprecation.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const { return m_deprecationDate; }
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
    template<typename DeprecationDateT = Aws::Utils::DateTime>
    void SetDeprecationDate(DeprecationDateT&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::forward<DeprecationDateT>(value); }
    template<typename DeprecationDateT = Aws::Utils::DateTime>
    RuntimeVersion& WithDeprecationDate(DeprecationDateT&& value) { SetDeprecationDate(std::forward<DeprecationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_releaseDate{};
    bool m_releaseDateHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationDate{};
    bool m_deprecationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ImageSetConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The logo set configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LogoSetConfiguration">AWS
   * API Reference</a></p>
   */
  class LogoSetConfiguration
  {
  public:
    AWS_QUICKSIGHT_API LogoSetConfiguration() = default;
    AWS_QUICKSIGHT_API LogoSetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LogoSetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The primary logo.</p>
     */
    inline const ImageSetConfiguration& GetPrimary() const { return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    template<typename PrimaryT = ImageSetConfiguration>
    void SetPrimary(PrimaryT&& value) { m_primaryHasBeenSet = true; m_primary = std::forward<PrimaryT>(value); }
    template<typename PrimaryT = ImageSetConfiguration>
    LogoSetConfiguration& WithPrimary(PrimaryT&& value) { SetPrimary(std::forward<PrimaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The favicon logo.</p>
     */
    inline const ImageSetConfiguration& GetFavicon() const { return m_favicon; }
    inline bool FaviconHasBeenSet() const { return m_faviconHasBeenSet; }
    template<typename FaviconT = ImageSetConfiguration>
    void SetFavicon(FaviconT&& value) { m_faviconHasBeenSet = true; m_favicon = std::forward<FaviconT>(value); }
    template<typename FaviconT = ImageSetConfiguration>
    LogoSetConfiguration& WithFavicon(FaviconT&& value) { SetFavicon(std::forward<FaviconT>(value)); return *this;}
    ///@}
  private:

    ImageSetConfiguration m_primary;
    bool m_primaryHasBeenSet = false;

    ImageSetConfiguration m_favicon;
    bool m_faviconHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

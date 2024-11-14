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
    AWS_QUICKSIGHT_API LogoSetConfiguration();
    AWS_QUICKSIGHT_API LogoSetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LogoSetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The primary logo.</p>
     */
    inline const ImageSetConfiguration& GetPrimary() const{ return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    inline void SetPrimary(const ImageSetConfiguration& value) { m_primaryHasBeenSet = true; m_primary = value; }
    inline void SetPrimary(ImageSetConfiguration&& value) { m_primaryHasBeenSet = true; m_primary = std::move(value); }
    inline LogoSetConfiguration& WithPrimary(const ImageSetConfiguration& value) { SetPrimary(value); return *this;}
    inline LogoSetConfiguration& WithPrimary(ImageSetConfiguration&& value) { SetPrimary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The favicon logo.</p>
     */
    inline const ImageSetConfiguration& GetFavicon() const{ return m_favicon; }
    inline bool FaviconHasBeenSet() const { return m_faviconHasBeenSet; }
    inline void SetFavicon(const ImageSetConfiguration& value) { m_faviconHasBeenSet = true; m_favicon = value; }
    inline void SetFavicon(ImageSetConfiguration&& value) { m_faviconHasBeenSet = true; m_favicon = std::move(value); }
    inline LogoSetConfiguration& WithFavicon(const ImageSetConfiguration& value) { SetFavicon(value); return *this;}
    inline LogoSetConfiguration& WithFavicon(ImageSetConfiguration&& value) { SetFavicon(std::move(value)); return *this;}
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

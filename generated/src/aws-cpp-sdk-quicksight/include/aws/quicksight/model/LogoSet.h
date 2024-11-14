/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ImageSet.h>
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
   * <p>A set of logos.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LogoSet">AWS
   * API Reference</a></p>
   */
  class LogoSet
  {
  public:
    AWS_QUICKSIGHT_API LogoSet();
    AWS_QUICKSIGHT_API LogoSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LogoSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The primary logo.</p>
     */
    inline const ImageSet& GetPrimary() const{ return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    inline void SetPrimary(const ImageSet& value) { m_primaryHasBeenSet = true; m_primary = value; }
    inline void SetPrimary(ImageSet&& value) { m_primaryHasBeenSet = true; m_primary = std::move(value); }
    inline LogoSet& WithPrimary(const ImageSet& value) { SetPrimary(value); return *this;}
    inline LogoSet& WithPrimary(ImageSet&& value) { SetPrimary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The favicon logo.</p>
     */
    inline const ImageSet& GetFavicon() const{ return m_favicon; }
    inline bool FaviconHasBeenSet() const { return m_faviconHasBeenSet; }
    inline void SetFavicon(const ImageSet& value) { m_faviconHasBeenSet = true; m_favicon = value; }
    inline void SetFavicon(ImageSet&& value) { m_faviconHasBeenSet = true; m_favicon = std::move(value); }
    inline LogoSet& WithFavicon(const ImageSet& value) { SetFavicon(value); return *this;}
    inline LogoSet& WithFavicon(ImageSet&& value) { SetFavicon(std::move(value)); return *this;}
    ///@}
  private:

    ImageSet m_primary;
    bool m_primaryHasBeenSet = false;

    ImageSet m_favicon;
    bool m_faviconHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/LogoSet.h>
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
   * <p>The logo configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Logo">AWS API
   * Reference</a></p>
   */
  class Logo
  {
  public:
    AWS_QUICKSIGHT_API Logo();
    AWS_QUICKSIGHT_API Logo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Logo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alt text for the logo.</p>
     */
    inline const Aws::String& GetAltText() const{ return m_altText; }
    inline bool AltTextHasBeenSet() const { return m_altTextHasBeenSet; }
    inline void SetAltText(const Aws::String& value) { m_altTextHasBeenSet = true; m_altText = value; }
    inline void SetAltText(Aws::String&& value) { m_altTextHasBeenSet = true; m_altText = std::move(value); }
    inline void SetAltText(const char* value) { m_altTextHasBeenSet = true; m_altText.assign(value); }
    inline Logo& WithAltText(const Aws::String& value) { SetAltText(value); return *this;}
    inline Logo& WithAltText(Aws::String&& value) { SetAltText(std::move(value)); return *this;}
    inline Logo& WithAltText(const char* value) { SetAltText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of configured logos.</p>
     */
    inline const LogoSet& GetLogoSet() const{ return m_logoSet; }
    inline bool LogoSetHasBeenSet() const { return m_logoSetHasBeenSet; }
    inline void SetLogoSet(const LogoSet& value) { m_logoSetHasBeenSet = true; m_logoSet = value; }
    inline void SetLogoSet(LogoSet&& value) { m_logoSetHasBeenSet = true; m_logoSet = std::move(value); }
    inline Logo& WithLogoSet(const LogoSet& value) { SetLogoSet(value); return *this;}
    inline Logo& WithLogoSet(LogoSet&& value) { SetLogoSet(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_altText;
    bool m_altTextHasBeenSet = false;

    LogoSet m_logoSet;
    bool m_logoSetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

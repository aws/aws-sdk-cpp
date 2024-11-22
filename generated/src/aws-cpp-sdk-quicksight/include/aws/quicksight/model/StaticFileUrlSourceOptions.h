/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The structure that contains the URL to download the static file
   * from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StaticFileUrlSourceOptions">AWS
   * API Reference</a></p>
   */
  class StaticFileUrlSourceOptions
  {
  public:
    AWS_QUICKSIGHT_API StaticFileUrlSourceOptions();
    AWS_QUICKSIGHT_API StaticFileUrlSourceOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StaticFileUrlSourceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL to download the static file from.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline StaticFileUrlSourceOptions& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline StaticFileUrlSourceOptions& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline StaticFileUrlSourceOptions& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

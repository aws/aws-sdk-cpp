/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/StaticFileUrlSourceOptions.h>
#include <aws/quicksight/model/StaticFileS3SourceOptions.h>
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
   * <p>The source of the static file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StaticFileSource">AWS
   * API Reference</a></p>
   */
  class StaticFileSource
  {
  public:
    AWS_QUICKSIGHT_API StaticFileSource() = default;
    AWS_QUICKSIGHT_API StaticFileSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StaticFileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The structure that contains the URL to download the static file from.</p>
     */
    inline const StaticFileUrlSourceOptions& GetUrlOptions() const { return m_urlOptions; }
    inline bool UrlOptionsHasBeenSet() const { return m_urlOptionsHasBeenSet; }
    template<typename UrlOptionsT = StaticFileUrlSourceOptions>
    void SetUrlOptions(UrlOptionsT&& value) { m_urlOptionsHasBeenSet = true; m_urlOptions = std::forward<UrlOptionsT>(value); }
    template<typename UrlOptionsT = StaticFileUrlSourceOptions>
    StaticFileSource& WithUrlOptions(UrlOptionsT&& value) { SetUrlOptions(std::forward<UrlOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure that contains the Amazon S3 location to download the static
     * file from.</p>
     */
    inline const StaticFileS3SourceOptions& GetS3Options() const { return m_s3Options; }
    inline bool S3OptionsHasBeenSet() const { return m_s3OptionsHasBeenSet; }
    template<typename S3OptionsT = StaticFileS3SourceOptions>
    void SetS3Options(S3OptionsT&& value) { m_s3OptionsHasBeenSet = true; m_s3Options = std::forward<S3OptionsT>(value); }
    template<typename S3OptionsT = StaticFileS3SourceOptions>
    StaticFileSource& WithS3Options(S3OptionsT&& value) { SetS3Options(std::forward<S3OptionsT>(value)); return *this;}
    ///@}
  private:

    StaticFileUrlSourceOptions m_urlOptions;
    bool m_urlOptionsHasBeenSet = false;

    StaticFileS3SourceOptions m_s3Options;
    bool m_s3OptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataFormat.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>Specifies the format and S3 location of the parallel data input
   * file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ParallelDataConfig">AWS
   * API Reference</a></p>
   */
  class ParallelDataConfig
  {
  public:
    AWS_TRANSLATE_API ParallelDataConfig() = default;
    AWS_TRANSLATE_API ParallelDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API ParallelDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of the Amazon S3 folder that contains the parallel data input file.
     * The folder must be in the same Region as the API endpoint you are calling.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    ParallelDataConfig& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the parallel data input file.</p>
     */
    inline ParallelDataFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(ParallelDataFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline ParallelDataConfig& WithFormat(ParallelDataFormat value) { SetFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    ParallelDataFormat m_format{ParallelDataFormat::NOT_SET};
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws

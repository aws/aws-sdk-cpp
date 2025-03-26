/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * The input file that needs to be analyzed.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ProbeInputFile">AWS
   * API Reference</a></p>
   */
  class ProbeInputFile
  {
  public:
    AWS_MEDIACONVERT_API ProbeInputFile() = default;
    AWS_MEDIACONVERT_API ProbeInputFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ProbeInputFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the S3, HTTP, or HTTPS URL for your media file.
     */
    inline const Aws::String& GetFileUrl() const { return m_fileUrl; }
    inline bool FileUrlHasBeenSet() const { return m_fileUrlHasBeenSet; }
    template<typename FileUrlT = Aws::String>
    void SetFileUrl(FileUrlT&& value) { m_fileUrlHasBeenSet = true; m_fileUrl = std::forward<FileUrlT>(value); }
    template<typename FileUrlT = Aws::String>
    ProbeInputFile& WithFileUrl(FileUrlT&& value) { SetFileUrl(std::forward<FileUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileUrl;
    bool m_fileUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

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
    AWS_MEDIACONVERT_API ProbeInputFile();
    AWS_MEDIACONVERT_API ProbeInputFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ProbeInputFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The URI to your input file(s) that is stored in Amazon S3 or on an HTTP(S)
     * server.
     */
    inline const Aws::String& GetFileUrl() const{ return m_fileUrl; }
    inline bool FileUrlHasBeenSet() const { return m_fileUrlHasBeenSet; }
    inline void SetFileUrl(const Aws::String& value) { m_fileUrlHasBeenSet = true; m_fileUrl = value; }
    inline void SetFileUrl(Aws::String&& value) { m_fileUrlHasBeenSet = true; m_fileUrl = std::move(value); }
    inline void SetFileUrl(const char* value) { m_fileUrlHasBeenSet = true; m_fileUrl.assign(value); }
    inline ProbeInputFile& WithFileUrl(const Aws::String& value) { SetFileUrl(value); return *this;}
    inline ProbeInputFile& WithFileUrl(Aws::String&& value) { SetFileUrl(std::move(value)); return *this;}
    inline ProbeInputFile& WithFileUrl(const char* value) { SetFileUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_fileUrl;
    bool m_fileUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

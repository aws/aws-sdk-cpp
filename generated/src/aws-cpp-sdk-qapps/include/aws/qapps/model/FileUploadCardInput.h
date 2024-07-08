/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/CardType.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>Represents a file upload card. It can optionally receive a
   * <code>filename</code> and <code>fileId</code> to set a default file. If not
   * received, the user must provide the file when the Q App runs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/FileUploadCardInput">AWS
   * API Reference</a></p>
   */
  class FileUploadCardInput
  {
  public:
    AWS_QAPPS_API FileUploadCardInput();
    AWS_QAPPS_API FileUploadCardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API FileUploadCardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title or label of the file upload card.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline FileUploadCardInput& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline FileUploadCardInput& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline FileUploadCardInput& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the file upload card.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FileUploadCardInput& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FileUploadCardInput& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FileUploadCardInput& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline const CardType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CardType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CardType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FileUploadCardInput& WithType(const CardType& value) { SetType(value); return *this;}
    inline FileUploadCardInput& WithType(CardType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default filename to use for the file upload card.</p>
     */
    inline const Aws::String& GetFilename() const{ return m_filename; }
    inline bool FilenameHasBeenSet() const { return m_filenameHasBeenSet; }
    inline void SetFilename(const Aws::String& value) { m_filenameHasBeenSet = true; m_filename = value; }
    inline void SetFilename(Aws::String&& value) { m_filenameHasBeenSet = true; m_filename = std::move(value); }
    inline void SetFilename(const char* value) { m_filenameHasBeenSet = true; m_filename.assign(value); }
    inline FileUploadCardInput& WithFilename(const Aws::String& value) { SetFilename(value); return *this;}
    inline FileUploadCardInput& WithFilename(Aws::String&& value) { SetFilename(std::move(value)); return *this;}
    inline FileUploadCardInput& WithFilename(const char* value) { SetFilename(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a pre-uploaded file associated with the card.</p>
     */
    inline const Aws::String& GetFileId() const{ return m_fileId; }
    inline bool FileIdHasBeenSet() const { return m_fileIdHasBeenSet; }
    inline void SetFileId(const Aws::String& value) { m_fileIdHasBeenSet = true; m_fileId = value; }
    inline void SetFileId(Aws::String&& value) { m_fileIdHasBeenSet = true; m_fileId = std::move(value); }
    inline void SetFileId(const char* value) { m_fileIdHasBeenSet = true; m_fileId.assign(value); }
    inline FileUploadCardInput& WithFileId(const Aws::String& value) { SetFileId(value); return *this;}
    inline FileUploadCardInput& WithFileId(Aws::String&& value) { SetFileId(std::move(value)); return *this;}
    inline FileUploadCardInput& WithFileId(const char* value) { SetFileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating if the user can override the default file for the upload
     * card.</p>
     */
    inline bool GetAllowOverride() const{ return m_allowOverride; }
    inline bool AllowOverrideHasBeenSet() const { return m_allowOverrideHasBeenSet; }
    inline void SetAllowOverride(bool value) { m_allowOverrideHasBeenSet = true; m_allowOverride = value; }
    inline FileUploadCardInput& WithAllowOverride(bool value) { SetAllowOverride(value); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CardType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_filename;
    bool m_filenameHasBeenSet = false;

    Aws::String m_fileId;
    bool m_fileIdHasBeenSet = false;

    bool m_allowOverride;
    bool m_allowOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws

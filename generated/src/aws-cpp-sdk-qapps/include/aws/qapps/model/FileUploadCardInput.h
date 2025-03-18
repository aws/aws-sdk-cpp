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
    AWS_QAPPS_API FileUploadCardInput() = default;
    AWS_QAPPS_API FileUploadCardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API FileUploadCardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title or label of the file upload card.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    FileUploadCardInput& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the file upload card.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FileUploadCardInput& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline CardType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CardType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FileUploadCardInput& WithType(CardType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default filename to use for the file upload card.</p>
     */
    inline const Aws::String& GetFilename() const { return m_filename; }
    inline bool FilenameHasBeenSet() const { return m_filenameHasBeenSet; }
    template<typename FilenameT = Aws::String>
    void SetFilename(FilenameT&& value) { m_filenameHasBeenSet = true; m_filename = std::forward<FilenameT>(value); }
    template<typename FilenameT = Aws::String>
    FileUploadCardInput& WithFilename(FilenameT&& value) { SetFilename(std::forward<FilenameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a pre-uploaded file associated with the card.</p>
     */
    inline const Aws::String& GetFileId() const { return m_fileId; }
    inline bool FileIdHasBeenSet() const { return m_fileIdHasBeenSet; }
    template<typename FileIdT = Aws::String>
    void SetFileId(FileIdT&& value) { m_fileIdHasBeenSet = true; m_fileId = std::forward<FileIdT>(value); }
    template<typename FileIdT = Aws::String>
    FileUploadCardInput& WithFileId(FileIdT&& value) { SetFileId(std::forward<FileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating if the user can override the default file for the upload
     * card.</p>
     */
    inline bool GetAllowOverride() const { return m_allowOverride; }
    inline bool AllowOverrideHasBeenSet() const { return m_allowOverrideHasBeenSet; }
    inline void SetAllowOverride(bool value) { m_allowOverrideHasBeenSet = true; m_allowOverride = value; }
    inline FileUploadCardInput& WithAllowOverride(bool value) { SetAllowOverride(value); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CardType m_type{CardType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_filename;
    bool m_filenameHasBeenSet = false;

    Aws::String m_fileId;
    bool m_fileIdHasBeenSet = false;

    bool m_allowOverride{false};
    bool m_allowOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws

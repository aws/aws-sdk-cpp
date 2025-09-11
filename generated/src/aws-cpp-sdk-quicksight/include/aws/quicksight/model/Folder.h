/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FolderType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/SharingModel.h>
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
   * <p>A folder in QuickSight.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Folder">AWS
   * API Reference</a></p>
   */
  class Folder
  {
  public:
    AWS_QUICKSIGHT_API Folder() = default;
    AWS_QUICKSIGHT_API Folder(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Folder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const { return m_folderId; }
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }
    template<typename FolderIdT = Aws::String>
    void SetFolderId(FolderIdT&& value) { m_folderIdHasBeenSet = true; m_folderId = std::forward<FolderIdT>(value); }
    template<typename FolderIdT = Aws::String>
    Folder& WithFolderId(FolderIdT&& value) { SetFolderId(std::forward<FolderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the folder.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Folder& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for the folder.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Folder& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of folder it is.</p>
     */
    inline FolderType GetFolderType() const { return m_folderType; }
    inline bool FolderTypeHasBeenSet() const { return m_folderTypeHasBeenSet; }
    inline void SetFolderType(FolderType value) { m_folderTypeHasBeenSet = true; m_folderType = value; }
    inline Folder& WithFolderType(FolderType value) { SetFolderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of ancestor ARN strings for the folder.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderPath() const { return m_folderPath; }
    inline bool FolderPathHasBeenSet() const { return m_folderPathHasBeenSet; }
    template<typename FolderPathT = Aws::Vector<Aws::String>>
    void SetFolderPath(FolderPathT&& value) { m_folderPathHasBeenSet = true; m_folderPath = std::forward<FolderPathT>(value); }
    template<typename FolderPathT = Aws::Vector<Aws::String>>
    Folder& WithFolderPath(FolderPathT&& value) { SetFolderPath(std::forward<FolderPathT>(value)); return *this;}
    template<typename FolderPathT = Aws::String>
    Folder& AddFolderPath(FolderPathT&& value) { m_folderPathHasBeenSet = true; m_folderPath.emplace_back(std::forward<FolderPathT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the folder was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Folder& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Folder& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sharing scope of the folder.</p>
     */
    inline SharingModel GetSharingModel() const { return m_sharingModel; }
    inline bool SharingModelHasBeenSet() const { return m_sharingModelHasBeenSet; }
    inline void SetSharingModel(SharingModel value) { m_sharingModelHasBeenSet = true; m_sharingModel = value; }
    inline Folder& WithSharingModel(SharingModel value) { SetSharingModel(value); return *this;}
    ///@}
  private:

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FolderType m_folderType{FolderType::NOT_SET};
    bool m_folderTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_folderPath;
    bool m_folderPathHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    SharingModel m_sharingModel{SharingModel::NOT_SET};
    bool m_sharingModelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

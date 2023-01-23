/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FolderType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A summary of information about an existing Amazon QuickSight folder.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FolderSummary">AWS
   * API Reference</a></p>
   */
  class FolderSummary
  {
  public:
    AWS_QUICKSIGHT_API FolderSummary();
    AWS_QUICKSIGHT_API FolderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FolderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline FolderSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline FolderSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline FolderSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const Aws::String& value) { m_folderIdHasBeenSet = true; m_folderId = value; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(Aws::String&& value) { m_folderIdHasBeenSet = true; m_folderId = std::move(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const char* value) { m_folderIdHasBeenSet = true; m_folderId.assign(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline FolderSummary& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline FolderSummary& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline FolderSummary& WithFolderId(const char* value) { SetFolderId(value); return *this;}


    /**
     * <p>The display name of the folder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name of the folder.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name of the folder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name of the folder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name of the folder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name of the folder.</p>
     */
    inline FolderSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name of the folder.</p>
     */
    inline FolderSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name of the folder.</p>
     */
    inline FolderSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of folder.</p>
     */
    inline const FolderType& GetFolderType() const{ return m_folderType; }

    /**
     * <p>The type of folder.</p>
     */
    inline bool FolderTypeHasBeenSet() const { return m_folderTypeHasBeenSet; }

    /**
     * <p>The type of folder.</p>
     */
    inline void SetFolderType(const FolderType& value) { m_folderTypeHasBeenSet = true; m_folderType = value; }

    /**
     * <p>The type of folder.</p>
     */
    inline void SetFolderType(FolderType&& value) { m_folderTypeHasBeenSet = true; m_folderType = std::move(value); }

    /**
     * <p>The type of folder.</p>
     */
    inline FolderSummary& WithFolderType(const FolderType& value) { SetFolderType(value); return *this;}

    /**
     * <p>The type of folder.</p>
     */
    inline FolderSummary& WithFolderType(FolderType&& value) { SetFolderType(std::move(value)); return *this;}


    /**
     * <p>The time that the folder was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that the folder was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time that the folder was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time that the folder was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time that the folder was created.</p>
     */
    inline FolderSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that the folder was created.</p>
     */
    inline FolderSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline FolderSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline FolderSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FolderType m_folderType;
    bool m_folderTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

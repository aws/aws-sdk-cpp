/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/VersionStatus.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p> Annotation store versions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/AnnotationStoreVersionItem">AWS
   * API Reference</a></p>
   */
  class AnnotationStoreVersionItem
  {
  public:
    AWS_OMICS_API AnnotationStoreVersionItem();
    AWS_OMICS_API AnnotationStoreVersionItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API AnnotationStoreVersionItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The store ID for an annotation store version. </p>
     */
    inline const Aws::String& GetStoreId() const{ return m_storeId; }
    inline bool StoreIdHasBeenSet() const { return m_storeIdHasBeenSet; }
    inline void SetStoreId(const Aws::String& value) { m_storeIdHasBeenSet = true; m_storeId = value; }
    inline void SetStoreId(Aws::String&& value) { m_storeIdHasBeenSet = true; m_storeId = std::move(value); }
    inline void SetStoreId(const char* value) { m_storeIdHasBeenSet = true; m_storeId.assign(value); }
    inline AnnotationStoreVersionItem& WithStoreId(const Aws::String& value) { SetStoreId(value); return *this;}
    inline AnnotationStoreVersionItem& WithStoreId(Aws::String&& value) { SetStoreId(std::move(value)); return *this;}
    inline AnnotationStoreVersionItem& WithStoreId(const char* value) { SetStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The annotation store version ID. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AnnotationStoreVersionItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AnnotationStoreVersionItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AnnotationStoreVersionItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of an annotation store version. </p>
     */
    inline const VersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AnnotationStoreVersionItem& WithStatus(const VersionStatus& value) { SetStatus(value); return *this;}
    inline AnnotationStoreVersionItem& WithStatus(VersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Arn for an annotation store version. </p>
     */
    inline const Aws::String& GetVersionArn() const{ return m_versionArn; }
    inline bool VersionArnHasBeenSet() const { return m_versionArnHasBeenSet; }
    inline void SetVersionArn(const Aws::String& value) { m_versionArnHasBeenSet = true; m_versionArn = value; }
    inline void SetVersionArn(Aws::String&& value) { m_versionArnHasBeenSet = true; m_versionArn = std::move(value); }
    inline void SetVersionArn(const char* value) { m_versionArnHasBeenSet = true; m_versionArn.assign(value); }
    inline AnnotationStoreVersionItem& WithVersionArn(const Aws::String& value) { SetVersionArn(value); return *this;}
    inline AnnotationStoreVersionItem& WithVersionArn(Aws::String&& value) { SetVersionArn(std::move(value)); return *this;}
    inline AnnotationStoreVersionItem& WithVersionArn(const char* value) { SetVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A name given to an annotation store version to distinguish it from others.
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AnnotationStoreVersionItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AnnotationStoreVersionItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AnnotationStoreVersionItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of an annotation store version. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline AnnotationStoreVersionItem& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline AnnotationStoreVersionItem& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline AnnotationStoreVersionItem& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of an annotation store version. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AnnotationStoreVersionItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AnnotationStoreVersionItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AnnotationStoreVersionItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for when an annotation store version was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AnnotationStoreVersionItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AnnotationStoreVersionItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for when an annotation store version was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline AnnotationStoreVersionItem& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline AnnotationStoreVersionItem& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of an annotation store version. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline AnnotationStoreVersionItem& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline AnnotationStoreVersionItem& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline AnnotationStoreVersionItem& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of an annotation store version in Bytes. </p>
     */
    inline long long GetVersionSizeBytes() const{ return m_versionSizeBytes; }
    inline bool VersionSizeBytesHasBeenSet() const { return m_versionSizeBytesHasBeenSet; }
    inline void SetVersionSizeBytes(long long value) { m_versionSizeBytesHasBeenSet = true; m_versionSizeBytes = value; }
    inline AnnotationStoreVersionItem& WithVersionSizeBytes(long long value) { SetVersionSizeBytes(value); return *this;}
    ///@}
  private:

    Aws::String m_storeId;
    bool m_storeIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    VersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_versionArn;
    bool m_versionArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_versionSizeBytes;
    bool m_versionSizeBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

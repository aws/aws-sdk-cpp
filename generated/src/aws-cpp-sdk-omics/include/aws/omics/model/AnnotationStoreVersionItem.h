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
    AWS_OMICS_API AnnotationStoreVersionItem() = default;
    AWS_OMICS_API AnnotationStoreVersionItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API AnnotationStoreVersionItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The store ID for an annotation store version. </p>
     */
    inline const Aws::String& GetStoreId() const { return m_storeId; }
    inline bool StoreIdHasBeenSet() const { return m_storeIdHasBeenSet; }
    template<typename StoreIdT = Aws::String>
    void SetStoreId(StoreIdT&& value) { m_storeIdHasBeenSet = true; m_storeId = std::forward<StoreIdT>(value); }
    template<typename StoreIdT = Aws::String>
    AnnotationStoreVersionItem& WithStoreId(StoreIdT&& value) { SetStoreId(std::forward<StoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The annotation store version ID. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AnnotationStoreVersionItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of an annotation store version. </p>
     */
    inline VersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(VersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AnnotationStoreVersionItem& WithStatus(VersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Arn for an annotation store version. </p>
     */
    inline const Aws::String& GetVersionArn() const { return m_versionArn; }
    inline bool VersionArnHasBeenSet() const { return m_versionArnHasBeenSet; }
    template<typename VersionArnT = Aws::String>
    void SetVersionArn(VersionArnT&& value) { m_versionArnHasBeenSet = true; m_versionArn = std::forward<VersionArnT>(value); }
    template<typename VersionArnT = Aws::String>
    AnnotationStoreVersionItem& WithVersionArn(VersionArnT&& value) { SetVersionArn(std::forward<VersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A name given to an annotation store version to distinguish it from others.
     * </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AnnotationStoreVersionItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of an annotation store version. </p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    AnnotationStoreVersionItem& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of an annotation store version. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AnnotationStoreVersionItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for when an annotation store version was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AnnotationStoreVersionItem& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for when an annotation store version was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    AnnotationStoreVersionItem& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of an annotation store version. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    AnnotationStoreVersionItem& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of an annotation store version in Bytes. </p>
     */
    inline long long GetVersionSizeBytes() const { return m_versionSizeBytes; }
    inline bool VersionSizeBytesHasBeenSet() const { return m_versionSizeBytesHasBeenSet; }
    inline void SetVersionSizeBytes(long long value) { m_versionSizeBytesHasBeenSet = true; m_versionSizeBytes = value; }
    inline AnnotationStoreVersionItem& WithVersionSizeBytes(long long value) { SetVersionSizeBytes(value); return *this;}
    ///@}
  private:

    Aws::String m_storeId;
    bool m_storeIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    VersionStatus m_status{VersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_versionArn;
    bool m_versionArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_versionSizeBytes{0};
    bool m_versionSizeBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

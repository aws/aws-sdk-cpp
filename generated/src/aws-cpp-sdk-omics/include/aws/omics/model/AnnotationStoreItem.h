/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceItem.h>
#include <aws/omics/model/StoreStatus.h>
#include <aws/omics/model/StoreFormat.h>
#include <aws/omics/model/SseConfig.h>
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
   * <p>An annotation store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/AnnotationStoreItem">AWS
   * API Reference</a></p>
   */
  class AnnotationStoreItem
  {
  public:
    AWS_OMICS_API AnnotationStoreItem() = default;
    AWS_OMICS_API AnnotationStoreItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API AnnotationStoreItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The store's ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AnnotationStoreItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's genome reference.</p>
     */
    inline const ReferenceItem& GetReference() const { return m_reference; }
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }
    template<typename ReferenceT = ReferenceItem>
    void SetReference(ReferenceT&& value) { m_referenceHasBeenSet = true; m_reference = std::forward<ReferenceT>(value); }
    template<typename ReferenceT = ReferenceItem>
    AnnotationStoreItem& WithReference(ReferenceT&& value) { SetReference(std::forward<ReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's status.</p>
     */
    inline StoreStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StoreStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AnnotationStoreItem& WithStatus(StoreStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's ARN.</p>
     */
    inline const Aws::String& GetStoreArn() const { return m_storeArn; }
    inline bool StoreArnHasBeenSet() const { return m_storeArnHasBeenSet; }
    template<typename StoreArnT = Aws::String>
    void SetStoreArn(StoreArnT&& value) { m_storeArnHasBeenSet = true; m_storeArn = std::forward<StoreArnT>(value); }
    template<typename StoreArnT = Aws::String>
    AnnotationStoreItem& WithStoreArn(StoreArnT&& value) { SetStoreArn(std::forward<StoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AnnotationStoreItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's file format.</p>
     */
    inline StoreFormat GetStoreFormat() const { return m_storeFormat; }
    inline bool StoreFormatHasBeenSet() const { return m_storeFormatHasBeenSet; }
    inline void SetStoreFormat(StoreFormat value) { m_storeFormatHasBeenSet = true; m_storeFormat = value; }
    inline AnnotationStoreItem& WithStoreFormat(StoreFormat value) { SetStoreFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AnnotationStoreItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline const SseConfig& GetSseConfig() const { return m_sseConfig; }
    inline bool SseConfigHasBeenSet() const { return m_sseConfigHasBeenSet; }
    template<typename SseConfigT = SseConfig>
    void SetSseConfig(SseConfigT&& value) { m_sseConfigHasBeenSet = true; m_sseConfig = std::forward<SseConfigT>(value); }
    template<typename SseConfigT = SseConfig>
    AnnotationStoreItem& WithSseConfig(SseConfigT&& value) { SetSseConfig(std::forward<SseConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AnnotationStoreItem& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the store was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    AnnotationStoreItem& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    AnnotationStoreItem& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's size in bytes.</p>
     */
    inline long long GetStoreSizeBytes() const { return m_storeSizeBytes; }
    inline bool StoreSizeBytesHasBeenSet() const { return m_storeSizeBytesHasBeenSet; }
    inline void SetStoreSizeBytes(long long value) { m_storeSizeBytesHasBeenSet = true; m_storeSizeBytes = value; }
    inline AnnotationStoreItem& WithStoreSizeBytes(long long value) { SetStoreSizeBytes(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ReferenceItem m_reference;
    bool m_referenceHasBeenSet = false;

    StoreStatus m_status{StoreStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_storeArn;
    bool m_storeArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StoreFormat m_storeFormat{StoreFormat::NOT_SET};
    bool m_storeFormatHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SseConfig m_sseConfig;
    bool m_sseConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_storeSizeBytes{0};
    bool m_storeSizeBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceItem.h>
#include <aws/omics/model/StoreStatus.h>
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
   * <p>A variant store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/VariantStoreItem">AWS
   * API Reference</a></p>
   */
  class VariantStoreItem
  {
  public:
    AWS_OMICS_API VariantStoreItem();
    AWS_OMICS_API VariantStoreItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API VariantStoreItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The store's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline VariantStoreItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline VariantStoreItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline VariantStoreItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's genome reference.</p>
     */
    inline const ReferenceItem& GetReference() const{ return m_reference; }
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }
    inline void SetReference(const ReferenceItem& value) { m_referenceHasBeenSet = true; m_reference = value; }
    inline void SetReference(ReferenceItem&& value) { m_referenceHasBeenSet = true; m_reference = std::move(value); }
    inline VariantStoreItem& WithReference(const ReferenceItem& value) { SetReference(value); return *this;}
    inline VariantStoreItem& WithReference(ReferenceItem&& value) { SetReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's status.</p>
     */
    inline const StoreStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StoreStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StoreStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VariantStoreItem& WithStatus(const StoreStatus& value) { SetStatus(value); return *this;}
    inline VariantStoreItem& WithStatus(StoreStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's ARN.</p>
     */
    inline const Aws::String& GetStoreArn() const{ return m_storeArn; }
    inline bool StoreArnHasBeenSet() const { return m_storeArnHasBeenSet; }
    inline void SetStoreArn(const Aws::String& value) { m_storeArnHasBeenSet = true; m_storeArn = value; }
    inline void SetStoreArn(Aws::String&& value) { m_storeArnHasBeenSet = true; m_storeArn = std::move(value); }
    inline void SetStoreArn(const char* value) { m_storeArnHasBeenSet = true; m_storeArn.assign(value); }
    inline VariantStoreItem& WithStoreArn(const Aws::String& value) { SetStoreArn(value); return *this;}
    inline VariantStoreItem& WithStoreArn(Aws::String&& value) { SetStoreArn(std::move(value)); return *this;}
    inline VariantStoreItem& WithStoreArn(const char* value) { SetStoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline VariantStoreItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline VariantStoreItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline VariantStoreItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline VariantStoreItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline VariantStoreItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline VariantStoreItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline const SseConfig& GetSseConfig() const{ return m_sseConfig; }
    inline bool SseConfigHasBeenSet() const { return m_sseConfigHasBeenSet; }
    inline void SetSseConfig(const SseConfig& value) { m_sseConfigHasBeenSet = true; m_sseConfig = value; }
    inline void SetSseConfig(SseConfig&& value) { m_sseConfigHasBeenSet = true; m_sseConfig = std::move(value); }
    inline VariantStoreItem& WithSseConfig(const SseConfig& value) { SetSseConfig(value); return *this;}
    inline VariantStoreItem& WithSseConfig(SseConfig&& value) { SetSseConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline VariantStoreItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline VariantStoreItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the store was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline VariantStoreItem& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline VariantStoreItem& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline VariantStoreItem& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline VariantStoreItem& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline VariantStoreItem& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's size in bytes.</p>
     */
    inline long long GetStoreSizeBytes() const{ return m_storeSizeBytes; }
    inline bool StoreSizeBytesHasBeenSet() const { return m_storeSizeBytesHasBeenSet; }
    inline void SetStoreSizeBytes(long long value) { m_storeSizeBytesHasBeenSet = true; m_storeSizeBytes = value; }
    inline VariantStoreItem& WithStoreSizeBytes(long long value) { SetStoreSizeBytes(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ReferenceItem m_reference;
    bool m_referenceHasBeenSet = false;

    StoreStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_storeArn;
    bool m_storeArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SseConfig m_sseConfig;
    bool m_sseConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_storeSizeBytes;
    bool m_storeSizeBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

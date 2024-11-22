/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/SseConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/ETagAlgorithmFamily.h>
#include <aws/omics/model/SequenceStoreStatus.h>
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
   * <p>Details about a sequence store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/SequenceStoreDetail">AWS
   * API Reference</a></p>
   */
  class SequenceStoreDetail
  {
  public:
    AWS_OMICS_API SequenceStoreDetail();
    AWS_OMICS_API SequenceStoreDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SequenceStoreDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The store's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SequenceStoreDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SequenceStoreDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SequenceStoreDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SequenceStoreDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SequenceStoreDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SequenceStoreDetail& WithId(const char* value) { SetId(value); return *this;}
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
    inline SequenceStoreDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SequenceStoreDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SequenceStoreDetail& WithName(const char* value) { SetName(value); return *this;}
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
    inline SequenceStoreDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SequenceStoreDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SequenceStoreDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline const SseConfig& GetSseConfig() const{ return m_sseConfig; }
    inline bool SseConfigHasBeenSet() const { return m_sseConfigHasBeenSet; }
    inline void SetSseConfig(const SseConfig& value) { m_sseConfigHasBeenSet = true; m_sseConfig = value; }
    inline void SetSseConfig(SseConfig&& value) { m_sseConfigHasBeenSet = true; m_sseConfig = std::move(value); }
    inline SequenceStoreDetail& WithSseConfig(const SseConfig& value) { SetSseConfig(value); return *this;}
    inline SequenceStoreDetail& WithSseConfig(SseConfig&& value) { SetSseConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline SequenceStoreDetail& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline SequenceStoreDetail& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An S3 location that is used to store files that have failed a direct upload.
     * </p>
     */
    inline const Aws::String& GetFallbackLocation() const{ return m_fallbackLocation; }
    inline bool FallbackLocationHasBeenSet() const { return m_fallbackLocationHasBeenSet; }
    inline void SetFallbackLocation(const Aws::String& value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation = value; }
    inline void SetFallbackLocation(Aws::String&& value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation = std::move(value); }
    inline void SetFallbackLocation(const char* value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation.assign(value); }
    inline SequenceStoreDetail& WithFallbackLocation(const Aws::String& value) { SetFallbackLocation(value); return *this;}
    inline SequenceStoreDetail& WithFallbackLocation(Aws::String&& value) { SetFallbackLocation(std::move(value)); return *this;}
    inline SequenceStoreDetail& WithFallbackLocation(const char* value) { SetFallbackLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm family of the ETag.</p>
     */
    inline const ETagAlgorithmFamily& GetETagAlgorithmFamily() const{ return m_eTagAlgorithmFamily; }
    inline bool ETagAlgorithmFamilyHasBeenSet() const { return m_eTagAlgorithmFamilyHasBeenSet; }
    inline void SetETagAlgorithmFamily(const ETagAlgorithmFamily& value) { m_eTagAlgorithmFamilyHasBeenSet = true; m_eTagAlgorithmFamily = value; }
    inline void SetETagAlgorithmFamily(ETagAlgorithmFamily&& value) { m_eTagAlgorithmFamilyHasBeenSet = true; m_eTagAlgorithmFamily = std::move(value); }
    inline SequenceStoreDetail& WithETagAlgorithmFamily(const ETagAlgorithmFamily& value) { SetETagAlgorithmFamily(value); return *this;}
    inline SequenceStoreDetail& WithETagAlgorithmFamily(ETagAlgorithmFamily&& value) { SetETagAlgorithmFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the sequence store.</p>
     */
    inline const SequenceStoreStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SequenceStoreStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SequenceStoreStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SequenceStoreDetail& WithStatus(const SequenceStoreStatus& value) { SetStatus(value); return *this;}
    inline SequenceStoreDetail& WithStatus(SequenceStoreStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the sequence store.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline SequenceStoreDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline SequenceStoreDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline SequenceStoreDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last-updated time of the Sequence Store.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline SequenceStoreDetail& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline SequenceStoreDetail& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SseConfig m_sseConfig;
    bool m_sseConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_fallbackLocation;
    bool m_fallbackLocationHasBeenSet = false;

    ETagAlgorithmFamily m_eTagAlgorithmFamily;
    bool m_eTagAlgorithmFamilyHasBeenSet = false;

    SequenceStoreStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/SseConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/SequenceStoreS3Access.h>
#include <aws/omics/model/ETagAlgorithmFamily.h>
#include <aws/omics/model/SequenceStoreStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Omics
{
namespace Model
{
  class GetSequenceStoreResult
  {
  public:
    AWS_OMICS_API GetSequenceStoreResult() = default;
    AWS_OMICS_API GetSequenceStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetSequenceStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The store's ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetSequenceStoreResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetSequenceStoreResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetSequenceStoreResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetSequenceStoreResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline const SseConfig& GetSseConfig() const { return m_sseConfig; }
    template<typename SseConfigT = SseConfig>
    void SetSseConfig(SseConfigT&& value) { m_sseConfigHasBeenSet = true; m_sseConfig = std::forward<SseConfigT>(value); }
    template<typename SseConfigT = SseConfig>
    GetSequenceStoreResult& WithSseConfig(SseConfigT&& value) { SetSseConfig(std::forward<SseConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetSequenceStoreResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 location that is used to store files that have failed a direct
     * upload.</p>
     */
    inline const Aws::String& GetFallbackLocation() const { return m_fallbackLocation; }
    template<typename FallbackLocationT = Aws::String>
    void SetFallbackLocation(FallbackLocationT&& value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation = std::forward<FallbackLocationT>(value); }
    template<typename FallbackLocationT = Aws::String>
    GetSequenceStoreResult& WithFallbackLocation(FallbackLocationT&& value) { SetFallbackLocation(std::forward<FallbackLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 metadata of a sequence store, including the ARN and S3 URI of the S3
     * bucket.</p>
     */
    inline const SequenceStoreS3Access& GetS3Access() const { return m_s3Access; }
    template<typename S3AccessT = SequenceStoreS3Access>
    void SetS3Access(S3AccessT&& value) { m_s3AccessHasBeenSet = true; m_s3Access = std::forward<S3AccessT>(value); }
    template<typename S3AccessT = SequenceStoreS3Access>
    GetSequenceStoreResult& WithS3Access(S3AccessT&& value) { SetS3Access(std::forward<S3AccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm family of the ETag.</p>
     */
    inline ETagAlgorithmFamily GetETagAlgorithmFamily() const { return m_eTagAlgorithmFamily; }
    inline void SetETagAlgorithmFamily(ETagAlgorithmFamily value) { m_eTagAlgorithmFamilyHasBeenSet = true; m_eTagAlgorithmFamily = value; }
    inline GetSequenceStoreResult& WithETagAlgorithmFamily(ETagAlgorithmFamily value) { SetETagAlgorithmFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the sequence store.</p>
     */
    inline SequenceStoreStatus GetStatus() const { return m_status; }
    inline void SetStatus(SequenceStoreStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSequenceStoreResult& WithStatus(SequenceStoreStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the sequence store.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetSequenceStoreResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags keys to propagate to the S3 objects associated with read sets in the
     * sequence store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropagatedSetLevelTags() const { return m_propagatedSetLevelTags; }
    template<typename PropagatedSetLevelTagsT = Aws::Vector<Aws::String>>
    void SetPropagatedSetLevelTags(PropagatedSetLevelTagsT&& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags = std::forward<PropagatedSetLevelTagsT>(value); }
    template<typename PropagatedSetLevelTagsT = Aws::Vector<Aws::String>>
    GetSequenceStoreResult& WithPropagatedSetLevelTags(PropagatedSetLevelTagsT&& value) { SetPropagatedSetLevelTags(std::forward<PropagatedSetLevelTagsT>(value)); return *this;}
    template<typename PropagatedSetLevelTagsT = Aws::String>
    GetSequenceStoreResult& AddPropagatedSetLevelTags(PropagatedSetLevelTagsT&& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags.emplace_back(std::forward<PropagatedSetLevelTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last-updated time of the sequence store.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetSequenceStoreResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSequenceStoreResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SseConfig m_sseConfig;
    bool m_sseConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_fallbackLocation;
    bool m_fallbackLocationHasBeenSet = false;

    SequenceStoreS3Access m_s3Access;
    bool m_s3AccessHasBeenSet = false;

    ETagAlgorithmFamily m_eTagAlgorithmFamily{ETagAlgorithmFamily::NOT_SET};
    bool m_eTagAlgorithmFamilyHasBeenSet = false;

    SequenceStoreStatus m_status{SequenceStoreStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<Aws::String> m_propagatedSetLevelTags;
    bool m_propagatedSetLevelTagsHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/VersionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/VersionOptions.h>
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
  class GetAnnotationStoreVersionResult
  {
  public:
    AWS_OMICS_API GetAnnotationStoreVersionResult() = default;
    AWS_OMICS_API GetAnnotationStoreVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetAnnotationStoreVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The store ID for annotation store version. </p>
     */
    inline const Aws::String& GetStoreId() const { return m_storeId; }
    template<typename StoreIdT = Aws::String>
    void SetStoreId(StoreIdT&& value) { m_storeIdHasBeenSet = true; m_storeId = std::forward<StoreIdT>(value); }
    template<typename StoreIdT = Aws::String>
    GetAnnotationStoreVersionResult& WithStoreId(StoreIdT&& value) { SetStoreId(std::forward<StoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The annotation store version ID. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetAnnotationStoreVersionResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of an annotation store version. </p>
     */
    inline VersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(VersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAnnotationStoreVersionResult& WithStatus(VersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Arn for the annotation store. </p>
     */
    inline const Aws::String& GetVersionArn() const { return m_versionArn; }
    template<typename VersionArnT = Aws::String>
    void SetVersionArn(VersionArnT&& value) { m_versionArnHasBeenSet = true; m_versionArn = std::forward<VersionArnT>(value); }
    template<typename VersionArnT = Aws::String>
    GetAnnotationStoreVersionResult& WithVersionArn(VersionArnT&& value) { SetVersionArn(std::forward<VersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the annotation store. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetAnnotationStoreVersionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name given to an annotation store version to distinguish it from others.
     * </p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    GetAnnotationStoreVersionResult& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description for an annotation store version. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetAnnotationStoreVersionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for when an annotation store version was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetAnnotationStoreVersionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for when an annotation store version was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetAnnotationStoreVersionResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetAnnotationStoreVersionResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetAnnotationStoreVersionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The options for an annotation store version. </p>
     */
    inline const VersionOptions& GetVersionOptions() const { return m_versionOptions; }
    template<typename VersionOptionsT = VersionOptions>
    void SetVersionOptions(VersionOptionsT&& value) { m_versionOptionsHasBeenSet = true; m_versionOptions = std::forward<VersionOptionsT>(value); }
    template<typename VersionOptionsT = VersionOptions>
    GetAnnotationStoreVersionResult& WithVersionOptions(VersionOptionsT&& value) { SetVersionOptions(std::forward<VersionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of an annotation store version. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetAnnotationStoreVersionResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of the annotation store version in Bytes. </p>
     */
    inline long long GetVersionSizeBytes() const { return m_versionSizeBytes; }
    inline void SetVersionSizeBytes(long long value) { m_versionSizeBytesHasBeenSet = true; m_versionSizeBytes = value; }
    inline GetAnnotationStoreVersionResult& WithVersionSizeBytes(long long value) { SetVersionSizeBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAnnotationStoreVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VersionOptions m_versionOptions;
    bool m_versionOptionsHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_versionSizeBytes{0};
    bool m_versionSizeBytesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

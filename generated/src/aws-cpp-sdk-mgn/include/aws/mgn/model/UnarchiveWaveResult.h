/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/WaveAggregatedStatus.h>
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
namespace mgn
{
namespace Model
{
  class UnarchiveWaveResult
  {
  public:
    AWS_MGN_API UnarchiveWaveResult() = default;
    AWS_MGN_API UnarchiveWaveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API UnarchiveWaveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Wave ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UnarchiveWaveResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave creation dateTime.</p>
     */
    inline const Aws::String& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::String>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::String>
    UnarchiveWaveResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UnarchiveWaveResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave archival status.</p>
     */
    inline bool GetIsArchived() const { return m_isArchived; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline UnarchiveWaveResult& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave last modified dateTime.</p>
     */
    inline const Aws::String& GetLastModifiedDateTime() const { return m_lastModifiedDateTime; }
    template<typename LastModifiedDateTimeT = Aws::String>
    void SetLastModifiedDateTime(LastModifiedDateTimeT&& value) { m_lastModifiedDateTimeHasBeenSet = true; m_lastModifiedDateTime = std::forward<LastModifiedDateTimeT>(value); }
    template<typename LastModifiedDateTimeT = Aws::String>
    UnarchiveWaveResult& WithLastModifiedDateTime(LastModifiedDateTimeT&& value) { SetLastModifiedDateTime(std::forward<LastModifiedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UnarchiveWaveResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UnarchiveWaveResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UnarchiveWaveResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Wave aggregated status.</p>
     */
    inline const WaveAggregatedStatus& GetWaveAggregatedStatus() const { return m_waveAggregatedStatus; }
    template<typename WaveAggregatedStatusT = WaveAggregatedStatus>
    void SetWaveAggregatedStatus(WaveAggregatedStatusT&& value) { m_waveAggregatedStatusHasBeenSet = true; m_waveAggregatedStatus = std::forward<WaveAggregatedStatusT>(value); }
    template<typename WaveAggregatedStatusT = WaveAggregatedStatus>
    UnarchiveWaveResult& WithWaveAggregatedStatus(WaveAggregatedStatusT&& value) { SetWaveAggregatedStatus(std::forward<WaveAggregatedStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave ID.</p>
     */
    inline const Aws::String& GetWaveID() const { return m_waveID; }
    template<typename WaveIDT = Aws::String>
    void SetWaveID(WaveIDT&& value) { m_waveIDHasBeenSet = true; m_waveID = std::forward<WaveIDT>(value); }
    template<typename WaveIDT = Aws::String>
    UnarchiveWaveResult& WithWaveID(WaveIDT&& value) { SetWaveID(std::forward<WaveIDT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UnarchiveWaveResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isArchived{false};
    bool m_isArchivedHasBeenSet = false;

    Aws::String m_lastModifiedDateTime;
    bool m_lastModifiedDateTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    WaveAggregatedStatus m_waveAggregatedStatus;
    bool m_waveAggregatedStatusHasBeenSet = false;

    Aws::String m_waveID;
    bool m_waveIDHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/DiscovererState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Schemas
{
namespace Model
{
  class UpdateDiscovererResult
  {
  public:
    AWS_SCHEMAS_API UpdateDiscovererResult() = default;
    AWS_SCHEMAS_API UpdateDiscovererResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API UpdateDiscovererResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the discoverer.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDiscovererResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererArn() const { return m_discovererArn; }
    template<typename DiscovererArnT = Aws::String>
    void SetDiscovererArn(DiscovererArnT&& value) { m_discovererArnHasBeenSet = true; m_discovererArn = std::forward<DiscovererArnT>(value); }
    template<typename DiscovererArnT = Aws::String>
    UpdateDiscovererResult& WithDiscovererArn(DiscovererArnT&& value) { SetDiscovererArn(std::forward<DiscovererArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererId() const { return m_discovererId; }
    template<typename DiscovererIdT = Aws::String>
    void SetDiscovererId(DiscovererIdT&& value) { m_discovererIdHasBeenSet = true; m_discovererId = std::forward<DiscovererIdT>(value); }
    template<typename DiscovererIdT = Aws::String>
    UpdateDiscovererResult& WithDiscovererId(DiscovererIdT&& value) { SetDiscovererId(std::forward<DiscovererIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the event bus.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    UpdateDiscovererResult& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the discoverer.</p>
     */
    inline DiscovererState GetState() const { return m_state; }
    inline void SetState(DiscovererState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateDiscovererResult& WithState(DiscovererState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Status if the discoverer will discover schemas from events sent from
     * another account.</p>
     */
    inline bool GetCrossAccount() const { return m_crossAccount; }
    inline void SetCrossAccount(bool value) { m_crossAccountHasBeenSet = true; m_crossAccount = value; }
    inline UpdateDiscovererResult& WithCrossAccount(bool value) { SetCrossAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateDiscovererResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UpdateDiscovererResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDiscovererResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_discovererArn;
    bool m_discovererArnHasBeenSet = false;

    Aws::String m_discovererId;
    bool m_discovererIdHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    DiscovererState m_state{DiscovererState::NOT_SET};
    bool m_stateHasBeenSet = false;

    bool m_crossAccount{false};
    bool m_crossAccountHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws

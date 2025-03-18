/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/AppSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ServerGroup.h>
#include <aws/sms/model/Tag.h>
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
namespace SMS
{
namespace Model
{
  class CreateAppResult
  {
  public:
    AWS_SMS_API CreateAppResult() = default;
    AWS_SMS_API CreateAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API CreateAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary description of the application.</p>
     */
    inline const AppSummary& GetAppSummary() const { return m_appSummary; }
    template<typename AppSummaryT = AppSummary>
    void SetAppSummary(AppSummaryT&& value) { m_appSummaryHasBeenSet = true; m_appSummary = std::forward<AppSummaryT>(value); }
    template<typename AppSummaryT = AppSummary>
    CreateAppResult& WithAppSummary(AppSummaryT&& value) { SetAppSummary(std::forward<AppSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server groups included in the application.</p>
     */
    inline const Aws::Vector<ServerGroup>& GetServerGroups() const { return m_serverGroups; }
    template<typename ServerGroupsT = Aws::Vector<ServerGroup>>
    void SetServerGroups(ServerGroupsT&& value) { m_serverGroupsHasBeenSet = true; m_serverGroups = std::forward<ServerGroupsT>(value); }
    template<typename ServerGroupsT = Aws::Vector<ServerGroup>>
    CreateAppResult& WithServerGroups(ServerGroupsT&& value) { SetServerGroups(std::forward<ServerGroupsT>(value)); return *this;}
    template<typename ServerGroupsT = ServerGroup>
    CreateAppResult& AddServerGroups(ServerGroupsT&& value) { m_serverGroupsHasBeenSet = true; m_serverGroups.emplace_back(std::forward<ServerGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with the application.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAppResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAppResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAppResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppSummary m_appSummary;
    bool m_appSummaryHasBeenSet = false;

    Aws::Vector<ServerGroup> m_serverGroups;
    bool m_serverGroupsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws

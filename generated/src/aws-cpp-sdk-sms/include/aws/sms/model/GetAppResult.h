/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/AppSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetAppResult
  {
  public:
    AWS_SMS_API GetAppResult();
    AWS_SMS_API GetAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the application.</p>
     */
    inline const AppSummary& GetAppSummary() const{ return m_appSummary; }

    /**
     * <p>Information about the application.</p>
     */
    inline void SetAppSummary(const AppSummary& value) { m_appSummary = value; }

    /**
     * <p>Information about the application.</p>
     */
    inline void SetAppSummary(AppSummary&& value) { m_appSummary = std::move(value); }

    /**
     * <p>Information about the application.</p>
     */
    inline GetAppResult& WithAppSummary(const AppSummary& value) { SetAppSummary(value); return *this;}

    /**
     * <p>Information about the application.</p>
     */
    inline GetAppResult& WithAppSummary(AppSummary&& value) { SetAppSummary(std::move(value)); return *this;}


    /**
     * <p>The server groups that belong to the application.</p>
     */
    inline const Aws::Vector<ServerGroup>& GetServerGroups() const{ return m_serverGroups; }

    /**
     * <p>The server groups that belong to the application.</p>
     */
    inline void SetServerGroups(const Aws::Vector<ServerGroup>& value) { m_serverGroups = value; }

    /**
     * <p>The server groups that belong to the application.</p>
     */
    inline void SetServerGroups(Aws::Vector<ServerGroup>&& value) { m_serverGroups = std::move(value); }

    /**
     * <p>The server groups that belong to the application.</p>
     */
    inline GetAppResult& WithServerGroups(const Aws::Vector<ServerGroup>& value) { SetServerGroups(value); return *this;}

    /**
     * <p>The server groups that belong to the application.</p>
     */
    inline GetAppResult& WithServerGroups(Aws::Vector<ServerGroup>&& value) { SetServerGroups(std::move(value)); return *this;}

    /**
     * <p>The server groups that belong to the application.</p>
     */
    inline GetAppResult& AddServerGroups(const ServerGroup& value) { m_serverGroups.push_back(value); return *this; }

    /**
     * <p>The server groups that belong to the application.</p>
     */
    inline GetAppResult& AddServerGroups(ServerGroup&& value) { m_serverGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags associated with the application.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the application.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tags associated with the application.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags associated with the application.</p>
     */
    inline GetAppResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the application.</p>
     */
    inline GetAppResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the application.</p>
     */
    inline GetAppResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the application.</p>
     */
    inline GetAppResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    AppSummary m_appSummary;

    Aws::Vector<ServerGroup> m_serverGroups;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws

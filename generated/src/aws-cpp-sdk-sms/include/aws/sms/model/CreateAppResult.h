﻿/**
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
    AWS_SMS_API CreateAppResult();
    AWS_SMS_API CreateAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API CreateAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary description of the application.</p>
     */
    inline const AppSummary& GetAppSummary() const{ return m_appSummary; }
    inline void SetAppSummary(const AppSummary& value) { m_appSummary = value; }
    inline void SetAppSummary(AppSummary&& value) { m_appSummary = std::move(value); }
    inline CreateAppResult& WithAppSummary(const AppSummary& value) { SetAppSummary(value); return *this;}
    inline CreateAppResult& WithAppSummary(AppSummary&& value) { SetAppSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server groups included in the application.</p>
     */
    inline const Aws::Vector<ServerGroup>& GetServerGroups() const{ return m_serverGroups; }
    inline void SetServerGroups(const Aws::Vector<ServerGroup>& value) { m_serverGroups = value; }
    inline void SetServerGroups(Aws::Vector<ServerGroup>&& value) { m_serverGroups = std::move(value); }
    inline CreateAppResult& WithServerGroups(const Aws::Vector<ServerGroup>& value) { SetServerGroups(value); return *this;}
    inline CreateAppResult& WithServerGroups(Aws::Vector<ServerGroup>&& value) { SetServerGroups(std::move(value)); return *this;}
    inline CreateAppResult& AddServerGroups(const ServerGroup& value) { m_serverGroups.push_back(value); return *this; }
    inline CreateAppResult& AddServerGroups(ServerGroup&& value) { m_serverGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with the application.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateAppResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateAppResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAppResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateAppResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AppSummary m_appSummary;

    Aws::Vector<ServerGroup> m_serverGroups;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws

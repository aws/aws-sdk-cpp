/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResourceGroups
{
namespace Model
{
  class StartTagSyncTaskResult
  {
  public:
    AWS_RESOURCEGROUPS_API StartTagSyncTaskResult();
    AWS_RESOURCEGROUPS_API StartTagSyncTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API StartTagSyncTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the application group for which you want to
     * add or remove resources. </p>
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }
    inline void SetGroupArn(const Aws::String& value) { m_groupArn = value; }
    inline void SetGroupArn(Aws::String&& value) { m_groupArn = std::move(value); }
    inline void SetGroupArn(const char* value) { m_groupArn.assign(value); }
    inline StartTagSyncTaskResult& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}
    inline StartTagSyncTaskResult& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}
    inline StartTagSyncTaskResult& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application group to onboard and sync resources.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline void SetGroupName(const Aws::String& value) { m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupName.assign(value); }
    inline StartTagSyncTaskResult& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline StartTagSyncTaskResult& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline StartTagSyncTaskResult& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the new tag-sync task. </p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }
    inline StartTagSyncTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline StartTagSyncTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline StartTagSyncTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key of the tag-sync task. </p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }
    inline void SetTagKey(const Aws::String& value) { m_tagKey = value; }
    inline void SetTagKey(Aws::String&& value) { m_tagKey = std::move(value); }
    inline void SetTagKey(const char* value) { m_tagKey.assign(value); }
    inline StartTagSyncTaskResult& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}
    inline StartTagSyncTaskResult& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}
    inline StartTagSyncTaskResult& WithTagKey(const char* value) { SetTagKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value of the tag-sync task. </p>
     */
    inline const Aws::String& GetTagValue() const{ return m_tagValue; }
    inline void SetTagValue(const Aws::String& value) { m_tagValue = value; }
    inline void SetTagValue(Aws::String&& value) { m_tagValue = std::move(value); }
    inline void SetTagValue(const char* value) { m_tagValue.assign(value); }
    inline StartTagSyncTaskResult& WithTagValue(const Aws::String& value) { SetTagValue(value); return *this;}
    inline StartTagSyncTaskResult& WithTagValue(Aws::String&& value) { SetTagValue(std::move(value)); return *this;}
    inline StartTagSyncTaskResult& WithTagValue(const char* value) { SetTagValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the role assumed by the service to tag and
     * untag resources on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline StartTagSyncTaskResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline StartTagSyncTaskResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline StartTagSyncTaskResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartTagSyncTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartTagSyncTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartTagSyncTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupArn;

    Aws::String m_groupName;

    Aws::String m_taskArn;

    Aws::String m_tagKey;

    Aws::String m_tagValue;

    Aws::String m_roleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws

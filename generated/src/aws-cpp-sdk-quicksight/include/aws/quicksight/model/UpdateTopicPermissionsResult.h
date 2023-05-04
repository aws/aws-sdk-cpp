/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourcePermission.h>
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
namespace QuickSight
{
namespace Model
{
  class UpdateTopicPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateTopicPermissionsResult();
    AWS_QUICKSIGHT_API UpdateTopicPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateTopicPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const Aws::String& value) { m_topicId = value; }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(Aws::String&& value) { m_topicId = std::move(value); }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const char* value) { m_topicId.assign(value); }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateTopicPermissionsResult& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateTopicPermissionsResult& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateTopicPermissionsResult& WithTopicId(const char* value) { SetTopicId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline UpdateTopicPermissionsResult& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline UpdateTopicPermissionsResult& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline UpdateTopicPermissionsResult& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>A list of resource permissions on the topic.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of resource permissions on the topic.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissions = value; }

    /**
     * <p>A list of resource permissions on the topic.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>A list of resource permissions on the topic.</p>
     */
    inline UpdateTopicPermissionsResult& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of resource permissions on the topic.</p>
     */
    inline UpdateTopicPermissionsResult& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of resource permissions on the topic.</p>
     */
    inline UpdateTopicPermissionsResult& AddPermissions(const ResourcePermission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>A list of resource permissions on the topic.</p>
     */
    inline UpdateTopicPermissionsResult& AddPermissions(ResourcePermission&& value) { m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline UpdateTopicPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTopicPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTopicPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTopicPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_topicId;

    Aws::String m_topicArn;

    Aws::Vector<ResourcePermission> m_permissions;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

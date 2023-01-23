/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/FolderConfiguration.h>
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
namespace WorkMail
{
namespace Model
{
  class GetDefaultRetentionPolicyResult
  {
  public:
    AWS_WORKMAIL_API GetDefaultRetentionPolicyResult();
    AWS_WORKMAIL_API GetDefaultRetentionPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetDefaultRetentionPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retention policy ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The retention policy ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The retention policy ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The retention policy ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The retention policy ID.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The retention policy ID.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The retention policy ID.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The retention policy name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The retention policy name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The retention policy name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The retention policy name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The retention policy name.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The retention policy name.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The retention policy name.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The retention policy description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The retention policy description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The retention policy description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The retention policy description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The retention policy description.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The retention policy description.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The retention policy description.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The retention policy folder configurations.</p>
     */
    inline const Aws::Vector<FolderConfiguration>& GetFolderConfigurations() const{ return m_folderConfigurations; }

    /**
     * <p>The retention policy folder configurations.</p>
     */
    inline void SetFolderConfigurations(const Aws::Vector<FolderConfiguration>& value) { m_folderConfigurations = value; }

    /**
     * <p>The retention policy folder configurations.</p>
     */
    inline void SetFolderConfigurations(Aws::Vector<FolderConfiguration>&& value) { m_folderConfigurations = std::move(value); }

    /**
     * <p>The retention policy folder configurations.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithFolderConfigurations(const Aws::Vector<FolderConfiguration>& value) { SetFolderConfigurations(value); return *this;}

    /**
     * <p>The retention policy folder configurations.</p>
     */
    inline GetDefaultRetentionPolicyResult& WithFolderConfigurations(Aws::Vector<FolderConfiguration>&& value) { SetFolderConfigurations(std::move(value)); return *this;}

    /**
     * <p>The retention policy folder configurations.</p>
     */
    inline GetDefaultRetentionPolicyResult& AddFolderConfigurations(const FolderConfiguration& value) { m_folderConfigurations.push_back(value); return *this; }

    /**
     * <p>The retention policy folder configurations.</p>
     */
    inline GetDefaultRetentionPolicyResult& AddFolderConfigurations(FolderConfiguration&& value) { m_folderConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<FolderConfiguration> m_folderConfigurations;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws

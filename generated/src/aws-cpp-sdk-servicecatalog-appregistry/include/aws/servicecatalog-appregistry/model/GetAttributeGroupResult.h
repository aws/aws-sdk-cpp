/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppRegistry
{
namespace Model
{
  class GetAttributeGroupResult
  {
  public:
    AWS_APPREGISTRY_API GetAttributeGroupResult();
    AWS_APPREGISTRY_API GetAttributeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API GetAttributeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the attribute group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the attribute group.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the attribute group.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the attribute group.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the attribute group.</p>
     */
    inline GetAttributeGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the attribute group.</p>
     */
    inline GetAttributeGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the attribute group.</p>
     */
    inline GetAttributeGroupResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline GetAttributeGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline GetAttributeGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline GetAttributeGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the attribute group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute group.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the attribute group.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the attribute group.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the attribute group.</p>
     */
    inline GetAttributeGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute group.</p>
     */
    inline GetAttributeGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute group.</p>
     */
    inline GetAttributeGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline GetAttributeGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline GetAttributeGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline GetAttributeGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A JSON string in the form of nested key-value pairs that represent the
     * attributes in the group and describes an application and its components.</p>
     */
    inline const Aws::String& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A JSON string in the form of nested key-value pairs that represent the
     * attributes in the group and describes an application and its components.</p>
     */
    inline void SetAttributes(const Aws::String& value) { m_attributes = value; }

    /**
     * <p>A JSON string in the form of nested key-value pairs that represent the
     * attributes in the group and describes an application and its components.</p>
     */
    inline void SetAttributes(Aws::String&& value) { m_attributes = std::move(value); }

    /**
     * <p>A JSON string in the form of nested key-value pairs that represent the
     * attributes in the group and describes an application and its components.</p>
     */
    inline void SetAttributes(const char* value) { m_attributes.assign(value); }

    /**
     * <p>A JSON string in the form of nested key-value pairs that represent the
     * attributes in the group and describes an application and its components.</p>
     */
    inline GetAttributeGroupResult& WithAttributes(const Aws::String& value) { SetAttributes(value); return *this;}

    /**
     * <p>A JSON string in the form of nested key-value pairs that represent the
     * attributes in the group and describes an application and its components.</p>
     */
    inline GetAttributeGroupResult& WithAttributes(Aws::String&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A JSON string in the form of nested key-value pairs that represent the
     * attributes in the group and describes an application and its components.</p>
     */
    inline GetAttributeGroupResult& WithAttributes(const char* value) { SetAttributes(value); return *this;}


    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline GetAttributeGroupResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline GetAttributeGroupResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTime = value; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTime = std::move(value); }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline GetAttributeGroupResult& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline GetAttributeGroupResult& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline GetAttributeGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline GetAttributeGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline GetAttributeGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline GetAttributeGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline GetAttributeGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline GetAttributeGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline GetAttributeGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline GetAttributeGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs associated with the attribute group.</p>
     */
    inline GetAttributeGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_attributes;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastUpdateTime;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws

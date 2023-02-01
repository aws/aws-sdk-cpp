/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog-appregistry/model/Integrations.h>
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
  class GetApplicationResult
  {
  public:
    AWS_APPREGISTRY_API GetApplicationResult();
    AWS_APPREGISTRY_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the application.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the application.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the application.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the application.</p>
     */
    inline GetApplicationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the application.</p>
     */
    inline GetApplicationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application.</p>
     */
    inline GetApplicationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) that specifies the application across
     * services.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the application across
     * services.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the application across
     * services.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the application across
     * services.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the application across
     * services.</p>
     */
    inline GetApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the application across
     * services.</p>
     */
    inline GetApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the application across
     * services.</p>
     */
    inline GetApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline GetApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline GetApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline GetApplicationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline GetApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline GetApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline GetApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was
     * created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was
     * created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was
     * created.</p>
     */
    inline GetApplicationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was
     * created.</p>
     */
    inline GetApplicationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was last
     * updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTime = value; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was last
     * updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTime = std::move(value); }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was last
     * updated.</p>
     */
    inline GetApplicationResult& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was last
     * updated.</p>
     */
    inline GetApplicationResult& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The number of top-level resources that were registered as part of this
     * application.</p>
     */
    inline int GetAssociatedResourceCount() const{ return m_associatedResourceCount; }

    /**
     * <p>The number of top-level resources that were registered as part of this
     * application.</p>
     */
    inline void SetAssociatedResourceCount(int value) { m_associatedResourceCount = value; }

    /**
     * <p>The number of top-level resources that were registered as part of this
     * application.</p>
     */
    inline GetApplicationResult& WithAssociatedResourceCount(int value) { SetAssociatedResourceCount(value); return *this;}


    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline GetApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline GetApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline GetApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline GetApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline GetApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline GetApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline GetApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline GetApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs associated with the application.</p>
     */
    inline GetApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p> The information about the integration of the application with other
     * services, such as Resource Groups. </p>
     */
    inline const Integrations& GetIntegrations() const{ return m_integrations; }

    /**
     * <p> The information about the integration of the application with other
     * services, such as Resource Groups. </p>
     */
    inline void SetIntegrations(const Integrations& value) { m_integrations = value; }

    /**
     * <p> The information about the integration of the application with other
     * services, such as Resource Groups. </p>
     */
    inline void SetIntegrations(Integrations&& value) { m_integrations = std::move(value); }

    /**
     * <p> The information about the integration of the application with other
     * services, such as Resource Groups. </p>
     */
    inline GetApplicationResult& WithIntegrations(const Integrations& value) { SetIntegrations(value); return *this;}

    /**
     * <p> The information about the integration of the application with other
     * services, such as Resource Groups. </p>
     */
    inline GetApplicationResult& WithIntegrations(Integrations&& value) { SetIntegrations(std::move(value)); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastUpdateTime;

    int m_associatedResourceCount;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Integrations m_integrations;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws

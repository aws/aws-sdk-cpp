/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Configuration information for Amazon AppIntegrations to automatically ingest
   * content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/AppIntegrationsConfiguration">AWS
   * API Reference</a></p>
   */
  class AppIntegrationsConfiguration
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API AppIntegrationsConfiguration();
    AWS_CONNECTWISDOMSERVICE_API AppIntegrationsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API AppIntegrationsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the AppIntegrations DataIntegration to use
     * for ingesting content.</p>
     */
    inline const Aws::String& GetAppIntegrationArn() const{ return m_appIntegrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AppIntegrations DataIntegration to use
     * for ingesting content.</p>
     */
    inline bool AppIntegrationArnHasBeenSet() const { return m_appIntegrationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AppIntegrations DataIntegration to use
     * for ingesting content.</p>
     */
    inline void SetAppIntegrationArn(const Aws::String& value) { m_appIntegrationArnHasBeenSet = true; m_appIntegrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AppIntegrations DataIntegration to use
     * for ingesting content.</p>
     */
    inline void SetAppIntegrationArn(Aws::String&& value) { m_appIntegrationArnHasBeenSet = true; m_appIntegrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AppIntegrations DataIntegration to use
     * for ingesting content.</p>
     */
    inline void SetAppIntegrationArn(const char* value) { m_appIntegrationArnHasBeenSet = true; m_appIntegrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AppIntegrations DataIntegration to use
     * for ingesting content.</p>
     */
    inline AppIntegrationsConfiguration& WithAppIntegrationArn(const Aws::String& value) { SetAppIntegrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AppIntegrations DataIntegration to use
     * for ingesting content.</p>
     */
    inline AppIntegrationsConfiguration& WithAppIntegrationArn(Aws::String&& value) { SetAppIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AppIntegrations DataIntegration to use
     * for ingesting content.</p>
     */
    inline AppIntegrationsConfiguration& WithAppIntegrationArn(const char* value) { SetAppIntegrationArn(value); return *this;}


    /**
     * <p>The fields from the source that are made available to your agents in Wisdom.
     * </p> <ul> <li> <p> For <a
     * href="https://developer.salesforce.com/docs/atlas.en-us.knowledge_dev.meta/knowledge_dev/sforce_api_objects_knowledge__kav.htm">
     * Salesforce</a>, you must include at least <code>Id</code>,
     * <code>ArticleNumber</code>, <code>VersionNumber</code>, <code>Title</code>,
     * <code>PublishStatus</code>, and <code>IsDeleted</code>. </p> </li> <li> <p>For
     * <a
     * href="https://developer.servicenow.com/dev.do#!/reference/api/rome/rest/knowledge-management-api">
     * ServiceNow</a>, you must include at least <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, and <code>active</code>. </p> </li> </ul> <p>Make
     * sure to include additional fields. These fields are indexed and used to source
     * recommendations. </p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectFields() const{ return m_objectFields; }

    /**
     * <p>The fields from the source that are made available to your agents in Wisdom.
     * </p> <ul> <li> <p> For <a
     * href="https://developer.salesforce.com/docs/atlas.en-us.knowledge_dev.meta/knowledge_dev/sforce_api_objects_knowledge__kav.htm">
     * Salesforce</a>, you must include at least <code>Id</code>,
     * <code>ArticleNumber</code>, <code>VersionNumber</code>, <code>Title</code>,
     * <code>PublishStatus</code>, and <code>IsDeleted</code>. </p> </li> <li> <p>For
     * <a
     * href="https://developer.servicenow.com/dev.do#!/reference/api/rome/rest/knowledge-management-api">
     * ServiceNow</a>, you must include at least <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, and <code>active</code>. </p> </li> </ul> <p>Make
     * sure to include additional fields. These fields are indexed and used to source
     * recommendations. </p>
     */
    inline bool ObjectFieldsHasBeenSet() const { return m_objectFieldsHasBeenSet; }

    /**
     * <p>The fields from the source that are made available to your agents in Wisdom.
     * </p> <ul> <li> <p> For <a
     * href="https://developer.salesforce.com/docs/atlas.en-us.knowledge_dev.meta/knowledge_dev/sforce_api_objects_knowledge__kav.htm">
     * Salesforce</a>, you must include at least <code>Id</code>,
     * <code>ArticleNumber</code>, <code>VersionNumber</code>, <code>Title</code>,
     * <code>PublishStatus</code>, and <code>IsDeleted</code>. </p> </li> <li> <p>For
     * <a
     * href="https://developer.servicenow.com/dev.do#!/reference/api/rome/rest/knowledge-management-api">
     * ServiceNow</a>, you must include at least <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, and <code>active</code>. </p> </li> </ul> <p>Make
     * sure to include additional fields. These fields are indexed and used to source
     * recommendations. </p>
     */
    inline void SetObjectFields(const Aws::Vector<Aws::String>& value) { m_objectFieldsHasBeenSet = true; m_objectFields = value; }

    /**
     * <p>The fields from the source that are made available to your agents in Wisdom.
     * </p> <ul> <li> <p> For <a
     * href="https://developer.salesforce.com/docs/atlas.en-us.knowledge_dev.meta/knowledge_dev/sforce_api_objects_knowledge__kav.htm">
     * Salesforce</a>, you must include at least <code>Id</code>,
     * <code>ArticleNumber</code>, <code>VersionNumber</code>, <code>Title</code>,
     * <code>PublishStatus</code>, and <code>IsDeleted</code>. </p> </li> <li> <p>For
     * <a
     * href="https://developer.servicenow.com/dev.do#!/reference/api/rome/rest/knowledge-management-api">
     * ServiceNow</a>, you must include at least <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, and <code>active</code>. </p> </li> </ul> <p>Make
     * sure to include additional fields. These fields are indexed and used to source
     * recommendations. </p>
     */
    inline void SetObjectFields(Aws::Vector<Aws::String>&& value) { m_objectFieldsHasBeenSet = true; m_objectFields = std::move(value); }

    /**
     * <p>The fields from the source that are made available to your agents in Wisdom.
     * </p> <ul> <li> <p> For <a
     * href="https://developer.salesforce.com/docs/atlas.en-us.knowledge_dev.meta/knowledge_dev/sforce_api_objects_knowledge__kav.htm">
     * Salesforce</a>, you must include at least <code>Id</code>,
     * <code>ArticleNumber</code>, <code>VersionNumber</code>, <code>Title</code>,
     * <code>PublishStatus</code>, and <code>IsDeleted</code>. </p> </li> <li> <p>For
     * <a
     * href="https://developer.servicenow.com/dev.do#!/reference/api/rome/rest/knowledge-management-api">
     * ServiceNow</a>, you must include at least <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, and <code>active</code>. </p> </li> </ul> <p>Make
     * sure to include additional fields. These fields are indexed and used to source
     * recommendations. </p>
     */
    inline AppIntegrationsConfiguration& WithObjectFields(const Aws::Vector<Aws::String>& value) { SetObjectFields(value); return *this;}

    /**
     * <p>The fields from the source that are made available to your agents in Wisdom.
     * </p> <ul> <li> <p> For <a
     * href="https://developer.salesforce.com/docs/atlas.en-us.knowledge_dev.meta/knowledge_dev/sforce_api_objects_knowledge__kav.htm">
     * Salesforce</a>, you must include at least <code>Id</code>,
     * <code>ArticleNumber</code>, <code>VersionNumber</code>, <code>Title</code>,
     * <code>PublishStatus</code>, and <code>IsDeleted</code>. </p> </li> <li> <p>For
     * <a
     * href="https://developer.servicenow.com/dev.do#!/reference/api/rome/rest/knowledge-management-api">
     * ServiceNow</a>, you must include at least <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, and <code>active</code>. </p> </li> </ul> <p>Make
     * sure to include additional fields. These fields are indexed and used to source
     * recommendations. </p>
     */
    inline AppIntegrationsConfiguration& WithObjectFields(Aws::Vector<Aws::String>&& value) { SetObjectFields(std::move(value)); return *this;}

    /**
     * <p>The fields from the source that are made available to your agents in Wisdom.
     * </p> <ul> <li> <p> For <a
     * href="https://developer.salesforce.com/docs/atlas.en-us.knowledge_dev.meta/knowledge_dev/sforce_api_objects_knowledge__kav.htm">
     * Salesforce</a>, you must include at least <code>Id</code>,
     * <code>ArticleNumber</code>, <code>VersionNumber</code>, <code>Title</code>,
     * <code>PublishStatus</code>, and <code>IsDeleted</code>. </p> </li> <li> <p>For
     * <a
     * href="https://developer.servicenow.com/dev.do#!/reference/api/rome/rest/knowledge-management-api">
     * ServiceNow</a>, you must include at least <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, and <code>active</code>. </p> </li> </ul> <p>Make
     * sure to include additional fields. These fields are indexed and used to source
     * recommendations. </p>
     */
    inline AppIntegrationsConfiguration& AddObjectFields(const Aws::String& value) { m_objectFieldsHasBeenSet = true; m_objectFields.push_back(value); return *this; }

    /**
     * <p>The fields from the source that are made available to your agents in Wisdom.
     * </p> <ul> <li> <p> For <a
     * href="https://developer.salesforce.com/docs/atlas.en-us.knowledge_dev.meta/knowledge_dev/sforce_api_objects_knowledge__kav.htm">
     * Salesforce</a>, you must include at least <code>Id</code>,
     * <code>ArticleNumber</code>, <code>VersionNumber</code>, <code>Title</code>,
     * <code>PublishStatus</code>, and <code>IsDeleted</code>. </p> </li> <li> <p>For
     * <a
     * href="https://developer.servicenow.com/dev.do#!/reference/api/rome/rest/knowledge-management-api">
     * ServiceNow</a>, you must include at least <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, and <code>active</code>. </p> </li> </ul> <p>Make
     * sure to include additional fields. These fields are indexed and used to source
     * recommendations. </p>
     */
    inline AppIntegrationsConfiguration& AddObjectFields(Aws::String&& value) { m_objectFieldsHasBeenSet = true; m_objectFields.push_back(std::move(value)); return *this; }

    /**
     * <p>The fields from the source that are made available to your agents in Wisdom.
     * </p> <ul> <li> <p> For <a
     * href="https://developer.salesforce.com/docs/atlas.en-us.knowledge_dev.meta/knowledge_dev/sforce_api_objects_knowledge__kav.htm">
     * Salesforce</a>, you must include at least <code>Id</code>,
     * <code>ArticleNumber</code>, <code>VersionNumber</code>, <code>Title</code>,
     * <code>PublishStatus</code>, and <code>IsDeleted</code>. </p> </li> <li> <p>For
     * <a
     * href="https://developer.servicenow.com/dev.do#!/reference/api/rome/rest/knowledge-management-api">
     * ServiceNow</a>, you must include at least <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, and <code>active</code>. </p> </li> </ul> <p>Make
     * sure to include additional fields. These fields are indexed and used to source
     * recommendations. </p>
     */
    inline AppIntegrationsConfiguration& AddObjectFields(const char* value) { m_objectFieldsHasBeenSet = true; m_objectFields.push_back(value); return *this; }

  private:

    Aws::String m_appIntegrationArn;
    bool m_appIntegrationArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_objectFields;
    bool m_objectFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws

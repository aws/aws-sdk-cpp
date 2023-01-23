/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about how to render the content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/RenderingConfiguration">AWS
   * API Reference</a></p>
   */
  class RenderingConfiguration
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API RenderingConfiguration();
    AWS_CONNECTWISDOMSERVICE_API RenderingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API RenderingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A URI template containing exactly one variable in <code>${variableName}
     * </code>format. This can only be set for <code>EXTERNAL</code> knowledge bases.
     * For Salesforce and ServiceNow, the variable must be one of the following:</p>
     * <ul> <li> <p>Salesforce: <code>Id</code>, <code>ArticleNumber</code>,
     * <code>VersionNumber</code>, <code>Title</code>, <code>PublishStatus</code>, or
     * <code>IsDeleted</code> </p> </li> <li> <p>ServiceNow: <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, or <code>active</code> </p> </li> </ul> <pre><code>
     * &lt;p&gt;The variable is replaced with the actual value for a piece of content
     * when calling &lt;a
     * href=&quot;https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetContent.html&quot;&gt;GetContent&lt;/a&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline const Aws::String& GetTemplateUri() const{ return m_templateUri; }

    /**
     * <p>A URI template containing exactly one variable in <code>${variableName}
     * </code>format. This can only be set for <code>EXTERNAL</code> knowledge bases.
     * For Salesforce and ServiceNow, the variable must be one of the following:</p>
     * <ul> <li> <p>Salesforce: <code>Id</code>, <code>ArticleNumber</code>,
     * <code>VersionNumber</code>, <code>Title</code>, <code>PublishStatus</code>, or
     * <code>IsDeleted</code> </p> </li> <li> <p>ServiceNow: <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, or <code>active</code> </p> </li> </ul> <pre><code>
     * &lt;p&gt;The variable is replaced with the actual value for a piece of content
     * when calling &lt;a
     * href=&quot;https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetContent.html&quot;&gt;GetContent&lt;/a&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline bool TemplateUriHasBeenSet() const { return m_templateUriHasBeenSet; }

    /**
     * <p>A URI template containing exactly one variable in <code>${variableName}
     * </code>format. This can only be set for <code>EXTERNAL</code> knowledge bases.
     * For Salesforce and ServiceNow, the variable must be one of the following:</p>
     * <ul> <li> <p>Salesforce: <code>Id</code>, <code>ArticleNumber</code>,
     * <code>VersionNumber</code>, <code>Title</code>, <code>PublishStatus</code>, or
     * <code>IsDeleted</code> </p> </li> <li> <p>ServiceNow: <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, or <code>active</code> </p> </li> </ul> <pre><code>
     * &lt;p&gt;The variable is replaced with the actual value for a piece of content
     * when calling &lt;a
     * href=&quot;https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetContent.html&quot;&gt;GetContent&lt;/a&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline void SetTemplateUri(const Aws::String& value) { m_templateUriHasBeenSet = true; m_templateUri = value; }

    /**
     * <p>A URI template containing exactly one variable in <code>${variableName}
     * </code>format. This can only be set for <code>EXTERNAL</code> knowledge bases.
     * For Salesforce and ServiceNow, the variable must be one of the following:</p>
     * <ul> <li> <p>Salesforce: <code>Id</code>, <code>ArticleNumber</code>,
     * <code>VersionNumber</code>, <code>Title</code>, <code>PublishStatus</code>, or
     * <code>IsDeleted</code> </p> </li> <li> <p>ServiceNow: <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, or <code>active</code> </p> </li> </ul> <pre><code>
     * &lt;p&gt;The variable is replaced with the actual value for a piece of content
     * when calling &lt;a
     * href=&quot;https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetContent.html&quot;&gt;GetContent&lt;/a&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline void SetTemplateUri(Aws::String&& value) { m_templateUriHasBeenSet = true; m_templateUri = std::move(value); }

    /**
     * <p>A URI template containing exactly one variable in <code>${variableName}
     * </code>format. This can only be set for <code>EXTERNAL</code> knowledge bases.
     * For Salesforce and ServiceNow, the variable must be one of the following:</p>
     * <ul> <li> <p>Salesforce: <code>Id</code>, <code>ArticleNumber</code>,
     * <code>VersionNumber</code>, <code>Title</code>, <code>PublishStatus</code>, or
     * <code>IsDeleted</code> </p> </li> <li> <p>ServiceNow: <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, or <code>active</code> </p> </li> </ul> <pre><code>
     * &lt;p&gt;The variable is replaced with the actual value for a piece of content
     * when calling &lt;a
     * href=&quot;https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetContent.html&quot;&gt;GetContent&lt;/a&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline void SetTemplateUri(const char* value) { m_templateUriHasBeenSet = true; m_templateUri.assign(value); }

    /**
     * <p>A URI template containing exactly one variable in <code>${variableName}
     * </code>format. This can only be set for <code>EXTERNAL</code> knowledge bases.
     * For Salesforce and ServiceNow, the variable must be one of the following:</p>
     * <ul> <li> <p>Salesforce: <code>Id</code>, <code>ArticleNumber</code>,
     * <code>VersionNumber</code>, <code>Title</code>, <code>PublishStatus</code>, or
     * <code>IsDeleted</code> </p> </li> <li> <p>ServiceNow: <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, or <code>active</code> </p> </li> </ul> <pre><code>
     * &lt;p&gt;The variable is replaced with the actual value for a piece of content
     * when calling &lt;a
     * href=&quot;https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetContent.html&quot;&gt;GetContent&lt;/a&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline RenderingConfiguration& WithTemplateUri(const Aws::String& value) { SetTemplateUri(value); return *this;}

    /**
     * <p>A URI template containing exactly one variable in <code>${variableName}
     * </code>format. This can only be set for <code>EXTERNAL</code> knowledge bases.
     * For Salesforce and ServiceNow, the variable must be one of the following:</p>
     * <ul> <li> <p>Salesforce: <code>Id</code>, <code>ArticleNumber</code>,
     * <code>VersionNumber</code>, <code>Title</code>, <code>PublishStatus</code>, or
     * <code>IsDeleted</code> </p> </li> <li> <p>ServiceNow: <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, or <code>active</code> </p> </li> </ul> <pre><code>
     * &lt;p&gt;The variable is replaced with the actual value for a piece of content
     * when calling &lt;a
     * href=&quot;https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetContent.html&quot;&gt;GetContent&lt;/a&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline RenderingConfiguration& WithTemplateUri(Aws::String&& value) { SetTemplateUri(std::move(value)); return *this;}

    /**
     * <p>A URI template containing exactly one variable in <code>${variableName}
     * </code>format. This can only be set for <code>EXTERNAL</code> knowledge bases.
     * For Salesforce and ServiceNow, the variable must be one of the following:</p>
     * <ul> <li> <p>Salesforce: <code>Id</code>, <code>ArticleNumber</code>,
     * <code>VersionNumber</code>, <code>Title</code>, <code>PublishStatus</code>, or
     * <code>IsDeleted</code> </p> </li> <li> <p>ServiceNow: <code>number</code>,
     * <code>short_description</code>, <code>sys_mod_count</code>,
     * <code>workflow_state</code>, or <code>active</code> </p> </li> </ul> <pre><code>
     * &lt;p&gt;The variable is replaced with the actual value for a piece of content
     * when calling &lt;a
     * href=&quot;https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetContent.html&quot;&gt;GetContent&lt;/a&gt;.
     * &lt;/p&gt; </code></pre>
     */
    inline RenderingConfiguration& WithTemplateUri(const char* value) { SetTemplateUri(value); return *this;}

  private:

    Aws::String m_templateUri;
    bool m_templateUriHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws

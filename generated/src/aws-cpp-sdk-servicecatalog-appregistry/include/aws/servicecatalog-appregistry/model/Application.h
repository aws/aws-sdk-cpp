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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppRegistry
{
namespace Model
{

  /**
   * <p>Represents a Amazon Web Services Service Catalog AppRegistry application that
   * is the top-level node in a hierarchy of related cloud resource
   * abstractions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/Application">AWS
   * API Reference</a></p>
   */
  class Application
  {
  public:
    AWS_APPREGISTRY_API Application();
    AWS_APPREGISTRY_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Application& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Application& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Application& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) that specifies the application across
     * services.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Application& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Application& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Application& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Application& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Application& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Application& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Application& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Application& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Application& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO-8601 formatted timestamp of the moment when the application was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Application& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Application& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ISO-8601 formatted timestamp of the moment when the application was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline Application& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline Application& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Application& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Application& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Application& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Application& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Application& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Application& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Application& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Application& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Application& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A key-value pair that identifies an associated resource. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetApplicationTag() const{ return m_applicationTag; }
    inline bool ApplicationTagHasBeenSet() const { return m_applicationTagHasBeenSet; }
    inline void SetApplicationTag(const Aws::Map<Aws::String, Aws::String>& value) { m_applicationTagHasBeenSet = true; m_applicationTag = value; }
    inline void SetApplicationTag(Aws::Map<Aws::String, Aws::String>&& value) { m_applicationTagHasBeenSet = true; m_applicationTag = std::move(value); }
    inline Application& WithApplicationTag(const Aws::Map<Aws::String, Aws::String>& value) { SetApplicationTag(value); return *this;}
    inline Application& WithApplicationTag(Aws::Map<Aws::String, Aws::String>&& value) { SetApplicationTag(std::move(value)); return *this;}
    inline Application& AddApplicationTag(const Aws::String& key, const Aws::String& value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(key, value); return *this; }
    inline Application& AddApplicationTag(Aws::String&& key, const Aws::String& value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(std::move(key), value); return *this; }
    inline Application& AddApplicationTag(const Aws::String& key, Aws::String&& value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(key, std::move(value)); return *this; }
    inline Application& AddApplicationTag(Aws::String&& key, Aws::String&& value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(std::move(key), std::move(value)); return *this; }
    inline Application& AddApplicationTag(const char* key, Aws::String&& value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(key, std::move(value)); return *this; }
    inline Application& AddApplicationTag(Aws::String&& key, const char* value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(std::move(key), value); return *this; }
    inline Application& AddApplicationTag(const char* key, const char* value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_applicationTag;
    bool m_applicationTagHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws

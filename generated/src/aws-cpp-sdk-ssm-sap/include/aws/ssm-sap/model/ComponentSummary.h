/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ComponentType.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>The summary of the component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ComponentSummary">AWS
   * API Reference</a></p>
   */
  class ComponentSummary
  {
  public:
    AWS_SSMSAP_API ComponentSummary();
    AWS_SSMSAP_API ComponentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API ComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline ComponentSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline ComponentSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline ComponentSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The ID of the component.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }

    /**
     * <p>The ID of the component.</p>
     */
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }

    /**
     * <p>The ID of the component.</p>
     */
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }

    /**
     * <p>The ID of the component.</p>
     */
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }

    /**
     * <p>The ID of the component.</p>
     */
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }

    /**
     * <p>The ID of the component.</p>
     */
    inline ComponentSummary& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}

    /**
     * <p>The ID of the component.</p>
     */
    inline ComponentSummary& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component.</p>
     */
    inline ComponentSummary& WithComponentId(const char* value) { SetComponentId(value); return *this;}


    /**
     * <p>The type of the component.</p>
     */
    inline const ComponentType& GetComponentType() const{ return m_componentType; }

    /**
     * <p>The type of the component.</p>
     */
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }

    /**
     * <p>The type of the component.</p>
     */
    inline void SetComponentType(const ComponentType& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }

    /**
     * <p>The type of the component.</p>
     */
    inline void SetComponentType(ComponentType&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }

    /**
     * <p>The type of the component.</p>
     */
    inline ComponentSummary& WithComponentType(const ComponentType& value) { SetComponentType(value); return *this;}

    /**
     * <p>The type of the component.</p>
     */
    inline ComponentSummary& WithComponentType(ComponentType&& value) { SetComponentType(std::move(value)); return *this;}


    /**
     * <p>The tags of the component.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the component.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the component.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the component.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the component.</p>
     */
    inline ComponentSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the component.</p>
     */
    inline ComponentSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the component.</p>
     */
    inline ComponentSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ComponentSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ComponentSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ComponentSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ComponentSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ComponentSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ComponentSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the component summary.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component summary.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component summary.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component summary.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component summary.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component summary.</p>
     */
    inline ComponentSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component summary.</p>
     */
    inline ComponentSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component summary.</p>
     */
    inline ComponentSummary& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    ComponentType m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

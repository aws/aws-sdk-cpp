/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/medialive/model/SignalMapMonitorDeploymentStatus.h>
#include <aws/medialive/model/SignalMapStatus.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for SignalMapSummary<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SignalMapSummary">AWS
   * API Reference</a></p>
   */
  class SignalMapSummary
  {
  public:
    AWS_MEDIALIVE_API SignalMapSummary();
    AWS_MEDIALIVE_API SignalMapSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SignalMapSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline SignalMapSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline SignalMapSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline SignalMapSummary& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    
    inline SignalMapSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline SignalMapSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A resource's optional description.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A resource's optional description.
     */
    inline SignalMapSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline SignalMapSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline SignalMapSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * A signal map's id.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A signal map's id.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * A signal map's id.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A signal map's id.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * A signal map's id.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A signal map's id.
     */
    inline SignalMapSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A signal map's id.
     */
    inline SignalMapSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A signal map's id.
     */
    inline SignalMapSummary& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    
    inline SignalMapSummary& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    
    inline SignalMapSummary& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    
    inline const SignalMapMonitorDeploymentStatus& GetMonitorDeploymentStatus() const{ return m_monitorDeploymentStatus; }

    
    inline bool MonitorDeploymentStatusHasBeenSet() const { return m_monitorDeploymentStatusHasBeenSet; }

    
    inline void SetMonitorDeploymentStatus(const SignalMapMonitorDeploymentStatus& value) { m_monitorDeploymentStatusHasBeenSet = true; m_monitorDeploymentStatus = value; }

    
    inline void SetMonitorDeploymentStatus(SignalMapMonitorDeploymentStatus&& value) { m_monitorDeploymentStatusHasBeenSet = true; m_monitorDeploymentStatus = std::move(value); }

    
    inline SignalMapSummary& WithMonitorDeploymentStatus(const SignalMapMonitorDeploymentStatus& value) { SetMonitorDeploymentStatus(value); return *this;}

    
    inline SignalMapSummary& WithMonitorDeploymentStatus(SignalMapMonitorDeploymentStatus&& value) { SetMonitorDeploymentStatus(std::move(value)); return *this;}


    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline SignalMapSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline SignalMapSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline SignalMapSummary& WithName(const char* value) { SetName(value); return *this;}


    
    inline const SignalMapStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const SignalMapStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(SignalMapStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline SignalMapSummary& WithStatus(const SignalMapStatus& value) { SetStatus(value); return *this;}

    
    inline SignalMapSummary& WithStatus(SignalMapStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline SignalMapSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline SignalMapSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline SignalMapSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline SignalMapSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline SignalMapSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline SignalMapSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline SignalMapSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline SignalMapSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline SignalMapSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    SignalMapMonitorDeploymentStatus m_monitorDeploymentStatus;
    bool m_monitorDeploymentStatusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SignalMapStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

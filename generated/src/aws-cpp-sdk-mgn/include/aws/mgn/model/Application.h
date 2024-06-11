/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ApplicationAggregatedStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace mgn
{
namespace Model
{

  class Application
  {
  public:
    AWS_MGN_API Application();
    AWS_MGN_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Application aggregated status.</p>
     */
    inline const ApplicationAggregatedStatus& GetApplicationAggregatedStatus() const{ return m_applicationAggregatedStatus; }
    inline bool ApplicationAggregatedStatusHasBeenSet() const { return m_applicationAggregatedStatusHasBeenSet; }
    inline void SetApplicationAggregatedStatus(const ApplicationAggregatedStatus& value) { m_applicationAggregatedStatusHasBeenSet = true; m_applicationAggregatedStatus = value; }
    inline void SetApplicationAggregatedStatus(ApplicationAggregatedStatus&& value) { m_applicationAggregatedStatusHasBeenSet = true; m_applicationAggregatedStatus = std::move(value); }
    inline Application& WithApplicationAggregatedStatus(const ApplicationAggregatedStatus& value) { SetApplicationAggregatedStatus(value); return *this;}
    inline Application& WithApplicationAggregatedStatus(ApplicationAggregatedStatus&& value) { SetApplicationAggregatedStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const{ return m_applicationID; }
    inline bool ApplicationIDHasBeenSet() const { return m_applicationIDHasBeenSet; }
    inline void SetApplicationID(const Aws::String& value) { m_applicationIDHasBeenSet = true; m_applicationID = value; }
    inline void SetApplicationID(Aws::String&& value) { m_applicationIDHasBeenSet = true; m_applicationID = std::move(value); }
    inline void SetApplicationID(const char* value) { m_applicationIDHasBeenSet = true; m_applicationID.assign(value); }
    inline Application& WithApplicationID(const Aws::String& value) { SetApplicationID(value); return *this;}
    inline Application& WithApplicationID(Aws::String&& value) { SetApplicationID(std::move(value)); return *this;}
    inline Application& WithApplicationID(const char* value) { SetApplicationID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application ARN.</p>
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
     * <p>Application creation dateTime.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline void SetCreationDateTime(const char* value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime.assign(value); }
    inline Application& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}
    inline Application& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}
    inline Application& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application description.</p>
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
     * <p>Application archival status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline Application& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application last modified dateTime.</p>
     */
    inline const Aws::String& GetLastModifiedDateTime() const{ return m_lastModifiedDateTime; }
    inline bool LastModifiedDateTimeHasBeenSet() const { return m_lastModifiedDateTimeHasBeenSet; }
    inline void SetLastModifiedDateTime(const Aws::String& value) { m_lastModifiedDateTimeHasBeenSet = true; m_lastModifiedDateTime = value; }
    inline void SetLastModifiedDateTime(Aws::String&& value) { m_lastModifiedDateTimeHasBeenSet = true; m_lastModifiedDateTime = std::move(value); }
    inline void SetLastModifiedDateTime(const char* value) { m_lastModifiedDateTimeHasBeenSet = true; m_lastModifiedDateTime.assign(value); }
    inline Application& WithLastModifiedDateTime(const Aws::String& value) { SetLastModifiedDateTime(value); return *this;}
    inline Application& WithLastModifiedDateTime(Aws::String&& value) { SetLastModifiedDateTime(std::move(value)); return *this;}
    inline Application& WithLastModifiedDateTime(const char* value) { SetLastModifiedDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application name.</p>
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
     * <p>Application tags.</p>
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
     * <p>Application wave ID.</p>
     */
    inline const Aws::String& GetWaveID() const{ return m_waveID; }
    inline bool WaveIDHasBeenSet() const { return m_waveIDHasBeenSet; }
    inline void SetWaveID(const Aws::String& value) { m_waveIDHasBeenSet = true; m_waveID = value; }
    inline void SetWaveID(Aws::String&& value) { m_waveIDHasBeenSet = true; m_waveID = std::move(value); }
    inline void SetWaveID(const char* value) { m_waveIDHasBeenSet = true; m_waveID.assign(value); }
    inline Application& WithWaveID(const Aws::String& value) { SetWaveID(value); return *this;}
    inline Application& WithWaveID(Aws::String&& value) { SetWaveID(std::move(value)); return *this;}
    inline Application& WithWaveID(const char* value) { SetWaveID(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline Application& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline Application& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline Application& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ApplicationAggregatedStatus m_applicationAggregatedStatus;
    bool m_applicationAggregatedStatusHasBeenSet = false;

    Aws::String m_applicationID;
    bool m_applicationIDHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isArchived;
    bool m_isArchivedHasBeenSet = false;

    Aws::String m_lastModifiedDateTime;
    bool m_lastModifiedDateTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_waveID;
    bool m_waveIDHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws

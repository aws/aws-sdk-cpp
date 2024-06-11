/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/WorkflowStatus.h>
#include <aws/omics/model/WorkflowType.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/WorkflowListItem">AWS
   * API Reference</a></p>
   */
  class WorkflowListItem
  {
  public:
    AWS_OMICS_API WorkflowListItem();
    AWS_OMICS_API WorkflowListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API WorkflowListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The workflow's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline WorkflowListItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline WorkflowListItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline WorkflowListItem& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WorkflowListItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WorkflowListItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WorkflowListItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkflowListItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkflowListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkflowListItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's status.</p>
     */
    inline const WorkflowStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkflowStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkflowStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkflowListItem& WithStatus(const WorkflowStatus& value) { SetStatus(value); return *this;}
    inline WorkflowListItem& WithStatus(WorkflowStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's type.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const WorkflowType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(WorkflowType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline WorkflowListItem& WithType(const WorkflowType& value) { SetType(value); return *this;}
    inline WorkflowListItem& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's digest.</p>
     */
    inline const Aws::String& GetDigest() const{ return m_digest; }
    inline bool DigestHasBeenSet() const { return m_digestHasBeenSet; }
    inline void SetDigest(const Aws::String& value) { m_digestHasBeenSet = true; m_digest = value; }
    inline void SetDigest(Aws::String&& value) { m_digestHasBeenSet = true; m_digest = std::move(value); }
    inline void SetDigest(const char* value) { m_digestHasBeenSet = true; m_digest.assign(value); }
    inline WorkflowListItem& WithDigest(const Aws::String& value) { SetDigest(value); return *this;}
    inline WorkflowListItem& WithDigest(Aws::String&& value) { SetDigest(std::move(value)); return *this;}
    inline WorkflowListItem& WithDigest(const char* value) { SetDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline WorkflowListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline WorkflowListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Any metadata available for workflow. The information listed may vary
     * depending on the workflow, and there may also be no metadata to return. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline WorkflowListItem& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}
    inline WorkflowListItem& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}
    inline WorkflowListItem& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    inline WorkflowListItem& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline WorkflowListItem& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline WorkflowListItem& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline WorkflowListItem& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline WorkflowListItem& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline WorkflowListItem& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    WorkflowStatus m_status;
    bool m_statusHasBeenSet = false;

    WorkflowType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_digest;
    bool m_digestHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

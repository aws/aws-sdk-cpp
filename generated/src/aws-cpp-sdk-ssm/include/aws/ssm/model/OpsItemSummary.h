/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/OpsItemStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/OpsItemDataValue.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A count of OpsItems.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemSummary">AWS
   * API Reference</a></p>
   */
  class OpsItemSummary
  {
  public:
    AWS_SSM_API OpsItemSummary();
    AWS_SSM_API OpsItemSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline OpsItemSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline OpsItemSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline OpsItemSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline OpsItemSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline OpsItemSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline OpsItemSummary& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline OpsItemSummary& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM entity that created the
     * OpsItem.</p>
     */
    inline OpsItemSummary& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline OpsItemSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline OpsItemSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline OpsItemSummary& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The impacted Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The impacted Amazon Web Services resource.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The impacted Amazon Web Services resource.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The impacted Amazon Web Services resource.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The impacted Amazon Web Services resource.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The impacted Amazon Web Services resource.</p>
     */
    inline OpsItemSummary& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The impacted Amazon Web Services resource.</p>
     */
    inline OpsItemSummary& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The impacted Amazon Web Services resource.</p>
     */
    inline OpsItemSummary& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>.</p>
     */
    inline const OpsItemStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>.</p>
     */
    inline void SetStatus(const OpsItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>.</p>
     */
    inline void SetStatus(OpsItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>.</p>
     */
    inline OpsItemSummary& WithStatus(const OpsItemStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>.</p>
     */
    inline OpsItemSummary& WithStatus(OpsItemStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline OpsItemSummary& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline OpsItemSummary& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline OpsItemSummary& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}


    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline OpsItemSummary& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline OpsItemSummary& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline OpsItemSummary& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline const Aws::Map<Aws::String, OpsItemDataValue>& GetOperationalData() const{ return m_operationalData; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline bool OperationalDataHasBeenSet() const { return m_operationalDataHasBeenSet; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline void SetOperationalData(const Aws::Map<Aws::String, OpsItemDataValue>& value) { m_operationalDataHasBeenSet = true; m_operationalData = value; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline void SetOperationalData(Aws::Map<Aws::String, OpsItemDataValue>&& value) { m_operationalDataHasBeenSet = true; m_operationalData = std::move(value); }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline OpsItemSummary& WithOperationalData(const Aws::Map<Aws::String, OpsItemDataValue>& value) { SetOperationalData(value); return *this;}

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline OpsItemSummary& WithOperationalData(Aws::Map<Aws::String, OpsItemDataValue>&& value) { SetOperationalData(std::move(value)); return *this;}

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline OpsItemSummary& AddOperationalData(const Aws::String& key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, value); return *this; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline OpsItemSummary& AddOperationalData(Aws::String&& key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::move(key), value); return *this; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline OpsItemSummary& AddOperationalData(const Aws::String& key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline OpsItemSummary& AddOperationalData(Aws::String&& key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline OpsItemSummary& AddOperationalData(const char* key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. </p>
     */
    inline OpsItemSummary& AddOperationalData(const char* key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, value); return *this; }


    /**
     * <p>A list of OpsItems by category.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>A list of OpsItems by category.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>A list of OpsItems by category.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>A list of OpsItems by category.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>A list of OpsItems by category.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>A list of OpsItems by category.</p>
     */
    inline OpsItemSummary& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>A list of OpsItems by category.</p>
     */
    inline OpsItemSummary& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>A list of OpsItems by category.</p>
     */
    inline OpsItemSummary& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>A list of OpsItems by severity.</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>A list of OpsItems by severity.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>A list of OpsItems by severity.</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>A list of OpsItems by severity.</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>A list of OpsItems by severity.</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>A list of OpsItems by severity.</p>
     */
    inline OpsItemSummary& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>A list of OpsItems by severity.</p>
     */
    inline OpsItemSummary& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>A list of OpsItems by severity.</p>
     */
    inline OpsItemSummary& WithSeverity(const char* value) { SetSeverity(value); return *this;}


    /**
     * <p>The type of OpsItem. Systems Manager supports the following types of
     * OpsItems:</p> <ul> <li> <p> <code>/aws/issue</code> </p> <p>This type of OpsItem
     * is used for default OpsItems created by OpsCenter. </p> </li> <li> <p>
     * <code>/aws/changerequest</code> </p> <p>This type of OpsItem is used by Change
     * Manager for reviewing and approving or rejecting change requests. </p> </li>
     * <li> <p> <code>/aws/insights</code> </p> <p>This type of OpsItem is used by
     * OpsCenter for aggregating and reporting on duplicate OpsItems. </p> </li> </ul>
     */
    inline const Aws::String& GetOpsItemType() const{ return m_opsItemType; }

    /**
     * <p>The type of OpsItem. Systems Manager supports the following types of
     * OpsItems:</p> <ul> <li> <p> <code>/aws/issue</code> </p> <p>This type of OpsItem
     * is used for default OpsItems created by OpsCenter. </p> </li> <li> <p>
     * <code>/aws/changerequest</code> </p> <p>This type of OpsItem is used by Change
     * Manager for reviewing and approving or rejecting change requests. </p> </li>
     * <li> <p> <code>/aws/insights</code> </p> <p>This type of OpsItem is used by
     * OpsCenter for aggregating and reporting on duplicate OpsItems. </p> </li> </ul>
     */
    inline bool OpsItemTypeHasBeenSet() const { return m_opsItemTypeHasBeenSet; }

    /**
     * <p>The type of OpsItem. Systems Manager supports the following types of
     * OpsItems:</p> <ul> <li> <p> <code>/aws/issue</code> </p> <p>This type of OpsItem
     * is used for default OpsItems created by OpsCenter. </p> </li> <li> <p>
     * <code>/aws/changerequest</code> </p> <p>This type of OpsItem is used by Change
     * Manager for reviewing and approving or rejecting change requests. </p> </li>
     * <li> <p> <code>/aws/insights</code> </p> <p>This type of OpsItem is used by
     * OpsCenter for aggregating and reporting on duplicate OpsItems. </p> </li> </ul>
     */
    inline void SetOpsItemType(const Aws::String& value) { m_opsItemTypeHasBeenSet = true; m_opsItemType = value; }

    /**
     * <p>The type of OpsItem. Systems Manager supports the following types of
     * OpsItems:</p> <ul> <li> <p> <code>/aws/issue</code> </p> <p>This type of OpsItem
     * is used for default OpsItems created by OpsCenter. </p> </li> <li> <p>
     * <code>/aws/changerequest</code> </p> <p>This type of OpsItem is used by Change
     * Manager for reviewing and approving or rejecting change requests. </p> </li>
     * <li> <p> <code>/aws/insights</code> </p> <p>This type of OpsItem is used by
     * OpsCenter for aggregating and reporting on duplicate OpsItems. </p> </li> </ul>
     */
    inline void SetOpsItemType(Aws::String&& value) { m_opsItemTypeHasBeenSet = true; m_opsItemType = std::move(value); }

    /**
     * <p>The type of OpsItem. Systems Manager supports the following types of
     * OpsItems:</p> <ul> <li> <p> <code>/aws/issue</code> </p> <p>This type of OpsItem
     * is used for default OpsItems created by OpsCenter. </p> </li> <li> <p>
     * <code>/aws/changerequest</code> </p> <p>This type of OpsItem is used by Change
     * Manager for reviewing and approving or rejecting change requests. </p> </li>
     * <li> <p> <code>/aws/insights</code> </p> <p>This type of OpsItem is used by
     * OpsCenter for aggregating and reporting on duplicate OpsItems. </p> </li> </ul>
     */
    inline void SetOpsItemType(const char* value) { m_opsItemTypeHasBeenSet = true; m_opsItemType.assign(value); }

    /**
     * <p>The type of OpsItem. Systems Manager supports the following types of
     * OpsItems:</p> <ul> <li> <p> <code>/aws/issue</code> </p> <p>This type of OpsItem
     * is used for default OpsItems created by OpsCenter. </p> </li> <li> <p>
     * <code>/aws/changerequest</code> </p> <p>This type of OpsItem is used by Change
     * Manager for reviewing and approving or rejecting change requests. </p> </li>
     * <li> <p> <code>/aws/insights</code> </p> <p>This type of OpsItem is used by
     * OpsCenter for aggregating and reporting on duplicate OpsItems. </p> </li> </ul>
     */
    inline OpsItemSummary& WithOpsItemType(const Aws::String& value) { SetOpsItemType(value); return *this;}

    /**
     * <p>The type of OpsItem. Systems Manager supports the following types of
     * OpsItems:</p> <ul> <li> <p> <code>/aws/issue</code> </p> <p>This type of OpsItem
     * is used for default OpsItems created by OpsCenter. </p> </li> <li> <p>
     * <code>/aws/changerequest</code> </p> <p>This type of OpsItem is used by Change
     * Manager for reviewing and approving or rejecting change requests. </p> </li>
     * <li> <p> <code>/aws/insights</code> </p> <p>This type of OpsItem is used by
     * OpsCenter for aggregating and reporting on duplicate OpsItems. </p> </li> </ul>
     */
    inline OpsItemSummary& WithOpsItemType(Aws::String&& value) { SetOpsItemType(std::move(value)); return *this;}

    /**
     * <p>The type of OpsItem. Systems Manager supports the following types of
     * OpsItems:</p> <ul> <li> <p> <code>/aws/issue</code> </p> <p>This type of OpsItem
     * is used for default OpsItems created by OpsCenter. </p> </li> <li> <p>
     * <code>/aws/changerequest</code> </p> <p>This type of OpsItem is used by Change
     * Manager for reviewing and approving or rejecting change requests. </p> </li>
     * <li> <p> <code>/aws/insights</code> </p> <p>This type of OpsItem is used by
     * OpsCenter for aggregating and reporting on duplicate OpsItems. </p> </li> </ul>
     */
    inline OpsItemSummary& WithOpsItemType(const char* value) { SetOpsItemType(value); return *this;}


    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetActualStartTime() const{ return m_actualStartTime; }

    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline bool ActualStartTimeHasBeenSet() const { return m_actualStartTimeHasBeenSet; }

    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline void SetActualStartTime(const Aws::Utils::DateTime& value) { m_actualStartTimeHasBeenSet = true; m_actualStartTime = value; }

    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline void SetActualStartTime(Aws::Utils::DateTime&& value) { m_actualStartTimeHasBeenSet = true; m_actualStartTime = std::move(value); }

    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline OpsItemSummary& WithActualStartTime(const Aws::Utils::DateTime& value) { SetActualStartTime(value); return *this;}

    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline OpsItemSummary& WithActualStartTime(Aws::Utils::DateTime&& value) { SetActualStartTime(std::move(value)); return *this;}


    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetActualEndTime() const{ return m_actualEndTime; }

    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline bool ActualEndTimeHasBeenSet() const { return m_actualEndTimeHasBeenSet; }

    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline void SetActualEndTime(const Aws::Utils::DateTime& value) { m_actualEndTimeHasBeenSet = true; m_actualEndTime = value; }

    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline void SetActualEndTime(Aws::Utils::DateTime&& value) { m_actualEndTimeHasBeenSet = true; m_actualEndTime = std::move(value); }

    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline OpsItemSummary& WithActualEndTime(const Aws::Utils::DateTime& value) { SetActualEndTime(value); return *this;}

    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline OpsItemSummary& WithActualEndTime(Aws::Utils::DateTime&& value) { SetActualEndTime(std::move(value)); return *this;}


    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetPlannedStartTime() const{ return m_plannedStartTime; }

    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline bool PlannedStartTimeHasBeenSet() const { return m_plannedStartTimeHasBeenSet; }

    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline void SetPlannedStartTime(const Aws::Utils::DateTime& value) { m_plannedStartTimeHasBeenSet = true; m_plannedStartTime = value; }

    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline void SetPlannedStartTime(Aws::Utils::DateTime&& value) { m_plannedStartTimeHasBeenSet = true; m_plannedStartTime = std::move(value); }

    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline OpsItemSummary& WithPlannedStartTime(const Aws::Utils::DateTime& value) { SetPlannedStartTime(value); return *this;}

    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline OpsItemSummary& WithPlannedStartTime(Aws::Utils::DateTime&& value) { SetPlannedStartTime(std::move(value)); return *this;}


    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetPlannedEndTime() const{ return m_plannedEndTime; }

    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline bool PlannedEndTimeHasBeenSet() const { return m_plannedEndTimeHasBeenSet; }

    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline void SetPlannedEndTime(const Aws::Utils::DateTime& value) { m_plannedEndTimeHasBeenSet = true; m_plannedEndTime = value; }

    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline void SetPlannedEndTime(Aws::Utils::DateTime&& value) { m_plannedEndTimeHasBeenSet = true; m_plannedEndTime = std::move(value); }

    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline OpsItemSummary& WithPlannedEndTime(const Aws::Utils::DateTime& value) { SetPlannedEndTime(value); return *this;}

    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline OpsItemSummary& WithPlannedEndTime(Aws::Utils::DateTime&& value) { SetPlannedEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    OpsItemStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Map<Aws::String, OpsItemDataValue> m_operationalData;
    bool m_operationalDataHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_opsItemType;
    bool m_opsItemTypeHasBeenSet = false;

    Aws::Utils::DateTime m_actualStartTime;
    bool m_actualStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_actualEndTime;
    bool m_actualEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_plannedStartTime;
    bool m_plannedStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_plannedEndTime;
    bool m_plannedEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

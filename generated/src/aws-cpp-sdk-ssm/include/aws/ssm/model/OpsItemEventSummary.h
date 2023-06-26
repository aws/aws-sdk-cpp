/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OpsItemIdentity.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Summary information about an OpsItem event or that associated an OpsItem with
   * a related item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemEventSummary">AWS
   * API Reference</a></p>
   */
  class OpsItemEventSummary
  {
  public:
    AWS_SSM_API OpsItemEventSummary();
    AWS_SSM_API OpsItemEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline OpsItemEventSummary& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline OpsItemEventSummary& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline OpsItemEventSummary& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}


    /**
     * <p>The ID of the OpsItem event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The ID of the OpsItem event.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The ID of the OpsItem event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the OpsItem event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The ID of the OpsItem event.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The ID of the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The ID of the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The source of the OpsItem event.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source of the OpsItem event.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the OpsItem event.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the OpsItem event.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the OpsItem event.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source of the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source of the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The type of information provided as a detail.</p>
     */
    inline const Aws::String& GetDetailType() const{ return m_detailType; }

    /**
     * <p>The type of information provided as a detail.</p>
     */
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }

    /**
     * <p>The type of information provided as a detail.</p>
     */
    inline void SetDetailType(const Aws::String& value) { m_detailTypeHasBeenSet = true; m_detailType = value; }

    /**
     * <p>The type of information provided as a detail.</p>
     */
    inline void SetDetailType(Aws::String&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::move(value); }

    /**
     * <p>The type of information provided as a detail.</p>
     */
    inline void SetDetailType(const char* value) { m_detailTypeHasBeenSet = true; m_detailType.assign(value); }

    /**
     * <p>The type of information provided as a detail.</p>
     */
    inline OpsItemEventSummary& WithDetailType(const Aws::String& value) { SetDetailType(value); return *this;}

    /**
     * <p>The type of information provided as a detail.</p>
     */
    inline OpsItemEventSummary& WithDetailType(Aws::String&& value) { SetDetailType(std::move(value)); return *this;}

    /**
     * <p>The type of information provided as a detail.</p>
     */
    inline OpsItemEventSummary& WithDetailType(const char* value) { SetDetailType(value); return *this;}


    /**
     * <p>Specific information about the OpsItem event.</p>
     */
    inline const Aws::String& GetDetail() const{ return m_detail; }

    /**
     * <p>Specific information about the OpsItem event.</p>
     */
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }

    /**
     * <p>Specific information about the OpsItem event.</p>
     */
    inline void SetDetail(const Aws::String& value) { m_detailHasBeenSet = true; m_detail = value; }

    /**
     * <p>Specific information about the OpsItem event.</p>
     */
    inline void SetDetail(Aws::String&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }

    /**
     * <p>Specific information about the OpsItem event.</p>
     */
    inline void SetDetail(const char* value) { m_detailHasBeenSet = true; m_detail.assign(value); }

    /**
     * <p>Specific information about the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithDetail(const Aws::String& value) { SetDetail(value); return *this;}

    /**
     * <p>Specific information about the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithDetail(Aws::String&& value) { SetDetail(std::move(value)); return *this;}

    /**
     * <p>Specific information about the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithDetail(const char* value) { SetDetail(value); return *this;}


    /**
     * <p>Information about the user or resource that created the OpsItem event.</p>
     */
    inline const OpsItemIdentity& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Information about the user or resource that created the OpsItem event.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Information about the user or resource that created the OpsItem event.</p>
     */
    inline void SetCreatedBy(const OpsItemIdentity& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Information about the user or resource that created the OpsItem event.</p>
     */
    inline void SetCreatedBy(OpsItemIdentity&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Information about the user or resource that created the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithCreatedBy(const OpsItemIdentity& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Information about the user or resource that created the OpsItem event.</p>
     */
    inline OpsItemEventSummary& WithCreatedBy(OpsItemIdentity&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>The date and time the OpsItem event was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time the OpsItem event was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time the OpsItem event was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time the OpsItem event was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time the OpsItem event was created.</p>
     */
    inline OpsItemEventSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the OpsItem event was created.</p>
     */
    inline OpsItemEventSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_detailType;
    bool m_detailTypeHasBeenSet = false;

    Aws::String m_detail;
    bool m_detailHasBeenSet = false;

    OpsItemIdentity m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

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


    ///@{
    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }
    inline OpsItemEventSummary& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}
    inline OpsItemEventSummary& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}
    inline OpsItemEventSummary& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the OpsItem event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline OpsItemEventSummary& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline OpsItemEventSummary& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline OpsItemEventSummary& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the OpsItem event.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline OpsItemEventSummary& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline OpsItemEventSummary& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline OpsItemEventSummary& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of information provided as a detail.</p>
     */
    inline const Aws::String& GetDetailType() const{ return m_detailType; }
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }
    inline void SetDetailType(const Aws::String& value) { m_detailTypeHasBeenSet = true; m_detailType = value; }
    inline void SetDetailType(Aws::String&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::move(value); }
    inline void SetDetailType(const char* value) { m_detailTypeHasBeenSet = true; m_detailType.assign(value); }
    inline OpsItemEventSummary& WithDetailType(const Aws::String& value) { SetDetailType(value); return *this;}
    inline OpsItemEventSummary& WithDetailType(Aws::String&& value) { SetDetailType(std::move(value)); return *this;}
    inline OpsItemEventSummary& WithDetailType(const char* value) { SetDetailType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specific information about the OpsItem event.</p>
     */
    inline const Aws::String& GetDetail() const{ return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    inline void SetDetail(const Aws::String& value) { m_detailHasBeenSet = true; m_detail = value; }
    inline void SetDetail(Aws::String&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }
    inline void SetDetail(const char* value) { m_detailHasBeenSet = true; m_detail.assign(value); }
    inline OpsItemEventSummary& WithDetail(const Aws::String& value) { SetDetail(value); return *this;}
    inline OpsItemEventSummary& WithDetail(Aws::String&& value) { SetDetail(std::move(value)); return *this;}
    inline OpsItemEventSummary& WithDetail(const char* value) { SetDetail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the user or resource that created the OpsItem event.</p>
     */
    inline const OpsItemIdentity& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const OpsItemIdentity& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(OpsItemIdentity&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline OpsItemEventSummary& WithCreatedBy(const OpsItemIdentity& value) { SetCreatedBy(value); return *this;}
    inline OpsItemEventSummary& WithCreatedBy(OpsItemIdentity&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the OpsItem event was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline OpsItemEventSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline OpsItemEventSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}
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

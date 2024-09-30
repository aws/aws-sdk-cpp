/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/GroupingType.h>
#include <aws/resource-groups/model/GroupingStatus.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>The information about a grouping or ungrouping resource action.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupingStatusesItem">AWS
   * API Reference</a></p>
   */
  class GroupingStatusesItem
  {
  public:
    AWS_RESOURCEGROUPS_API GroupingStatusesItem();
    AWS_RESOURCEGROUPS_API GroupingStatusesItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API GroupingStatusesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of a resource. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline GroupingStatusesItem& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GroupingStatusesItem& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GroupingStatusesItem& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the resource grouping action with values of <code>GROUP</code> or
     * <code>UNGROUP</code>. </p>
     */
    inline const GroupingType& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const GroupingType& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(GroupingType&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GroupingStatusesItem& WithAction(const GroupingType& value) { SetAction(value); return *this;}
    inline GroupingStatusesItem& WithAction(GroupingType&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the resource grouping status with values of <code>SUCCESS</code>,
     * <code>FAILED</code>, <code>IN_PROGRESS</code>, or <code>SKIPPED</code>. </p>
     */
    inline const GroupingStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const GroupingStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(GroupingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline GroupingStatusesItem& WithStatus(const GroupingStatus& value) { SetStatus(value); return *this;}
    inline GroupingStatusesItem& WithStatus(GroupingStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that explains the <code>ErrorCode</code>. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline GroupingStatusesItem& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline GroupingStatusesItem& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline GroupingStatusesItem& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error code that was raised. </p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline GroupingStatusesItem& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline GroupingStatusesItem& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline GroupingStatusesItem& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when the status was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline GroupingStatusesItem& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GroupingStatusesItem& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    GroupingType m_action;
    bool m_actionHasBeenSet = false;

    GroupingStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws

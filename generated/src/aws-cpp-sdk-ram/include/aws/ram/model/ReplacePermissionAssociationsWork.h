/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ReplacePermissionAssociationsWorkStatus.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>A structure that represents the background work that RAM performs when you
   * invoke the <a>ReplacePermissionAssociations</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ReplacePermissionAssociationsWork">AWS
   * API Reference</a></p>
   */
  class ReplacePermissionAssociationsWork
  {
  public:
    AWS_RAM_API ReplacePermissionAssociationsWork();
    AWS_RAM_API ReplacePermissionAssociationsWork(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ReplacePermissionAssociationsWork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the background task associated with one
     * <a>ReplacePermissionAssociations</a> request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ReplacePermissionAssociationsWork& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ReplacePermissionAssociationsWork& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ReplacePermissionAssociationsWork& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that this background task is
     * replacing.</p>
     */
    inline const Aws::String& GetFromPermissionArn() const{ return m_fromPermissionArn; }
    inline bool FromPermissionArnHasBeenSet() const { return m_fromPermissionArnHasBeenSet; }
    inline void SetFromPermissionArn(const Aws::String& value) { m_fromPermissionArnHasBeenSet = true; m_fromPermissionArn = value; }
    inline void SetFromPermissionArn(Aws::String&& value) { m_fromPermissionArnHasBeenSet = true; m_fromPermissionArn = std::move(value); }
    inline void SetFromPermissionArn(const char* value) { m_fromPermissionArnHasBeenSet = true; m_fromPermissionArn.assign(value); }
    inline ReplacePermissionAssociationsWork& WithFromPermissionArn(const Aws::String& value) { SetFromPermissionArn(value); return *this;}
    inline ReplacePermissionAssociationsWork& WithFromPermissionArn(Aws::String&& value) { SetFromPermissionArn(std::move(value)); return *this;}
    inline ReplacePermissionAssociationsWork& WithFromPermissionArn(const char* value) { SetFromPermissionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the managed permission that this background task is
     * replacing.</p>
     */
    inline const Aws::String& GetFromPermissionVersion() const{ return m_fromPermissionVersion; }
    inline bool FromPermissionVersionHasBeenSet() const { return m_fromPermissionVersionHasBeenSet; }
    inline void SetFromPermissionVersion(const Aws::String& value) { m_fromPermissionVersionHasBeenSet = true; m_fromPermissionVersion = value; }
    inline void SetFromPermissionVersion(Aws::String&& value) { m_fromPermissionVersionHasBeenSet = true; m_fromPermissionVersion = std::move(value); }
    inline void SetFromPermissionVersion(const char* value) { m_fromPermissionVersionHasBeenSet = true; m_fromPermissionVersion.assign(value); }
    inline ReplacePermissionAssociationsWork& WithFromPermissionVersion(const Aws::String& value) { SetFromPermissionVersion(value); return *this;}
    inline ReplacePermissionAssociationsWork& WithFromPermissionVersion(Aws::String&& value) { SetFromPermissionVersion(std::move(value)); return *this;}
    inline ReplacePermissionAssociationsWork& WithFromPermissionVersion(const char* value) { SetFromPermissionVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the managed permission that this background task is associating
     * with the resource shares in place of the managed permission and version
     * specified in <code>fromPermissionArn</code> and
     * <code>fromPermissionVersion</code>.</p>
     */
    inline const Aws::String& GetToPermissionArn() const{ return m_toPermissionArn; }
    inline bool ToPermissionArnHasBeenSet() const { return m_toPermissionArnHasBeenSet; }
    inline void SetToPermissionArn(const Aws::String& value) { m_toPermissionArnHasBeenSet = true; m_toPermissionArn = value; }
    inline void SetToPermissionArn(Aws::String&& value) { m_toPermissionArnHasBeenSet = true; m_toPermissionArn = std::move(value); }
    inline void SetToPermissionArn(const char* value) { m_toPermissionArnHasBeenSet = true; m_toPermissionArn.assign(value); }
    inline ReplacePermissionAssociationsWork& WithToPermissionArn(const Aws::String& value) { SetToPermissionArn(value); return *this;}
    inline ReplacePermissionAssociationsWork& WithToPermissionArn(Aws::String&& value) { SetToPermissionArn(std::move(value)); return *this;}
    inline ReplacePermissionAssociationsWork& WithToPermissionArn(const char* value) { SetToPermissionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the managed permission that this background task is
     * associating with the resource shares. This is always the version that is
     * currently the default for this managed permission.</p>
     */
    inline const Aws::String& GetToPermissionVersion() const{ return m_toPermissionVersion; }
    inline bool ToPermissionVersionHasBeenSet() const { return m_toPermissionVersionHasBeenSet; }
    inline void SetToPermissionVersion(const Aws::String& value) { m_toPermissionVersionHasBeenSet = true; m_toPermissionVersion = value; }
    inline void SetToPermissionVersion(Aws::String&& value) { m_toPermissionVersionHasBeenSet = true; m_toPermissionVersion = std::move(value); }
    inline void SetToPermissionVersion(const char* value) { m_toPermissionVersionHasBeenSet = true; m_toPermissionVersion.assign(value); }
    inline ReplacePermissionAssociationsWork& WithToPermissionVersion(const Aws::String& value) { SetToPermissionVersion(value); return *this;}
    inline ReplacePermissionAssociationsWork& WithToPermissionVersion(Aws::String&& value) { SetToPermissionVersion(std::move(value)); return *this;}
    inline ReplacePermissionAssociationsWork& WithToPermissionVersion(const char* value) { SetToPermissionVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current status of the background tasks for the specified ID.
     * The output is one of the following strings:</p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> </p> </li> <li> <p> <code>COMPLETED</code> </p> </li>
     * <li> <p> <code>FAILED</code> </p> </li> </ul>
     */
    inline const ReplacePermissionAssociationsWorkStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReplacePermissionAssociationsWorkStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReplacePermissionAssociationsWorkStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReplacePermissionAssociationsWork& WithStatus(const ReplacePermissionAssociationsWorkStatus& value) { SetStatus(value); return *this;}
    inline ReplacePermissionAssociationsWork& WithStatus(ReplacePermissionAssociationsWorkStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason for a <code>FAILED</code> status. This field is present
     * only when there <code>status</code> is <code>FAILED</code>.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ReplacePermissionAssociationsWork& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ReplacePermissionAssociationsWork& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ReplacePermissionAssociationsWork& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this asynchronous background task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ReplacePermissionAssociationsWork& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ReplacePermissionAssociationsWork& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the status of this background task was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ReplacePermissionAssociationsWork& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ReplacePermissionAssociationsWork& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_fromPermissionArn;
    bool m_fromPermissionArnHasBeenSet = false;

    Aws::String m_fromPermissionVersion;
    bool m_fromPermissionVersionHasBeenSet = false;

    Aws::String m_toPermissionArn;
    bool m_toPermissionArnHasBeenSet = false;

    Aws::String m_toPermissionVersion;
    bool m_toPermissionVersionHasBeenSet = false;

    ReplacePermissionAssociationsWorkStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws

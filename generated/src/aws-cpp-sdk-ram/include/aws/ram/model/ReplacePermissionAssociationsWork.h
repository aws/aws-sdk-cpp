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
    AWS_RAM_API ReplacePermissionAssociationsWork() = default;
    AWS_RAM_API ReplacePermissionAssociationsWork(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ReplacePermissionAssociationsWork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the background task associated with one
     * <a>ReplacePermissionAssociations</a> request.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ReplacePermissionAssociationsWork& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that this background task is
     * replacing.</p>
     */
    inline const Aws::String& GetFromPermissionArn() const { return m_fromPermissionArn; }
    inline bool FromPermissionArnHasBeenSet() const { return m_fromPermissionArnHasBeenSet; }
    template<typename FromPermissionArnT = Aws::String>
    void SetFromPermissionArn(FromPermissionArnT&& value) { m_fromPermissionArnHasBeenSet = true; m_fromPermissionArn = std::forward<FromPermissionArnT>(value); }
    template<typename FromPermissionArnT = Aws::String>
    ReplacePermissionAssociationsWork& WithFromPermissionArn(FromPermissionArnT&& value) { SetFromPermissionArn(std::forward<FromPermissionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the managed permission that this background task is
     * replacing.</p>
     */
    inline const Aws::String& GetFromPermissionVersion() const { return m_fromPermissionVersion; }
    inline bool FromPermissionVersionHasBeenSet() const { return m_fromPermissionVersionHasBeenSet; }
    template<typename FromPermissionVersionT = Aws::String>
    void SetFromPermissionVersion(FromPermissionVersionT&& value) { m_fromPermissionVersionHasBeenSet = true; m_fromPermissionVersion = std::forward<FromPermissionVersionT>(value); }
    template<typename FromPermissionVersionT = Aws::String>
    ReplacePermissionAssociationsWork& WithFromPermissionVersion(FromPermissionVersionT&& value) { SetFromPermissionVersion(std::forward<FromPermissionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the managed permission that this background task is associating
     * with the resource shares in place of the managed permission and version
     * specified in <code>fromPermissionArn</code> and
     * <code>fromPermissionVersion</code>.</p>
     */
    inline const Aws::String& GetToPermissionArn() const { return m_toPermissionArn; }
    inline bool ToPermissionArnHasBeenSet() const { return m_toPermissionArnHasBeenSet; }
    template<typename ToPermissionArnT = Aws::String>
    void SetToPermissionArn(ToPermissionArnT&& value) { m_toPermissionArnHasBeenSet = true; m_toPermissionArn = std::forward<ToPermissionArnT>(value); }
    template<typename ToPermissionArnT = Aws::String>
    ReplacePermissionAssociationsWork& WithToPermissionArn(ToPermissionArnT&& value) { SetToPermissionArn(std::forward<ToPermissionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the managed permission that this background task is
     * associating with the resource shares. This is always the version that is
     * currently the default for this managed permission.</p>
     */
    inline const Aws::String& GetToPermissionVersion() const { return m_toPermissionVersion; }
    inline bool ToPermissionVersionHasBeenSet() const { return m_toPermissionVersionHasBeenSet; }
    template<typename ToPermissionVersionT = Aws::String>
    void SetToPermissionVersion(ToPermissionVersionT&& value) { m_toPermissionVersionHasBeenSet = true; m_toPermissionVersion = std::forward<ToPermissionVersionT>(value); }
    template<typename ToPermissionVersionT = Aws::String>
    ReplacePermissionAssociationsWork& WithToPermissionVersion(ToPermissionVersionT&& value) { SetToPermissionVersion(std::forward<ToPermissionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current status of the background tasks for the specified ID.
     * The output is one of the following strings:</p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> </p> </li> <li> <p> <code>COMPLETED</code> </p> </li>
     * <li> <p> <code>FAILED</code> </p> </li> </ul>
     */
    inline ReplacePermissionAssociationsWorkStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReplacePermissionAssociationsWorkStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReplacePermissionAssociationsWork& WithStatus(ReplacePermissionAssociationsWorkStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason for a <code>FAILED</code> status. This field is present
     * only when there <code>status</code> is <code>FAILED</code>.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ReplacePermissionAssociationsWork& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this asynchronous background task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ReplacePermissionAssociationsWork& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the status of this background task was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ReplacePermissionAssociationsWork& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
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

    ReplacePermissionAssociationsWorkStatus m_status{ReplacePermissionAssociationsWorkStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The identifier that contains the Group ID and name of a group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GroupIdentifier">AWS
   * API Reference</a></p>
   */
  class GroupIdentifier
  {
  public:
    AWS_WORKMAIL_API GroupIdentifier();
    AWS_WORKMAIL_API GroupIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API GroupIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Group ID that matched the group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>Group ID that matched the group.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>Group ID that matched the group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>Group ID that matched the group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>Group ID that matched the group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>Group ID that matched the group.</p>
     */
    inline GroupIdentifier& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>Group ID that matched the group.</p>
     */
    inline GroupIdentifier& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>Group ID that matched the group.</p>
     */
    inline GroupIdentifier& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>Group name that matched the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>Group name that matched the group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>Group name that matched the group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>Group name that matched the group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>Group name that matched the group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>Group name that matched the group.</p>
     */
    inline GroupIdentifier& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>Group name that matched the group.</p>
     */
    inline GroupIdentifier& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>Group name that matched the group.</p>
     */
    inline GroupIdentifier& WithGroupName(const char* value) { SetGroupName(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A member of an Amazon QuickSight group. Currently, group members must be
   * users. Groups can't be members of another group. .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GroupMember">AWS
   * API Reference</a></p>
   */
  class GroupMember
  {
  public:
    AWS_QUICKSIGHT_API GroupMember();
    AWS_QUICKSIGHT_API GroupMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GroupMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the group member (user).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline GroupMember& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GroupMember& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GroupMember& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group member (user).</p>
     */
    inline const Aws::String& GetMemberName() const{ return m_memberName; }
    inline bool MemberNameHasBeenSet() const { return m_memberNameHasBeenSet; }
    inline void SetMemberName(const Aws::String& value) { m_memberNameHasBeenSet = true; m_memberName = value; }
    inline void SetMemberName(Aws::String&& value) { m_memberNameHasBeenSet = true; m_memberName = std::move(value); }
    inline void SetMemberName(const char* value) { m_memberNameHasBeenSet = true; m_memberName.assign(value); }
    inline GroupMember& WithMemberName(const Aws::String& value) { SetMemberName(value); return *this;}
    inline GroupMember& WithMemberName(Aws::String&& value) { SetMemberName(std::move(value)); return *this;}
    inline GroupMember& WithMemberName(const char* value) { SetMemberName(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_memberName;
    bool m_memberNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

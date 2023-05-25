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
   * <p>An object that consists of a member Amazon Resource Name (ARN) and a member
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MemberIdArnPair">AWS
   * API Reference</a></p>
   */
  class MemberIdArnPair
  {
  public:
    AWS_QUICKSIGHT_API MemberIdArnPair();
    AWS_QUICKSIGHT_API MemberIdArnPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MemberIdArnPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the member.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p>The ID of the member.</p>
     */
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }

    /**
     * <p>The ID of the member.</p>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }

    /**
     * <p>The ID of the member.</p>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }

    /**
     * <p>The ID of the member.</p>
     */
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }

    /**
     * <p>The ID of the member.</p>
     */
    inline MemberIdArnPair& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p>The ID of the member.</p>
     */
    inline MemberIdArnPair& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p>The ID of the member.</p>
     */
    inline MemberIdArnPair& WithMemberId(const char* value) { SetMemberId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the member.</p>
     */
    inline const Aws::String& GetMemberArn() const{ return m_memberArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the member.</p>
     */
    inline bool MemberArnHasBeenSet() const { return m_memberArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the member.</p>
     */
    inline void SetMemberArn(const Aws::String& value) { m_memberArnHasBeenSet = true; m_memberArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the member.</p>
     */
    inline void SetMemberArn(Aws::String&& value) { m_memberArnHasBeenSet = true; m_memberArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the member.</p>
     */
    inline void SetMemberArn(const char* value) { m_memberArnHasBeenSet = true; m_memberArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the member.</p>
     */
    inline MemberIdArnPair& WithMemberArn(const Aws::String& value) { SetMemberArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the member.</p>
     */
    inline MemberIdArnPair& WithMemberArn(Aws::String&& value) { SetMemberArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the member.</p>
     */
    inline MemberIdArnPair& WithMemberArn(const char* value) { SetMemberArn(value); return *this;}

  private:

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    Aws::String m_memberArn;
    bool m_memberArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

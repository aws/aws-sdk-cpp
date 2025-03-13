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
    AWS_QUICKSIGHT_API MemberIdArnPair() = default;
    AWS_QUICKSIGHT_API MemberIdArnPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MemberIdArnPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the member.</p>
     */
    inline const Aws::String& GetMemberId() const { return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    template<typename MemberIdT = Aws::String>
    void SetMemberId(MemberIdT&& value) { m_memberIdHasBeenSet = true; m_memberId = std::forward<MemberIdT>(value); }
    template<typename MemberIdT = Aws::String>
    MemberIdArnPair& WithMemberId(MemberIdT&& value) { SetMemberId(std::forward<MemberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the member.</p>
     */
    inline const Aws::String& GetMemberArn() const { return m_memberArn; }
    inline bool MemberArnHasBeenSet() const { return m_memberArnHasBeenSet; }
    template<typename MemberArnT = Aws::String>
    void SetMemberArn(MemberArnT&& value) { m_memberArnHasBeenSet = true; m_memberArn = std::forward<MemberArnT>(value); }
    template<typename MemberArnT = Aws::String>
    MemberIdArnPair& WithMemberArn(MemberArnT&& value) { SetMemberArn(std::forward<MemberArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    Aws::String m_memberArn;
    bool m_memberArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

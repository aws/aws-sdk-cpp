/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/MemberType.h>
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
   * <p>An asset in a QuickSight folder, such as a dashboard, analysis, or
   * dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FolderMember">AWS
   * API Reference</a></p>
   */
  class FolderMember
  {
  public:
    AWS_QUICKSIGHT_API FolderMember() = default;
    AWS_QUICKSIGHT_API FolderMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FolderMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of an asset in the folder.</p>
     */
    inline const Aws::String& GetMemberId() const { return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    template<typename MemberIdT = Aws::String>
    void SetMemberId(MemberIdT&& value) { m_memberIdHasBeenSet = true; m_memberId = std::forward<MemberIdT>(value); }
    template<typename MemberIdT = Aws::String>
    FolderMember& WithMemberId(MemberIdT&& value) { SetMemberId(std::forward<MemberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of asset that it is.</p>
     */
    inline MemberType GetMemberType() const { return m_memberType; }
    inline bool MemberTypeHasBeenSet() const { return m_memberTypeHasBeenSet; }
    inline void SetMemberType(MemberType value) { m_memberTypeHasBeenSet = true; m_memberType = value; }
    inline FolderMember& WithMemberType(MemberType value) { SetMemberType(value); return *this;}
    ///@}
  private:

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    MemberType m_memberType{MemberType::NOT_SET};
    bool m_memberTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

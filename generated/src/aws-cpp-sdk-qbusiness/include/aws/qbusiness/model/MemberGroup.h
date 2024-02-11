/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/MembershipType.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The sub groups that belong to a group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/MemberGroup">AWS
   * API Reference</a></p>
   */
  class MemberGroup
  {
  public:
    AWS_QBUSINESS_API MemberGroup();
    AWS_QBUSINESS_API MemberGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API MemberGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the sub group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the sub group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the sub group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the sub group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the sub group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the sub group.</p>
     */
    inline MemberGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the sub group.</p>
     */
    inline MemberGroup& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the sub group.</p>
     */
    inline MemberGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The type of the sub group.</p>
     */
    inline const MembershipType& GetType() const{ return m_type; }

    /**
     * <p>The type of the sub group.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the sub group.</p>
     */
    inline void SetType(const MembershipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the sub group.</p>
     */
    inline void SetType(MembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the sub group.</p>
     */
    inline MemberGroup& WithType(const MembershipType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the sub group.</p>
     */
    inline MemberGroup& WithType(MembershipType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    MembershipType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws

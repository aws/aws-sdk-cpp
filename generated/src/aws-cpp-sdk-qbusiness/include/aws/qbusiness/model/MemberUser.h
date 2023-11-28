/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/MembershipType.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The users that belong to a group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/MemberUser">AWS
   * API Reference</a></p>
   */
  class MemberUser
  {
  public:
    AWS_QBUSINESS_API MemberUser();
    AWS_QBUSINESS_API MemberUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API MemberUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the user.</p>
     */
    inline const MembershipType& GetType() const{ return m_type; }

    /**
     * <p>The type of the user.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the user.</p>
     */
    inline void SetType(const MembershipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the user.</p>
     */
    inline void SetType(MembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the user.</p>
     */
    inline MemberUser& WithType(const MembershipType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the user.</p>
     */
    inline MemberUser& WithType(MembershipType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the user you want to map to a group.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user you want to map to a group.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier of the user you want to map to a group.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier of the user you want to map to a group.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier of the user you want to map to a group.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier of the user you want to map to a group.</p>
     */
    inline MemberUser& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user you want to map to a group.</p>
     */
    inline MemberUser& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user you want to map to a group.</p>
     */
    inline MemberUser& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    MembershipType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws

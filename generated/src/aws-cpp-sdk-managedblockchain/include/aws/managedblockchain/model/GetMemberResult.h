/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/Member.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchain
{
namespace Model
{
  class GetMemberResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API GetMemberResult();
    AWS_MANAGEDBLOCKCHAIN_API GetMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API GetMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of a member.</p>
     */
    inline const Member& GetMember() const{ return m_member; }

    /**
     * <p>The properties of a member.</p>
     */
    inline void SetMember(const Member& value) { m_member = value; }

    /**
     * <p>The properties of a member.</p>
     */
    inline void SetMember(Member&& value) { m_member = std::move(value); }

    /**
     * <p>The properties of a member.</p>
     */
    inline GetMemberResult& WithMember(const Member& value) { SetMember(value); return *this;}

    /**
     * <p>The properties of a member.</p>
     */
    inline GetMemberResult& WithMember(Member&& value) { SetMember(std::move(value)); return *this;}

  private:

    Member m_member;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

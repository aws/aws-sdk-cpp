/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/AttackDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Shield
{
namespace Model
{
  class DescribeAttackResult
  {
  public:
    AWS_SHIELD_API DescribeAttackResult();
    AWS_SHIELD_API DescribeAttackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeAttackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attack that you requested. </p>
     */
    inline const AttackDetail& GetAttack() const{ return m_attack; }

    /**
     * <p>The attack that you requested. </p>
     */
    inline void SetAttack(const AttackDetail& value) { m_attack = value; }

    /**
     * <p>The attack that you requested. </p>
     */
    inline void SetAttack(AttackDetail&& value) { m_attack = std::move(value); }

    /**
     * <p>The attack that you requested. </p>
     */
    inline DescribeAttackResult& WithAttack(const AttackDetail& value) { SetAttack(value); return *this;}

    /**
     * <p>The attack that you requested. </p>
     */
    inline DescribeAttackResult& WithAttack(AttackDetail&& value) { SetAttack(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAttackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAttackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAttackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AttackDetail m_attack;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws

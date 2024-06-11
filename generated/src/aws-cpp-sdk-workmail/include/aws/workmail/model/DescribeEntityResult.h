/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/EntityType.h>
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
namespace WorkMail
{
namespace Model
{
  class DescribeEntityResult
  {
  public:
    AWS_WORKMAIL_API DescribeEntityResult();
    AWS_WORKMAIL_API DescribeEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The entity ID under which the entity exists.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline void SetEntityId(const Aws::String& value) { m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityId.assign(value); }
    inline DescribeEntityResult& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline DescribeEntityResult& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline DescribeEntityResult& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Username, GroupName, or ResourceName based on entity type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeEntityResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeEntityResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeEntityResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entity type.</p>
     */
    inline const EntityType& GetType() const{ return m_type; }
    inline void SetType(const EntityType& value) { m_type = value; }
    inline void SetType(EntityType&& value) { m_type = std::move(value); }
    inline DescribeEntityResult& WithType(const EntityType& value) { SetType(value); return *this;}
    inline DescribeEntityResult& WithType(EntityType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEntityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEntityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEntityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_entityId;

    Aws::String m_name;

    EntityType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws

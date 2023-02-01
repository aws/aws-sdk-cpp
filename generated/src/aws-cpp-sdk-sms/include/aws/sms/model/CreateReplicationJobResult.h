/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
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
namespace SMS
{
namespace Model
{
  class CreateReplicationJobResult
  {
  public:
    AWS_SMS_API CreateReplicationJobResult();
    AWS_SMS_API CreateReplicationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API CreateReplicationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the replication job.</p>
     */
    inline const Aws::String& GetReplicationJobId() const{ return m_replicationJobId; }

    /**
     * <p>The unique identifier of the replication job.</p>
     */
    inline void SetReplicationJobId(const Aws::String& value) { m_replicationJobId = value; }

    /**
     * <p>The unique identifier of the replication job.</p>
     */
    inline void SetReplicationJobId(Aws::String&& value) { m_replicationJobId = std::move(value); }

    /**
     * <p>The unique identifier of the replication job.</p>
     */
    inline void SetReplicationJobId(const char* value) { m_replicationJobId.assign(value); }

    /**
     * <p>The unique identifier of the replication job.</p>
     */
    inline CreateReplicationJobResult& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}

    /**
     * <p>The unique identifier of the replication job.</p>
     */
    inline CreateReplicationJobResult& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the replication job.</p>
     */
    inline CreateReplicationJobResult& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}

  private:

    Aws::String m_replicationJobId;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ReplicationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class GetBucketReplicationResult
  {
  public:
    AWS_S3CONTROL_API GetBucketReplicationResult();
    AWS_S3CONTROL_API GetBucketReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetBucketReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and you can add up to 100 rules. The maximum size of
     * a replication configuration is 128 KB.</p>
     */
    inline const ReplicationConfiguration& GetReplicationConfiguration() const{ return m_replicationConfiguration; }

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and you can add up to 100 rules. The maximum size of
     * a replication configuration is 128 KB.</p>
     */
    inline void SetReplicationConfiguration(const ReplicationConfiguration& value) { m_replicationConfiguration = value; }

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and you can add up to 100 rules. The maximum size of
     * a replication configuration is 128 KB.</p>
     */
    inline void SetReplicationConfiguration(ReplicationConfiguration&& value) { m_replicationConfiguration = std::move(value); }

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and you can add up to 100 rules. The maximum size of
     * a replication configuration is 128 KB.</p>
     */
    inline GetBucketReplicationResult& WithReplicationConfiguration(const ReplicationConfiguration& value) { SetReplicationConfiguration(value); return *this;}

    /**
     * <p>A container for one or more replication rules. A replication configuration
     * must have at least one rule and you can add up to 100 rules. The maximum size of
     * a replication configuration is 128 KB.</p>
     */
    inline GetBucketReplicationResult& WithReplicationConfiguration(ReplicationConfiguration&& value) { SetReplicationConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetBucketReplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetBucketReplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetBucketReplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReplicationConfiguration m_replicationConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

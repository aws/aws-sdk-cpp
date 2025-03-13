/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ReplicationConfiguration.h>
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
namespace S3
{
namespace Model
{
  class GetBucketReplicationResult
  {
  public:
    AWS_S3_API GetBucketReplicationResult() = default;
    AWS_S3_API GetBucketReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ReplicationConfiguration& GetReplicationConfiguration() const { return m_replicationConfiguration; }
    template<typename ReplicationConfigurationT = ReplicationConfiguration>
    void SetReplicationConfiguration(ReplicationConfigurationT&& value) { m_replicationConfigurationHasBeenSet = true; m_replicationConfiguration = std::forward<ReplicationConfigurationT>(value); }
    template<typename ReplicationConfigurationT = ReplicationConfiguration>
    GetBucketReplicationResult& WithReplicationConfiguration(ReplicationConfigurationT&& value) { SetReplicationConfiguration(std::forward<ReplicationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketReplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReplicationConfiguration m_replicationConfiguration;
    bool m_replicationConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws

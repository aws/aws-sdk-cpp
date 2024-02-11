/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/SnapshotCopyConfiguration.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class DeleteSnapshotCopyConfigurationResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API DeleteSnapshotCopyConfigurationResult();
    AWS_REDSHIFTSERVERLESS_API DeleteSnapshotCopyConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API DeleteSnapshotCopyConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The deleted snapshot copy configuration object.</p>
     */
    inline const SnapshotCopyConfiguration& GetSnapshotCopyConfiguration() const{ return m_snapshotCopyConfiguration; }

    /**
     * <p>The deleted snapshot copy configuration object.</p>
     */
    inline void SetSnapshotCopyConfiguration(const SnapshotCopyConfiguration& value) { m_snapshotCopyConfiguration = value; }

    /**
     * <p>The deleted snapshot copy configuration object.</p>
     */
    inline void SetSnapshotCopyConfiguration(SnapshotCopyConfiguration&& value) { m_snapshotCopyConfiguration = std::move(value); }

    /**
     * <p>The deleted snapshot copy configuration object.</p>
     */
    inline DeleteSnapshotCopyConfigurationResult& WithSnapshotCopyConfiguration(const SnapshotCopyConfiguration& value) { SetSnapshotCopyConfiguration(value); return *this;}

    /**
     * <p>The deleted snapshot copy configuration object.</p>
     */
    inline DeleteSnapshotCopyConfigurationResult& WithSnapshotCopyConfiguration(SnapshotCopyConfiguration&& value) { SetSnapshotCopyConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteSnapshotCopyConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteSnapshotCopyConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteSnapshotCopyConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SnapshotCopyConfiguration m_snapshotCopyConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws

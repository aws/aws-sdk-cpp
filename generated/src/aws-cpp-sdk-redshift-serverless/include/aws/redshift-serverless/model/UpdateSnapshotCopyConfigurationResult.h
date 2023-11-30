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
  class UpdateSnapshotCopyConfigurationResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateSnapshotCopyConfigurationResult();
    AWS_REDSHIFTSERVERLESS_API UpdateSnapshotCopyConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API UpdateSnapshotCopyConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated snapshot copy configuration object.</p>
     */
    inline const SnapshotCopyConfiguration& GetSnapshotCopyConfiguration() const{ return m_snapshotCopyConfiguration; }

    /**
     * <p>The updated snapshot copy configuration object.</p>
     */
    inline void SetSnapshotCopyConfiguration(const SnapshotCopyConfiguration& value) { m_snapshotCopyConfiguration = value; }

    /**
     * <p>The updated snapshot copy configuration object.</p>
     */
    inline void SetSnapshotCopyConfiguration(SnapshotCopyConfiguration&& value) { m_snapshotCopyConfiguration = std::move(value); }

    /**
     * <p>The updated snapshot copy configuration object.</p>
     */
    inline UpdateSnapshotCopyConfigurationResult& WithSnapshotCopyConfiguration(const SnapshotCopyConfiguration& value) { SetSnapshotCopyConfiguration(value); return *this;}

    /**
     * <p>The updated snapshot copy configuration object.</p>
     */
    inline UpdateSnapshotCopyConfigurationResult& WithSnapshotCopyConfiguration(SnapshotCopyConfiguration&& value) { SetSnapshotCopyConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSnapshotCopyConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSnapshotCopyConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSnapshotCopyConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SnapshotCopyConfiguration m_snapshotCopyConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws

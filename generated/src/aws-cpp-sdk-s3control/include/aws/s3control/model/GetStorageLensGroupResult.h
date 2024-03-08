/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/StorageLensGroup.h>
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
  class GetStorageLensGroupResult
  {
  public:
    AWS_S3CONTROL_API GetStorageLensGroupResult();
    AWS_S3CONTROL_API GetStorageLensGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetStorageLensGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> The name of the Storage Lens group that you're trying to retrieve the
     * configuration details for. </p>
     */
    inline const StorageLensGroup& GetStorageLensGroup() const{ return m_storageLensGroup; }

    /**
     * <p> The name of the Storage Lens group that you're trying to retrieve the
     * configuration details for. </p>
     */
    inline void SetStorageLensGroup(const StorageLensGroup& value) { m_storageLensGroup = value; }

    /**
     * <p> The name of the Storage Lens group that you're trying to retrieve the
     * configuration details for. </p>
     */
    inline void SetStorageLensGroup(StorageLensGroup&& value) { m_storageLensGroup = std::move(value); }

    /**
     * <p> The name of the Storage Lens group that you're trying to retrieve the
     * configuration details for. </p>
     */
    inline GetStorageLensGroupResult& WithStorageLensGroup(const StorageLensGroup& value) { SetStorageLensGroup(value); return *this;}

    /**
     * <p> The name of the Storage Lens group that you're trying to retrieve the
     * configuration details for. </p>
     */
    inline GetStorageLensGroupResult& WithStorageLensGroup(StorageLensGroup&& value) { SetStorageLensGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStorageLensGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStorageLensGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStorageLensGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StorageLensGroup m_storageLensGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
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
namespace PartnerCentralSelling
{
namespace Model
{
  class GetSellingSystemSettingsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API GetSellingSystemSettingsResult();
    AWS_PARTNERCENTRALSELLING_API GetSellingSystemSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetSellingSystemSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the catalog in which the settings are defined. Acceptable values
     * include <code>AWS</code> for production and <code>Sandbox</code> for testing
     * environments.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline void SetCatalog(const Aws::String& value) { m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalog.assign(value); }
    inline GetSellingSystemSettingsResult& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline GetSellingSystemSettingsResult& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline GetSellingSystemSettingsResult& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the IAM Role used for resource snapshot job
     * executions.</p>
     */
    inline const Aws::String& GetResourceSnapshotJobRoleArn() const{ return m_resourceSnapshotJobRoleArn; }
    inline void SetResourceSnapshotJobRoleArn(const Aws::String& value) { m_resourceSnapshotJobRoleArn = value; }
    inline void SetResourceSnapshotJobRoleArn(Aws::String&& value) { m_resourceSnapshotJobRoleArn = std::move(value); }
    inline void SetResourceSnapshotJobRoleArn(const char* value) { m_resourceSnapshotJobRoleArn.assign(value); }
    inline GetSellingSystemSettingsResult& WithResourceSnapshotJobRoleArn(const Aws::String& value) { SetResourceSnapshotJobRoleArn(value); return *this;}
    inline GetSellingSystemSettingsResult& WithResourceSnapshotJobRoleArn(Aws::String&& value) { SetResourceSnapshotJobRoleArn(std::move(value)); return *this;}
    inline GetSellingSystemSettingsResult& WithResourceSnapshotJobRoleArn(const char* value) { SetResourceSnapshotJobRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSellingSystemSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSellingSystemSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSellingSystemSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_catalog;

    Aws::String m_resourceSnapshotJobRoleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

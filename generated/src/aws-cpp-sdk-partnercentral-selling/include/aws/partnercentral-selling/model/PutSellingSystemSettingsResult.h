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
  class PutSellingSystemSettingsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API PutSellingSystemSettingsResult() = default;
    AWS_PARTNERCENTRALSELLING_API PutSellingSystemSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API PutSellingSystemSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the catalog in which the settings are defined. Acceptable values
     * include <code>AWS</code> for production and <code>Sandbox</code> for testing
     * environments.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    PutSellingSystemSettingsResult& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the IAM Role used for resource snapshot job
     * executions.</p>
     */
    inline const Aws::String& GetResourceSnapshotJobRoleArn() const { return m_resourceSnapshotJobRoleArn; }
    template<typename ResourceSnapshotJobRoleArnT = Aws::String>
    void SetResourceSnapshotJobRoleArn(ResourceSnapshotJobRoleArnT&& value) { m_resourceSnapshotJobRoleArnHasBeenSet = true; m_resourceSnapshotJobRoleArn = std::forward<ResourceSnapshotJobRoleArnT>(value); }
    template<typename ResourceSnapshotJobRoleArnT = Aws::String>
    PutSellingSystemSettingsResult& WithResourceSnapshotJobRoleArn(ResourceSnapshotJobRoleArnT&& value) { SetResourceSnapshotJobRoleArn(std::forward<ResourceSnapshotJobRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutSellingSystemSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_resourceSnapshotJobRoleArn;
    bool m_resourceSnapshotJobRoleArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/InventoryConfiguration.h>
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
  class GetBucketInventoryConfigurationResult
  {
  public:
    AWS_S3_API GetBucketInventoryConfigurationResult() = default;
    AWS_S3_API GetBucketInventoryConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketInventoryConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Specifies the inventory configuration.</p>
     */
    inline const InventoryConfiguration& GetInventoryConfiguration() const { return m_inventoryConfiguration; }
    template<typename InventoryConfigurationT = InventoryConfiguration>
    void SetInventoryConfiguration(InventoryConfigurationT&& value) { m_inventoryConfigurationHasBeenSet = true; m_inventoryConfiguration = std::forward<InventoryConfigurationT>(value); }
    template<typename InventoryConfigurationT = InventoryConfiguration>
    GetBucketInventoryConfigurationResult& WithInventoryConfiguration(InventoryConfigurationT&& value) { SetInventoryConfiguration(std::forward<InventoryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketInventoryConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InventoryConfiguration m_inventoryConfiguration;
    bool m_inventoryConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws

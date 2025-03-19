/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{
  class DescribeStorageResult
  {
  public:
    AWS_REDSHIFT_API DescribeStorageResult() = default;
    AWS_REDSHIFT_API DescribeStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The total amount of storage currently used for snapshots.</p>
     */
    inline double GetTotalBackupSizeInMegaBytes() const { return m_totalBackupSizeInMegaBytes; }
    inline void SetTotalBackupSizeInMegaBytes(double value) { m_totalBackupSizeInMegaBytesHasBeenSet = true; m_totalBackupSizeInMegaBytes = value; }
    inline DescribeStorageResult& WithTotalBackupSizeInMegaBytes(double value) { SetTotalBackupSizeInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of storage currently provisioned.</p>
     */
    inline double GetTotalProvisionedStorageInMegaBytes() const { return m_totalProvisionedStorageInMegaBytes; }
    inline void SetTotalProvisionedStorageInMegaBytes(double value) { m_totalProvisionedStorageInMegaBytesHasBeenSet = true; m_totalProvisionedStorageInMegaBytes = value; }
    inline DescribeStorageResult& WithTotalProvisionedStorageInMegaBytes(double value) { SetTotalProvisionedStorageInMegaBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeStorageResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    double m_totalBackupSizeInMegaBytes{0.0};
    bool m_totalBackupSizeInMegaBytesHasBeenSet = false;

    double m_totalProvisionedStorageInMegaBytes{0.0};
    bool m_totalProvisionedStorageInMegaBytesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

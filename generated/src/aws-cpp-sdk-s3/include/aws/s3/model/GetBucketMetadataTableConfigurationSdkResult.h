/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/GetBucketMetadataTableConfigurationResult.h>
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
  class GetBucketMetadataTableConfigurationSdkResult
  {
  public:
    AWS_S3_API GetBucketMetadataTableConfigurationSdkResult() = default;
    AWS_S3_API GetBucketMetadataTableConfigurationSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketMetadataTableConfigurationSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> The metadata table configuration for the general purpose bucket. </p>
     */
    inline const GetBucketMetadataTableConfigurationResult& GetGetBucketMetadataTableConfigurationResult() const { return m_getBucketMetadataTableConfigurationResult; }
    template<typename GetBucketMetadataTableConfigurationResultT = GetBucketMetadataTableConfigurationResult>
    void SetGetBucketMetadataTableConfigurationResult(GetBucketMetadataTableConfigurationResultT&& value) { m_getBucketMetadataTableConfigurationResultHasBeenSet = true; m_getBucketMetadataTableConfigurationResult = std::forward<GetBucketMetadataTableConfigurationResultT>(value); }
    template<typename GetBucketMetadataTableConfigurationResultT = GetBucketMetadataTableConfigurationResult>
    GetBucketMetadataTableConfigurationSdkResult& WithGetBucketMetadataTableConfigurationResult(GetBucketMetadataTableConfigurationResultT&& value) { SetGetBucketMetadataTableConfigurationResult(std::forward<GetBucketMetadataTableConfigurationResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketMetadataTableConfigurationSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GetBucketMetadataTableConfigurationResult m_getBucketMetadataTableConfigurationResult;
    bool m_getBucketMetadataTableConfigurationResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws

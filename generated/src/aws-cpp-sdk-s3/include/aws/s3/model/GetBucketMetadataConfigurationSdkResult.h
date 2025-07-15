/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/GetBucketMetadataConfigurationResult.h>
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
  class GetBucketMetadataConfigurationSdkResult
  {
  public:
    AWS_S3_API GetBucketMetadataConfigurationSdkResult() = default;
    AWS_S3_API GetBucketMetadataConfigurationSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketMetadataConfigurationSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> The metadata configuration for the general purpose bucket. </p>
     */
    inline const GetBucketMetadataConfigurationResult& GetGetBucketMetadataConfigurationResult() const { return m_getBucketMetadataConfigurationResult; }
    template<typename GetBucketMetadataConfigurationResultT = GetBucketMetadataConfigurationResult>
    void SetGetBucketMetadataConfigurationResult(GetBucketMetadataConfigurationResultT&& value) { m_getBucketMetadataConfigurationResultHasBeenSet = true; m_getBucketMetadataConfigurationResult = std::forward<GetBucketMetadataConfigurationResultT>(value); }
    template<typename GetBucketMetadataConfigurationResultT = GetBucketMetadataConfigurationResult>
    GetBucketMetadataConfigurationSdkResult& WithGetBucketMetadataConfigurationResult(GetBucketMetadataConfigurationResultT&& value) { SetGetBucketMetadataConfigurationResult(std::forward<GetBucketMetadataConfigurationResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketMetadataConfigurationSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GetBucketMetadataConfigurationResult m_getBucketMetadataConfigurationResult;
    bool m_getBucketMetadataConfigurationResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
